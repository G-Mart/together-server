#include "user.h"

/**
 * prise user
 *  
 * @method prise
 * @param {string} username username which is used for getting user info.
 * @param {string} sid sid which is used for getting user info.
 * @param {char*} respone data. 
 * @return {int} prise status.
 */
int prise(string username, string sid, char *buf) {
    string respon_data;
    Response::HTTPResponse *http_res = new Response::HTTPResponse();
    string msg;
    int result;
    int ret;

    LOG_INFO << "username is " << username << " sid is " << sid << endl;

    do {    
        // username or password is not be found
        if (Tool::trim(username).empty() || Tool::trim(sid).empty()) {
            result = PARAM_ERROR;
            _set_http_head(result, false, "username or sid is null", http_res);
            break;
        }

        // session is not exist
        if (Session::get(sid) == NULL) {
            result = SESSION_NOT_EXIST;
            _set_http_head(result, false, "session not exist", http_res);
            break;
        }

        // prise user
        map<string, string> update_params;

        Config *c = Config::get_instance();
        map<string, string> config = c->get_config();
        eagleMysql e(config["DOMAIN"].c_str(), config["USER_NAME"].c_str(), 
            config["PASSWORD"].c_str(), config["DATABASE"].c_str(), Tool::S2I(config["PORT"], 3306));
        
        if (!e.connet()) {
        	result = SQL_CONNECT_FAIL;
        	_set_http_head(result, false, "sql connet fail", http_res);
        }

        ret = e.excute("select praise_num from t_user where username = " + Tool::mysql_filter(username) + ";");
        if (ret != DB_OK) {
	    	result = DB_ERROR;
	    	_set_http_head(result, false, "DB ERROR|" + Tool::toString(ret), http_res);
	    	break;
	    }

    	MYSQL mysql;
        mysql = e.get_mysql();

	    MYSQL_RES *res = NULL;
	    MYSQL_ROW row = NULL;

	    res = mysql_store_result(&mysql);
	    row = mysql_fetch_row(res);

	    LOG_INFO << "the praise_num is: " << row[0] << endl;

	    update_params["praise_num"] = Tool::mysql_filter(Tool::S2I(row[0]) + 1);

	    e.close();

        ret = e.update("t_user", update_params, "where username = '" + username + "'");
   		// exception
        if (ret != DB_OK) {
            result = USER_PRISE_FAIL;
            _set_http_head(result, false, "user prise fail", http_res);
            break;
        }

        result = USER_PRISE_SUCCESS;
        _set_http_head(result, true, "prise user success", http_res);
    } while(0);

    print_proto(http_res);

    http_res->SerializeToString(&respon_data);
    const char *p = respon_data.c_str();
    strncpy(buf, p, strlen(p) + 1);
    google::protobuf::ShutdownProtobufLibrary();

    return result;
}

/**
 * follow user
 *  
 * @method follow
 * @param {int} follow_id uid which is used for mark the user.
 * @param {int} followed_id follow_id which is used for mark the followed user.
 * @param {string} sid sid which is used for following user.
 * @param {char*} respone data. 
 * @return {int} follow status.
 */
int follow(int follow_id, int followed_id, string sid, char *buf) {
    string respon_data;
    Response::HTTPResponse *http_res = new Response::HTTPResponse();
    string msg;
    int result;
    int ret;

    LOG_INFO << "follow_id is " << follow_id << "followed_id is " << followed_id << " sid is " << sid << endl;

    do {    
        // username or password is not be found
        if (follow_id <= 0 || followed_id <= 0 || Tool::trim(sid).empty()) {
            result = PARAM_ERROR;
            _set_http_head(result, false, "uid or followed_id or sid is null", http_res);
            break;
        }

        // session is not exist
        if (Session::get(sid) == NULL) {
            result = SESSION_NOT_EXIST;
            _set_http_head(result, false, "session not exist", http_res);
            break;
        }

        // follow user
        Config *c = Config::get_instance();
        map<string, string> config = c->get_config();
        eagleMysql e(config["DOMAIN"].c_str(), config["USER_NAME"].c_str(), 
            config["PASSWORD"].c_str(), config["DATABASE"].c_str(), Tool::S2I(config["PORT"], 3306));
        bool exist;

        // check whether already or not
        ret = e.is_exist("t_follow", "where follow_id=" + Tool::mysql_filter(follow_id)  
        	+ " and followed_id=" + Tool::mysql_filter(followed_id) + ";", exist);
        // exception
        if (ret != DB_OK) {
            result = DB_ERROR;
            _set_http_head(result, false, "DB ERROR|" + Tool::toString(ret), http_res);
            break;
        }
        // username already exist
        if (exist) {
            result = USER_ALREADY_FOLLOW;
            _set_http_head(result, false, "user already follow", http_res);
            break;
        }

        // do follow
        map<string, string> follow_params;
        follow_params["follow_id"] = Tool::mysql_filter(follow_id);
        follow_params["followed_id"] = Tool::mysql_filter(followed_id);
        int insert_id = -1;
        ret = e.insert("t_follow", follow_params, insert_id);
        // exception
        if (ret != DB_OK) {
            result = USER_FOLLOW_FAIL;
            _set_http_head(result, false, "follow fail", http_res);
            break;
        }

        // set HTTPResponse
        result = USER_FOLLOW_SUCCESS;
        _set_http_head(result, true, "follow success", http_res);

    } while(0);

    print_proto(http_res);

    http_res->SerializeToString(&respon_data);
    const char *p = respon_data.c_str();
    strncpy(buf, p, strlen(p) + 1);
    google::protobuf::ShutdownProtobufLibrary();

    return result;
}