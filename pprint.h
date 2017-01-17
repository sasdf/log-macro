#ifndef PPRINT_HEADER
#define PPRINT_HEADER

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

#define PP_C_RESET        "\x1b[0m"
#define PP_C_BLACK_B      "\x1b[30;1m"
#define PP_C_GREEN_B      "\x1b[32;1m"
#define PP_C_RED_B        "\x1b[34;1m"
#define PP_C_CYAN_B       "\x1b[36;1m"

#define PP_FILE_FMT           PP_C_BLACK_B " @ %s:%d"
#define PP_FILE_ARG           __FILE__, __LINE__

#define PP_POSTFIX_FMT  " " PP_FILE_FMT PP_C_RESET "\n"
#define PP_POSTFIX_ARG  PP_FILE_ARG

#define INFStr(str)          fprintf(stderr, PP_C_GREEN_B "[INF]" PP_C_RESET " " "%s"   PP_POSTFIX_FMT, str,    PP_POSTFIX_ARG)
#define INF(format, args...) fprintf(stderr, PP_C_GREEN_B "[INF]" PP_C_RESET " " format PP_POSTFIX_FMT, ##args, PP_POSTFIX_ARG)
#define INFStart()           fprintf(stderr, PP_C_GREEN_B "[INF]" PP_C_RESET " ")
#define INFEnd()             fprintf(stderr, PP_POSTFIX_FMT, PP_POSTFIX_ARG)
#define DBGStr(str)          fprintf(stderr, PP_C_CYAN_B  "[DBG]" PP_C_RESET " " "%s"   PP_POSTFIX_FMT, str,    PP_POSTFIX_ARG)
#define DBG(format, args...) fprintf(stderr, PP_C_CYAN_B  "[DBG]" PP_C_RESET " " format PP_POSTFIX_FMT, ##args, PP_POSTFIX_ARG)
#define DBGStart()           fprintf(stderr, PP_C_CYAN_B  "[DBG]" PP_C_RESET " ")
#define DBGEnd()             fprintf(stderr, PP_POSTFIX_FMT, PP_POSTFIX_ARG)
#define ERRStr(str)          fprintf(stderr, PP_C_RED_B   "[ERR]"            " " "%s"   PP_POSTFIX_FMT, str,    PP_POSTFIX_ARG)
#define ERR(format, args...) fprintf(stderr, PP_C_RED_B   "[ERR]"            " " format PP_POSTFIX_FMT, ##args, PP_POSTFIX_ARG)
#define ERRStart()           fprintf(stderr, PP_C_RED_B   "[ERR]"            " ")
#define ERREnd()             fprintf(stderr, PP_POSTFIX_FMT, PP_POSTFIX_ARG)

#endif
