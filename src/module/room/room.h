#ifndef _ROOM_H_
#define _ROOM_H_

#include <mysql/mysql.h>
#include <map>
#include <stdlib.h>

#include "../../common/config/config.h"
#include "../../util/eagleMysql/eagleMysql.h"
#include "../../common/global/global.h"
#include "../../util/log/log.h"
#include "../../data/compiledData/Response.pb.h"
#include "../../util/tool/tool.h"
#include "../../lib/session/session.h"

int create_room(map<string, string> param, char *buf);
int show_room_list(map<string, string> param, char *buf);
int join_room(map<string, string> param, char *buf);
int quit_room(map<string, string> param, char *buf);
int show_room_peo_list(map<string, string> param, char *buf);
int room_handler(process *process, map<string, string> param);

#endif