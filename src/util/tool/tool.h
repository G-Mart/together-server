#ifndef _TOOL_H_
#define _TOOL_H_

#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sstream>
#include <stdio.h>
#include <sstream>
#include <iostream>
#include <vector>

#ifndef STR_VALUE
#define STR_VALUE(val) #val
#endif

#ifndef STR
#define STR(name) STR_VALUE(name)
#endif

#ifndef PATH_LEN
#define PATH_LEN 256
#endif

using namespace std;


class Tool
{
public:
	static bool isNum(string str);
	static int S2I(string num, int default_val = -1);
	static string L2S(long num);
	static int S2C(string str, char *buf);

	static string md5(string s);
	static string& trim(string &s);
	static int get_project_path(char *buf, int count);
	static int calc_file_MD5(char *file_name, char *md5_sum);
	static string base64_decode(const char* Data);
	static vector<string> split(string str, string pattern);
	
	/**
	 * [Tool::fromString description]
	 * Usage:
	 * long a = 100;
	 * long b = fromString<long>(s) + a;
	 * 
	 * @param  s [description]
	 * @return   [description]
	 */
	template<typename T>
	static T fromString(const std::string& s) {
	  std::istringstream is(s);
	  T t;
	  is >> t;
	  return t;
	}

	/**
	 * [Tool::toString description]
	 * Usage:
	 * long a = 100;
	 * string s = "123";
	 * string ss = s + toString(a);
	 * 
	 * @param  t [description]
	 * @return   [description]
	 */
	template<typename T>
	static string toString(const T& t) {
	  ostringstream s;
	  s << t;
	  return s.str();
	}
};

#endif