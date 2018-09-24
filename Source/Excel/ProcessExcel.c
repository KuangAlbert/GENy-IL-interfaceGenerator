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

	/* �򿪵�һ��sheet */
	SheetHandle sheet = xlBookGetSheet(book, 0);

	if (sheet)
	{
		for (Row = ROW_SIG_STA, i = 0; Row <= ROW_SIG_END; Row++, i++)
		{
			/* ��ȡ�ź��� */
			cell = xlSheetReadStr(sheet, Row, L('A'), 0);
			WideCharToMultiByte(CP_ACP, 0, cell, wcslen(cell) + 1, signal[i].signame, 256, NULL, NULL);
			write_log(logFile, "[%3d,A]	Signal name: %ls\n", Row+1, cell);

			/* ��ȡ��Ϣ�� */
			cell = xlSheetReadStr(sheet, Row, L('B'), 0);
			WideCharToMultiByte(CP_ACP, 0, cell, wcslen(cell) + 1, signal[i].msgname, 256, NULL, NULL);
			write_log(logFile, "[%3d,B]	Message name: %ls\n", Row+1, cell);

			/* ��ȡ�źų��� */
			cell = xlSheetReadStr(sheet, Row, L('D'), 0);
			WideCharToMultiByte(CP_ACP, 0, cell, wcslen(cell) + 1, signal[i].len, 256, NULL, NULL);
			write_log(logFile, "[%3d,D]	Signal len: %ls\n", Row+1, cell);

			/* ��ȡ�ź����� */
			cell = xlSheetReadStr(sheet, Row, L('F'), 0);
			WideCharToMultiByte(CP_ACP, 0, cell, wcslen(cell) + 1, signal[i].type, 256, NULL, NULL);
			write_log(logFile, "[%3d,F]	Signal Type: %ls\n", Row+1, cell);

			/* ��ȡ�ź����� */
			cell = xlSheetReadStr(sheet, Row, L('G'), 0);
			WideCharToMultiByte(CP_ACP, 0, cell, wcslen(cell) + 1, signal[i].factor, 256, NULL, NULL);
			write_log(logFile, "[%3d,G]	Signal Factor: %ls\n", Row+1, cell);

			/* ��ȡ�ź�ƫ�� */
			cell = xlSheetReadStr(sheet, Row, L('H'), 0);
			WideCharToMultiByte(CP_ACP, 0, cell, wcslen(cell) + 1, signal[i].offset, 256, NULL, NULL);
			write_log(logFile, "[%3d,H]	Signal Offset: %ls\n", Row+1, cell);

			/* ��ȡ�ź���Сֵ */
			cell = xlSheetReadStr(sheet, Row, L('I'), 0);
			WideCharToMultiByte(CP_ACP, 0, cell, wcslen(cell) + 1, signal[i].min, 256, NULL, NULL);
			write_log(logFile, "[%3d,I]	Signal min: %ls\n", Row+1, cell);

			/* ��ȡ�ź����ֵ */
			cell = xlSheetReadStr(sheet, Row, L('J'), 0);
			WideCharToMultiByte(CP_ACP, 0, cell, wcslen(cell) + 1, signal[i].max, 256, NULL, NULL);
			write_log(logFile, "[%3d,I]	Signal max: %ls\n", Row+1, cell);
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

/*****************************************************************************
 *  Name        : Gen Code dcanTx_gen.c
 *  Description :
 *  Parameter   :
 *  Returns     : None
*****************************************************************************/
int GenCode_dcanTx_gen_c(void)
{
	FILE* File;
	char c[500];
	U16 i, Row,j,k;
	int ret = -1;

	File = fopen("dcanTx_gen.c", "w"); /* ��ֻд�ļ������ļ������򳤶���Ϊ 0�������ļ�������ʧ�����������򴴽����ļ� */

	fputs("/******************************************************************************************************\n", File);
	fputs("This C file is modified according to DBC and is generally not allowed to be changed.\n", File);
	memset(c, 0x00, sizeof(c));
	strcpy(c, "Code generator version: ");
	strcat(c,VERSION);
	strcat(c, "\n");
	fputs(c, File);
	fputs("Author: KuangBaoFengLei\n", File);
	fputs("Date: 2018/09/24\n", File);
	fputs("Gen time: ", File);
	write_log(File, "\n");
	fputs("======================================================================================================*/\n", File);

	fputs("#include \"dcanTxLink_priv.h\"\n\n", File);
	fputs("sig_attribute attr;\n\n", File);

	fputs("void Send_signal_IL(_DcanTxDataPacket* pk)\n", File);
	fputs("{\n", File);

	for (Row = ROW_SIG_STA, i = 0; Row <= ROW_SIG_END; Row++, i++)
	{
		/* data type :Usigned��Signed��IEEE Float */
		memset(c, 0x00, sizeof(c));
		strcpy(c, "    attr.data_type  = ");

		if (0 == strcmp("IEEE Float", signal[i].type))
		{
			memset(signal[i].type, 0x00, sizeof(signal[i].type));
			strcpy(signal[i].type, "IEEE_Float");
			strcat(c, signal[i].type);
		}
		else
		{
			strcat(c, signal[i].type);
		}

		strcat(c, ";\n");
		fputs(c, File);

		/* factor */
		memset(c, 0x00, sizeof(c));
		strcpy(c, "    attr.factor     = ");
		strcat(c, signal[i].factor);
		strcat(c, ";\n");
		fputs(c, File);

		/* offset */
		memset(c, 0x00, sizeof(c));
		strcpy(c, "    attr.offset     = ");
		strcat(c, signal[i].offset);
		strcat(c, ";\n");
		fputs(c, File);

		/* max */
		memset(c, 0x00, sizeof(c));
		strcpy(c, "    attr.max        = ");
		strcat(c, signal[i].max);
		strcat(c, ";\n");
		fputs(c, File);

		/* min */
		memset(c, 0x00, sizeof(c));
		strcpy(c, "    attr.min        = ");
		strcat(c, signal[i].min);
		strcat(c, ";\n");
		fputs(c, File);

		/* nbits */
		memset(c, 0x00, sizeof(c));
		strcpy(c, "    attr.nbits      = ");
		strcat(c, signal[i].len);
		strcat(c, ";\n");
		fputs(c, File);

		/* value */
		memset(c, 0x00, sizeof(c));
		strcpy(c, "    attr.value      = ");
		strcat(c, "pk->");
		strcat(c, signal[i].msgname);
		strcat(c, ".");
		strcat(c, signal[i].signame);
		strcat(c, ";\n");
		fputs(c, File);

		/* call IL function */
		memset(c, 0x00, sizeof(c));
		strcpy(c, "    can_send_sig(");
		strcat(c, signal[i].signame);
		strcat(c, "_");

		for (j = ROW_MSG_STA, k = 0; j <= ROW_MSG_END; j++, k++)
		{
			if (0 == strcmp(signal[i].msgname, message[k].name))
			{
				strcat(c, message[k].id);
				break;
			}
			else if(j == ROW_MSG_END)
			{
				//����������ʾ���󣬸���
				wchar_t p[20];
				wchar_t q[200] = L"����Excel���ĵ�";
				wsprintf(p, L"%d", Row + 1);
				wcscat(q, p);
				wcscat(q, L"�У���A�е��ź��Ҳ�����Ӧ����ϢID������");
				MessageBox(NULL, q, TEXT("�񱩷�����ܰ��ʾ��������������ã�����"), MB_OK | MB_ICONWARNING);

				return ret = -1;
			}
		}
		strcat(c, ", data_conv(&attr));\n");
		fputs(c, File);


		fputs("\n\n", File);
	}

	fputs("}\n", File);
	fclose(File);/* �ر��ļ� */

	return ret = 0;
}

/*****************************************************************************
 *  Name        : Gen Code dcanTx_gen.h
 *  Description :
 *  Parameter   :
 *  Returns     : None
*****************************************************************************/
int GenCode_dcanTx_gen_h(void)
{
	FILE* File;
	char c[500];
	U16 i, Row, j, k;
	int ret = -1;
	U8 isFirst = 0;

	File = fopen("dcanTx_gen.h", "w"); /* ��ֻд�ļ������ļ������򳤶���Ϊ 0�������ļ�������ʧ�����������򴴽����ļ� */

	fputs("/******************************************************************************************************\n", File);
	fputs("This C file is modified according to DBC and is generally not allowed to be changed.\n", File);
	memset(c, 0x00, sizeof(c));
	strcpy(c, "Code generator version: ");
	strcat(c, VERSION);
	strcat(c, "\n");
	fputs(c, File);
	fputs("Author: KuangBaoFengLei\n", File);
	fputs("Date: 2018/09/24\n", File);
	fputs("Gen time: ", File);
	write_log(File, "\n");
	fputs("======================================================================================================*/\n", File);

	fputs("#ifndef DCANTX_GEN_H_\n", File);
	fputs("#define DCANTX_GEN_H_\n\n\n", File);

	/* ����ÿ����Ϣ�Ľṹ�� */
	for (Row = ROW_SIG_STA, i = 0; Row <= ROW_SIG_END; Row++, i++)
	{
		if (Row == ROW_SIG_STA)
		{
			isFirst = 1;
			fputs("typedef struct\n", File);
			fputs("{\n", File);

			/* д��һ�� */
			memset(c, 0x00, sizeof(c));
			strcpy(c, "    float ");
			strcat(c, signal[i].signame);
			strcat(c, ";\n");
			fputs(c, File);
		}
		else if (Row == ROW_SIG_END)
		{
			/* д������ */
			memset(c, 0x00, sizeof(c));
			strcpy(c, "    float ");
			strcat(c, signal[i].signame);
			strcat(c, ";\n");
			fputs(c, File);

			memset(c, 0x00, sizeof(c));
			strcpy(c, "}_");
			strcat(c, signal[i].msgname);
			strcat(c, ";\n\n");
			fputs(c, File);
		}
		else if(0 != strcmp(signal[i].msgname, signal[i-1].msgname))
		{
			memset(c, 0x00, sizeof(c));
			strcpy(c, "}_");
			strcat(c, signal[i-1].msgname);
			strcat(c, ";\n\n");
			fputs(c, File);

			fputs("typedef struct\n", File);
			fputs("{\n", File);

			/* д��һ�� */
			memset(c, 0x00, sizeof(c));
			strcpy(c, "    float ");
			strcat(c, signal[i].signame);
			strcat(c, ";\n");
			fputs(c, File);
		}
		else
		{
			memset(c, 0x00, sizeof(c));
			strcpy(c, "    float ");
			strcat(c, signal[i].signame);
			strcat(c, ";\n");
			fputs(c, File);
		}
	}


	/* �����ܵĽṹ�� */
	fputs("typedef struct __dcanTxDataPacket\n", File);
	fputs("{\n", File);

	for (j = ROW_MSG_STA, k = 0; j <= ROW_MSG_END; j++, k++)
	{
		memset(c, 0x00, sizeof(c));
		strcpy(c, "    _");
		strcat(c, message[k].name);
		strcat(c, "  ");
		strcat(c, message[k].name);
		strcat(c, ";\n");
		fputs(c, File);
	}
	fputs("} _DcanTxDataPacket;\n\n", File);

	fputs("#endif /* DCANTX_GEN_H_ */\n", File);
	fclose(File);/* �ر��ļ� */
}






