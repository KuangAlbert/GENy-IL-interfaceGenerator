/************************************************************************
 *   Copyright (C) Huizhou Desay SV Automotive Co., Ltd.                *
 *                 All Rights Reserved.                                 *
 *   Department :  CT-ITC-OS-Peripheral team                            *
 *   AUTHOR     :  uidp5021                                             *
 ************************************************************************
 * Object		:
 * Module		: Process Excel
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
#ifndef __PROCESS_EXCEL_
#define __PROCESS_EXCEL_
#include "config.h"
#include "libxl.h"

typedef struct __message
{
	char name[50];
	char id[10];
} _message;

typedef struct __signal
{
	char signame[50];	//信号名
	char msgname[50];	//消息名
	char len[10];		//信号长度
	char type[20];		//信号类型：Unsigned、Signed、IEE Float
	char factor[20];	//信号因子
	char offset[20];	//信号偏移
	char max[20];		//信号最大值
	char min[20];		//信号最小值
} _signal;

extern BookHandle book;

extern S8 OpenExcel(wchar_t* ExcelName);
extern void ProcessExcelInterrupt(BookHandle book);
extern S8 OpenExcel(wchar_t* ExcelName);
extern void CloseExcel(BookHandle book);
extern void ProcessExcel(BookHandle book);
extern void ProcessExcelSheet1(BookHandle book);
extern void ProcessExcelSheet2(BookHandle book);
#endif /* PROCESS_EXCEL */