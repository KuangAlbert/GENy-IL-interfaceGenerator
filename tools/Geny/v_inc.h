/* -----------------------------------------------------------------------------
  Filename:    v_inc.h
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

#if !defined(__V_INC_H__)
#define __V_INC_H__

#include "can_inc.h"

#include "v_cfg.h"
#include "drv_par.h"


#include "v_par.h"
#include "can_par.h"

/* begin Fileversion check */
#ifndef SKIP_MAGIC_NUMBER
#ifdef MAGIC_NUMBER
  #if MAGIC_NUMBER != 297263386
      #error "The magic number of the generated file <D:\code\McuCode\GENy-IL-interfaceGenerator\tools\Geny\v_inc.h> is different. Please check time and date of generated files!"
  #endif
#else
  #define MAGIC_NUMBER 297263386
#endif  /* MAGIC_NUMBER */
#endif  /* SKIP_MAGIC_NUMBER */

/* end Fileversion check */

#endif /* __V_INC_H__ */
