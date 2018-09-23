/************************************************************************
 *   Copyright (C) Huizhou Desay SV Automotive Co., Ltd.                *
 *                 All Rights Reserved.                                 *
 *   Department :  CT-ITC-OS-Peripheral team                            *
 *   AUTHOR     :  uidp5021                                             *
 ************************************************************************
 * Object		:
 * Module		: ����Excel���
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
#include <conio.h>
#include "libxl.h"
#include <windows.h>
#include "ProcessExcel.h"
#include "config.h"
#include "log.h"

BookHandle book;

_message message[5000];
_signal	 signal[5000];

/*****************************************************************************
 *  Name        : OpenExcel
 *  Description : ������Կ
 *  Parameter   :
 *  Returns     : None
*****************************************************************************/
S8 OpenExcel(wchar_t* ExcelName)
{
	book = xlCreateXMLBook();
	const wchar_t * x = L"Halil Kural";
	const wchar_t * y = L"windows-2723210a07c4e90162b26966a8jcdboe";
	S8 ret = -1;

	xlBookSetKey(book, x, y);

	if (book)
	{
		if (xlBookLoad(book, ExcelName))
		{
			ret = 0;
		}
	}
	
	return ret;
}

/*****************************************************************************
 *  Name        : CloseExcel
 *  Description : ������Կ
 *  Parameter   :
 *  Returns     : None
*****************************************************************************/
void CloseExcel(BookHandle book)
{
	xlBookRelease(book);
}


/*****************************************************************************
 *  Name        : Process Excel Sheet1
 *  Description :
 *  Parameter   :
 *  Returns     : None
*****************************************************************************/
void ProcessExcelSheet1(BookHandle book)
{
	wchar_t* cell;
	U16 i, Row;
	float ab = 6.25E-2;

	/* �򿪵�һ��sheet */
	SheetHandle sheet = xlBookGetSheet(book, 0);

	if (sheet)
	{
		for (Row = ROW_SIG_STA, i = 0; Row <= ROW_SIG_END; Row++, i++)
		{
			/* ��ȡ�ź��� */
			cell = xlSheetReadStr(sheet, Row, L('A'), 0);
			WideCharToMultiByte(CP_ACP, 0, cell, wcslen(cell) + 1, signal[i].signame, 256, NULL, NULL);
			write_log(logFile, "[%3d,A]	Signal name: %ls\n", Row, cell);

			/* ��ȡ��Ϣ�� */
			cell = xlSheetReadStr(sheet, Row, L('B'), 0);
			WideCharToMultiByte(CP_ACP, 0, cell, wcslen(cell) + 1, signal[i].msgname, 256, NULL, NULL);
			write_log(logFile, "[%3d,B]	Message name: %ls\n", Row, cell);

			/* ��ȡ�źų��� */
			cell = xlSheetReadStr(sheet, Row, L('D'), 0);
			WideCharToMultiByte(CP_ACP, 0, cell, wcslen(cell) + 1, signal[i].len, 256, NULL, NULL);
			write_log(logFile, "[%3d,D]	Signal len: %ls\n", Row, cell);

			/* ��ȡ�ź����� */
			cell = xlSheetReadStr(sheet, Row, L('F'), 0);
			WideCharToMultiByte(CP_ACP, 0, cell, wcslen(cell) + 1, signal[i].type, 256, NULL, NULL);
			write_log(logFile, "[%3d,F]	Signal Type: %ls\n", Row, cell);

			/* ��ȡ�ź����� */
			cell = xlSheetReadStr(sheet, Row, L('G'), 0);
			WideCharToMultiByte(CP_ACP, 0, cell, wcslen(cell) + 1, signal[i].factor, 256, NULL, NULL);
			write_log(logFile, "[%3d,G]	Signal Factor: %ls\n", Row, cell);

			/* ��ȡ�ź�ƫ�� */
			cell = xlSheetReadStr(sheet, Row, L('H'), 0);
			WideCharToMultiByte(CP_ACP, 0, cell, wcslen(cell) + 1, signal[i].offset, 256, NULL, NULL);
			write_log(logFile, "[%3d,H]	Signal Offset: %ls\n", Row, cell);

			/* ��ȡ�ź���Сֵ */
			cell = xlSheetReadStr(sheet, Row, L('I'), 0);
			WideCharToMultiByte(CP_ACP, 0, cell, wcslen(cell) + 1, signal[i].min, 256, NULL, NULL);
			write_log(logFile, "[%3d,I]	Signal min: %ls\n", Row, cell);

			/* ��ȡ�ź����ֵ */
			cell = xlSheetReadStr(sheet, Row, L('J'), 0);
			WideCharToMultiByte(CP_ACP, 0, cell, wcslen(cell) + 1, signal[i].max, 256, NULL, NULL);
			write_log(logFile, "[%3d,I]	Signal max: %ls\n", Row, cell);
		}
	}
}

/*****************************************************************************
 *  Name        : Process Excel Sheet2
 *  Description :
 *  Parameter   :
 *  Returns     : None
*****************************************************************************/
void ProcessExcelSheet2(BookHandle book)
{
	wchar_t* cell;
	U16 i,Row;

	/* �򿪵ڶ���sheet */
	SheetHandle sheet = xlBookGetSheet(book, 1);

	if (sheet)
	{
		for (Row = ROW_MSG_STA, i=0; Row <= ROW_MSG_END; Row++,i++)
		{
			/* ��ȡ��Ϣ�� */
			cell = xlSheetReadStr(sheet, Row, L('A'), 0);
			WideCharToMultiByte(CP_ACP, 0, cell, wcslen(cell) + 1, message[i].name, 256, NULL, NULL);
			write_log(logFile, "[%3d,A]	Message name: %ls\n", Row, cell);

			/* ��ȡ��ϢID */
			cell = xlSheetReadStr(sheet, Row, L('B'), 0);
			WideCharToMultiByte(CP_ACP, 0, cell, wcslen(cell) + 1, message[i].id, 256, NULL, NULL);
			write_log(logFile, "[%3d,B]	Message id: %ls\n", Row, cell);
		}
	}
}







