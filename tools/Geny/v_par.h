/* -----------------------------------------------------------------------------
  Filename:    v_par.h
  Description: Toolversion: 02.03.18.01.80.00.17.01.00.00
               
               Serial Number: CBD1800017
               Customer Info: Huizhou Desay SV Automotive Co., Ltd.
                              Package: CBD_Vector_SLP2
                              Micro: TDA2XXHG
                              Compiler: Texas Instruments 16.9.2
               
               
               Generator Fwk   : GENy 
               Generator Module: GenTool_GenyVcfgNameDecorator
               
               Configuration   : D:\code\McuCode\GENy-IL-interfaceGenerator\tools\AF01A_DCAN.gny
               
               ECU: 
                       TargetSystem: Hw_Tms320ArmCpu
                       Compiler:     TI
                       Derivates:    Tms320_TDA2X
               
               Channel "Channel0":
                       Databasefile: D:\code\SocCode\linux\gen\AF01A_DCAN.dbc
                       Bussystem:    CAN
                       Manufacturer: GAC
                       Node:         AF01A

 ----------------------------------------------------------------------------- */
/* -----------------------------------------------------------------------------
  C O P Y R I G H T
 -------------------------------------------------------------------------------
  Copyright (c) 2001-2015 by Vector Informatik GmbH. All rights reserved.
 
  This software is copyright protected and proprietary to Vector Informatik 
  GmbH.
  
  Vector Informatik GmbH grants to you only those rights as set out in the 
  license conditions.
  
  All other rights remain with Vector Informatik GmbH.
 -------------------------------------------------------------------------------
 ----------------------------------------------------------------------------- */

#if !defined(__V_PAR_H__)
#define __V_PAR_H__

/* -----------------------------------------------------------------------------
    &&&~ BaseEnv_PHF_Includes
 ----------------------------------------------------------------------------- */

#include "v_cfg.h"
#include "v_def.h"


/* -----------------------------------------------------------------------------
    &&&~ GENy Version Information
 ----------------------------------------------------------------------------- */

#define VGEN_DELIVERY_VERSION_BYTE_0         0x02
#define VGEN_DELIVERY_VERSION_BYTE_1         0x03
#define VGEN_DELIVERY_VERSION_BYTE_2         0x18
#define VGEN_DELIVERY_VERSION_BYTE_3         0x01
#define VGEN_DELIVERY_VERSION_BYTE_4         0x80
#define VGEN_DELIVERY_VERSION_BYTE_5         0x00
#define VGEN_DELIVERY_VERSION_BYTE_6         0x17
#define VGEN_DELIVERY_VERSION_BYTE_7         0x01
#define VGEN_DELIVERY_VERSION_BYTE_8         0x00
#define VGEN_DELIVERY_VERSION_BYTE_9         0x00
#define kGENyVersionNumberOfBytes            10
/* ROM CATEGORY 4 START */
V_MEMROM0 extern  V_MEMROM1 vuint8 V_MEMROM2 kGENyVersion[kGENyVersionNumberOfBytes];
/* ROM CATEGORY 4 END */




/* begin Fileversion check */
#ifndef SKIP_MAGIC_NUMBER
#ifdef MAGIC_NUMBER
  #if MAGIC_NUMBER != 297263386
      #error "The magic number of the generated file <D:\code\McuCode\GENy-IL-interfaceGenerator\tools\Geny\v_par.h> is different. Please check time and date of generated files!"
  #endif
#else
  #define MAGIC_NUMBER 297263386
#endif  /* MAGIC_NUMBER */
#endif  /* SKIP_MAGIC_NUMBER */

/* end Fileversion check */

#endif /* __V_PAR_H__ */
