/* Module		: log.c
 * Instance		:
 * Description	:
 *-----------------------------------------------------------------------
 * Version		: v1.0
 * Date			: 2018/08/27
 * Author		: uidp5021
 ***********************************************************************/
 /*-History--------------------------------------------------------------
 * Version       Date               Name            Changes and comments
 * 1.0           2018/08/27			Lishi           add Init version
*=========================================================================*/
#include <stdio.h>
#include <stdarg.h>
#include <time.h>

FILE* logFile;

/*****************************************************************************
 *  Name        : write_log
 *  Description : pFile:文件指针
 *  Parameter   :
 *  Returns     : 返回值一般不使用
*****************************************************************************/
int write_log(FILE* pFile, const char *format, ...)
 {
	 va_list arg;
	 int done;

	 va_start(arg, format);
	 //done = vfprintf (stdout, format, arg);

	 time_t time_log = time(NULL);
	 struct tm* tm_log = localtime(&time_log);
	 fprintf(pFile, "%04d-%02d-%02d %02d:%02d:%02d ", tm_log->tm_year + 1900, tm_log->tm_mon + 1, tm_log->tm_mday, tm_log->tm_hour, tm_log->tm_min, tm_log->tm_sec);

	 done = vfprintf(pFile, format, arg);
	 va_end(arg);

	 fflush(pFile);
	 return done;
 }











