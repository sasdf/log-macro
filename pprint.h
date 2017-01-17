#ifndef PPRINT_HEADER
#define PPRINT_HEADER

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

#define PP_C_RESET        "\x1b[0m"
#define PP_C_BLACK_B      "\x1b[30;1m"
#define PP_C_RED_B        "\x1b[31;1m"
#define PP_C_GREEN_B      "\x1b[32;1m"
#define PP_C_BLUE_B       "\x1b[34;1m"
#define PP_C_CYAN_B       "\x1b[36;1m"

#define PP_FILE_FMT           PP_C_BLACK_B " @ %s:%d"
#define PP_FILE_ARG           __FILE__, __LINE__

#define PP_POSTFIX_FMT  " " PP_FILE_FMT PP_C_RESET "\n"
#define PP_POSTFIX_ARG  PP_FILE_ARG

#ifdef _ALL
#define _OPT
#define _INF
#define _ACK
#define _DBG
#define _ERR
#endif

#ifdef _NORMAL
#define _OPT
#define _ACK
#endif

#ifdef _OPT
#define OPTStr(str)          fprintf(stderr, PP_C_RESET   "[OPT]" PP_C_RESET " " "%s"   PP_POSTFIX_FMT, str,    PP_POSTFIX_ARG)
#define OPT(format, args...) fprintf(stderr, PP_C_RESET   "[OPT]" PP_C_RESET " " format PP_POSTFIX_FMT, ##args, PP_POSTFIX_ARG)
#define OPTStart()           fprintf(stderr, PP_C_RESET   "[OPT]" PP_C_RESET " ")
#define OPTEnd()             fprintf(stderr, PP_POSTFIX_FMT, PP_POSTFIX_ARG)
#else
#define OPTStr(str)          
#define OPT(format, args...) 
#define OPTStart()           
#define OPTEnd()             
#endif

#ifdef _INF
#define INFStr(str)          fprintf(stderr, PP_C_CYAN_B  "[INF]" PP_C_RESET " " "%s"   PP_POSTFIX_FMT, str,    PP_POSTFIX_ARG)
#define INF(format, args...) fprintf(stderr, PP_C_CYAN_B  "[INF]" PP_C_RESET " " format PP_POSTFIX_FMT, ##args, PP_POSTFIX_ARG)
#define INFStart()           fprintf(stderr, PP_C_CYAN_B  "[INF]" PP_C_RESET " ")
#define INFEnd()             fprintf(stderr, PP_POSTFIX_FMT, PP_POSTFIX_ARG)
#else
#define INFStr(str)          
#define INF(format, args...) 
#define INFStart()           
#define INFEnd()             
#endif

#ifdef _ACK
#define ACKStr(str)          fprintf(stderr, PP_C_GREEN_B "[ACK]"            " " "%s"   PP_POSTFIX_FMT, str,    PP_POSTFIX_ARG)
#define ACK(format, args...) fprintf(stderr, PP_C_GREEN_B "[ACK]"            " " format PP_POSTFIX_FMT, ##args, PP_POSTFIX_ARG)
#define ACKStart()           fprintf(stderr, PP_C_GREEN_B "[ACK]"            " ")
#define ACKEnd()             fprintf(stderr, PP_POSTFIX_FMT, PP_POSTFIX_ARG)
#else
#define ACKStr(str)          
#define ACK(format, args...) 
#define ACKStart()           
#define ACKEnd()             
#endif

#ifdef _DBG
#define DBGStr(str)          fprintf(stderr, PP_C_BLUE_B  "[DBG]"            " " "%s"   PP_POSTFIX_FMT, str,    PP_POSTFIX_ARG)
#define DBG(format, args...) fprintf(stderr, PP_C_BLUE_B  "[DBG]"            " " format PP_POSTFIX_FMT, ##args, PP_POSTFIX_ARG)
#define DBGStart()           fprintf(stderr, PP_C_BLUE_B  "[DBG]"            " ")
#define DBGEnd()             fprintf(stderr, PP_POSTFIX_FMT, PP_POSTFIX_ARG)
#else
#define DBGStr(str)          
#define DBG(format, args...) 
#define DBGStart()           
#define DBGEnd()             
#endif

#ifdef _ERR
#define ERRStr(str)          fprintf(stderr, PP_C_RED_B   "[ERR]"            " " "%s"   PP_POSTFIX_FMT, str,    PP_POSTFIX_ARG)
#define ERR(format, args...) fprintf(stderr, PP_C_RED_B   "[ERR]"            " " format PP_POSTFIX_FMT, ##args, PP_POSTFIX_ARG)
#define ERRStart()           fprintf(stderr, PP_C_RED_B   "[ERR]"            " ")
#define ERREnd()             fprintf(stderr, PP_POSTFIX_FMT, PP_POSTFIX_ARG)
#else
#define ERRStr(str)          
#define ERR(format, args...) 
#define ERRStart()           
#define ERREnd()             
#endif

#endif
