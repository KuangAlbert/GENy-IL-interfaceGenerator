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
	char signame[50];	//�ź���
	char msgname[50];	//��Ϣ��
	char len[10];		//�źų���
	char type[20];		//�ź����ͣ�Unsigned��Signed��IEE Float
	char factor[20];	//�ź�����
	char offset[20];	//�ź�ƫ��
	char max[20];		//�ź����ֵ
	char min[20];		//�ź���Сֵ
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