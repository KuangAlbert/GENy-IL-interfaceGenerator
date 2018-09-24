/* -----------------------------------------------------------------------------
  Filename:    drv_par.c
  Description: Toolversion: 02.03.18.01.80.00.17.01.00.00
               
               Serial Number: CBD1800017
               Customer Info: Huizhou Desay SV Automotive Co., Ltd.
                              Package: CBD_Vector_SLP2
                              Micro: TDA2XXHG
                              Compiler: Texas Instruments 16.9.2
               
               
               Generator Fwk   : GENy 
               Generator Module: GenTool_GenyDriverBase
               
               Configuration   : D:\code\McuCode\GENy-IL-interfaceGenerator\tools\AF01A_DCAN.gny
               
               ECU: 
                       TargetSystem: Hw_Tms320ArmCpu
                       Compiler:     TI
                       Derivates:    Tms320_TDA2X
               
               Channel "Channel0":
                       Databasefile: D:\code\McuCode\GENy-IL-interfaceGenerator\tools\AF01A_DCAN.dbc
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

#include "v_inc.h"
#include "can_inc.h"

#include "drv_par.h"
/* -----------------------------------------------------------------------------
    &&&~ Message Buffers
 ----------------------------------------------------------------------------- */

/* RAM CATEGORY 2 START */
/* PRQA  S 0759 QAC_Can_0759 */ /* MD_Can_0759 */
V_MEMRAM0 V_MEMRAM1 _c_ESR_Status1_buf V_MEMRAM2 ESR_Status1;
V_MEMRAM0 V_MEMRAM1 _c_Car_Info_buf V_MEMRAM2 Car_Info;
V_MEMRAM0 V_MEMRAM1 _c_Detils_Lane_buf V_MEMRAM2 Detils_Lane;
V_MEMRAM0 V_MEMRAM1 _c_Next_lane_Right_P_buf V_MEMRAM2 Next_lane_Right_P;
V_MEMRAM0 V_MEMRAM1 _c_Next_lane_Right_O_buf V_MEMRAM2 Next_lane_Right_O;
V_MEMRAM0 V_MEMRAM1 _c_Next_lane_Left_N_buf V_MEMRAM2 Next_lane_Left_N;
V_MEMRAM0 V_MEMRAM1 _c_Next_lane_Left_M_buf V_MEMRAM2 Next_lane_Left_M;
V_MEMRAM0 V_MEMRAM1 _c_Next_lane_Left_J_buf V_MEMRAM2 Next_lane_Left_J;
V_MEMRAM0 V_MEMRAM1 _c_Next_lane_Left_I_buf V_MEMRAM2 Next_lane_Left_I;
V_MEMRAM0 V_MEMRAM1 _c_Next_lane_Right_L_buf V_MEMRAM2 Next_lane_Right_L;
V_MEMRAM0 V_MEMRAM1 _c_Next_lane_Right_K_buf V_MEMRAM2 Next_lane_Right_K;
V_MEMRAM0 V_MEMRAM1 _c_Next_lane_Right_H_buf V_MEMRAM2 Next_lane_Right_H;
V_MEMRAM0 V_MEMRAM1 _c_Next_lane_Right_G_buf V_MEMRAM2 Next_lane_Right_G;
V_MEMRAM0 V_MEMRAM1 _c_Next_lane_Left_F_buf V_MEMRAM2 Next_lane_Left_F;
V_MEMRAM0 V_MEMRAM1 _c_Next_lane_Left_E_buf V_MEMRAM2 Next_lane_Left_E;
V_MEMRAM0 V_MEMRAM1 _c_Next_lane_Right_D_buf V_MEMRAM2 Next_lane_Right_D;
V_MEMRAM0 V_MEMRAM1 _c_Next_lane_Right_C_buf V_MEMRAM2 Next_lane_Right_C;
V_MEMRAM0 V_MEMRAM1 _c_Obstacle_Data_X_buf V_MEMRAM2 Obstacle_Data_X;
V_MEMRAM0 V_MEMRAM1 _c_Obstacle_Data_U_buf V_MEMRAM2 Obstacle_Data_U;
V_MEMRAM0 V_MEMRAM1 _c_Obstacle_Data_R_buf V_MEMRAM2 Obstacle_Data_R;
V_MEMRAM0 V_MEMRAM1 _c_Obstacle_Data_O_buf V_MEMRAM2 Obstacle_Data_O;
V_MEMRAM0 V_MEMRAM1 _c_Obstacle_Data_L_buf V_MEMRAM2 Obstacle_Data_L;
V_MEMRAM0 V_MEMRAM1 _c_Obstacle_Data_I_buf V_MEMRAM2 Obstacle_Data_I;
V_MEMRAM0 V_MEMRAM1 _c_Obstacle_Data_F_buf V_MEMRAM2 Obstacle_Data_F;
V_MEMRAM0 V_MEMRAM1 _c_Obstacle_Data_W_buf V_MEMRAM2 Obstacle_Data_W;
V_MEMRAM0 V_MEMRAM1 _c_Obstacle_Data_T_buf V_MEMRAM2 Obstacle_Data_T;
V_MEMRAM0 V_MEMRAM1 _c_Obstacle_Data_Q_buf V_MEMRAM2 Obstacle_Data_Q;
V_MEMRAM0 V_MEMRAM1 _c_Obstacle_Data_N_buf V_MEMRAM2 Obstacle_Data_N;
V_MEMRAM0 V_MEMRAM1 _c_Obstacle_Data_K_buf V_MEMRAM2 Obstacle_Data_K;
V_MEMRAM0 V_MEMRAM1 _c_Obstacle_Data_H_buf V_MEMRAM2 Obstacle_Data_H;
V_MEMRAM0 V_MEMRAM1 _c_Obstacle_Data_E_buf V_MEMRAM2 Obstacle_Data_E;
V_MEMRAM0 V_MEMRAM1 _c_Obstacle_Data_V_buf V_MEMRAM2 Obstacle_Data_V;
V_MEMRAM0 V_MEMRAM1 _c_Obstacle_Data_S_buf V_MEMRAM2 Obstacle_Data_S;
V_MEMRAM0 V_MEMRAM1 _c_Obstacle_Data_P_buf V_MEMRAM2 Obstacle_Data_P;
V_MEMRAM0 V_MEMRAM1 _c_Obstacle_Data_M_buf V_MEMRAM2 Obstacle_Data_M;
V_MEMRAM0 V_MEMRAM1 _c_Obstacle_Data_J_buf V_MEMRAM2 Obstacle_Data_J;
V_MEMRAM0 V_MEMRAM1 _c_Obstacle_Data_G_buf V_MEMRAM2 Obstacle_Data_G;
V_MEMRAM0 V_MEMRAM1 _c_Obstacle_Data_D_buf V_MEMRAM2 Obstacle_Data_D;
V_MEMRAM0 V_MEMRAM1 _c_TSR_message_G_buf V_MEMRAM2 TSR_message_G;
V_MEMRAM0 V_MEMRAM1 _c_TSR_message_F_buf V_MEMRAM2 TSR_message_F;
V_MEMRAM0 V_MEMRAM1 _c_TSR_message_E_buf V_MEMRAM2 TSR_message_E;
V_MEMRAM0 V_MEMRAM1 _c_TSR_message_D_buf V_MEMRAM2 TSR_message_D;
V_MEMRAM0 V_MEMRAM1 _c_TSR_message_C_buf V_MEMRAM2 TSR_message_C;
V_MEMRAM0 V_MEMRAM1 _c_TSR_message_B_buf V_MEMRAM2 TSR_message_B;
V_MEMRAM0 V_MEMRAM1 _c_Reference_points_buf V_MEMRAM2 Reference_points;
V_MEMRAM0 V_MEMRAM1 _c_Numebr_of_next_lane_buf V_MEMRAM2 Numebr_of_next_lane;
V_MEMRAM0 V_MEMRAM1 _c_Next_lane_Left_B_buf V_MEMRAM2 Next_lane_Left_B;
V_MEMRAM0 V_MEMRAM1 _c_Next_lane_Left_A_buf V_MEMRAM2 Next_lane_Left_A;
V_MEMRAM0 V_MEMRAM1 _c_LKA_right_lane_B_buf V_MEMRAM2 LKA_right_lane_B;
V_MEMRAM0 V_MEMRAM1 _c_LKA_right_lane_A_buf V_MEMRAM2 LKA_right_lane_A;
V_MEMRAM0 V_MEMRAM1 _c_LKA_left_lane_B_buf V_MEMRAM2 LKA_left_lane_B;
V_MEMRAM0 V_MEMRAM1 _c_LKA_left_lane_A_buf V_MEMRAM2 LKA_left_lane_A;
V_MEMRAM0 V_MEMRAM1 _c_Obstacle_Data_C_buf V_MEMRAM2 Obstacle_Data_C;
V_MEMRAM0 V_MEMRAM1 _c_Obstacle_Data_B_buf V_MEMRAM2 Obstacle_Data_B;
V_MEMRAM0 V_MEMRAM1 _c_Obstacle_Data_A_buf V_MEMRAM2 Obstacle_Data_A;
V_MEMRAM0 V_MEMRAM1 _c_Obstacle_Status_buf V_MEMRAM2 Obstacle_Status;
V_MEMRAM0 V_MEMRAM1 _c_Lane_buf V_MEMRAM2 Lane;
V_MEMRAM0 V_MEMRAM1 _c_AHBC_high_low_beam_buf V_MEMRAM2 AHBC_high_low_beam;
V_MEMRAM0 V_MEMRAM1 _c_TSR_message_A_buf V_MEMRAM2 TSR_message_A;
V_MEMRAM0 V_MEMRAM1 _c_Sign_Type_buf V_MEMRAM2 Sign_Type;
V_MEMRAM0 V_MEMRAM1 _c_Fixed_FOE_buf V_MEMRAM2 Fixed_FOE;
V_MEMRAM0 V_MEMRAM1 _c_C2_Display_and_warning_buf V_MEMRAM2 C2_Display_and_warning;
V_MEMRAM0 V_MEMRAM1 _c_AHBC_Gradual_buf V_MEMRAM2 AHBC_Gradual;
V_MEMRAM0 V_MEMRAM1 _c_ESR_Status9_buf V_MEMRAM2 ESR_Status9;
V_MEMRAM0 V_MEMRAM1 _c_ESR_Status8_buf V_MEMRAM2 ESR_Status8;
V_MEMRAM0 V_MEMRAM1 _c_ESR_Status7_buf V_MEMRAM2 ESR_Status7;
V_MEMRAM0 V_MEMRAM1 _c_ESR_Status6_buf V_MEMRAM2 ESR_Status6;
V_MEMRAM0 V_MEMRAM1 _c_ESR_Status5_buf V_MEMRAM2 ESR_Status5;
V_MEMRAM0 V_MEMRAM1 _c_ESR_Track64_buf V_MEMRAM2 ESR_Track64;
V_MEMRAM0 V_MEMRAM1 _c_ESR_Track63_buf V_MEMRAM2 ESR_Track63;
V_MEMRAM0 V_MEMRAM1 _c_ESR_Track62_buf V_MEMRAM2 ESR_Track62;
V_MEMRAM0 V_MEMRAM1 _c_ESR_Track61_buf V_MEMRAM2 ESR_Track61;
V_MEMRAM0 V_MEMRAM1 _c_ESR_Track60_buf V_MEMRAM2 ESR_Track60;
V_MEMRAM0 V_MEMRAM1 _c_ESR_Track59_buf V_MEMRAM2 ESR_Track59;
V_MEMRAM0 V_MEMRAM1 _c_ESR_Track58_buf V_MEMRAM2 ESR_Track58;
V_MEMRAM0 V_MEMRAM1 _c_ESR_Track57_buf V_MEMRAM2 ESR_Track57;
V_MEMRAM0 V_MEMRAM1 _c_ESR_Track56_buf V_MEMRAM2 ESR_Track56;
V_MEMRAM0 V_MEMRAM1 _c_ESR_Track55_buf V_MEMRAM2 ESR_Track55;
V_MEMRAM0 V_MEMRAM1 _c_ESR_Track54_buf V_MEMRAM2 ESR_Track54;
V_MEMRAM0 V_MEMRAM1 _c_ESR_Track53_buf V_MEMRAM2 ESR_Track53;
V_MEMRAM0 V_MEMRAM1 _c_ESR_Track52_buf V_MEMRAM2 ESR_Track52;
V_MEMRAM0 V_MEMRAM1 _c_ESR_Track51_buf V_MEMRAM2 ESR_Track51;
V_MEMRAM0 V_MEMRAM1 _c_ESR_Track50_buf V_MEMRAM2 ESR_Track50;
V_MEMRAM0 V_MEMRAM1 _c_ESR_Track49_buf V_MEMRAM2 ESR_Track49;
V_MEMRAM0 V_MEMRAM1 _c_ESR_Track48_buf V_MEMRAM2 ESR_Track48;
V_MEMRAM0 V_MEMRAM1 _c_ESR_Track47_buf V_MEMRAM2 ESR_Track47;
V_MEMRAM0 V_MEMRAM1 _c_ESR_Track46_buf V_MEMRAM2 ESR_Track46;
V_MEMRAM0 V_MEMRAM1 _c_ESR_Track45_buf V_MEMRAM2 ESR_Track45;
V_MEMRAM0 V_MEMRAM1 _c_ESR_Track44_buf V_MEMRAM2 ESR_Track44;
V_MEMRAM0 V_MEMRAM1 _c_ESR_Track43_buf V_MEMRAM2 ESR_Track43;
V_MEMRAM0 V_MEMRAM1 _c_ESR_Track42_buf V_MEMRAM2 ESR_Track42;
V_MEMRAM0 V_MEMRAM1 _c_ESR_Track41_buf V_MEMRAM2 ESR_Track41;
V_MEMRAM0 V_MEMRAM1 _c_ESR_Track40_buf V_MEMRAM2 ESR_Track40;
V_MEMRAM0 V_MEMRAM1 _c_ESR_Track39_buf V_MEMRAM2 ESR_Track39;
V_MEMRAM0 V_MEMRAM1 _c_ESR_Track38_buf V_MEMRAM2 ESR_Track38;
V_MEMRAM0 V_MEMRAM1 _c_ESR_Track37_buf V_MEMRAM2 ESR_Track37;
V_MEMRAM0 V_MEMRAM1 _c_ESR_Track36_buf V_MEMRAM2 ESR_Track36;
V_MEMRAM0 V_MEMRAM1 _c_ESR_Track35_buf V_MEMRAM2 ESR_Track35;
V_MEMRAM0 V_MEMRAM1 _c_ESR_Track34_buf V_MEMRAM2 ESR_Track34;
V_MEMRAM0 V_MEMRAM1 _c_ESR_Track33_buf V_MEMRAM2 ESR_Track33;
V_MEMRAM0 V_MEMRAM1 _c_ESR_Track32_buf V_MEMRAM2 ESR_Track32;
V_MEMRAM0 V_MEMRAM1 _c_ESR_Track31_buf V_MEMRAM2 ESR_Track31;
V_MEMRAM0 V_MEMRAM1 _c_ESR_Track30_buf V_MEMRAM2 ESR_Track30;
V_MEMRAM0 V_MEMRAM1 _c_ESR_Track29_buf V_MEMRAM2 ESR_Track29;
V_MEMRAM0 V_MEMRAM1 _c_ESR_Track28_buf V_MEMRAM2 ESR_Track28;
V_MEMRAM0 V_MEMRAM1 _c_ESR_Track27_buf V_MEMRAM2 ESR_Track27;
V_MEMRAM0 V_MEMRAM1 _c_ESR_Track26_buf V_MEMRAM2 ESR_Track26;
V_MEMRAM0 V_MEMRAM1 _c_ESR_Track25_buf V_MEMRAM2 ESR_Track25;
V_MEMRAM0 V_MEMRAM1 _c_ESR_Track24_buf V_MEMRAM2 ESR_Track24;
V_MEMRAM0 V_MEMRAM1 _c_ESR_Track23_buf V_MEMRAM2 ESR_Track23;
V_MEMRAM0 V_MEMRAM1 _c_ESR_Track22_buf V_MEMRAM2 ESR_Track22;
V_MEMRAM0 V_MEMRAM1 _c_ESR_Track21_buf V_MEMRAM2 ESR_Track21;
V_MEMRAM0 V_MEMRAM1 _c_ESR_Track20_buf V_MEMRAM2 ESR_Track20;
V_MEMRAM0 V_MEMRAM1 _c_ESR_Track19_buf V_MEMRAM2 ESR_Track19;
V_MEMRAM0 V_MEMRAM1 _c_ESR_Track18_buf V_MEMRAM2 ESR_Track18;
V_MEMRAM0 V_MEMRAM1 _c_ESR_Track17_buf V_MEMRAM2 ESR_Track17;
V_MEMRAM0 V_MEMRAM1 _c_ESR_Track16_buf V_MEMRAM2 ESR_Track16;
V_MEMRAM0 V_MEMRAM1 _c_ESR_Track15_buf V_MEMRAM2 ESR_Track15;
V_MEMRAM0 V_MEMRAM1 _c_ESR_Track14_buf V_MEMRAM2 ESR_Track14;
V_MEMRAM0 V_MEMRAM1 _c_ESR_Track13_buf V_MEMRAM2 ESR_Track13;
V_MEMRAM0 V_MEMRAM1 _c_ESR_Track12_buf V_MEMRAM2 ESR_Track12;
V_MEMRAM0 V_MEMRAM1 _c_ESR_Track11_buf V_MEMRAM2 ESR_Track11;
V_MEMRAM0 V_MEMRAM1 _c_ESR_Track10_buf V_MEMRAM2 ESR_Track10;
V_MEMRAM0 V_MEMRAM1 _c_ESR_Track09_buf V_MEMRAM2 ESR_Track09;
V_MEMRAM0 V_MEMRAM1 _c_ESR_Track08_buf V_MEMRAM2 ESR_Track08;
V_MEMRAM0 V_MEMRAM1 _c_ESR_Track07_buf V_MEMRAM2 ESR_Track07;
V_MEMRAM0 V_MEMRAM1 _c_ESR_Track06_buf V_MEMRAM2 ESR_Track06;
V_MEMRAM0 V_MEMRAM1 _c_ESR_Track05_buf V_MEMRAM2 ESR_Track05;
V_MEMRAM0 V_MEMRAM1 _c_ESR_Track04_buf V_MEMRAM2 ESR_Track04;
V_MEMRAM0 V_MEMRAM1 _c_ESR_Track03_buf V_MEMRAM2 ESR_Track03;
V_MEMRAM0 V_MEMRAM1 _c_ESR_Track02_buf V_MEMRAM2 ESR_Track02;
V_MEMRAM0 V_MEMRAM1 _c_ESR_Track01_buf V_MEMRAM2 ESR_Track01;
V_MEMRAM0 V_MEMRAM1 _c_ESR_Status4_buf V_MEMRAM2 ESR_Status4;
V_MEMRAM0 V_MEMRAM1 _c_ESR_Status3_buf V_MEMRAM2 ESR_Status3;
V_MEMRAM0 V_MEMRAM1 _c_ESR_Status2_buf V_MEMRAM2 ESR_Status2;
/* PRQA  L:QAC_Can_0759 */

/* RAM CATEGORY 2 END */





/* begin Fileversion check */
#ifndef SKIP_MAGIC_NUMBER
#ifdef MAGIC_NUMBER
  #if MAGIC_NUMBER != 297367898
      #error "The magic number of the generated file <D:\code\McuCode\GENy-IL-interfaceGenerator\tools\Geny\drv_par.c> is different. Please check time and date of generated files!"
  #endif
#else
  #error "The magic number is not defined in the generated file <D:\code\McuCode\GENy-IL-interfaceGenerator\tools\Geny\drv_par.c> "

#endif  /* MAGIC_NUMBER */
#endif  /* SKIP_MAGIC_NUMBER */

/* end Fileversion check */

