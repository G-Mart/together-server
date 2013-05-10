#include "room.h"

int show_room_peo_list(map<string, string> param, char *buf, int &send_len)
{
    string respon_data;
    Response::HTTPResponse *http_res = new Response::HTTPResponse();
    string msg;
    int result;
    int ret;

    // database params
    Config *c = Config::get_instance();
    map<string, string> config = c->get_config();
    eagleMysql e(config["DOMAIN"].c_str(), config["USER_NAME"].c_str(), config["PASSWORD"].c_str(), config["DATABASE"].c_str(), Tool::S2I(config["PORT"], 3306));

    do
    {
        // param sid not exist
        if (param.count("sid") == 0)
        {
            result = PARAM_ERROR;
            http_res->set_code(PARAM_ERROR);
            msg = "param sid not exist";
            LOG_ERROR << msg << endl;
            http_res->set_msg(msg);
            break;
        }

        // session is not exist
        if (Session::get(Tool::trim(param["sid"])) == NULL) {
            result = SESSION_NOT_EXIST;
            http_res->set_code(SESSION_NOT_EXIST);
            msg = "session not exist";
            LOG_ERROR << msg << endl;
            http_res->set_msg(msg);
            break;
        }
        
        int room_id = Tool::S2I(param["roomId"]);
        int page_size = Tool::S2I(param["pageSize"]);
        int page_no = Tool::S2I(param["pageNo"]);

        if (room_id < 0 || page_size < 0 || page_no < 0)
        {
            result = PARAM_ERROR;
            http_res->set_code(PARAM_ERROR);
            msg = "param error";
            LOG_ERROR << msg << endl;
            http_res->set_msg(msg);
            break;
        }

        MYSQL mysql;

        // connect fail
        if (!e.connet()) {
            result = DB_ERROR;
            http_res->set_code(DB_ERROR);
            msg = "DB ERROR|join room|" + Tool::toString(ret);
            LOG_ERROR << msg << endl;
            http_res->set_msg(msg);
            e.close();
            break;
        }

        string sql_count = "select count(1) from t_user where id in "
        " (select user_id from t_room_user_relation where room_id = " + param["roomId"] + ") ";
        LOG_DEBUG << sql_count << endl;

        ret = e.excute(sql_count);
        // exception
        if (ret != DB_OK) {
            result = DB_ERROR;
            http_res->set_code(DB_ERROR);
            msg = "DB ERROR|excute count user|" + Tool::toString(ret);
            LOG_ERROR << msg << endl;
            http_res->set_msg(msg);
            e.close();
            break;
        }

        mysql = e.get_mysql();
        MYSQL_RES *count_rst = mysql_store_result(&mysql);
        MYSQL_ROW count_row = mysql_fetch_row(count_rst);
        int total_num;
        if (count_row) {
            total_num = atoi(count_row[0]);
        } else {
            result = DB_ERROR;
            http_res->set_code(DB_ERROR);
            msg = "DB ERROR|no data";
            LOG_ERROR << msg << endl;
            http_res->set_msg(msg);
            e.close();
            break;
        }
        LOG_DEBUG << "total:" << total_num << endl;

        e.close();



        // connect fail
        if (!e.connet()) {
            result = DB_ERROR;
            http_res->set_code(DB_ERROR);
            msg = "DB ERROR|join room|" + Tool::toString(ret);
            LOG_ERROR << msg << endl;
            http_res->set_msg(msg);
            e.close();
            break;
        }
        int begin_pos = (page_no - 1) * page_size;

        string sql = "select id, username, nickname, sex, pic_id from t_user where id in " 
        " (SELECT user_id FROM t_room_user_relation where room_id = " + param["roomId"] + ") "
        "limit " + Tool::toString(begin_pos) + ", " + param["pageSize"];

        ret = e.excute(sql);
        // exception
        if (ret != DB_OK) {
            result = DB_ERROR;
            http_res->set_code(DB_ERROR);
            msg = "DB ERROR| |" + Tool::toString(ret);
            LOG_ERROR << msg << endl;
            http_res->set_msg(msg);
            e.close();
            break;
        }

        mysql = e.get_mysql();

        MYSQL_RES *rst = NULL;
        MYSQL_FIELD *field = NULL;
        MYSQL_ROW row = NULL;

        rst = mysql_store_result(&mysql);
        int fieldcount = mysql_num_fields(rst);
        row = mysql_fetch_row(rst);

        RoomResponse::RoomPeopleListResponse *room_peo_list_res = new RoomResponse::RoomPeopleListResponse();
        Data::List *people_list = new Data::List();
        int data_num = begin_pos;
        while(NULL != row) 
        {
            UserData::User_Info *user_info = people_list->add_user_info();
            for(int i = 0; i < fieldcount; i++) 
            {
                field = mysql_fetch_field_direct(rst, i);
                string key = field->name;
                if (row[i] == NULL)
                    continue;
                LOG_DEBUG << row[i] << endl;
                if (key == "id") {
                    user_info->set_uid(Tool::S2I(row[i]));
                } else if (key == "username") {
                    user_info->set_username(row[i]);
                } else if (key == "nickname") {
                    user_info->set_nick_name(row[i]);
                } else if (key == "sex") {
                    user_info->set_sex(Tool::S2I(row[i]));
                } else if (key == "pic_id") {
                    user_info->set_pic_id(Tool::S2I(row[i]));
                }
            }
            LOG_DEBUG << "------------------------" << endl;
            row = mysql_fetch_row(rst);
            data_num++;
        }
        if (data_num == total_num) {
            people_list->set_is_end(true);
        }
        room_peo_list_res->set_allocated_people_list(people_list);
        http_res->set_allocated_room_people_list_response(room_peo_list_res);
        // mysql_free_result(rst); 


        // success
        result = SHOW_ROOM_PEO_LIST_SUCCESS;
        http_res->set_code(SHOW_ROOM_PEO_LIST_SUCCESS);
        http_res->set_success(true);
        msg = "show room peo list success";
        LOG_INFO << msg << endl;
        http_res->set_msg(msg);
        e.close();

    } while(0);
    print_proto(http_res);

    http_res->SerializeToString(&respon_data);
    memcpy(buf, respon_data.c_str(), respon_data.length());
    send_len = respon_data.length();
    google::protobuf::ShutdownProtobufLibrary();

    return result;
}