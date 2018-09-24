/************************************************************************
 *   Copyright (C) Huizhou Desay SV Automotive Co., Ltd.                *
 *                 All Rights Reserved.                                 *
 *   Department :  CT-ITC-OS-Peripheral team                            *
 *   AUTHOR     :  uidp5021                                             *
 ************************************************************************
 * Object		:
 * Module		: 公共配置头文件
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
#ifndef __CONFIG_
#define __CONFIG_

typedef signed char S8;
typedef unsigned char U8;
typedef signed short int S16;
typedef unsigned short int U16;
typedef unsigned int S32;
typedef unsigned int U32;


/* 配置代码工具的版本号 */
#define VERSION "V1.1"

/* 信号表格扫面的结束行数，第一个sheet */
#define ROW_SIG_STA		R(2)
#define ROW_SIG_END		R(421)

/* 消息表格扫面的行数，第二个sheet */
#define ROW_MSG_STA R(2)
#define ROW_MSG_END R(63)

#endif // __CONFIG_