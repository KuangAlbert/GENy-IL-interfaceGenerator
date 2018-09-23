/* -----------------------------------------------------------------------------
  Filename:    can_par.h
  Description: Toolversion: 02.03.18.01.80.00.17.01.00.00
               
               Serial Number: CBD1800017
               Customer Info: Huizhou Desay SV Automotive Co., Ltd.
                              Package: CBD_Vector_SLP2
                              Micro: TDA2XXHG
                              Compiler: Texas Instruments 16.9.2
               
               
               Generator Fwk   : GENy 
               Generator Module: DrvCan__base
               
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

#if !defined(__CAN_PAR_H__)
#define __CAN_PAR_H__

#include "can_cfg.h"
#include "v_inc.h"
#include "drv_par.h"

/* -----------------------------------------------------------------------------
    &&&~ Extern declarations of callback functions
 ----------------------------------------------------------------------------- */

#if defined(C_MULTIPLE_RECEIVE_CHANNEL) || defined(C_SINGLE_RECEIVE_CHANNEL)
#endif




/* -----------------------------------------------------------------------------
    &&&~ Handles of send objects
 ----------------------------------------------------------------------------- */

#define CanTxTSR_message_G                   0
#define CanTxNext_lane_Right_P               1
#define CanTxNext_lane_Right_O               2
#define CanTxNext_lane_Left_N                3
#define CanTxNext_lane_Left_M                4
#define CanTxNext_lane_Right_L               5
#define CanTxNext_lane_Right_K               6
#define CanTxNext_lane_Left_J                7
#define CanTxNext_lane_Left_I                8
#define CanTxNext_lane_Right_H               9
#define CanTxNext_lane_Right_G               10
#define CanTxNext_lane_Left_F                11
#define CanTxNext_lane_Left_E                12
#define CanTxNext_lane_Right_D               13
#define CanTxNext_lane_Right_C               14
#define CanTxNext_lane_Left_B                15
#define CanTxNext_lane_Left_A                16
#define CanTxNumebr_of_next_lane             17
#define CanTxReference_points                18
#define CanTxLKA_right_lane_B                19
#define CanTxLKA_right_lane_A                20
#define CanTxLKA_left_lane_B                 21
#define CanTxLKA_left_lane_A                 22
#define CanTxCar_Info                        23
#define CanTxObstacle_Data_X                 24
#define CanTxObstacle_Data_W                 25
#define CanTxObstacle_Data_V                 26
#define CanTxObstacle_Data_U                 27
#define CanTxObstacle_Data_T                 28
#define CanTxObstacle_Data_S                 29
#define CanTxObstacle_Data_R                 30
#define CanTxObstacle_Data_Q                 31
#define CanTxObstacle_Data_P                 32
#define CanTxObstacle_Data_O                 33
#define CanTxObstacle_Data_N                 34
#define CanTxObstacle_Data_M                 35
#define CanTxObstacle_Data_L                 36
#define CanTxObstacle_Data_K                 37
#define CanTxObstacle_Data_J                 38
#define CanTxObstacle_Data_I                 39
#define CanTxObstacle_Data_H                 40
#define CanTxObstacle_Data_G                 41
#define CanTxObstacle_Data_F                 42
#define CanTxObstacle_Data_E                 43
#define CanTxObstacle_Data_D                 44
#define CanTxObstacle_Data_C                 45
#define CanTxObstacle_Data_B                 46
#define CanTxObstacle_Data_A                 47
#define CanTxObstacle_Status                 48
#define CanTxLane                            49
#define CanTxAHBC_Gradual                    50
#define CanTxAHBC_high_low_beam              51
#define CanTxSign_Type                       52
#define CanTxTSR_message_F                   53
#define CanTxTSR_message_E                   54
#define CanTxTSR_message_D                   55
#define CanTxTSR_message_C                   56
#define CanTxTSR_message_B                   57
#define CanTxTSR_message_A                   58
#define CanTxC2_Display_and_warning          59
#define CanTxDetils_Lane                     60
#define CanTxFixed_FOE                       61


/* -----------------------------------------------------------------------------
    &&&~ Access to confirmation flags
 ----------------------------------------------------------------------------- */

#define TSR_message_G_conf_b                 (CanConfirmationFlags.w[0].b0)
#define CanWriteSyncTSR_message_G_conf_b(x) \
{ \
  CanStartFlagWriteSync(); \
  TSR_message_G_conf_b = (x); \
  CanEndFlagWriteSync(); \
}
#define Next_lane_Right_P_conf_b             (CanConfirmationFlags.w[0].b1)
#define CanWriteSyncNext_lane_Right_P_conf_b(x) \
{ \
  CanStartFlagWriteSync(); \
  Next_lane_Right_P_conf_b = (x); \
  CanEndFlagWriteSync(); \
}
#define Next_lane_Right_O_conf_b             (CanConfirmationFlags.w[0].b2)
#define CanWriteSyncNext_lane_Right_O_conf_b(x) \
{ \
  CanStartFlagWriteSync(); \
  Next_lane_Right_O_conf_b = (x); \
  CanEndFlagWriteSync(); \
}
#define Next_lane_Left_N_conf_b              (CanConfirmationFlags.w[0].b3)
#define CanWriteSyncNext_lane_Left_N_conf_b(x) \
{ \
  CanStartFlagWriteSync(); \
  Next_lane_Left_N_conf_b = (x); \
  CanEndFlagWriteSync(); \
}
#define Next_lane_Left_M_conf_b              (CanConfirmationFlags.w[0].b4)
#define CanWriteSyncNext_lane_Left_M_conf_b(x) \
{ \
  CanStartFlagWriteSync(); \
  Next_lane_Left_M_conf_b = (x); \
  CanEndFlagWriteSync(); \
}
#define Next_lane_Right_L_conf_b             (CanConfirmationFlags.w[0].b5)
#define CanWriteSyncNext_lane_Right_L_conf_b(x) \
{ \
  CanStartFlagWriteSync(); \
  Next_lane_Right_L_conf_b = (x); \
  CanEndFlagWriteSync(); \
}
#define Next_lane_Right_K_conf_b             (CanConfirmationFlags.w[0].b6)
#define CanWriteSyncNext_lane_Right_K_conf_b(x) \
{ \
  CanStartFlagWriteSync(); \
  Next_lane_Right_K_conf_b = (x); \
  CanEndFlagWriteSync(); \
}
#define Next_lane_Left_J_conf_b              (CanConfirmationFlags.w[0].b7)
#define CanWriteSyncNext_lane_Left_J_conf_b(x) \
{ \
  CanStartFlagWriteSync(); \
  Next_lane_Left_J_conf_b = (x); \
  CanEndFlagWriteSync(); \
}
#define Next_lane_Left_I_conf_b              (CanConfirmationFlags.w[0].b10)
#define CanWriteSyncNext_lane_Left_I_conf_b(x) \
{ \
  CanStartFlagWriteSync(); \
  Next_lane_Left_I_conf_b = (x); \
  CanEndFlagWriteSync(); \
}
#define Next_lane_Right_H_conf_b             (CanConfirmationFlags.w[0].b11)
#define CanWriteSyncNext_lane_Right_H_conf_b(x) \
{ \
  CanStartFlagWriteSync(); \
  Next_lane_Right_H_conf_b = (x); \
  CanEndFlagWriteSync(); \
}
#define Next_lane_Right_G_conf_b             (CanConfirmationFlags.w[0].b12)
#define CanWriteSyncNext_lane_Right_G_conf_b(x) \
{ \
  CanStartFlagWriteSync(); \
  Next_lane_Right_G_conf_b = (x); \
  CanEndFlagWriteSync(); \
}
#define Next_lane_Left_F_conf_b              (CanConfirmationFlags.w[0].b13)
#define CanWriteSyncNext_lane_Left_F_conf_b(x) \
{ \
  CanStartFlagWriteSync(); \
  Next_lane_Left_F_conf_b = (x); \
  CanEndFlagWriteSync(); \
}
#define Next_lane_Left_E_conf_b              (CanConfirmationFlags.w[0].b14)
#define CanWriteSyncNext_lane_Left_E_conf_b(x) \
{ \
  CanStartFlagWriteSync(); \
  Next_lane_Left_E_conf_b = (x); \
  CanEndFlagWriteSync(); \
}
#define Next_lane_Right_D_conf_b             (CanConfirmationFlags.w[0].b15)
#define CanWriteSyncNext_lane_Right_D_conf_b(x) \
{ \
  CanStartFlagWriteSync(); \
  Next_lane_Right_D_conf_b = (x); \
  CanEndFlagWriteSync(); \
}
#define Next_lane_Right_C_conf_b             (CanConfirmationFlags.w[0].b16)
#define CanWriteSyncNext_lane_Right_C_conf_b(x) \
{ \
  CanStartFlagWriteSync(); \
  Next_lane_Right_C_conf_b = (x); \
  CanEndFlagWriteSync(); \
}
#define Next_lane_Left_B_conf_b              (CanConfirmationFlags.w[0].b17)
#define CanWriteSyncNext_lane_Left_B_conf_b(x) \
{ \
  CanStartFlagWriteSync(); \
  Next_lane_Left_B_conf_b = (x); \
  CanEndFlagWriteSync(); \
}
#define Next_lane_Left_A_conf_b              (CanConfirmationFlags.w[0].b20)
#define CanWriteSyncNext_lane_Left_A_conf_b(x) \
{ \
  CanStartFlagWriteSync(); \
  Next_lane_Left_A_conf_b = (x); \
  CanEndFlagWriteSync(); \
}
#define Numebr_of_next_lane_conf_b           (CanConfirmationFlags.w[0].b21)
#define CanWriteSyncNumebr_of_next_lane_conf_b(x) \
{ \
  CanStartFlagWriteSync(); \
  Numebr_of_next_lane_conf_b = (x); \
  CanEndFlagWriteSync(); \
}
#define Reference_points_conf_b              (CanConfirmationFlags.w[0].b22)
#define CanWriteSyncReference_points_conf_b(x) \
{ \
  CanStartFlagWriteSync(); \
  Reference_points_conf_b = (x); \
  CanEndFlagWriteSync(); \
}
#define LKA_right_lane_B_conf_b              (CanConfirmationFlags.w[0].b23)
#define CanWriteSyncLKA_right_lane_B_conf_b(x) \
{ \
  CanStartFlagWriteSync(); \
  LKA_right_lane_B_conf_b = (x); \
  CanEndFlagWriteSync(); \
}
#define LKA_right_lane_A_conf_b              (CanConfirmationFlags.w[0].b24)
#define CanWriteSyncLKA_right_lane_A_conf_b(x) \
{ \
  CanStartFlagWriteSync(); \
  LKA_right_lane_A_conf_b = (x); \
  CanEndFlagWriteSync(); \
}
#define LKA_left_lane_B_conf_b               (CanConfirmationFlags.w[0].b25)
#define CanWriteSyncLKA_left_lane_B_conf_b(x) \
{ \
  CanStartFlagWriteSync(); \
  LKA_left_lane_B_conf_b = (x); \
  CanEndFlagWriteSync(); \
}
#define LKA_left_lane_A_conf_b               (CanConfirmationFlags.w[0].b26)
#define CanWriteSyncLKA_left_lane_A_conf_b(x) \
{ \
  CanStartFlagWriteSync(); \
  LKA_left_lane_A_conf_b = (x); \
  CanEndFlagWriteSync(); \
}
#define Car_Info_conf_b                      (CanConfirmationFlags.w[0].b27)
#define CanWriteSyncCar_Info_conf_b(x) \
{ \
  CanStartFlagWriteSync(); \
  Car_Info_conf_b = (x); \
  CanEndFlagWriteSync(); \
}
#define Obstacle_Data_X_conf_b               (CanConfirmationFlags.w[0].b30)
#define CanWriteSyncObstacle_Data_X_conf_b(x) \
{ \
  CanStartFlagWriteSync(); \
  Obstacle_Data_X_conf_b = (x); \
  CanEndFlagWriteSync(); \
}
#define Obstacle_Data_W_conf_b               (CanConfirmationFlags.w[0].b31)
#define CanWriteSyncObstacle_Data_W_conf_b(x) \
{ \
  CanStartFlagWriteSync(); \
  Obstacle_Data_W_conf_b = (x); \
  CanEndFlagWriteSync(); \
}
#define Obstacle_Data_V_conf_b               (CanConfirmationFlags.w[0].b32)
#define CanWriteSyncObstacle_Data_V_conf_b(x) \
{ \
  CanStartFlagWriteSync(); \
  Obstacle_Data_V_conf_b = (x); \
  CanEndFlagWriteSync(); \
}
#define Obstacle_Data_U_conf_b               (CanConfirmationFlags.w[0].b33)
#define CanWriteSyncObstacle_Data_U_conf_b(x) \
{ \
  CanStartFlagWriteSync(); \
  Obstacle_Data_U_conf_b = (x); \
  CanEndFlagWriteSync(); \
}
#define Obstacle_Data_T_conf_b               (CanConfirmationFlags.w[0].b34)
#define CanWriteSyncObstacle_Data_T_conf_b(x) \
{ \
  CanStartFlagWriteSync(); \
  Obstacle_Data_T_conf_b = (x); \
  CanEndFlagWriteSync(); \
}
#define Obstacle_Data_S_conf_b               (CanConfirmationFlags.w[0].b35)
#define CanWriteSyncObstacle_Data_S_conf_b(x) \
{ \
  CanStartFlagWriteSync(); \
  Obstacle_Data_S_conf_b = (x); \
  CanEndFlagWriteSync(); \
}
#define Obstacle_Data_R_conf_b               (CanConfirmationFlags.w[0].b36)
#define CanWriteSyncObstacle_Data_R_conf_b(x) \
{ \
  CanStartFlagWriteSync(); \
  Obstacle_Data_R_conf_b = (x); \
  CanEndFlagWriteSync(); \
}
#define Obstacle_Data_Q_conf_b               (CanConfirmationFlags.w[0].b37)
#define CanWriteSyncObstacle_Data_Q_conf_b(x) \
{ \
  CanStartFlagWriteSync(); \
  Obstacle_Data_Q_conf_b = (x); \
  CanEndFlagWriteSync(); \
}
#define Obstacle_Data_P_conf_b               (CanConfirmationFlags.w[1].b0)
#define CanWriteSyncObstacle_Data_P_conf_b(x) \
{ \
  CanStartFlagWriteSync(); \
  Obstacle_Data_P_conf_b = (x); \
  CanEndFlagWriteSync(); \
}
#define Obstacle_Data_O_conf_b               (CanConfirmationFlags.w[1].b1)
#define CanWriteSyncObstacle_Data_O_conf_b(x) \
{ \
  CanStartFlagWriteSync(); \
  Obstacle_Data_O_conf_b = (x); \
  CanEndFlagWriteSync(); \
}
#define Obstacle_Data_N_conf_b               (CanConfirmationFlags.w[1].b2)
#define CanWriteSyncObstacle_Data_N_conf_b(x) \
{ \
  CanStartFlagWriteSync(); \
  Obstacle_Data_N_conf_b = (x); \
  CanEndFlagWriteSync(); \
}
#define Obstacle_Data_M_conf_b               (CanConfirmationFlags.w[1].b3)
#define CanWriteSyncObstacle_Data_M_conf_b(x) \
{ \
  CanStartFlagWriteSync(); \
  Obstacle_Data_M_conf_b = (x); \
  CanEndFlagWriteSync(); \
}
#define Obstacle_Data_L_conf_b               (CanConfirmationFlags.w[1].b4)
#define CanWriteSyncObstacle_Data_L_conf_b(x) \
{ \
  CanStartFlagWriteSync(); \
  Obstacle_Data_L_conf_b = (x); \
  CanEndFlagWriteSync(); \
}
#define Obstacle_Data_K_conf_b               (CanConfirmationFlags.w[1].b5)
#define CanWriteSyncObstacle_Data_K_conf_b(x) \
{ \
  CanStartFlagWriteSync(); \
  Obstacle_Data_K_conf_b = (x); \
  CanEndFlagWriteSync(); \
}
#define Obstacle_Data_J_conf_b               (CanConfirmationFlags.w[1].b6)
#define CanWriteSyncObstacle_Data_J_conf_b(x) \
{ \
  CanStartFlagWriteSync(); \
  Obstacle_Data_J_conf_b = (x); \
  CanEndFlagWriteSync(); \
}
#define Obstacle_Data_I_conf_b               (CanConfirmationFlags.w[1].b7)
#define CanWriteSyncObstacle_Data_I_conf_b(x) \
{ \
  CanStartFlagWriteSync(); \
  Obstacle_Data_I_conf_b = (x); \
  CanEndFlagWriteSync(); \
}
#define Obstacle_Data_H_conf_b               (CanConfirmationFlags.w[1].b10)
#define CanWriteSyncObstacle_Data_H_conf_b(x) \
{ \
  CanStartFlagWriteSync(); \
  Obstacle_Data_H_conf_b = (x); \
  CanEndFlagWriteSync(); \
}
#define Obstacle_Data_G_conf_b               (CanConfirmationFlags.w[1].b11)
#define CanWriteSyncObstacle_Data_G_conf_b(x) \
{ \
  CanStartFlagWriteSync(); \
  Obstacle_Data_G_conf_b = (x); \
  CanEndFlagWriteSync(); \
}
#define Obstacle_Data_F_conf_b               (CanConfirmationFlags.w[1].b12)
#define CanWriteSyncObstacle_Data_F_conf_b(x) \
{ \
  CanStartFlagWriteSync(); \
  Obstacle_Data_F_conf_b = (x); \
  CanEndFlagWriteSync(); \
}
#define Obstacle_Data_E_conf_b               (CanConfirmationFlags.w[1].b13)
#define CanWriteSyncObstacle_Data_E_conf_b(x) \
{ \
  CanStartFlagWriteSync(); \
  Obstacle_Data_E_conf_b = (x); \
  CanEndFlagWriteSync(); \
}
#define Obstacle_Data_D_conf_b               (CanConfirmationFlags.w[1].b14)
#define CanWriteSyncObstacle_Data_D_conf_b(x) \
{ \
  CanStartFlagWriteSync(); \
  Obstacle_Data_D_conf_b = (x); \
  CanEndFlagWriteSync(); \
}
#define Obstacle_Data_C_conf_b               (CanConfirmationFlags.w[1].b15)
#define CanWriteSyncObstacle_Data_C_conf_b(x) \
{ \
  CanStartFlagWriteSync(); \
  Obstacle_Data_C_conf_b = (x); \
  CanEndFlagWriteSync(); \
}
#define Obstacle_Data_B_conf_b               (CanConfirmationFlags.w[1].b16)
#define CanWriteSyncObstacle_Data_B_conf_b(x) \
{ \
  CanStartFlagWriteSync(); \
  Obstacle_Data_B_conf_b = (x); \
  CanEndFlagWriteSync(); \
}
#define Obstacle_Data_A_conf_b               (CanConfirmationFlags.w[1].b17)
#define CanWriteSyncObstacle_Data_A_conf_b(x) \
{ \
  CanStartFlagWriteSync(); \
  Obstacle_Data_A_conf_b = (x); \
  CanEndFlagWriteSync(); \
}
#define Obstacle_Status_conf_b               (CanConfirmationFlags.w[1].b20)
#define CanWriteSyncObstacle_Status_conf_b(x) \
{ \
  CanStartFlagWriteSync(); \
  Obstacle_Status_conf_b = (x); \
  CanEndFlagWriteSync(); \
}
#define Lane_conf_b                          (CanConfirmationFlags.w[1].b21)
#define CanWriteSyncLane_conf_b(x) \
{ \
  CanStartFlagWriteSync(); \
  Lane_conf_b = (x); \
  CanEndFlagWriteSync(); \
}
#define AHBC_Gradual_conf_b                  (CanConfirmationFlags.w[1].b22)
#define CanWriteSyncAHBC_Gradual_conf_b(x) \
{ \
  CanStartFlagWriteSync(); \
  AHBC_Gradual_conf_b = (x); \
  CanEndFlagWriteSync(); \
}
#define AHBC_high_low_beam_conf_b            (CanConfirmationFlags.w[1].b23)
#define CanWriteSyncAHBC_high_low_beam_conf_b(x) \
{ \
  CanStartFlagWriteSync(); \
  AHBC_high_low_beam_conf_b = (x); \
  CanEndFlagWriteSync(); \
}
#define Sign_Type_conf_b                     (CanConfirmationFlags.w[1].b24)
#define CanWriteSyncSign_Type_conf_b(x) \
{ \
  CanStartFlagWriteSync(); \
  Sign_Type_conf_b = (x); \
  CanEndFlagWriteSync(); \
}
#define TSR_message_F_conf_b                 (CanConfirmationFlags.w[1].b25)
#define CanWriteSyncTSR_message_F_conf_b(x) \
{ \
  CanStartFlagWriteSync(); \
  TSR_message_F_conf_b = (x); \
  CanEndFlagWriteSync(); \
}
#define TSR_message_E_conf_b                 (CanConfirmationFlags.w[1].b26)
#define CanWriteSyncTSR_message_E_conf_b(x) \
{ \
  CanStartFlagWriteSync(); \
  TSR_message_E_conf_b = (x); \
  CanEndFlagWriteSync(); \
}
#define TSR_message_D_conf_b                 (CanConfirmationFlags.w[1].b27)
#define CanWriteSyncTSR_message_D_conf_b(x) \
{ \
  CanStartFlagWriteSync(); \
  TSR_message_D_conf_b = (x); \
  CanEndFlagWriteSync(); \
}
#define TSR_message_C_conf_b                 (CanConfirmationFlags.w[1].b30)
#define CanWriteSyncTSR_message_C_conf_b(x) \
{ \
  CanStartFlagWriteSync(); \
  TSR_message_C_conf_b = (x); \
  CanEndFlagWriteSync(); \
}
#define TSR_message_B_conf_b                 (CanConfirmationFlags.w[1].b31)
#define CanWriteSyncTSR_message_B_conf_b(x) \
{ \
  CanStartFlagWriteSync(); \
  TSR_message_B_conf_b = (x); \
  CanEndFlagWriteSync(); \
}
#define TSR_message_A_conf_b                 (CanConfirmationFlags.w[1].b32)
#define CanWriteSyncTSR_message_A_conf_b(x) \
{ \
  CanStartFlagWriteSync(); \
  TSR_message_A_conf_b = (x); \
  CanEndFlagWriteSync(); \
}
#define C2_Display_and_warning_conf_b        (CanConfirmationFlags.w[1].b33)
#define CanWriteSyncC2_Display_and_warning_conf_b(x) \
{ \
  CanStartFlagWriteSync(); \
  C2_Display_and_warning_conf_b = (x); \
  CanEndFlagWriteSync(); \
}
#define Detils_Lane_conf_b                   (CanConfirmationFlags.w[1].b34)
#define CanWriteSyncDetils_Lane_conf_b(x) \
{ \
  CanStartFlagWriteSync(); \
  Detils_Lane_conf_b = (x); \
  CanEndFlagWriteSync(); \
}
#define Fixed_FOE_conf_b                     (CanConfirmationFlags.w[1].b35)
#define CanWriteSyncFixed_FOE_conf_b(x) \
{ \
  CanStartFlagWriteSync(); \
  Fixed_FOE_conf_b = (x); \
  CanEndFlagWriteSync(); \
}


/* -----------------------------------------------------------------------------
    &&&~ Handles of receive objects
 ----------------------------------------------------------------------------- */

#define CanRxESR_Status9                     0
#define CanRxESR_Status8                     1
#define CanRxESR_Status7                     2
#define CanRxESR_Status6                     3
#define CanRxESR_Status5                     4
#define CanRxESR_Track64                     5
#define CanRxESR_Track63                     6
#define CanRxESR_Track62                     7
#define CanRxESR_Track61                     8
#define CanRxESR_Track60                     9
#define CanRxESR_Track59                     10
#define CanRxESR_Track58                     11
#define CanRxESR_Track57                     12
#define CanRxESR_Track56                     13
#define CanRxESR_Track55                     14
#define CanRxESR_Track54                     15
#define CanRxESR_Track53                     16
#define CanRxESR_Track52                     17
#define CanRxESR_Track51                     18
#define CanRxESR_Track50                     19
#define CanRxESR_Track49                     20
#define CanRxESR_Track48                     21
#define CanRxESR_Track47                     22
#define CanRxESR_Track46                     23
#define CanRxESR_Track45                     24
#define CanRxESR_Track44                     25
#define CanRxESR_Track43                     26
#define CanRxESR_Track42                     27
#define CanRxESR_Track41                     28
#define CanRxESR_Track40                     29
#define CanRxESR_Track39                     30
#define CanRxESR_Track38                     31
#define CanRxESR_Track37                     32
#define CanRxESR_Track36                     33
#define CanRxESR_Track35                     34
#define CanRxESR_Track34                     35
#define CanRxESR_Track33                     36
#define CanRxESR_Track32                     37
#define CanRxESR_Track31                     38
#define CanRxESR_Track30                     39
#define CanRxESR_Track29                     40
#define CanRxESR_Track28                     41
#define CanRxESR_Track27                     42
#define CanRxESR_Track26                     43
#define CanRxESR_Track25                     44
#define CanRxESR_Track24                     45
#define CanRxESR_Track23                     46
#define CanRxESR_Track22                     47
#define CanRxESR_Track21                     48
#define CanRxESR_Track20                     49
#define CanRxESR_Track19                     50
#define CanRxESR_Track18                     51
#define CanRxESR_Track17                     52
#define CanRxESR_Track16                     53
#define CanRxESR_Track15                     54
#define CanRxESR_Track14                     55
#define CanRxESR_Track13                     56
#define CanRxESR_Track12                     57
#define CanRxESR_Track11                     58
#define CanRxESR_Track10                     59
#define CanRxESR_Track09                     60
#define CanRxESR_Track08                     61
#define CanRxESR_Track07                     62
#define CanRxESR_Track06                     63
#define CanRxESR_Track05                     64
#define CanRxESR_Track04                     65
#define CanRxESR_Track03                     66
#define CanRxESR_Track02                     67
#define CanRxESR_Track01                     68
#define CanRxESR_Status4                     69
#define CanRxESR_Status3                     70
#define CanRxESR_Status2                     71
#define CanRxESR_Status1                     72


/* -----------------------------------------------------------------------------
    &&&~ Access to data bytes of Rx messages
 ----------------------------------------------------------------------------- */

/* ID: 0x000005e8, Handle: 0, ESR_Status9 [BC] */
#define c1_ESR_Status9_c                     (ESR_Status9._c[0])
#define c2_ESR_Status9_c                     (ESR_Status9._c[1])
#define c3_ESR_Status9_c                     (ESR_Status9._c[2])
#define c4_ESR_Status9_c                     (ESR_Status9._c[3])
#define c5_ESR_Status9_c                     (ESR_Status9._c[4])
#define c6_ESR_Status9_c                     (ESR_Status9._c[5])
#define c7_ESR_Status9_c                     (ESR_Status9._c[6])
#define c8_ESR_Status9_c                     (ESR_Status9._c[7])

/* ID: 0x000005e7, Handle: 1, ESR_Status8 [BC] */
#define c1_ESR_Status8_c                     (ESR_Status8._c[0])
#define c2_ESR_Status8_c                     (ESR_Status8._c[1])
#define c3_ESR_Status8_c                     (ESR_Status8._c[2])
#define c4_ESR_Status8_c                     (ESR_Status8._c[3])
#define c5_ESR_Status8_c                     (ESR_Status8._c[4])
#define c6_ESR_Status8_c                     (ESR_Status8._c[5])
#define c7_ESR_Status8_c                     (ESR_Status8._c[6])
#define c8_ESR_Status8_c                     (ESR_Status8._c[7])

/* ID: 0x000005e6, Handle: 2, ESR_Status7 [BC] */
#define c1_ESR_Status7_c                     (ESR_Status7._c[0])
#define c2_ESR_Status7_c                     (ESR_Status7._c[1])
#define c3_ESR_Status7_c                     (ESR_Status7._c[2])
#define c4_ESR_Status7_c                     (ESR_Status7._c[3])
#define c5_ESR_Status7_c                     (ESR_Status7._c[4])
#define c6_ESR_Status7_c                     (ESR_Status7._c[5])
#define c7_ESR_Status7_c                     (ESR_Status7._c[6])
#define c8_ESR_Status7_c                     (ESR_Status7._c[7])

/* ID: 0x000005e5, Handle: 3, ESR_Status6 [BC] */
#define c1_ESR_Status6_c                     (ESR_Status6._c[0])
#define c2_ESR_Status6_c                     (ESR_Status6._c[1])
#define c3_ESR_Status6_c                     (ESR_Status6._c[2])
#define c4_ESR_Status6_c                     (ESR_Status6._c[3])
#define c5_ESR_Status6_c                     (ESR_Status6._c[4])
#define c6_ESR_Status6_c                     (ESR_Status6._c[5])
#define c7_ESR_Status6_c                     (ESR_Status6._c[6])
#define c8_ESR_Status6_c                     (ESR_Status6._c[7])

/* ID: 0x000005e4, Handle: 4, ESR_Status5 [BC] */
#define c1_ESR_Status5_c                     (ESR_Status5._c[0])
#define c2_ESR_Status5_c                     (ESR_Status5._c[1])
#define c3_ESR_Status5_c                     (ESR_Status5._c[2])
#define c4_ESR_Status5_c                     (ESR_Status5._c[3])
#define c5_ESR_Status5_c                     (ESR_Status5._c[4])
#define c6_ESR_Status5_c                     (ESR_Status5._c[5])
#define c7_ESR_Status5_c                     (ESR_Status5._c[6])
#define c8_ESR_Status5_c                     (ESR_Status5._c[7])

/* ID: 0x0000053f, Handle: 5, ESR_Track64 [BC] */
#define c1_ESR_Track64_c                     (ESR_Track64._c[0])
#define c2_ESR_Track64_c                     (ESR_Track64._c[1])
#define c3_ESR_Track64_c                     (ESR_Track64._c[2])
#define c4_ESR_Track64_c                     (ESR_Track64._c[3])
#define c5_ESR_Track64_c                     (ESR_Track64._c[4])
#define c6_ESR_Track64_c                     (ESR_Track64._c[5])
#define c7_ESR_Track64_c                     (ESR_Track64._c[6])
#define c8_ESR_Track64_c                     (ESR_Track64._c[7])

/* ID: 0x0000053e, Handle: 6, ESR_Track63 [BC] */
#define c1_ESR_Track63_c                     (ESR_Track63._c[0])
#define c2_ESR_Track63_c                     (ESR_Track63._c[1])
#define c3_ESR_Track63_c                     (ESR_Track63._c[2])
#define c4_ESR_Track63_c                     (ESR_Track63._c[3])
#define c5_ESR_Track63_c                     (ESR_Track63._c[4])
#define c6_ESR_Track63_c                     (ESR_Track63._c[5])
#define c7_ESR_Track63_c                     (ESR_Track63._c[6])
#define c8_ESR_Track63_c                     (ESR_Track63._c[7])

/* ID: 0x0000053d, Handle: 7, ESR_Track62 [BC] */
#define c1_ESR_Track62_c                     (ESR_Track62._c[0])
#define c2_ESR_Track62_c                     (ESR_Track62._c[1])
#define c3_ESR_Track62_c                     (ESR_Track62._c[2])
#define c4_ESR_Track62_c                     (ESR_Track62._c[3])
#define c5_ESR_Track62_c                     (ESR_Track62._c[4])
#define c6_ESR_Track62_c                     (ESR_Track62._c[5])
#define c7_ESR_Track62_c                     (ESR_Track62._c[6])
#define c8_ESR_Track62_c                     (ESR_Track62._c[7])

/* ID: 0x0000053c, Handle: 8, ESR_Track61 [BC] */
#define c1_ESR_Track61_c                     (ESR_Track61._c[0])
#define c2_ESR_Track61_c                     (ESR_Track61._c[1])
#define c3_ESR_Track61_c                     (ESR_Track61._c[2])
#define c4_ESR_Track61_c                     (ESR_Track61._c[3])
#define c5_ESR_Track61_c                     (ESR_Track61._c[4])
#define c6_ESR_Track61_c                     (ESR_Track61._c[5])
#define c7_ESR_Track61_c                     (ESR_Track61._c[6])
#define c8_ESR_Track61_c                     (ESR_Track61._c[7])

/* ID: 0x0000053b, Handle: 9, ESR_Track60 [BC] */
#define c1_ESR_Track60_c                     (ESR_Track60._c[0])
#define c2_ESR_Track60_c                     (ESR_Track60._c[1])
#define c3_ESR_Track60_c                     (ESR_Track60._c[2])
#define c4_ESR_Track60_c                     (ESR_Track60._c[3])
#define c5_ESR_Track60_c                     (ESR_Track60._c[4])
#define c6_ESR_Track60_c                     (ESR_Track60._c[5])
#define c7_ESR_Track60_c                     (ESR_Track60._c[6])
#define c8_ESR_Track60_c                     (ESR_Track60._c[7])

/* ID: 0x0000053a, Handle: 10, ESR_Track59 [BC] */
#define c1_ESR_Track59_c                     (ESR_Track59._c[0])
#define c2_ESR_Track59_c                     (ESR_Track59._c[1])
#define c3_ESR_Track59_c                     (ESR_Track59._c[2])
#define c4_ESR_Track59_c                     (ESR_Track59._c[3])
#define c5_ESR_Track59_c                     (ESR_Track59._c[4])
#define c6_ESR_Track59_c                     (ESR_Track59._c[5])
#define c7_ESR_Track59_c                     (ESR_Track59._c[6])
#define c8_ESR_Track59_c                     (ESR_Track59._c[7])

/* ID: 0x00000539, Handle: 11, ESR_Track58 [BC] */
#define c1_ESR_Track58_c                     (ESR_Track58._c[0])
#define c2_ESR_Track58_c                     (ESR_Track58._c[1])
#define c3_ESR_Track58_c                     (ESR_Track58._c[2])
#define c4_ESR_Track58_c                     (ESR_Track58._c[3])
#define c5_ESR_Track58_c                     (ESR_Track58._c[4])
#define c6_ESR_Track58_c                     (ESR_Track58._c[5])
#define c7_ESR_Track58_c                     (ESR_Track58._c[6])
#define c8_ESR_Track58_c                     (ESR_Track58._c[7])

/* ID: 0x00000538, Handle: 12, ESR_Track57 [BC] */
#define c1_ESR_Track57_c                     (ESR_Track57._c[0])
#define c2_ESR_Track57_c                     (ESR_Track57._c[1])
#define c3_ESR_Track57_c                     (ESR_Track57._c[2])
#define c4_ESR_Track57_c                     (ESR_Track57._c[3])
#define c5_ESR_Track57_c                     (ESR_Track57._c[4])
#define c6_ESR_Track57_c                     (ESR_Track57._c[5])
#define c7_ESR_Track57_c                     (ESR_Track57._c[6])
#define c8_ESR_Track57_c                     (ESR_Track57._c[7])

/* ID: 0x00000537, Handle: 13, ESR_Track56 [BC] */
#define c1_ESR_Track56_c                     (ESR_Track56._c[0])
#define c2_ESR_Track56_c                     (ESR_Track56._c[1])
#define c3_ESR_Track56_c                     (ESR_Track56._c[2])
#define c4_ESR_Track56_c                     (ESR_Track56._c[3])
#define c5_ESR_Track56_c                     (ESR_Track56._c[4])
#define c6_ESR_Track56_c                     (ESR_Track56._c[5])
#define c7_ESR_Track56_c                     (ESR_Track56._c[6])
#define c8_ESR_Track56_c                     (ESR_Track56._c[7])

/* ID: 0x00000536, Handle: 14, ESR_Track55 [BC] */
#define c1_ESR_Track55_c                     (ESR_Track55._c[0])
#define c2_ESR_Track55_c                     (ESR_Track55._c[1])
#define c3_ESR_Track55_c                     (ESR_Track55._c[2])
#define c4_ESR_Track55_c                     (ESR_Track55._c[3])
#define c5_ESR_Track55_c                     (ESR_Track55._c[4])
#define c6_ESR_Track55_c                     (ESR_Track55._c[5])
#define c7_ESR_Track55_c                     (ESR_Track55._c[6])
#define c8_ESR_Track55_c                     (ESR_Track55._c[7])

/* ID: 0x00000535, Handle: 15, ESR_Track54 [BC] */
#define c1_ESR_Track54_c                     (ESR_Track54._c[0])
#define c2_ESR_Track54_c                     (ESR_Track54._c[1])
#define c3_ESR_Track54_c                     (ESR_Track54._c[2])
#define c4_ESR_Track54_c                     (ESR_Track54._c[3])
#define c5_ESR_Track54_c                     (ESR_Track54._c[4])
#define c6_ESR_Track54_c                     (ESR_Track54._c[5])
#define c7_ESR_Track54_c                     (ESR_Track54._c[6])
#define c8_ESR_Track54_c                     (ESR_Track54._c[7])

/* ID: 0x00000534, Handle: 16, ESR_Track53 [BC] */
#define c1_ESR_Track53_c                     (ESR_Track53._c[0])
#define c2_ESR_Track53_c                     (ESR_Track53._c[1])
#define c3_ESR_Track53_c                     (ESR_Track53._c[2])
#define c4_ESR_Track53_c                     (ESR_Track53._c[3])
#define c5_ESR_Track53_c                     (ESR_Track53._c[4])
#define c6_ESR_Track53_c                     (ESR_Track53._c[5])
#define c7_ESR_Track53_c                     (ESR_Track53._c[6])
#define c8_ESR_Track53_c                     (ESR_Track53._c[7])

/* ID: 0x00000533, Handle: 17, ESR_Track52 [BC] */
#define c1_ESR_Track52_c                     (ESR_Track52._c[0])
#define c2_ESR_Track52_c                     (ESR_Track52._c[1])
#define c3_ESR_Track52_c                     (ESR_Track52._c[2])
#define c4_ESR_Track52_c                     (ESR_Track52._c[3])
#define c5_ESR_Track52_c                     (ESR_Track52._c[4])
#define c6_ESR_Track52_c                     (ESR_Track52._c[5])
#define c7_ESR_Track52_c                     (ESR_Track52._c[6])
#define c8_ESR_Track52_c                     (ESR_Track52._c[7])

/* ID: 0x00000532, Handle: 18, ESR_Track51 [BC] */
#define c1_ESR_Track51_c                     (ESR_Track51._c[0])
#define c2_ESR_Track51_c                     (ESR_Track51._c[1])
#define c3_ESR_Track51_c                     (ESR_Track51._c[2])
#define c4_ESR_Track51_c                     (ESR_Track51._c[3])
#define c5_ESR_Track51_c                     (ESR_Track51._c[4])
#define c6_ESR_Track51_c                     (ESR_Track51._c[5])
#define c7_ESR_Track51_c                     (ESR_Track51._c[6])
#define c8_ESR_Track51_c                     (ESR_Track51._c[7])

/* ID: 0x00000531, Handle: 19, ESR_Track50 [BC] */
#define c1_ESR_Track50_c                     (ESR_Track50._c[0])
#define c2_ESR_Track50_c                     (ESR_Track50._c[1])
#define c3_ESR_Track50_c                     (ESR_Track50._c[2])
#define c4_ESR_Track50_c                     (ESR_Track50._c[3])
#define c5_ESR_Track50_c                     (ESR_Track50._c[4])
#define c6_ESR_Track50_c                     (ESR_Track50._c[5])
#define c7_ESR_Track50_c                     (ESR_Track50._c[6])
#define c8_ESR_Track50_c                     (ESR_Track50._c[7])

/* ID: 0x00000530, Handle: 20, ESR_Track49 [BC] */
#define c1_ESR_Track49_c                     (ESR_Track49._c[0])
#define c2_ESR_Track49_c                     (ESR_Track49._c[1])
#define c3_ESR_Track49_c                     (ESR_Track49._c[2])
#define c4_ESR_Track49_c                     (ESR_Track49._c[3])
#define c5_ESR_Track49_c                     (ESR_Track49._c[4])
#define c6_ESR_Track49_c                     (ESR_Track49._c[5])
#define c7_ESR_Track49_c                     (ESR_Track49._c[6])
#define c8_ESR_Track49_c                     (ESR_Track49._c[7])

/* ID: 0x0000052f, Handle: 21, ESR_Track48 [BC] */
#define c1_ESR_Track48_c                     (ESR_Track48._c[0])
#define c2_ESR_Track48_c                     (ESR_Track48._c[1])
#define c3_ESR_Track48_c                     (ESR_Track48._c[2])
#define c4_ESR_Track48_c                     (ESR_Track48._c[3])
#define c5_ESR_Track48_c                     (ESR_Track48._c[4])
#define c6_ESR_Track48_c                     (ESR_Track48._c[5])
#define c7_ESR_Track48_c                     (ESR_Track48._c[6])
#define c8_ESR_Track48_c                     (ESR_Track48._c[7])

/* ID: 0x0000052e, Handle: 22, ESR_Track47 [BC] */
#define c1_ESR_Track47_c                     (ESR_Track47._c[0])
#define c2_ESR_Track47_c                     (ESR_Track47._c[1])
#define c3_ESR_Track47_c                     (ESR_Track47._c[2])
#define c4_ESR_Track47_c                     (ESR_Track47._c[3])
#define c5_ESR_Track47_c                     (ESR_Track47._c[4])
#define c6_ESR_Track47_c                     (ESR_Track47._c[5])
#define c7_ESR_Track47_c                     (ESR_Track47._c[6])
#define c8_ESR_Track47_c                     (ESR_Track47._c[7])

/* ID: 0x0000052d, Handle: 23, ESR_Track46 [BC] */
#define c1_ESR_Track46_c                     (ESR_Track46._c[0])
#define c2_ESR_Track46_c                     (ESR_Track46._c[1])
#define c3_ESR_Track46_c                     (ESR_Track46._c[2])
#define c4_ESR_Track46_c                     (ESR_Track46._c[3])
#define c5_ESR_Track46_c                     (ESR_Track46._c[4])
#define c6_ESR_Track46_c                     (ESR_Track46._c[5])
#define c7_ESR_Track46_c                     (ESR_Track46._c[6])
#define c8_ESR_Track46_c                     (ESR_Track46._c[7])

/* ID: 0x0000052c, Handle: 24, ESR_Track45 [BC] */
#define c1_ESR_Track45_c                     (ESR_Track45._c[0])
#define c2_ESR_Track45_c                     (ESR_Track45._c[1])
#define c3_ESR_Track45_c                     (ESR_Track45._c[2])
#define c4_ESR_Track45_c                     (ESR_Track45._c[3])
#define c5_ESR_Track45_c                     (ESR_Track45._c[4])
#define c6_ESR_Track45_c                     (ESR_Track45._c[5])
#define c7_ESR_Track45_c                     (ESR_Track45._c[6])
#define c8_ESR_Track45_c                     (ESR_Track45._c[7])

/* ID: 0x0000052b, Handle: 25, ESR_Track44 [BC] */
#define c1_ESR_Track44_c                     (ESR_Track44._c[0])
#define c2_ESR_Track44_c                     (ESR_Track44._c[1])
#define c3_ESR_Track44_c                     (ESR_Track44._c[2])
#define c4_ESR_Track44_c                     (ESR_Track44._c[3])
#define c5_ESR_Track44_c                     (ESR_Track44._c[4])
#define c6_ESR_Track44_c                     (ESR_Track44._c[5])
#define c7_ESR_Track44_c                     (ESR_Track44._c[6])
#define c8_ESR_Track44_c                     (ESR_Track44._c[7])

/* ID: 0x0000052a, Handle: 26, ESR_Track43 [BC] */
#define c1_ESR_Track43_c                     (ESR_Track43._c[0])
#define c2_ESR_Track43_c                     (ESR_Track43._c[1])
#define c3_ESR_Track43_c                     (ESR_Track43._c[2])
#define c4_ESR_Track43_c                     (ESR_Track43._c[3])
#define c5_ESR_Track43_c                     (ESR_Track43._c[4])
#define c6_ESR_Track43_c                     (ESR_Track43._c[5])
#define c7_ESR_Track43_c                     (ESR_Track43._c[6])
#define c8_ESR_Track43_c                     (ESR_Track43._c[7])

/* ID: 0x00000529, Handle: 27, ESR_Track42 [BC] */
#define c1_ESR_Track42_c                     (ESR_Track42._c[0])
#define c2_ESR_Track42_c                     (ESR_Track42._c[1])
#define c3_ESR_Track42_c                     (ESR_Track42._c[2])
#define c4_ESR_Track42_c                     (ESR_Track42._c[3])
#define c5_ESR_Track42_c                     (ESR_Track42._c[4])
#define c6_ESR_Track42_c                     (ESR_Track42._c[5])
#define c7_ESR_Track42_c                     (ESR_Track42._c[6])
#define c8_ESR_Track42_c                     (ESR_Track42._c[7])

/* ID: 0x00000528, Handle: 28, ESR_Track41 [BC] */
#define c1_ESR_Track41_c                     (ESR_Track41._c[0])
#define c2_ESR_Track41_c                     (ESR_Track41._c[1])
#define c3_ESR_Track41_c                     (ESR_Track41._c[2])
#define c4_ESR_Track41_c                     (ESR_Track41._c[3])
#define c5_ESR_Track41_c                     (ESR_Track41._c[4])
#define c6_ESR_Track41_c                     (ESR_Track41._c[5])
#define c7_ESR_Track41_c                     (ESR_Track41._c[6])
#define c8_ESR_Track41_c                     (ESR_Track41._c[7])

/* ID: 0x00000527, Handle: 29, ESR_Track40 [BC] */
#define c1_ESR_Track40_c                     (ESR_Track40._c[0])
#define c2_ESR_Track40_c                     (ESR_Track40._c[1])
#define c3_ESR_Track40_c                     (ESR_Track40._c[2])
#define c4_ESR_Track40_c                     (ESR_Track40._c[3])
#define c5_ESR_Track40_c                     (ESR_Track40._c[4])
#define c6_ESR_Track40_c                     (ESR_Track40._c[5])
#define c7_ESR_Track40_c                     (ESR_Track40._c[6])
#define c8_ESR_Track40_c                     (ESR_Track40._c[7])

/* ID: 0x00000526, Handle: 30, ESR_Track39 [BC] */
#define c1_ESR_Track39_c                     (ESR_Track39._c[0])
#define c2_ESR_Track39_c                     (ESR_Track39._c[1])
#define c3_ESR_Track39_c                     (ESR_Track39._c[2])
#define c4_ESR_Track39_c                     (ESR_Track39._c[3])
#define c5_ESR_Track39_c                     (ESR_Track39._c[4])
#define c6_ESR_Track39_c                     (ESR_Track39._c[5])
#define c7_ESR_Track39_c                     (ESR_Track39._c[6])
#define c8_ESR_Track39_c                     (ESR_Track39._c[7])

/* ID: 0x00000525, Handle: 31, ESR_Track38 [BC] */
#define c1_ESR_Track38_c                     (ESR_Track38._c[0])
#define c2_ESR_Track38_c                     (ESR_Track38._c[1])
#define c3_ESR_Track38_c                     (ESR_Track38._c[2])
#define c4_ESR_Track38_c                     (ESR_Track38._c[3])
#define c5_ESR_Track38_c                     (ESR_Track38._c[4])
#define c6_ESR_Track38_c                     (ESR_Track38._c[5])
#define c7_ESR_Track38_c                     (ESR_Track38._c[6])
#define c8_ESR_Track38_c                     (ESR_Track38._c[7])

/* ID: 0x00000524, Handle: 32, ESR_Track37 [BC] */
#define c1_ESR_Track37_c                     (ESR_Track37._c[0])
#define c2_ESR_Track37_c                     (ESR_Track37._c[1])
#define c3_ESR_Track37_c                     (ESR_Track37._c[2])
#define c4_ESR_Track37_c                     (ESR_Track37._c[3])
#define c5_ESR_Track37_c                     (ESR_Track37._c[4])
#define c6_ESR_Track37_c                     (ESR_Track37._c[5])
#define c7_ESR_Track37_c                     (ESR_Track37._c[6])
#define c8_ESR_Track37_c                     (ESR_Track37._c[7])

/* ID: 0x00000523, Handle: 33, ESR_Track36 [BC] */
#define c1_ESR_Track36_c                     (ESR_Track36._c[0])
#define c2_ESR_Track36_c                     (ESR_Track36._c[1])
#define c3_ESR_Track36_c                     (ESR_Track36._c[2])
#define c4_ESR_Track36_c                     (ESR_Track36._c[3])
#define c5_ESR_Track36_c                     (ESR_Track36._c[4])
#define c6_ESR_Track36_c                     (ESR_Track36._c[5])
#define c7_ESR_Track36_c                     (ESR_Track36._c[6])
#define c8_ESR_Track36_c                     (ESR_Track36._c[7])

/* ID: 0x00000522, Handle: 34, ESR_Track35 [BC] */
#define c1_ESR_Track35_c                     (ESR_Track35._c[0])
#define c2_ESR_Track35_c                     (ESR_Track35._c[1])
#define c3_ESR_Track35_c                     (ESR_Track35._c[2])
#define c4_ESR_Track35_c                     (ESR_Track35._c[3])
#define c5_ESR_Track35_c                     (ESR_Track35._c[4])
#define c6_ESR_Track35_c                     (ESR_Track35._c[5])
#define c7_ESR_Track35_c                     (ESR_Track35._c[6])
#define c8_ESR_Track35_c                     (ESR_Track35._c[7])

/* ID: 0x00000521, Handle: 35, ESR_Track34 [BC] */
#define c1_ESR_Track34_c                     (ESR_Track34._c[0])
#define c2_ESR_Track34_c                     (ESR_Track34._c[1])
#define c3_ESR_Track34_c                     (ESR_Track34._c[2])
#define c4_ESR_Track34_c                     (ESR_Track34._c[3])
#define c5_ESR_Track34_c                     (ESR_Track34._c[4])
#define c6_ESR_Track34_c                     (ESR_Track34._c[5])
#define c7_ESR_Track34_c                     (ESR_Track34._c[6])
#define c8_ESR_Track34_c                     (ESR_Track34._c[7])

/* ID: 0x00000520, Handle: 36, ESR_Track33 [BC] */
#define c1_ESR_Track33_c                     (ESR_Track33._c[0])
#define c2_ESR_Track33_c                     (ESR_Track33._c[1])
#define c3_ESR_Track33_c                     (ESR_Track33._c[2])
#define c4_ESR_Track33_c                     (ESR_Track33._c[3])
#define c5_ESR_Track33_c                     (ESR_Track33._c[4])
#define c6_ESR_Track33_c                     (ESR_Track33._c[5])
#define c7_ESR_Track33_c                     (ESR_Track33._c[6])
#define c8_ESR_Track33_c                     (ESR_Track33._c[7])

/* ID: 0x0000051f, Handle: 37, ESR_Track32 [BC] */
#define c1_ESR_Track32_c                     (ESR_Track32._c[0])
#define c2_ESR_Track32_c                     (ESR_Track32._c[1])
#define c3_ESR_Track32_c                     (ESR_Track32._c[2])
#define c4_ESR_Track32_c                     (ESR_Track32._c[3])
#define c5_ESR_Track32_c                     (ESR_Track32._c[4])
#define c6_ESR_Track32_c                     (ESR_Track32._c[5])
#define c7_ESR_Track32_c                     (ESR_Track32._c[6])
#define c8_ESR_Track32_c                     (ESR_Track32._c[7])

/* ID: 0x0000051e, Handle: 38, ESR_Track31 [BC] */
#define c1_ESR_Track31_c                     (ESR_Track31._c[0])
#define c2_ESR_Track31_c                     (ESR_Track31._c[1])
#define c3_ESR_Track31_c                     (ESR_Track31._c[2])
#define c4_ESR_Track31_c                     (ESR_Track31._c[3])
#define c5_ESR_Track31_c                     (ESR_Track31._c[4])
#define c6_ESR_Track31_c                     (ESR_Track31._c[5])
#define c7_ESR_Track31_c                     (ESR_Track31._c[6])
#define c8_ESR_Track31_c                     (ESR_Track31._c[7])

/* ID: 0x0000051d, Handle: 39, ESR_Track30 [BC] */
#define c1_ESR_Track30_c                     (ESR_Track30._c[0])
#define c2_ESR_Track30_c                     (ESR_Track30._c[1])
#define c3_ESR_Track30_c                     (ESR_Track30._c[2])
#define c4_ESR_Track30_c                     (ESR_Track30._c[3])
#define c5_ESR_Track30_c                     (ESR_Track30._c[4])
#define c6_ESR_Track30_c                     (ESR_Track30._c[5])
#define c7_ESR_Track30_c                     (ESR_Track30._c[6])
#define c8_ESR_Track30_c                     (ESR_Track30._c[7])

/* ID: 0x0000051c, Handle: 40, ESR_Track29 [BC] */
#define c1_ESR_Track29_c                     (ESR_Track29._c[0])
#define c2_ESR_Track29_c                     (ESR_Track29._c[1])
#define c3_ESR_Track29_c                     (ESR_Track29._c[2])
#define c4_ESR_Track29_c                     (ESR_Track29._c[3])
#define c5_ESR_Track29_c                     (ESR_Track29._c[4])
#define c6_ESR_Track29_c                     (ESR_Track29._c[5])
#define c7_ESR_Track29_c                     (ESR_Track29._c[6])
#define c8_ESR_Track29_c                     (ESR_Track29._c[7])

/* ID: 0x0000051b, Handle: 41, ESR_Track28 [BC] */
#define c1_ESR_Track28_c                     (ESR_Track28._c[0])
#define c2_ESR_Track28_c                     (ESR_Track28._c[1])
#define c3_ESR_Track28_c                     (ESR_Track28._c[2])
#define c4_ESR_Track28_c                     (ESR_Track28._c[3])
#define c5_ESR_Track28_c                     (ESR_Track28._c[4])
#define c6_ESR_Track28_c                     (ESR_Track28._c[5])
#define c7_ESR_Track28_c                     (ESR_Track28._c[6])
#define c8_ESR_Track28_c                     (ESR_Track28._c[7])

/* ID: 0x0000051a, Handle: 42, ESR_Track27 [BC] */
#define c1_ESR_Track27_c                     (ESR_Track27._c[0])
#define c2_ESR_Track27_c                     (ESR_Track27._c[1])
#define c3_ESR_Track27_c                     (ESR_Track27._c[2])
#define c4_ESR_Track27_c                     (ESR_Track27._c[3])
#define c5_ESR_Track27_c                     (ESR_Track27._c[4])
#define c6_ESR_Track27_c                     (ESR_Track27._c[5])
#define c7_ESR_Track27_c                     (ESR_Track27._c[6])
#define c8_ESR_Track27_c                     (ESR_Track27._c[7])

/* ID: 0x00000519, Handle: 43, ESR_Track26 [BC] */
#define c1_ESR_Track26_c                     (ESR_Track26._c[0])
#define c2_ESR_Track26_c                     (ESR_Track26._c[1])
#define c3_ESR_Track26_c                     (ESR_Track26._c[2])
#define c4_ESR_Track26_c                     (ESR_Track26._c[3])
#define c5_ESR_Track26_c                     (ESR_Track26._c[4])
#define c6_ESR_Track26_c                     (ESR_Track26._c[5])
#define c7_ESR_Track26_c                     (ESR_Track26._c[6])
#define c8_ESR_Track26_c                     (ESR_Track26._c[7])

/* ID: 0x00000518, Handle: 44, ESR_Track25 [BC] */
#define c1_ESR_Track25_c                     (ESR_Track25._c[0])
#define c2_ESR_Track25_c                     (ESR_Track25._c[1])
#define c3_ESR_Track25_c                     (ESR_Track25._c[2])
#define c4_ESR_Track25_c                     (ESR_Track25._c[3])
#define c5_ESR_Track25_c                     (ESR_Track25._c[4])
#define c6_ESR_Track25_c                     (ESR_Track25._c[5])
#define c7_ESR_Track25_c                     (ESR_Track25._c[6])
#define c8_ESR_Track25_c                     (ESR_Track25._c[7])

/* ID: 0x00000517, Handle: 45, ESR_Track24 [BC] */
#define c1_ESR_Track24_c                     (ESR_Track24._c[0])
#define c2_ESR_Track24_c                     (ESR_Track24._c[1])
#define c3_ESR_Track24_c                     (ESR_Track24._c[2])
#define c4_ESR_Track24_c                     (ESR_Track24._c[3])
#define c5_ESR_Track24_c                     (ESR_Track24._c[4])
#define c6_ESR_Track24_c                     (ESR_Track24._c[5])
#define c7_ESR_Track24_c                     (ESR_Track24._c[6])
#define c8_ESR_Track24_c                     (ESR_Track24._c[7])

/* ID: 0x00000516, Handle: 46, ESR_Track23 [BC] */
#define c1_ESR_Track23_c                     (ESR_Track23._c[0])
#define c2_ESR_Track23_c                     (ESR_Track23._c[1])
#define c3_ESR_Track23_c                     (ESR_Track23._c[2])
#define c4_ESR_Track23_c                     (ESR_Track23._c[3])
#define c5_ESR_Track23_c                     (ESR_Track23._c[4])
#define c6_ESR_Track23_c                     (ESR_Track23._c[5])
#define c7_ESR_Track23_c                     (ESR_Track23._c[6])
#define c8_ESR_Track23_c                     (ESR_Track23._c[7])

/* ID: 0x00000515, Handle: 47, ESR_Track22 [BC] */
#define c1_ESR_Track22_c                     (ESR_Track22._c[0])
#define c2_ESR_Track22_c                     (ESR_Track22._c[1])
#define c3_ESR_Track22_c                     (ESR_Track22._c[2])
#define c4_ESR_Track22_c                     (ESR_Track22._c[3])
#define c5_ESR_Track22_c                     (ESR_Track22._c[4])
#define c6_ESR_Track22_c                     (ESR_Track22._c[5])
#define c7_ESR_Track22_c                     (ESR_Track22._c[6])
#define c8_ESR_Track22_c                     (ESR_Track22._c[7])

/* ID: 0x00000514, Handle: 48, ESR_Track21 [BC] */
#define c1_ESR_Track21_c                     (ESR_Track21._c[0])
#define c2_ESR_Track21_c                     (ESR_Track21._c[1])
#define c3_ESR_Track21_c                     (ESR_Track21._c[2])
#define c4_ESR_Track21_c                     (ESR_Track21._c[3])
#define c5_ESR_Track21_c                     (ESR_Track21._c[4])
#define c6_ESR_Track21_c                     (ESR_Track21._c[5])
#define c7_ESR_Track21_c                     (ESR_Track21._c[6])
#define c8_ESR_Track21_c                     (ESR_Track21._c[7])

/* ID: 0x00000513, Handle: 49, ESR_Track20 [BC] */
#define c1_ESR_Track20_c                     (ESR_Track20._c[0])
#define c2_ESR_Track20_c                     (ESR_Track20._c[1])
#define c3_ESR_Track20_c                     (ESR_Track20._c[2])
#define c4_ESR_Track20_c                     (ESR_Track20._c[3])
#define c5_ESR_Track20_c                     (ESR_Track20._c[4])
#define c6_ESR_Track20_c                     (ESR_Track20._c[5])
#define c7_ESR_Track20_c                     (ESR_Track20._c[6])
#define c8_ESR_Track20_c                     (ESR_Track20._c[7])

/* ID: 0x00000512, Handle: 50, ESR_Track19 [BC] */
#define c1_ESR_Track19_c                     (ESR_Track19._c[0])
#define c2_ESR_Track19_c                     (ESR_Track19._c[1])
#define c3_ESR_Track19_c                     (ESR_Track19._c[2])
#define c4_ESR_Track19_c                     (ESR_Track19._c[3])
#define c5_ESR_Track19_c                     (ESR_Track19._c[4])
#define c6_ESR_Track19_c                     (ESR_Track19._c[5])
#define c7_ESR_Track19_c                     (ESR_Track19._c[6])
#define c8_ESR_Track19_c                     (ESR_Track19._c[7])

/* ID: 0x00000511, Handle: 51, ESR_Track18 [BC] */
#define c1_ESR_Track18_c                     (ESR_Track18._c[0])
#define c2_ESR_Track18_c                     (ESR_Track18._c[1])
#define c3_ESR_Track18_c                     (ESR_Track18._c[2])
#define c4_ESR_Track18_c                     (ESR_Track18._c[3])
#define c5_ESR_Track18_c                     (ESR_Track18._c[4])
#define c6_ESR_Track18_c                     (ESR_Track18._c[5])
#define c7_ESR_Track18_c                     (ESR_Track18._c[6])
#define c8_ESR_Track18_c                     (ESR_Track18._c[7])

/* ID: 0x00000510, Handle: 52, ESR_Track17 [BC] */
#define c1_ESR_Track17_c                     (ESR_Track17._c[0])
#define c2_ESR_Track17_c                     (ESR_Track17._c[1])
#define c3_ESR_Track17_c                     (ESR_Track17._c[2])
#define c4_ESR_Track17_c                     (ESR_Track17._c[3])
#define c5_ESR_Track17_c                     (ESR_Track17._c[4])
#define c6_ESR_Track17_c                     (ESR_Track17._c[5])
#define c7_ESR_Track17_c                     (ESR_Track17._c[6])
#define c8_ESR_Track17_c                     (ESR_Track17._c[7])

/* ID: 0x0000050f, Handle: 53, ESR_Track16 [BC] */
#define c1_ESR_Track16_c                     (ESR_Track16._c[0])
#define c2_ESR_Track16_c                     (ESR_Track16._c[1])
#define c3_ESR_Track16_c                     (ESR_Track16._c[2])
#define c4_ESR_Track16_c                     (ESR_Track16._c[3])
#define c5_ESR_Track16_c                     (ESR_Track16._c[4])
#define c6_ESR_Track16_c                     (ESR_Track16._c[5])
#define c7_ESR_Track16_c                     (ESR_Track16._c[6])
#define c8_ESR_Track16_c                     (ESR_Track16._c[7])

/* ID: 0x0000050e, Handle: 54, ESR_Track15 [BC] */
#define c1_ESR_Track15_c                     (ESR_Track15._c[0])
#define c2_ESR_Track15_c                     (ESR_Track15._c[1])
#define c3_ESR_Track15_c                     (ESR_Track15._c[2])
#define c4_ESR_Track15_c                     (ESR_Track15._c[3])
#define c5_ESR_Track15_c                     (ESR_Track15._c[4])
#define c6_ESR_Track15_c                     (ESR_Track15._c[5])
#define c7_ESR_Track15_c                     (ESR_Track15._c[6])
#define c8_ESR_Track15_c                     (ESR_Track15._c[7])

/* ID: 0x0000050d, Handle: 55, ESR_Track14 [BC] */
#define c1_ESR_Track14_c                     (ESR_Track14._c[0])
#define c2_ESR_Track14_c                     (ESR_Track14._c[1])
#define c3_ESR_Track14_c                     (ESR_Track14._c[2])
#define c4_ESR_Track14_c                     (ESR_Track14._c[3])
#define c5_ESR_Track14_c                     (ESR_Track14._c[4])
#define c6_ESR_Track14_c                     (ESR_Track14._c[5])
#define c7_ESR_Track14_c                     (ESR_Track14._c[6])
#define c8_ESR_Track14_c                     (ESR_Track14._c[7])

/* ID: 0x0000050c, Handle: 56, ESR_Track13 [BC] */
#define c1_ESR_Track13_c                     (ESR_Track13._c[0])
#define c2_ESR_Track13_c                     (ESR_Track13._c[1])
#define c3_ESR_Track13_c                     (ESR_Track13._c[2])
#define c4_ESR_Track13_c                     (ESR_Track13._c[3])
#define c5_ESR_Track13_c                     (ESR_Track13._c[4])
#define c6_ESR_Track13_c                     (ESR_Track13._c[5])
#define c7_ESR_Track13_c                     (ESR_Track13._c[6])
#define c8_ESR_Track13_c                     (ESR_Track13._c[7])

/* ID: 0x0000050b, Handle: 57, ESR_Track12 [BC] */
#define c1_ESR_Track12_c                     (ESR_Track12._c[0])
#define c2_ESR_Track12_c                     (ESR_Track12._c[1])
#define c3_ESR_Track12_c                     (ESR_Track12._c[2])
#define c4_ESR_Track12_c                     (ESR_Track12._c[3])
#define c5_ESR_Track12_c                     (ESR_Track12._c[4])
#define c6_ESR_Track12_c                     (ESR_Track12._c[5])
#define c7_ESR_Track12_c                     (ESR_Track12._c[6])
#define c8_ESR_Track12_c                     (ESR_Track12._c[7])

/* ID: 0x0000050a, Handle: 58, ESR_Track11 [BC] */
#define c1_ESR_Track11_c                     (ESR_Track11._c[0])
#define c2_ESR_Track11_c                     (ESR_Track11._c[1])
#define c3_ESR_Track11_c                     (ESR_Track11._c[2])
#define c4_ESR_Track11_c                     (ESR_Track11._c[3])
#define c5_ESR_Track11_c                     (ESR_Track11._c[4])
#define c6_ESR_Track11_c                     (ESR_Track11._c[5])
#define c7_ESR_Track11_c                     (ESR_Track11._c[6])
#define c8_ESR_Track11_c                     (ESR_Track11._c[7])

/* ID: 0x00000509, Handle: 59, ESR_Track10 [BC] */
#define c1_ESR_Track10_c                     (ESR_Track10._c[0])
#define c2_ESR_Track10_c                     (ESR_Track10._c[1])
#define c3_ESR_Track10_c                     (ESR_Track10._c[2])
#define c4_ESR_Track10_c                     (ESR_Track10._c[3])
#define c5_ESR_Track10_c                     (ESR_Track10._c[4])
#define c6_ESR_Track10_c                     (ESR_Track10._c[5])
#define c7_ESR_Track10_c                     (ESR_Track10._c[6])
#define c8_ESR_Track10_c                     (ESR_Track10._c[7])

/* ID: 0x00000508, Handle: 60, ESR_Track09 [BC] */
#define c1_ESR_Track09_c                     (ESR_Track09._c[0])
#define c2_ESR_Track09_c                     (ESR_Track09._c[1])
#define c3_ESR_Track09_c                     (ESR_Track09._c[2])
#define c4_ESR_Track09_c                     (ESR_Track09._c[3])
#define c5_ESR_Track09_c                     (ESR_Track09._c[4])
#define c6_ESR_Track09_c                     (ESR_Track09._c[5])
#define c7_ESR_Track09_c                     (ESR_Track09._c[6])
#define c8_ESR_Track09_c                     (ESR_Track09._c[7])

/* ID: 0x00000507, Handle: 61, ESR_Track08 [BC] */
#define c1_ESR_Track08_c                     (ESR_Track08._c[0])
#define c2_ESR_Track08_c                     (ESR_Track08._c[1])
#define c3_ESR_Track08_c                     (ESR_Track08._c[2])
#define c4_ESR_Track08_c                     (ESR_Track08._c[3])
#define c5_ESR_Track08_c                     (ESR_Track08._c[4])
#define c6_ESR_Track08_c                     (ESR_Track08._c[5])
#define c7_ESR_Track08_c                     (ESR_Track08._c[6])
#define c8_ESR_Track08_c                     (ESR_Track08._c[7])

/* ID: 0x00000506, Handle: 62, ESR_Track07 [BC] */
#define c1_ESR_Track07_c                     (ESR_Track07._c[0])
#define c2_ESR_Track07_c                     (ESR_Track07._c[1])
#define c3_ESR_Track07_c                     (ESR_Track07._c[2])
#define c4_ESR_Track07_c                     (ESR_Track07._c[3])
#define c5_ESR_Track07_c                     (ESR_Track07._c[4])
#define c6_ESR_Track07_c                     (ESR_Track07._c[5])
#define c7_ESR_Track07_c                     (ESR_Track07._c[6])
#define c8_ESR_Track07_c                     (ESR_Track07._c[7])

/* ID: 0x00000505, Handle: 63, ESR_Track06 [BC] */
#define c1_ESR_Track06_c                     (ESR_Track06._c[0])
#define c2_ESR_Track06_c                     (ESR_Track06._c[1])
#define c3_ESR_Track06_c                     (ESR_Track06._c[2])
#define c4_ESR_Track06_c                     (ESR_Track06._c[3])
#define c5_ESR_Track06_c                     (ESR_Track06._c[4])
#define c6_ESR_Track06_c                     (ESR_Track06._c[5])
#define c7_ESR_Track06_c                     (ESR_Track06._c[6])
#define c8_ESR_Track06_c                     (ESR_Track06._c[7])

/* ID: 0x00000504, Handle: 64, ESR_Track05 [BC] */
#define c1_ESR_Track05_c                     (ESR_Track05._c[0])
#define c2_ESR_Track05_c                     (ESR_Track05._c[1])
#define c3_ESR_Track05_c                     (ESR_Track05._c[2])
#define c4_ESR_Track05_c                     (ESR_Track05._c[3])
#define c5_ESR_Track05_c                     (ESR_Track05._c[4])
#define c6_ESR_Track05_c                     (ESR_Track05._c[5])
#define c7_ESR_Track05_c                     (ESR_Track05._c[6])
#define c8_ESR_Track05_c                     (ESR_Track05._c[7])

/* ID: 0x00000503, Handle: 65, ESR_Track04 [BC] */
#define c1_ESR_Track04_c                     (ESR_Track04._c[0])
#define c2_ESR_Track04_c                     (ESR_Track04._c[1])
#define c3_ESR_Track04_c                     (ESR_Track04._c[2])
#define c4_ESR_Track04_c                     (ESR_Track04._c[3])
#define c5_ESR_Track04_c                     (ESR_Track04._c[4])
#define c6_ESR_Track04_c                     (ESR_Track04._c[5])
#define c7_ESR_Track04_c                     (ESR_Track04._c[6])
#define c8_ESR_Track04_c                     (ESR_Track04._c[7])

/* ID: 0x00000502, Handle: 66, ESR_Track03 [BC] */
#define c1_ESR_Track03_c                     (ESR_Track03._c[0])
#define c2_ESR_Track03_c                     (ESR_Track03._c[1])
#define c3_ESR_Track03_c                     (ESR_Track03._c[2])
#define c4_ESR_Track03_c                     (ESR_Track03._c[3])
#define c5_ESR_Track03_c                     (ESR_Track03._c[4])
#define c6_ESR_Track03_c                     (ESR_Track03._c[5])
#define c7_ESR_Track03_c                     (ESR_Track03._c[6])
#define c8_ESR_Track03_c                     (ESR_Track03._c[7])

/* ID: 0x00000501, Handle: 67, ESR_Track02 [BC] */
#define c1_ESR_Track02_c                     (ESR_Track02._c[0])
#define c2_ESR_Track02_c                     (ESR_Track02._c[1])
#define c3_ESR_Track02_c                     (ESR_Track02._c[2])
#define c4_ESR_Track02_c                     (ESR_Track02._c[3])
#define c5_ESR_Track02_c                     (ESR_Track02._c[4])
#define c6_ESR_Track02_c                     (ESR_Track02._c[5])
#define c7_ESR_Track02_c                     (ESR_Track02._c[6])
#define c8_ESR_Track02_c                     (ESR_Track02._c[7])

/* ID: 0x00000500, Handle: 68, ESR_Track01 [BC] */
#define c1_ESR_Track01_c                     (ESR_Track01._c[0])
#define c2_ESR_Track01_c                     (ESR_Track01._c[1])
#define c3_ESR_Track01_c                     (ESR_Track01._c[2])
#define c4_ESR_Track01_c                     (ESR_Track01._c[3])
#define c5_ESR_Track01_c                     (ESR_Track01._c[4])
#define c6_ESR_Track01_c                     (ESR_Track01._c[5])
#define c7_ESR_Track01_c                     (ESR_Track01._c[6])
#define c8_ESR_Track01_c                     (ESR_Track01._c[7])

/* ID: 0x000004e3, Handle: 69, ESR_Status4 [BC] */
#define c1_ESR_Status4_c                     (ESR_Status4._c[0])
#define c2_ESR_Status4_c                     (ESR_Status4._c[1])
#define c3_ESR_Status4_c                     (ESR_Status4._c[2])
#define c4_ESR_Status4_c                     (ESR_Status4._c[3])
#define c5_ESR_Status4_c                     (ESR_Status4._c[4])
#define c6_ESR_Status4_c                     (ESR_Status4._c[5])
#define c7_ESR_Status4_c                     (ESR_Status4._c[6])
#define c8_ESR_Status4_c                     (ESR_Status4._c[7])

/* ID: 0x000004e2, Handle: 70, ESR_Status3 [BC] */
#define c1_ESR_Status3_c                     (ESR_Status3._c[0])
#define c2_ESR_Status3_c                     (ESR_Status3._c[1])
#define c3_ESR_Status3_c                     (ESR_Status3._c[2])
#define c4_ESR_Status3_c                     (ESR_Status3._c[3])
#define c5_ESR_Status3_c                     (ESR_Status3._c[4])
#define c6_ESR_Status3_c                     (ESR_Status3._c[5])
#define c7_ESR_Status3_c                     (ESR_Status3._c[6])
#define c8_ESR_Status3_c                     (ESR_Status3._c[7])

/* ID: 0x000004e1, Handle: 71, ESR_Status2 [BC] */
#define c1_ESR_Status2_c                     (ESR_Status2._c[0])
#define c2_ESR_Status2_c                     (ESR_Status2._c[1])
#define c3_ESR_Status2_c                     (ESR_Status2._c[2])
#define c4_ESR_Status2_c                     (ESR_Status2._c[3])
#define c5_ESR_Status2_c                     (ESR_Status2._c[4])
#define c6_ESR_Status2_c                     (ESR_Status2._c[5])
#define c7_ESR_Status2_c                     (ESR_Status2._c[6])
#define c8_ESR_Status2_c                     (ESR_Status2._c[7])

/* ID: 0x000004e0, Handle: 72, ESR_Status1 [BC] */
#define c1_ESR_Status1_c                     (ESR_Status1._c[0])
#define c2_ESR_Status1_c                     (ESR_Status1._c[1])
#define c3_ESR_Status1_c                     (ESR_Status1._c[2])
#define c4_ESR_Status1_c                     (ESR_Status1._c[3])
#define c5_ESR_Status1_c                     (ESR_Status1._c[4])
#define c6_ESR_Status1_c                     (ESR_Status1._c[5])
#define c7_ESR_Status1_c                     (ESR_Status1._c[6])
#define c8_ESR_Status1_c                     (ESR_Status1._c[7])



/* -----------------------------------------------------------------------------
    &&&~ Access to data bytes of Tx messages
 ----------------------------------------------------------------------------- */

/* ID: 0x00000726, Handle: 0, TSR_message_G [BC] */
#define c1_TSR_message_G_c                   (TSR_message_G._c[0])
#define c2_TSR_message_G_c                   (TSR_message_G._c[1])
#define c3_TSR_message_G_c                   (TSR_message_G._c[2])
#define c4_TSR_message_G_c                   (TSR_message_G._c[3])
#define c5_TSR_message_G_c                   (TSR_message_G._c[4])
#define c6_TSR_message_G_c                   (TSR_message_G._c[5])

/* ID: 0x0000077b, Handle: 1, Next_lane_Right_P [FC] */
#define c1_Next_lane_Right_P_c               (Next_lane_Right_P._c[0])
#define c2_Next_lane_Right_P_c               (Next_lane_Right_P._c[1])
#define c3_Next_lane_Right_P_c               (Next_lane_Right_P._c[2])
#define c4_Next_lane_Right_P_c               (Next_lane_Right_P._c[3])

/* ID: 0x0000077a, Handle: 2, Next_lane_Right_O [FC] */
#define c1_Next_lane_Right_O_c               (Next_lane_Right_O._c[0])
#define c2_Next_lane_Right_O_c               (Next_lane_Right_O._c[1])
#define c3_Next_lane_Right_O_c               (Next_lane_Right_O._c[2])
#define c4_Next_lane_Right_O_c               (Next_lane_Right_O._c[3])
#define c5_Next_lane_Right_O_c               (Next_lane_Right_O._c[4])
#define c6_Next_lane_Right_O_c               (Next_lane_Right_O._c[5])
#define c7_Next_lane_Right_O_c               (Next_lane_Right_O._c[6])
#define c8_Next_lane_Right_O_c               (Next_lane_Right_O._c[7])

/* ID: 0x00000779, Handle: 3, Next_lane_Left_N [FC] */
#define c1_Next_lane_Left_N_c                (Next_lane_Left_N._c[0])
#define c2_Next_lane_Left_N_c                (Next_lane_Left_N._c[1])
#define c3_Next_lane_Left_N_c                (Next_lane_Left_N._c[2])
#define c4_Next_lane_Left_N_c                (Next_lane_Left_N._c[3])

/* ID: 0x00000778, Handle: 4, Next_lane_Left_M [FC] */
#define c1_Next_lane_Left_M_c                (Next_lane_Left_M._c[0])
#define c2_Next_lane_Left_M_c                (Next_lane_Left_M._c[1])
#define c3_Next_lane_Left_M_c                (Next_lane_Left_M._c[2])
#define c4_Next_lane_Left_M_c                (Next_lane_Left_M._c[3])
#define c5_Next_lane_Left_M_c                (Next_lane_Left_M._c[4])
#define c6_Next_lane_Left_M_c                (Next_lane_Left_M._c[5])
#define c7_Next_lane_Left_M_c                (Next_lane_Left_M._c[6])
#define c8_Next_lane_Left_M_c                (Next_lane_Left_M._c[7])

/* ID: 0x00000777, Handle: 5, Next_lane_Right_L [FC] */
#define c1_Next_lane_Right_L_c               (Next_lane_Right_L._c[0])
#define c2_Next_lane_Right_L_c               (Next_lane_Right_L._c[1])
#define c3_Next_lane_Right_L_c               (Next_lane_Right_L._c[2])
#define c4_Next_lane_Right_L_c               (Next_lane_Right_L._c[3])

/* ID: 0x00000776, Handle: 6, Next_lane_Right_K [FC] */
#define c1_Next_lane_Right_K_c               (Next_lane_Right_K._c[0])
#define c2_Next_lane_Right_K_c               (Next_lane_Right_K._c[1])
#define c3_Next_lane_Right_K_c               (Next_lane_Right_K._c[2])
#define c4_Next_lane_Right_K_c               (Next_lane_Right_K._c[3])
#define c5_Next_lane_Right_K_c               (Next_lane_Right_K._c[4])
#define c6_Next_lane_Right_K_c               (Next_lane_Right_K._c[5])
#define c7_Next_lane_Right_K_c               (Next_lane_Right_K._c[6])
#define c8_Next_lane_Right_K_c               (Next_lane_Right_K._c[7])

/* ID: 0x00000775, Handle: 7, Next_lane_Left_J [FC] */
#define c1_Next_lane_Left_J_c                (Next_lane_Left_J._c[0])
#define c2_Next_lane_Left_J_c                (Next_lane_Left_J._c[1])
#define c3_Next_lane_Left_J_c                (Next_lane_Left_J._c[2])
#define c4_Next_lane_Left_J_c                (Next_lane_Left_J._c[3])

/* ID: 0x00000774, Handle: 8, Next_lane_Left_I [FC] */
#define c1_Next_lane_Left_I_c                (Next_lane_Left_I._c[0])
#define c2_Next_lane_Left_I_c                (Next_lane_Left_I._c[1])
#define c3_Next_lane_Left_I_c                (Next_lane_Left_I._c[2])
#define c4_Next_lane_Left_I_c                (Next_lane_Left_I._c[3])
#define c5_Next_lane_Left_I_c                (Next_lane_Left_I._c[4])
#define c6_Next_lane_Left_I_c                (Next_lane_Left_I._c[5])
#define c7_Next_lane_Left_I_c                (Next_lane_Left_I._c[6])
#define c8_Next_lane_Left_I_c                (Next_lane_Left_I._c[7])

/* ID: 0x00000773, Handle: 9, Next_lane_Right_H [FC] */
#define c1_Next_lane_Right_H_c               (Next_lane_Right_H._c[0])
#define c2_Next_lane_Right_H_c               (Next_lane_Right_H._c[1])
#define c3_Next_lane_Right_H_c               (Next_lane_Right_H._c[2])
#define c4_Next_lane_Right_H_c               (Next_lane_Right_H._c[3])

/* ID: 0x00000772, Handle: 10, Next_lane_Right_G [FC] */
#define c1_Next_lane_Right_G_c               (Next_lane_Right_G._c[0])
#define c2_Next_lane_Right_G_c               (Next_lane_Right_G._c[1])
#define c3_Next_lane_Right_G_c               (Next_lane_Right_G._c[2])
#define c4_Next_lane_Right_G_c               (Next_lane_Right_G._c[3])
#define c5_Next_lane_Right_G_c               (Next_lane_Right_G._c[4])
#define c6_Next_lane_Right_G_c               (Next_lane_Right_G._c[5])
#define c7_Next_lane_Right_G_c               (Next_lane_Right_G._c[6])
#define c8_Next_lane_Right_G_c               (Next_lane_Right_G._c[7])

/* ID: 0x00000771, Handle: 11, Next_lane_Left_F [FC] */
#define c1_Next_lane_Left_F_c                (Next_lane_Left_F._c[0])
#define c2_Next_lane_Left_F_c                (Next_lane_Left_F._c[1])
#define c3_Next_lane_Left_F_c                (Next_lane_Left_F._c[2])
#define c4_Next_lane_Left_F_c                (Next_lane_Left_F._c[3])

/* ID: 0x00000770, Handle: 12, Next_lane_Left_E [FC] */
#define c1_Next_lane_Left_E_c                (Next_lane_Left_E._c[0])
#define c2_Next_lane_Left_E_c                (Next_lane_Left_E._c[1])
#define c3_Next_lane_Left_E_c                (Next_lane_Left_E._c[2])
#define c4_Next_lane_Left_E_c                (Next_lane_Left_E._c[3])
#define c5_Next_lane_Left_E_c                (Next_lane_Left_E._c[4])
#define c6_Next_lane_Left_E_c                (Next_lane_Left_E._c[5])
#define c7_Next_lane_Left_E_c                (Next_lane_Left_E._c[6])
#define c8_Next_lane_Left_E_c                (Next_lane_Left_E._c[7])

/* ID: 0x0000076f, Handle: 13, Next_lane_Right_D [FC] */
#define c1_Next_lane_Right_D_c               (Next_lane_Right_D._c[0])
#define c2_Next_lane_Right_D_c               (Next_lane_Right_D._c[1])
#define c3_Next_lane_Right_D_c               (Next_lane_Right_D._c[2])
#define c4_Next_lane_Right_D_c               (Next_lane_Right_D._c[3])

/* ID: 0x0000076e, Handle: 14, Next_lane_Right_C [FC] */
#define c1_Next_lane_Right_C_c               (Next_lane_Right_C._c[0])
#define c2_Next_lane_Right_C_c               (Next_lane_Right_C._c[1])
#define c3_Next_lane_Right_C_c               (Next_lane_Right_C._c[2])
#define c4_Next_lane_Right_C_c               (Next_lane_Right_C._c[3])
#define c5_Next_lane_Right_C_c               (Next_lane_Right_C._c[4])
#define c6_Next_lane_Right_C_c               (Next_lane_Right_C._c[5])
#define c7_Next_lane_Right_C_c               (Next_lane_Right_C._c[6])
#define c8_Next_lane_Right_C_c               (Next_lane_Right_C._c[7])

/* ID: 0x0000076d, Handle: 15, Next_lane_Left_B [FC] */
#define c1_Next_lane_Left_B_c                (Next_lane_Left_B._c[0])
#define c2_Next_lane_Left_B_c                (Next_lane_Left_B._c[1])
#define c3_Next_lane_Left_B_c                (Next_lane_Left_B._c[2])
#define c4_Next_lane_Left_B_c                (Next_lane_Left_B._c[3])

/* ID: 0x0000076c, Handle: 16, Next_lane_Left_A [FC] */
#define c1_Next_lane_Left_A_c                (Next_lane_Left_A._c[0])
#define c2_Next_lane_Left_A_c                (Next_lane_Left_A._c[1])
#define c3_Next_lane_Left_A_c                (Next_lane_Left_A._c[2])
#define c4_Next_lane_Left_A_c                (Next_lane_Left_A._c[3])
#define c5_Next_lane_Left_A_c                (Next_lane_Left_A._c[4])
#define c6_Next_lane_Left_A_c                (Next_lane_Left_A._c[5])
#define c7_Next_lane_Left_A_c                (Next_lane_Left_A._c[6])
#define c8_Next_lane_Left_A_c                (Next_lane_Left_A._c[7])

/* ID: 0x0000076b, Handle: 17, Numebr_of_next_lane [FC] */
#define c1_Numebr_of_next_lane_c             (Numebr_of_next_lane._c[0])

/* ID: 0x0000076a, Handle: 18, Reference_points [FC] */
#define c1_Reference_points_c                (Reference_points._c[0])
#define c2_Reference_points_c                (Reference_points._c[1])
#define c3_Reference_points_c                (Reference_points._c[2])
#define c4_Reference_points_c                (Reference_points._c[3])
#define c5_Reference_points_c                (Reference_points._c[4])
#define c6_Reference_points_c                (Reference_points._c[5])
#define c7_Reference_points_c                (Reference_points._c[6])
#define c8_Reference_points_c                (Reference_points._c[7])

/* ID: 0x00000769, Handle: 19, LKA_right_lane_B [FC] */
#define c1_LKA_right_lane_B_c                (LKA_right_lane_B._c[0])
#define c2_LKA_right_lane_B_c                (LKA_right_lane_B._c[1])
#define c3_LKA_right_lane_B_c                (LKA_right_lane_B._c[2])
#define c4_LKA_right_lane_B_c                (LKA_right_lane_B._c[3])

/* ID: 0x00000768, Handle: 20, LKA_right_lane_A [FC] */
#define c1_LKA_right_lane_A_c                (LKA_right_lane_A._c[0])
#define c2_LKA_right_lane_A_c                (LKA_right_lane_A._c[1])
#define c3_LKA_right_lane_A_c                (LKA_right_lane_A._c[2])
#define c4_LKA_right_lane_A_c                (LKA_right_lane_A._c[3])
#define c5_LKA_right_lane_A_c                (LKA_right_lane_A._c[4])
#define c6_LKA_right_lane_A_c                (LKA_right_lane_A._c[5])
#define c7_LKA_right_lane_A_c                (LKA_right_lane_A._c[6])
#define c8_LKA_right_lane_A_c                (LKA_right_lane_A._c[7])

/* ID: 0x00000767, Handle: 21, LKA_left_lane_B [FC] */
#define c1_LKA_left_lane_B_c                 (LKA_left_lane_B._c[0])
#define c2_LKA_left_lane_B_c                 (LKA_left_lane_B._c[1])
#define c3_LKA_left_lane_B_c                 (LKA_left_lane_B._c[2])
#define c4_LKA_left_lane_B_c                 (LKA_left_lane_B._c[3])

/* ID: 0x00000766, Handle: 22, LKA_left_lane_A [FC] */
#define c1_LKA_left_lane_A_c                 (LKA_left_lane_A._c[0])
#define c2_LKA_left_lane_A_c                 (LKA_left_lane_A._c[1])
#define c3_LKA_left_lane_A_c                 (LKA_left_lane_A._c[2])
#define c4_LKA_left_lane_A_c                 (LKA_left_lane_A._c[3])
#define c5_LKA_left_lane_A_c                 (LKA_left_lane_A._c[4])
#define c6_LKA_left_lane_A_c                 (LKA_left_lane_A._c[5])
#define c7_LKA_left_lane_A_c                 (LKA_left_lane_A._c[6])
#define c8_LKA_left_lane_A_c                 (LKA_left_lane_A._c[7])

/* ID: 0x00000760, Handle: 23, Car_Info [FC] */
#define c1_Car_Info_c                        (Car_Info._c[0])
#define c2_Car_Info_c                        (Car_Info._c[1])
#define c3_Car_Info_c                        (Car_Info._c[2])
#define c4_Car_Info_c                        (Car_Info._c[3])
#define c5_Car_Info_c                        (Car_Info._c[4])
#define c6_Car_Info_c                        (Car_Info._c[5])
#define c7_Car_Info_c                        (Car_Info._c[6])
#define c8_Car_Info_c                        (Car_Info._c[7])

/* ID: 0x00000750, Handle: 24, Obstacle_Data_X [FC] */
#define c1_Obstacle_Data_X_c                 (Obstacle_Data_X._c[0])
#define c2_Obstacle_Data_X_c                 (Obstacle_Data_X._c[1])
#define c3_Obstacle_Data_X_c                 (Obstacle_Data_X._c[2])
#define c4_Obstacle_Data_X_c                 (Obstacle_Data_X._c[3])
#define c5_Obstacle_Data_X_c                 (Obstacle_Data_X._c[4])
#define c6_Obstacle_Data_X_c                 (Obstacle_Data_X._c[5])
#define c7_Obstacle_Data_X_c                 (Obstacle_Data_X._c[6])
#define c8_Obstacle_Data_X_c                 (Obstacle_Data_X._c[7])

/* ID: 0x0000074f, Handle: 25, Obstacle_Data_W [FC] */
#define c1_Obstacle_Data_W_c                 (Obstacle_Data_W._c[0])
#define c2_Obstacle_Data_W_c                 (Obstacle_Data_W._c[1])
#define c3_Obstacle_Data_W_c                 (Obstacle_Data_W._c[2])
#define c4_Obstacle_Data_W_c                 (Obstacle_Data_W._c[3])
#define c5_Obstacle_Data_W_c                 (Obstacle_Data_W._c[4])
#define c6_Obstacle_Data_W_c                 (Obstacle_Data_W._c[5])
#define c7_Obstacle_Data_W_c                 (Obstacle_Data_W._c[6])
#define c8_Obstacle_Data_W_c                 (Obstacle_Data_W._c[7])

/* ID: 0x0000074e, Handle: 26, Obstacle_Data_V [FC] */
#define c1_Obstacle_Data_V_c                 (Obstacle_Data_V._c[0])
#define c2_Obstacle_Data_V_c                 (Obstacle_Data_V._c[1])
#define c3_Obstacle_Data_V_c                 (Obstacle_Data_V._c[2])
#define c4_Obstacle_Data_V_c                 (Obstacle_Data_V._c[3])
#define c5_Obstacle_Data_V_c                 (Obstacle_Data_V._c[4])
#define c6_Obstacle_Data_V_c                 (Obstacle_Data_V._c[5])
#define c7_Obstacle_Data_V_c                 (Obstacle_Data_V._c[6])
#define c8_Obstacle_Data_V_c                 (Obstacle_Data_V._c[7])

/* ID: 0x0000074d, Handle: 27, Obstacle_Data_U [FC] */
#define c1_Obstacle_Data_U_c                 (Obstacle_Data_U._c[0])
#define c2_Obstacle_Data_U_c                 (Obstacle_Data_U._c[1])
#define c3_Obstacle_Data_U_c                 (Obstacle_Data_U._c[2])
#define c4_Obstacle_Data_U_c                 (Obstacle_Data_U._c[3])
#define c5_Obstacle_Data_U_c                 (Obstacle_Data_U._c[4])
#define c6_Obstacle_Data_U_c                 (Obstacle_Data_U._c[5])
#define c7_Obstacle_Data_U_c                 (Obstacle_Data_U._c[6])
#define c8_Obstacle_Data_U_c                 (Obstacle_Data_U._c[7])

/* ID: 0x0000074c, Handle: 28, Obstacle_Data_T [FC] */
#define c1_Obstacle_Data_T_c                 (Obstacle_Data_T._c[0])
#define c2_Obstacle_Data_T_c                 (Obstacle_Data_T._c[1])
#define c3_Obstacle_Data_T_c                 (Obstacle_Data_T._c[2])
#define c4_Obstacle_Data_T_c                 (Obstacle_Data_T._c[3])
#define c5_Obstacle_Data_T_c                 (Obstacle_Data_T._c[4])
#define c6_Obstacle_Data_T_c                 (Obstacle_Data_T._c[5])
#define c7_Obstacle_Data_T_c                 (Obstacle_Data_T._c[6])
#define c8_Obstacle_Data_T_c                 (Obstacle_Data_T._c[7])

/* ID: 0x0000074b, Handle: 29, Obstacle_Data_S [FC] */
#define c1_Obstacle_Data_S_c                 (Obstacle_Data_S._c[0])
#define c2_Obstacle_Data_S_c                 (Obstacle_Data_S._c[1])
#define c3_Obstacle_Data_S_c                 (Obstacle_Data_S._c[2])
#define c4_Obstacle_Data_S_c                 (Obstacle_Data_S._c[3])
#define c5_Obstacle_Data_S_c                 (Obstacle_Data_S._c[4])
#define c6_Obstacle_Data_S_c                 (Obstacle_Data_S._c[5])
#define c7_Obstacle_Data_S_c                 (Obstacle_Data_S._c[6])
#define c8_Obstacle_Data_S_c                 (Obstacle_Data_S._c[7])

/* ID: 0x0000074a, Handle: 30, Obstacle_Data_R [FC] */
#define c1_Obstacle_Data_R_c                 (Obstacle_Data_R._c[0])
#define c2_Obstacle_Data_R_c                 (Obstacle_Data_R._c[1])
#define c3_Obstacle_Data_R_c                 (Obstacle_Data_R._c[2])
#define c4_Obstacle_Data_R_c                 (Obstacle_Data_R._c[3])
#define c5_Obstacle_Data_R_c                 (Obstacle_Data_R._c[4])
#define c6_Obstacle_Data_R_c                 (Obstacle_Data_R._c[5])
#define c7_Obstacle_Data_R_c                 (Obstacle_Data_R._c[6])
#define c8_Obstacle_Data_R_c                 (Obstacle_Data_R._c[7])

/* ID: 0x00000749, Handle: 31, Obstacle_Data_Q [FC] */
#define c1_Obstacle_Data_Q_c                 (Obstacle_Data_Q._c[0])
#define c2_Obstacle_Data_Q_c                 (Obstacle_Data_Q._c[1])
#define c3_Obstacle_Data_Q_c                 (Obstacle_Data_Q._c[2])
#define c4_Obstacle_Data_Q_c                 (Obstacle_Data_Q._c[3])
#define c5_Obstacle_Data_Q_c                 (Obstacle_Data_Q._c[4])
#define c6_Obstacle_Data_Q_c                 (Obstacle_Data_Q._c[5])
#define c7_Obstacle_Data_Q_c                 (Obstacle_Data_Q._c[6])
#define c8_Obstacle_Data_Q_c                 (Obstacle_Data_Q._c[7])

/* ID: 0x00000748, Handle: 32, Obstacle_Data_P [FC] */
#define c1_Obstacle_Data_P_c                 (Obstacle_Data_P._c[0])
#define c2_Obstacle_Data_P_c                 (Obstacle_Data_P._c[1])
#define c3_Obstacle_Data_P_c                 (Obstacle_Data_P._c[2])
#define c4_Obstacle_Data_P_c                 (Obstacle_Data_P._c[3])
#define c5_Obstacle_Data_P_c                 (Obstacle_Data_P._c[4])
#define c6_Obstacle_Data_P_c                 (Obstacle_Data_P._c[5])
#define c7_Obstacle_Data_P_c                 (Obstacle_Data_P._c[6])
#define c8_Obstacle_Data_P_c                 (Obstacle_Data_P._c[7])

/* ID: 0x00000747, Handle: 33, Obstacle_Data_O [FC] */
#define c1_Obstacle_Data_O_c                 (Obstacle_Data_O._c[0])
#define c2_Obstacle_Data_O_c                 (Obstacle_Data_O._c[1])
#define c3_Obstacle_Data_O_c                 (Obstacle_Data_O._c[2])
#define c4_Obstacle_Data_O_c                 (Obstacle_Data_O._c[3])
#define c5_Obstacle_Data_O_c                 (Obstacle_Data_O._c[4])
#define c6_Obstacle_Data_O_c                 (Obstacle_Data_O._c[5])
#define c7_Obstacle_Data_O_c                 (Obstacle_Data_O._c[6])
#define c8_Obstacle_Data_O_c                 (Obstacle_Data_O._c[7])

/* ID: 0x00000746, Handle: 34, Obstacle_Data_N [FC] */
#define c1_Obstacle_Data_N_c                 (Obstacle_Data_N._c[0])
#define c2_Obstacle_Data_N_c                 (Obstacle_Data_N._c[1])
#define c3_Obstacle_Data_N_c                 (Obstacle_Data_N._c[2])
#define c4_Obstacle_Data_N_c                 (Obstacle_Data_N._c[3])
#define c5_Obstacle_Data_N_c                 (Obstacle_Data_N._c[4])
#define c6_Obstacle_Data_N_c                 (Obstacle_Data_N._c[5])
#define c7_Obstacle_Data_N_c                 (Obstacle_Data_N._c[6])
#define c8_Obstacle_Data_N_c                 (Obstacle_Data_N._c[7])

/* ID: 0x00000745, Handle: 35, Obstacle_Data_M [FC] */
#define c1_Obstacle_Data_M_c                 (Obstacle_Data_M._c[0])
#define c2_Obstacle_Data_M_c                 (Obstacle_Data_M._c[1])
#define c3_Obstacle_Data_M_c                 (Obstacle_Data_M._c[2])
#define c4_Obstacle_Data_M_c                 (Obstacle_Data_M._c[3])
#define c5_Obstacle_Data_M_c                 (Obstacle_Data_M._c[4])
#define c6_Obstacle_Data_M_c                 (Obstacle_Data_M._c[5])
#define c7_Obstacle_Data_M_c                 (Obstacle_Data_M._c[6])
#define c8_Obstacle_Data_M_c                 (Obstacle_Data_M._c[7])

/* ID: 0x00000744, Handle: 36, Obstacle_Data_L [FC] */
#define c1_Obstacle_Data_L_c                 (Obstacle_Data_L._c[0])
#define c2_Obstacle_Data_L_c                 (Obstacle_Data_L._c[1])
#define c3_Obstacle_Data_L_c                 (Obstacle_Data_L._c[2])
#define c4_Obstacle_Data_L_c                 (Obstacle_Data_L._c[3])
#define c5_Obstacle_Data_L_c                 (Obstacle_Data_L._c[4])
#define c6_Obstacle_Data_L_c                 (Obstacle_Data_L._c[5])
#define c7_Obstacle_Data_L_c                 (Obstacle_Data_L._c[6])
#define c8_Obstacle_Data_L_c                 (Obstacle_Data_L._c[7])

/* ID: 0x00000743, Handle: 37, Obstacle_Data_K [FC] */
#define c1_Obstacle_Data_K_c                 (Obstacle_Data_K._c[0])
#define c2_Obstacle_Data_K_c                 (Obstacle_Data_K._c[1])
#define c3_Obstacle_Data_K_c                 (Obstacle_Data_K._c[2])
#define c4_Obstacle_Data_K_c                 (Obstacle_Data_K._c[3])
#define c5_Obstacle_Data_K_c                 (Obstacle_Data_K._c[4])
#define c6_Obstacle_Data_K_c                 (Obstacle_Data_K._c[5])
#define c7_Obstacle_Data_K_c                 (Obstacle_Data_K._c[6])
#define c8_Obstacle_Data_K_c                 (Obstacle_Data_K._c[7])

/* ID: 0x00000742, Handle: 38, Obstacle_Data_J [FC] */
#define c1_Obstacle_Data_J_c                 (Obstacle_Data_J._c[0])
#define c2_Obstacle_Data_J_c                 (Obstacle_Data_J._c[1])
#define c3_Obstacle_Data_J_c                 (Obstacle_Data_J._c[2])
#define c4_Obstacle_Data_J_c                 (Obstacle_Data_J._c[3])
#define c5_Obstacle_Data_J_c                 (Obstacle_Data_J._c[4])
#define c6_Obstacle_Data_J_c                 (Obstacle_Data_J._c[5])
#define c7_Obstacle_Data_J_c                 (Obstacle_Data_J._c[6])
#define c8_Obstacle_Data_J_c                 (Obstacle_Data_J._c[7])

/* ID: 0x00000741, Handle: 39, Obstacle_Data_I [FC] */
#define c1_Obstacle_Data_I_c                 (Obstacle_Data_I._c[0])
#define c2_Obstacle_Data_I_c                 (Obstacle_Data_I._c[1])
#define c3_Obstacle_Data_I_c                 (Obstacle_Data_I._c[2])
#define c4_Obstacle_Data_I_c                 (Obstacle_Data_I._c[3])
#define c5_Obstacle_Data_I_c                 (Obstacle_Data_I._c[4])
#define c6_Obstacle_Data_I_c                 (Obstacle_Data_I._c[5])
#define c7_Obstacle_Data_I_c                 (Obstacle_Data_I._c[6])
#define c8_Obstacle_Data_I_c                 (Obstacle_Data_I._c[7])

/* ID: 0x00000740, Handle: 40, Obstacle_Data_H [FC] */
#define c1_Obstacle_Data_H_c                 (Obstacle_Data_H._c[0])
#define c2_Obstacle_Data_H_c                 (Obstacle_Data_H._c[1])
#define c3_Obstacle_Data_H_c                 (Obstacle_Data_H._c[2])
#define c4_Obstacle_Data_H_c                 (Obstacle_Data_H._c[3])
#define c5_Obstacle_Data_H_c                 (Obstacle_Data_H._c[4])
#define c6_Obstacle_Data_H_c                 (Obstacle_Data_H._c[5])
#define c7_Obstacle_Data_H_c                 (Obstacle_Data_H._c[6])
#define c8_Obstacle_Data_H_c                 (Obstacle_Data_H._c[7])

/* ID: 0x0000073f, Handle: 41, Obstacle_Data_G [FC] */
#define c1_Obstacle_Data_G_c                 (Obstacle_Data_G._c[0])
#define c2_Obstacle_Data_G_c                 (Obstacle_Data_G._c[1])
#define c3_Obstacle_Data_G_c                 (Obstacle_Data_G._c[2])
#define c4_Obstacle_Data_G_c                 (Obstacle_Data_G._c[3])
#define c5_Obstacle_Data_G_c                 (Obstacle_Data_G._c[4])
#define c6_Obstacle_Data_G_c                 (Obstacle_Data_G._c[5])
#define c7_Obstacle_Data_G_c                 (Obstacle_Data_G._c[6])
#define c8_Obstacle_Data_G_c                 (Obstacle_Data_G._c[7])

/* ID: 0x0000073e, Handle: 42, Obstacle_Data_F [FC] */
#define c1_Obstacle_Data_F_c                 (Obstacle_Data_F._c[0])
#define c2_Obstacle_Data_F_c                 (Obstacle_Data_F._c[1])
#define c3_Obstacle_Data_F_c                 (Obstacle_Data_F._c[2])
#define c4_Obstacle_Data_F_c                 (Obstacle_Data_F._c[3])
#define c5_Obstacle_Data_F_c                 (Obstacle_Data_F._c[4])
#define c6_Obstacle_Data_F_c                 (Obstacle_Data_F._c[5])
#define c7_Obstacle_Data_F_c                 (Obstacle_Data_F._c[6])
#define c8_Obstacle_Data_F_c                 (Obstacle_Data_F._c[7])

/* ID: 0x0000073d, Handle: 43, Obstacle_Data_E [FC] */
#define c1_Obstacle_Data_E_c                 (Obstacle_Data_E._c[0])
#define c2_Obstacle_Data_E_c                 (Obstacle_Data_E._c[1])
#define c3_Obstacle_Data_E_c                 (Obstacle_Data_E._c[2])
#define c4_Obstacle_Data_E_c                 (Obstacle_Data_E._c[3])
#define c5_Obstacle_Data_E_c                 (Obstacle_Data_E._c[4])
#define c6_Obstacle_Data_E_c                 (Obstacle_Data_E._c[5])
#define c7_Obstacle_Data_E_c                 (Obstacle_Data_E._c[6])
#define c8_Obstacle_Data_E_c                 (Obstacle_Data_E._c[7])

/* ID: 0x0000073c, Handle: 44, Obstacle_Data_D [FC] */
#define c1_Obstacle_Data_D_c                 (Obstacle_Data_D._c[0])
#define c2_Obstacle_Data_D_c                 (Obstacle_Data_D._c[1])
#define c3_Obstacle_Data_D_c                 (Obstacle_Data_D._c[2])
#define c4_Obstacle_Data_D_c                 (Obstacle_Data_D._c[3])
#define c5_Obstacle_Data_D_c                 (Obstacle_Data_D._c[4])
#define c6_Obstacle_Data_D_c                 (Obstacle_Data_D._c[5])
#define c7_Obstacle_Data_D_c                 (Obstacle_Data_D._c[6])
#define c8_Obstacle_Data_D_c                 (Obstacle_Data_D._c[7])

/* ID: 0x0000073b, Handle: 45, Obstacle_Data_C [FC] */
#define c1_Obstacle_Data_C_c                 (Obstacle_Data_C._c[0])
#define c2_Obstacle_Data_C_c                 (Obstacle_Data_C._c[1])
#define c3_Obstacle_Data_C_c                 (Obstacle_Data_C._c[2])
#define c4_Obstacle_Data_C_c                 (Obstacle_Data_C._c[3])
#define c5_Obstacle_Data_C_c                 (Obstacle_Data_C._c[4])
#define c6_Obstacle_Data_C_c                 (Obstacle_Data_C._c[5])
#define c7_Obstacle_Data_C_c                 (Obstacle_Data_C._c[6])
#define c8_Obstacle_Data_C_c                 (Obstacle_Data_C._c[7])

/* ID: 0x0000073a, Handle: 46, Obstacle_Data_B [FC] */
#define c1_Obstacle_Data_B_c                 (Obstacle_Data_B._c[0])
#define c2_Obstacle_Data_B_c                 (Obstacle_Data_B._c[1])
#define c3_Obstacle_Data_B_c                 (Obstacle_Data_B._c[2])
#define c4_Obstacle_Data_B_c                 (Obstacle_Data_B._c[3])
#define c5_Obstacle_Data_B_c                 (Obstacle_Data_B._c[4])
#define c6_Obstacle_Data_B_c                 (Obstacle_Data_B._c[5])
#define c7_Obstacle_Data_B_c                 (Obstacle_Data_B._c[6])
#define c8_Obstacle_Data_B_c                 (Obstacle_Data_B._c[7])

/* ID: 0x00000739, Handle: 47, Obstacle_Data_A [FC] */
#define c1_Obstacle_Data_A_c                 (Obstacle_Data_A._c[0])
#define c2_Obstacle_Data_A_c                 (Obstacle_Data_A._c[1])
#define c3_Obstacle_Data_A_c                 (Obstacle_Data_A._c[2])
#define c4_Obstacle_Data_A_c                 (Obstacle_Data_A._c[3])
#define c5_Obstacle_Data_A_c                 (Obstacle_Data_A._c[4])
#define c6_Obstacle_Data_A_c                 (Obstacle_Data_A._c[5])
#define c7_Obstacle_Data_A_c                 (Obstacle_Data_A._c[6])
#define c8_Obstacle_Data_A_c                 (Obstacle_Data_A._c[7])

/* ID: 0x00000738, Handle: 48, Obstacle_Status [FC] */
#define c1_Obstacle_Status_c                 (Obstacle_Status._c[0])
#define c2_Obstacle_Status_c                 (Obstacle_Status._c[1])
#define c3_Obstacle_Status_c                 (Obstacle_Status._c[2])
#define c4_Obstacle_Status_c                 (Obstacle_Status._c[3])
#define c5_Obstacle_Status_c                 (Obstacle_Status._c[4])
#define c6_Obstacle_Status_c                 (Obstacle_Status._c[5])

/* ID: 0x00000737, Handle: 49, Lane [FC] */
#define c1_Lane_c                            (Lane._c[0])
#define c2_Lane_c                            (Lane._c[1])
#define c3_Lane_c                            (Lane._c[2])
#define c4_Lane_c                            (Lane._c[3])
#define c5_Lane_c                            (Lane._c[4])
#define c6_Lane_c                            (Lane._c[5])
#define c7_Lane_c                            (Lane._c[6])
#define c8_Lane_c                            (Lane._c[7])

/* ID: 0x00000729, Handle: 50, AHBC_Gradual [FC] */
#define c1_AHBC_Gradual_c                    (AHBC_Gradual._c[0])
#define c2_AHBC_Gradual_c                    (AHBC_Gradual._c[1])
#define c3_AHBC_Gradual_c                    (AHBC_Gradual._c[2])
#define c4_AHBC_Gradual_c                    (AHBC_Gradual._c[3])
#define c5_AHBC_Gradual_c                    (AHBC_Gradual._c[4])
#define c6_AHBC_Gradual_c                    (AHBC_Gradual._c[5])
#define c7_AHBC_Gradual_c                    (AHBC_Gradual._c[6])

/* ID: 0x00000728, Handle: 51, AHBC_high_low_beam [FC] */
#define c1_AHBC_high_low_beam_c              (AHBC_high_low_beam._c[0])
#define c2_AHBC_high_low_beam_c              (AHBC_high_low_beam._c[1])
#define c3_AHBC_high_low_beam_c              (AHBC_high_low_beam._c[2])

/* ID: 0x00000727, Handle: 52, Sign_Type [FC] */
#define c1_Sign_Type_c                       (Sign_Type._c[0])
#define c2_Sign_Type_c                       (Sign_Type._c[1])
#define c3_Sign_Type_c                       (Sign_Type._c[2])
#define c4_Sign_Type_c                       (Sign_Type._c[3])
#define c5_Sign_Type_c                       (Sign_Type._c[4])
#define c6_Sign_Type_c                       (Sign_Type._c[5])
#define c7_Sign_Type_c                       (Sign_Type._c[6])
#define c8_Sign_Type_c                       (Sign_Type._c[7])

/* ID: 0x00000725, Handle: 53, TSR_message_F [FC] */
#define c1_TSR_message_F_c                   (TSR_message_F._c[0])
#define c2_TSR_message_F_c                   (TSR_message_F._c[1])
#define c3_TSR_message_F_c                   (TSR_message_F._c[2])
#define c4_TSR_message_F_c                   (TSR_message_F._c[3])
#define c5_TSR_message_F_c                   (TSR_message_F._c[4])
#define c6_TSR_message_F_c                   (TSR_message_F._c[5])

/* ID: 0x00000724, Handle: 54, TSR_message_E [FC] */
#define c1_TSR_message_E_c                   (TSR_message_E._c[0])
#define c2_TSR_message_E_c                   (TSR_message_E._c[1])
#define c3_TSR_message_E_c                   (TSR_message_E._c[2])
#define c4_TSR_message_E_c                   (TSR_message_E._c[3])
#define c5_TSR_message_E_c                   (TSR_message_E._c[4])
#define c6_TSR_message_E_c                   (TSR_message_E._c[5])

/* ID: 0x00000723, Handle: 55, TSR_message_D [FC] */
#define c1_TSR_message_D_c                   (TSR_message_D._c[0])
#define c2_TSR_message_D_c                   (TSR_message_D._c[1])
#define c3_TSR_message_D_c                   (TSR_message_D._c[2])
#define c4_TSR_message_D_c                   (TSR_message_D._c[3])
#define c5_TSR_message_D_c                   (TSR_message_D._c[4])
#define c6_TSR_message_D_c                   (TSR_message_D._c[5])

/* ID: 0x00000722, Handle: 56, TSR_message_C [FC] */
#define c1_TSR_message_C_c                   (TSR_message_C._c[0])
#define c2_TSR_message_C_c                   (TSR_message_C._c[1])
#define c3_TSR_message_C_c                   (TSR_message_C._c[2])
#define c4_TSR_message_C_c                   (TSR_message_C._c[3])
#define c5_TSR_message_C_c                   (TSR_message_C._c[4])
#define c6_TSR_message_C_c                   (TSR_message_C._c[5])

/* ID: 0x00000721, Handle: 57, TSR_message_B [FC] */
#define c1_TSR_message_B_c                   (TSR_message_B._c[0])
#define c2_TSR_message_B_c                   (TSR_message_B._c[1])
#define c3_TSR_message_B_c                   (TSR_message_B._c[2])
#define c4_TSR_message_B_c                   (TSR_message_B._c[3])
#define c5_TSR_message_B_c                   (TSR_message_B._c[4])
#define c6_TSR_message_B_c                   (TSR_message_B._c[5])

/* ID: 0x00000720, Handle: 58, TSR_message_A [FC] */
#define c1_TSR_message_A_c                   (TSR_message_A._c[0])
#define c2_TSR_message_A_c                   (TSR_message_A._c[1])
#define c3_TSR_message_A_c                   (TSR_message_A._c[2])
#define c4_TSR_message_A_c                   (TSR_message_A._c[3])
#define c5_TSR_message_A_c                   (TSR_message_A._c[4])
#define c6_TSR_message_A_c                   (TSR_message_A._c[5])

/* ID: 0x00000700, Handle: 59, C2_Display_and_warning [FC] */
#define c1_C2_Display_and_warning_c          (C2_Display_and_warning._c[0])
#define c2_C2_Display_and_warning_c          (C2_Display_and_warning._c[1])
#define c3_C2_Display_and_warning_c          (C2_Display_and_warning._c[2])
#define c4_C2_Display_and_warning_c          (C2_Display_and_warning._c[3])
#define c5_C2_Display_and_warning_c          (C2_Display_and_warning._c[4])
#define c6_C2_Display_and_warning_c          (C2_Display_and_warning._c[5])
#define c7_C2_Display_and_warning_c          (C2_Display_and_warning._c[6])
#define c8_C2_Display_and_warning_c          (C2_Display_and_warning._c[7])

/* ID: 0x00000669, Handle: 60, Detils_Lane [FC] */
#define c1_Detils_Lane_c                     (Detils_Lane._c[0])
#define c2_Detils_Lane_c                     (Detils_Lane._c[1])
#define c3_Detils_Lane_c                     (Detils_Lane._c[2])
#define c4_Detils_Lane_c                     (Detils_Lane._c[3])
#define c5_Detils_Lane_c                     (Detils_Lane._c[4])
#define c6_Detils_Lane_c                     (Detils_Lane._c[5])
#define c7_Detils_Lane_c                     (Detils_Lane._c[6])
#define c8_Detils_Lane_c                     (Detils_Lane._c[7])

/* ID: 0x00000650, Handle: 61, Fixed_FOE [FC] */
#define c1_Fixed_FOE_c                       (Fixed_FOE._c[0])
#define c2_Fixed_FOE_c                       (Fixed_FOE._c[1])
#define c3_Fixed_FOE_c                       (Fixed_FOE._c[2])
#define c4_Fixed_FOE_c                       (Fixed_FOE._c[3])
#define c5_Fixed_FOE_c                       (Fixed_FOE._c[4])
#define c6_Fixed_FOE_c                       (Fixed_FOE._c[5])
#define c7_Fixed_FOE_c                       (Fixed_FOE._c[6])
#define c8_Fixed_FOE_c                       (Fixed_FOE._c[7])



/* -----------------------------------------------------------------------------
    &&&~ RDS Access
 ----------------------------------------------------------------------------- */

typedef struct _c_Fixed_FOE_RDS_msgTypeTag
{
  vbittype Fixed_Yaw_0x650_0 : 8;
  vbittype Fixed_Yaw_0x650_1 : 8;
  vbittype Fixed_Yaw_0x650_2 : 8;
  vbittype Fixed_Yaw_0x650_3 : 8;
  vbittype Fixed_Horizon_0x650_0 : 8;
  vbittype Fixed_Horizon_0x650_1 : 8;
  vbittype Fixed_Horizon_0x650_2 : 8;
  vbittype Fixed_Horizon_0x650_3 : 8;
} _c_Fixed_FOE_RDS_msgType;

typedef struct _c_Detils_Lane_RDS_msgTypeTag
{
  vbittype Lane_Confidence_Left_0x669 : 2;
  vbittype LDW_Availability_Left_0x669 : 1;
  vbittype Undocumented1_0x669 : 1;
  vbittype Lane_Type_Left_0x669 : 4;
  vbittype unused0 : 4;
  vbittype Distance_To_Left_Lane_0x669_0 : 4;
  vbittype Distance_To_Left_Lane_0x669_1 : 8;
  vbittype unused1 : 8;
  vbittype unused2 : 8;
  vbittype Lane_Confidence_Right_0x669 : 2;
  vbittype LDW_Availability_Right_0x669 : 1;
  vbittype Undocumented2_0x669 : 1;
  vbittype Lane_Type_Right_0x669 : 4;
  vbittype unused3 : 4;
  vbittype Distance_To_Right_Lane_0x669_0 : 4;
  vbittype Distance_To_Right_Lane_0x669_1 : 8;
} _c_Detils_Lane_RDS_msgType;

typedef struct _c_C2_Display_and_warning_RDS_msgTypeTag
{
  vbittype Sound_type_0x700 : 3;
  vbittype Dusk_Time_Indicator_0x700 : 1;
  vbittype Night_Time_Indicator_0x700 : 1;
  vbittype unused0 : 2;
  vbittype Suppress_0x700 : 1;
  vbittype unused1 : 8;
  vbittype Headway_valid_0x700 : 1;
  vbittype Headway_measurement_0x700 : 7;
  vbittype unused2 : 8;
  vbittype Lanes_On_0x700 : 1;
  vbittype Left_LDW_ON_0x700 : 1;
  vbittype Right_LDW_ON_0x700 : 1;
  vbittype FCW_on_0x700 : 1;
  vbittype Left_Crossing_0x700 : 1;
  vbittype Right_Crossing_0x700 : 1;
  vbittype Maintenanc_0x700 : 1;
  vbittype Failsafe_0x700 : 1;
  vbittype unused3 : 1;
  vbittype Peds_FCW_0x700 : 1;
  vbittype Peds_in_DZ_0x700 : 1;
  vbittype unused4 : 5;
  vbittype unused5 : 8;
  vbittype Headway_Warning_Level_0x700 : 2;
  vbittype unused6 : 6;
} _c_C2_Display_and_warning_RDS_msgType;

typedef struct _c_TSR_message_A_RDS_msgTypeTag
{
  vbittype Vision_only_Sign_Type_0x720 : 8;
  vbittype Supplementary_Sign_Type_0x720 : 8;
  vbittype Sign_Position_X_0x720 : 8;
  vbittype Sign_Position_Y_0x720 : 8;
  vbittype Sign_Position_Z_0x720 : 8;
  vbittype Filter_Type_0x720 : 8;
} _c_TSR_message_A_RDS_msgType;

typedef struct _c_TSR_message_B_RDS_msgTypeTag
{
  vbittype Vision_only_Sign_Type_0x721 : 8;
  vbittype Supplementary_Sign_Type_0x721 : 8;
  vbittype Sign_Position_X_0x721 : 8;
  vbittype Sign_Position_Y_0x721 : 8;
  vbittype Sign_Position_Z_0x721 : 8;
  vbittype Filter_Type_0x721 : 8;
} _c_TSR_message_B_RDS_msgType;

typedef struct _c_TSR_message_C_RDS_msgTypeTag
{
  vbittype Vision_only_Sign_Type_0x722 : 8;
  vbittype Supplementary_Sign_Type_0x722 : 8;
  vbittype Sign_Position_X_0x722 : 8;
  vbittype Sign_Position_Y_0x722 : 8;
  vbittype Sign_Position_Z_0x722 : 8;
  vbittype Filter_Type_0x722 : 8;
} _c_TSR_message_C_RDS_msgType;

typedef struct _c_TSR_message_D_RDS_msgTypeTag
{
  vbittype Vision_only_Sign_Type_0x723 : 8;
  vbittype Supplementary_Sign_Type_0x723 : 8;
  vbittype Sign_Position_X_0x723 : 8;
  vbittype Sign_Position_Y_0x723 : 8;
  vbittype Sign_Position_Z_0x723 : 8;
  vbittype Filter_Type_0x723 : 8;
} _c_TSR_message_D_RDS_msgType;

typedef struct _c_TSR_message_E_RDS_msgTypeTag
{
  vbittype Vision_only_Sign_Type_0x724 : 8;
  vbittype Supplementary_Sign_Type_0x724 : 8;
  vbittype Sign_Position_X_0x724 : 8;
  vbittype Sign_Position_Y_0x724 : 8;
  vbittype Sign_Position_Z_0x724 : 8;
  vbittype Filter_Type_0x724 : 8;
} _c_TSR_message_E_RDS_msgType;

typedef struct _c_TSR_message_F_RDS_msgTypeTag
{
  vbittype Vision_only_Sign_Type_0x725 : 8;
  vbittype Supplementary_Sign_Type_0x725 : 8;
  vbittype Sign_Position_X_0x725 : 8;
  vbittype Sign_Position_Y_0x725 : 8;
  vbittype Sign_Position_Z_0x725 : 8;
  vbittype Filter_Type_0x725 : 8;
} _c_TSR_message_F_RDS_msgType;

typedef struct _c_Sign_Type_RDS_msgTypeTag
{
  vbittype Vision_only_Sign_Type_Display1_0x727 : 8;
  vbittype Supplementary_Sign_Type_Display1_0x727 : 8;
  vbittype Vision_only_Sign_Type_Display2_0x727 : 8;
  vbittype Supplementary_Sign_Type_Display2_0x727 : 8;
  vbittype Vision_only_Sign_Type_Display3_0x727 : 8;
  vbittype Supplementary_Sign_Type_Display3_0x727 : 8;
  vbittype Vision_only_Sign_Type_Display4_0x727 : 8;
  vbittype Supplementary_Sign_Type_Display4_0x727 : 8;
} _c_Sign_Type_RDS_msgType;

typedef struct _c_AHBC_high_low_beam_RDS_msgTypeTag
{
  vbittype Binary_high_low_beam_decision_0x728 : 2;
  vbittype unused0 : 6;
  vbittype Reasons_for_switch_to_low_beam_0x728_0 : 8;
  vbittype Reasons_for_switch_to_low_beam_0x728_1 : 1;
  vbittype unused1 : 7;
} _c_AHBC_high_low_beam_RDS_msgType;

typedef struct _c_AHBC_Gradual_RDS_msgTypeTag
{
  vbittype Boundary_bottom_HLB_0x729 : 8;
  vbittype Boundary_left_hand_HLB_0x729_0 : 8;
  vbittype Boundary_left_hand_HLB_0x729_1 : 4;
  vbittype Boundary_right_hand_HLB_0x729_0 : 4;
  vbittype Boundary_right_hand_HLB_0x729_1 : 8;
  vbittype Object_Distance_HLB_0x729 : 8;
  vbittype Status_Bottom_HLB_0x729 : 2;
  vbittype Status_Left_Hand_HLB_0x729 : 2;
  vbittype Status_Right_Hand_HLB_0x729 : 2;
  vbittype Status_Object_Distance_HLB_0x729 : 2;
  vbittype Left_Target_Change_0x729 : 1;
  vbittype Right_Target_Change_0x729 : 1;
  vbittype Too_Many_Cars_0x729 : 1;
  vbittype Busy_Scene_0x729 : 1;
  vbittype unused0 : 4;
} _c_AHBC_Gradual_RDS_msgType;

typedef struct _c_Lane_RDS_msgTypeTag
{
  vbittype Lane_Curvature_0x737_0 : 8;
  vbittype Lane_Curvature_0x737_1 : 8;
  vbittype Lane_Heading_0x737_0 : 8;
  vbittype Lane_Heading_0x737_1 : 4;
  vbittype CA_0x737 : 1;
  vbittype Right_LDW_Availability_0x737 : 1;
  vbittype Left_LDW_Availability_0x737 : 1;
  vbittype unused0 : 1;
  vbittype Yaw_Angle_0x737_0 : 8;
  vbittype Yaw_Angle_0x737_1 : 8;
  vbittype Pitch_Angle_0x737_0 : 8;
  vbittype Pitch_Angle_0x737_1 : 8;
} _c_Lane_RDS_msgType;

typedef struct _c_Obstacle_Status_RDS_msgTypeTag
{
  vbittype Num_Obstacles_0x738 : 8;
  vbittype Timestamp_0x738 : 8;
  vbittype Application_Version_0x738 : 8;
  vbittype Active_Version_Number_Section_0x738 : 2;
  vbittype Left_close_rang_cut_in_0x738 : 1;
  vbittype Right_close_rang_cut_in_0x738 : 1;
  vbittype Go_0x738 : 4;
  vbittype Protocol_Version_0x738 : 8;
  vbittype Close_Car_0x738 : 1;
  vbittype Failsafe_0x738 : 4;
  vbittype unused0 : 3;
} _c_Obstacle_Status_RDS_msgType;

typedef struct _c_Obstacle_Data_A_RDS_msgTypeTag
{
  vbittype Obstacle_ID_0x739 : 8;
  vbittype Obstacle_Pos_X_0x739_0 : 8;
  vbittype Obstacle_Pos_X_0x739_1 : 4;
  vbittype unused0 : 4;
  vbittype Obstacle_Pos_Y_0x739_0 : 8;
  vbittype Obstacle_Pos_Y_0x739_1 : 2;
  vbittype Blinker_Info_0x739 : 3;
  vbittype Cut_in_and_out_0x739 : 3;
  vbittype Obstacle_Rel_Vel_X_0x739_0 : 8;
  vbittype Obstacle_Rel_Vel_X_0x739_1 : 4;
  vbittype Obstacle_Type_0x739 : 3;
  vbittype unused1 : 1;
  vbittype Obstacle_Status_0x739 : 3;
  vbittype Obstacle_Brake_Light_0x739 : 1;
  vbittype unused2 : 2;
  vbittype Obstacle_Valid_0x739 : 2;
} _c_Obstacle_Data_A_RDS_msgType;

typedef struct _c_Obstacle_Data_B_RDS_msgTypeTag
{
  vbittype Obstacle_Legnth_0x73A : 8;
  vbittype Obstacle_Width_0x73A : 8;
  vbittype Obstacle_Age_0x73A : 8;
  vbittype Obstacle_Lane_0x73A : 2;
  vbittype CIPV_Flag_0x73A : 1;
  vbittype unused0 : 1;
  vbittype Radar_Pos_X_0x73A_0 : 4;
  vbittype Radar_Pos_X_0x73A_1 : 8;
  vbittype Radar_Vel_X_0x73A_0 : 8;
  vbittype Radar_Vel_X_0x73A_1 : 4;
  vbittype Radar_Match_Confidence_0x73A : 3;
  vbittype unused1 : 1;
  vbittype Matched_Radar_ID_0x73A : 7;
  vbittype unused2 : 1;
} _c_Obstacle_Data_B_RDS_msgType;

typedef struct _c_Obstacle_Data_C_RDS_msgTypeTag
{
  vbittype Obstacle_Angle_Rate_0x73B_0 : 8;
  vbittype Obstacle_Angle_Rate_0x73B_1 : 8;
  vbittype Obstacle_Scale_Change_0x73B_0 : 8;
  vbittype Obstacle_Scale_Change_0x73B_1 : 8;
  vbittype Object_Accel_X_0x73B_0 : 8;
  vbittype Object_Accel_X_0x73B_1 : 2;
  vbittype unused0 : 2;
  vbittype Obstacle_Replaced_0x73B : 1;
  vbittype unused1 : 3;
  vbittype Obstacle_Angle_0x73B_0 : 8;
  vbittype Obstacle_Angle_0x73B_1 : 8;
} _c_Obstacle_Data_C_RDS_msgType;

typedef struct _c_Obstacle_Data_D_RDS_msgTypeTag
{
  vbittype Obstacle_ID_0x73C : 8;
  vbittype Obstacle_Pos_X_0x73C_0 : 8;
  vbittype Obstacle_Pos_X_0x73C_1 : 4;
  vbittype unused0 : 4;
  vbittype Obstacle_Pos_Y_0x73C_0 : 8;
  vbittype Obstacle_Pos_Y_0x73C_1 : 2;
  vbittype Blinker_Info_0x73C : 3;
  vbittype Cut_in_and_out_0x73C : 3;
  vbittype Obstacle_Rel_Vel_X_0x73C_0 : 8;
  vbittype Obstacle_Rel_Vel_X_0x73C_1 : 4;
  vbittype Obstacle_Type_0x73C : 3;
  vbittype unused1 : 1;
  vbittype Obstacle_Status_0x73C : 3;
  vbittype Obstacle_Brake_Light_0x73C : 1;
  vbittype unused2 : 2;
  vbittype Obstacle_Valid_0x73C : 2;
} _c_Obstacle_Data_D_RDS_msgType;

typedef struct _c_Obstacle_Data_E_RDS_msgTypeTag
{
  vbittype Obstacle_Legnth_0x73D : 8;
  vbittype Obstacle_Width_0x73D : 8;
  vbittype Obstacle_Age_0x73D : 8;
  vbittype Obstacle_Lane_0x73D : 2;
  vbittype CIPV_Flag_0x73D : 1;
  vbittype unused0 : 1;
  vbittype Radar_Pos_X_0x73D_0 : 4;
  vbittype Radar_Pos_X_0x73D_1 : 8;
  vbittype Radar_Vel_X_0x73D_0 : 8;
  vbittype Radar_Vel_X_0x73D_1 : 4;
  vbittype Radar_Match_Confidence_0x73D : 3;
  vbittype unused1 : 1;
  vbittype Matched_Radar_ID_0x73D : 7;
  vbittype unused2 : 1;
} _c_Obstacle_Data_E_RDS_msgType;

typedef struct _c_Obstacle_Data_F_RDS_msgTypeTag
{
  vbittype Obstacle_Angle_Rate_0x73E_0 : 8;
  vbittype Obstacle_Angle_Rate_0x73E_1 : 8;
  vbittype Obstacle_Scale_Change_0x73E_0 : 8;
  vbittype Obstacle_Scale_Change_0x73E_1 : 8;
  vbittype Object_Accel_X_0x73E_0 : 8;
  vbittype Object_Accel_X_0x73E_1 : 2;
  vbittype unused0 : 2;
  vbittype Obstacle_Replaced_0x73E : 1;
  vbittype unused1 : 3;
  vbittype Obstacle_Angle_0x73E_0 : 8;
  vbittype Obstacle_Angle_0x73E_1 : 8;
} _c_Obstacle_Data_F_RDS_msgType;

typedef struct _c_Obstacle_Data_G_RDS_msgTypeTag
{
  vbittype Obstacle_ID_0x73F : 8;
  vbittype Obstacle_Pos_X_0x73F_0 : 8;
  vbittype Obstacle_Pos_X_0x73F_1 : 4;
  vbittype unused0 : 4;
  vbittype Obstacle_Pos_Y_0x73F_0 : 8;
  vbittype Obstacle_Pos_Y_0x73F_1 : 2;
  vbittype Blinker_Info_0x73F : 3;
  vbittype Cut_in_and_out_0x73F : 3;
  vbittype Obstacle_Rel_Vel_X_0x73F_0 : 8;
  vbittype Obstacle_Rel_Vel_X_0x73F_1 : 4;
  vbittype Obstacle_Type_0x73F : 3;
  vbittype unused1 : 1;
  vbittype Obstacle_Status_0x73F : 3;
  vbittype Obstacle_Brake_Light_0x73F : 1;
  vbittype unused2 : 2;
  vbittype Obstacle_Valid_0x73F : 2;
} _c_Obstacle_Data_G_RDS_msgType;

typedef struct _c_Obstacle_Data_H_RDS_msgTypeTag
{
  vbittype Obstacle_Legnth_0x740 : 8;
  vbittype Obstacle_Width_0x740 : 8;
  vbittype Obstacle_Age_0x740 : 8;
  vbittype Obstacle_Lane_0x740 : 2;
  vbittype CIPV_Flag_0x740 : 1;
  vbittype unused0 : 1;
  vbittype Radar_Pos_X_0x740_0 : 4;
  vbittype Radar_Pos_X_0x740_1 : 8;
  vbittype Radar_Vel_X_0x740_0 : 8;
  vbittype Radar_Vel_X_0x740_1 : 4;
  vbittype Radar_Match_Confidence_0x740 : 3;
  vbittype unused1 : 1;
  vbittype Matched_Radar_ID_0x740 : 7;
  vbittype unused2 : 1;
} _c_Obstacle_Data_H_RDS_msgType;

typedef struct _c_Obstacle_Data_I_RDS_msgTypeTag
{
  vbittype Obstacle_Angle_Rate_0x741_0 : 8;
  vbittype Obstacle_Angle_Rate_0x741_1 : 8;
  vbittype Obstacle_Scale_Change_0x741_0 : 8;
  vbittype Obstacle_Scale_Change_0x741_1 : 8;
  vbittype Object_Accel_X_0x741_0 : 8;
  vbittype Object_Accel_X_0x741_1 : 2;
  vbittype unused0 : 2;
  vbittype Obstacle_Replaced_0x741 : 1;
  vbittype unused1 : 3;
  vbittype Obstacle_Angle_0x741_0 : 8;
  vbittype Obstacle_Angle_0x741_1 : 8;
} _c_Obstacle_Data_I_RDS_msgType;

typedef struct _c_Obstacle_Data_J_RDS_msgTypeTag
{
  vbittype Obstacle_ID_0x742 : 8;
  vbittype Obstacle_Pos_X_0x742_0 : 8;
  vbittype Obstacle_Pos_X_0x742_1 : 4;
  vbittype unused0 : 4;
  vbittype Obstacle_Pos_Y_0x742_0 : 8;
  vbittype Obstacle_Pos_Y_0x742_1 : 2;
  vbittype Blinker_Info_0x742 : 3;
  vbittype Cut_in_and_out_0x742 : 3;
  vbittype Obstacle_Rel_Vel_X_0x742_0 : 8;
  vbittype Obstacle_Rel_Vel_X_0x742_1 : 4;
  vbittype Obstacle_Type_0x742 : 3;
  vbittype unused1 : 1;
  vbittype Obstacle_Status_0x742 : 3;
  vbittype Obstacle_Brake_Light_0x742 : 1;
  vbittype unused2 : 2;
  vbittype Obstacle_Valid_0x742 : 2;
} _c_Obstacle_Data_J_RDS_msgType;

typedef struct _c_Obstacle_Data_K_RDS_msgTypeTag
{
  vbittype Obstacle_Legnth_0x743 : 8;
  vbittype Obstacle_Width_0x743 : 8;
  vbittype Obstacle_Age_0x743 : 8;
  vbittype Obstacle_Lane_0x743 : 2;
  vbittype CIPV_Flag_0x743 : 1;
  vbittype unused0 : 1;
  vbittype Radar_Pos_X_0x743_0 : 4;
  vbittype Radar_Pos_X_0x743_1 : 8;
  vbittype Radar_Vel_X_0x743_0 : 8;
  vbittype Radar_Vel_X_0x743_1 : 4;
  vbittype Radar_Match_Confidence_0x743 : 3;
  vbittype unused1 : 1;
  vbittype Matched_Radar_ID_0x743 : 7;
  vbittype unused2 : 1;
} _c_Obstacle_Data_K_RDS_msgType;

typedef struct _c_Obstacle_Data_L_RDS_msgTypeTag
{
  vbittype Obstacle_Angle_Rate_0x744_0 : 8;
  vbittype Obstacle_Angle_Rate_0x744_1 : 8;
  vbittype Obstacle_Scale_Change_0x744_0 : 8;
  vbittype Obstacle_Scale_Change_0x744_1 : 8;
  vbittype Object_Accel_X_0x744_0 : 8;
  vbittype Object_Accel_X_0x744_1 : 2;
  vbittype unused0 : 2;
  vbittype Obstacle_Replaced_0x744 : 1;
  vbittype unused1 : 3;
  vbittype Obstacle_Angle_0x744_0 : 8;
  vbittype Obstacle_Angle_0x744_1 : 8;
} _c_Obstacle_Data_L_RDS_msgType;

typedef struct _c_Obstacle_Data_M_RDS_msgTypeTag
{
  vbittype Obstacle_ID_0x745 : 8;
  vbittype Obstacle_Pos_X_0x745_0 : 8;
  vbittype Obstacle_Pos_X_0x745_1 : 4;
  vbittype unused0 : 4;
  vbittype Obstacle_Pos_Y_0x745_0 : 8;
  vbittype Obstacle_Pos_Y_0x745_1 : 2;
  vbittype Blinker_Info_0x745 : 3;
  vbittype Cut_in_and_out_0x745 : 3;
  vbittype Obstacle_Rel_Vel_X_0x745_0 : 8;
  vbittype Obstacle_Rel_Vel_X_0x745_1 : 4;
  vbittype Obstacle_Type_0x745 : 3;
  vbittype unused1 : 1;
  vbittype Obstacle_Status_0x745 : 3;
  vbittype Obstacle_Brake_Light_0x745 : 1;
  vbittype unused2 : 2;
  vbittype Obstacle_Valid_0x745 : 2;
} _c_Obstacle_Data_M_RDS_msgType;

typedef struct _c_Obstacle_Data_N_RDS_msgTypeTag
{
  vbittype Obstacle_Legnth_0x746 : 8;
  vbittype Obstacle_Width_0x746 : 8;
  vbittype Obstacle_Age_0x746 : 8;
  vbittype Obstacle_Lane_0x746 : 2;
  vbittype CIPV_Flag_0x746 : 1;
  vbittype unused0 : 1;
  vbittype Radar_Pos_X_0x746_0 : 4;
  vbittype Radar_Pos_X_0x746_1 : 8;
  vbittype Radar_Vel_X_0x746_0 : 8;
  vbittype Radar_Vel_X_0x746_1 : 4;
  vbittype Radar_Match_Confidence_0x746 : 3;
  vbittype unused1 : 1;
  vbittype Matched_Radar_ID_0x746 : 7;
  vbittype unused2 : 1;
} _c_Obstacle_Data_N_RDS_msgType;

typedef struct _c_Obstacle_Data_O_RDS_msgTypeTag
{
  vbittype Obstacle_Angle_Rate_0x747_0 : 8;
  vbittype Obstacle_Angle_Rate_0x747_1 : 8;
  vbittype Obstacle_Scale_Change_0x747_0 : 8;
  vbittype Obstacle_Scale_Change_0x747_1 : 8;
  vbittype Object_Accel_X_0x747_0 : 8;
  vbittype Object_Accel_X_0x747_1 : 2;
  vbittype unused0 : 2;
  vbittype Obstacle_Replaced_0x747 : 1;
  vbittype unused1 : 3;
  vbittype Obstacle_Angle_0x747_0 : 8;
  vbittype Obstacle_Angle_0x747_1 : 8;
} _c_Obstacle_Data_O_RDS_msgType;

typedef struct _c_Obstacle_Data_P_RDS_msgTypeTag
{
  vbittype Obstacle_ID_0x748 : 8;
  vbittype Obstacle_Pos_X_0x748_0 : 8;
  vbittype Obstacle_Pos_X_0x748_1 : 4;
  vbittype unused0 : 4;
  vbittype Obstacle_Pos_Y_0x748_0 : 8;
  vbittype Obstacle_Pos_Y_0x748_1 : 2;
  vbittype Blinker_Info_0x748 : 3;
  vbittype Cut_in_and_out_0x748 : 3;
  vbittype Obstacle_Rel_Vel_X_0x748_0 : 8;
  vbittype Obstacle_Rel_Vel_X_0x748_1 : 4;
  vbittype Obstacle_Type_0x748 : 3;
  vbittype unused1 : 1;
  vbittype Obstacle_Status_0x748 : 3;
  vbittype Obstacle_Brake_Light_0x748 : 1;
  vbittype unused2 : 2;
  vbittype Obstacle_Valid_0x748 : 2;
} _c_Obstacle_Data_P_RDS_msgType;

typedef struct _c_Obstacle_Data_Q_RDS_msgTypeTag
{
  vbittype Obstacle_Legnth_0x749 : 8;
  vbittype Obstacle_Width_0x749 : 8;
  vbittype Obstacle_Age_0x749 : 8;
  vbittype Obstacle_Lane_0x749 : 2;
  vbittype CIPV_Flag_0x749 : 1;
  vbittype unused0 : 1;
  vbittype Radar_Pos_X_0x749_0 : 4;
  vbittype Radar_Pos_X_0x749_1 : 8;
  vbittype Radar_Vel_X_0x749_0 : 8;
  vbittype Radar_Vel_X_0x749_1 : 4;
  vbittype Radar_Match_Confidence_0x749 : 3;
  vbittype unused1 : 1;
  vbittype Matched_Radar_ID_0x749 : 7;
  vbittype unused2 : 1;
} _c_Obstacle_Data_Q_RDS_msgType;

typedef struct _c_Obstacle_Data_R_RDS_msgTypeTag
{
  vbittype Obstacle_Angle_Rate_0x74A_0 : 8;
  vbittype Obstacle_Angle_Rate_0x74A_1 : 8;
  vbittype Obstacle_Scale_Change_0x74A_0 : 8;
  vbittype Obstacle_Scale_Change_0x74A_1 : 8;
  vbittype Object_Accel_X_0x74A_0 : 8;
  vbittype Object_Accel_X_0x74A_1 : 2;
  vbittype unused0 : 2;
  vbittype Obstacle_Replaced_0x74A : 1;
  vbittype unused1 : 3;
  vbittype Obstacle_Angle_0x74A_0 : 8;
  vbittype Obstacle_Angle_0x74A_1 : 8;
} _c_Obstacle_Data_R_RDS_msgType;

typedef struct _c_Obstacle_Data_S_RDS_msgTypeTag
{
  vbittype Obstacle_ID_0x74B : 8;
  vbittype Obstacle_Pos_X_0x74B_0 : 8;
  vbittype Obstacle_Pos_X_0x74B_1 : 4;
  vbittype unused0 : 4;
  vbittype Obstacle_Pos_Y_0x74B_0 : 8;
  vbittype Obstacle_Pos_Y_0x74B_1 : 2;
  vbittype Blinker_Info_0x74B : 3;
  vbittype Cut_in_and_out_0x74B : 3;
  vbittype Obstacle_Rel_Vel_X_0x74B_0 : 8;
  vbittype Obstacle_Rel_Vel_X_0x74B_1 : 4;
  vbittype Obstacle_Type_0x74B : 3;
  vbittype unused1 : 1;
  vbittype Obstacle_Status_0x74B : 3;
  vbittype Obstacle_Brake_Light_0x74B : 1;
  vbittype unused2 : 2;
  vbittype Obstacle_Valid_0x74B : 2;
} _c_Obstacle_Data_S_RDS_msgType;

typedef struct _c_Obstacle_Data_T_RDS_msgTypeTag
{
  vbittype Obstacle_Legnth_0x74C : 8;
  vbittype Obstacle_Width_0x74C : 8;
  vbittype Obstacle_Age_0x74C : 8;
  vbittype Obstacle_Lane_0x74C : 2;
  vbittype CIPV_Flag_0x74C : 1;
  vbittype unused0 : 1;
  vbittype Radar_Pos_X_0x74C_0 : 4;
  vbittype Radar_Pos_X_0x74C_1 : 8;
  vbittype Radar_Vel_X_0x74C_0 : 8;
  vbittype Radar_Vel_X_0x74C_1 : 4;
  vbittype Radar_Match_Confidence_0x74C : 3;
  vbittype unused1 : 1;
  vbittype Matched_Radar_ID_0x74C : 7;
  vbittype unused2 : 1;
} _c_Obstacle_Data_T_RDS_msgType;

typedef struct _c_Obstacle_Data_U_RDS_msgTypeTag
{
  vbittype Obstacle_Angle_Rate_0x74D_0 : 8;
  vbittype Obstacle_Angle_Rate_0x74D_1 : 8;
  vbittype Obstacle_Scale_Change_0x74D_0 : 8;
  vbittype Obstacle_Scale_Change_0x74D_1 : 8;
  vbittype Object_Accel_X_0x74D_0 : 8;
  vbittype Object_Accel_X_0x74D_1 : 2;
  vbittype unused0 : 2;
  vbittype Obstacle_Replaced_0x74D : 1;
  vbittype unused1 : 3;
  vbittype Obstacle_Angle_0x74D_0 : 8;
  vbittype Obstacle_Angle_0x74D_1 : 8;
} _c_Obstacle_Data_U_RDS_msgType;

typedef struct _c_Obstacle_Data_V_RDS_msgTypeTag
{
  vbittype Obstacle_ID_0x74E : 8;
  vbittype Obstacle_Pos_X_0x74E_0 : 8;
  vbittype Obstacle_Pos_X_0x74E_1 : 4;
  vbittype unused0 : 4;
  vbittype Obstacle_Pos_Y_0x74E_0 : 8;
  vbittype Obstacle_Pos_Y_0x74E_1 : 2;
  vbittype Blinker_Info_0x74E : 3;
  vbittype Cut_in_and_out_0x74E : 3;
  vbittype Obstacle_Rel_Vel_X_0x74E_0 : 8;
  vbittype Obstacle_Rel_Vel_X_0x74E_1 : 4;
  vbittype Obstacle_Type_0x74E : 3;
  vbittype unused1 : 1;
  vbittype Obstacle_Status_0x74E : 3;
  vbittype Obstacle_Brake_Light_0x74E : 1;
  vbittype unused2 : 2;
  vbittype Obstacle_Valid_0x74E : 2;
} _c_Obstacle_Data_V_RDS_msgType;

typedef struct _c_Obstacle_Data_W_RDS_msgTypeTag
{
  vbittype Obstacle_Legnth_0x74F : 8;
  vbittype Obstacle_Width_0x74F : 8;
  vbittype Obstacle_Age_0x74F : 8;
  vbittype Obstacle_Lane_0x74F : 2;
  vbittype CIPV_Flag_0x74F : 1;
  vbittype unused0 : 1;
  vbittype Radar_Pos_X_0x74F_0 : 4;
  vbittype Radar_Pos_X_0x74F_1 : 8;
  vbittype Radar_Vel_X_0x74F_0 : 8;
  vbittype Radar_Vel_X_0x74F_1 : 4;
  vbittype Radar_Match_Confidence_0x74F : 3;
  vbittype unused1 : 1;
  vbittype Matched_Radar_ID_0x74F : 7;
  vbittype unused2 : 1;
} _c_Obstacle_Data_W_RDS_msgType;

typedef struct _c_Obstacle_Data_X_RDS_msgTypeTag
{
  vbittype Obstacle_Angle_Rate_0x750_0 : 8;
  vbittype Obstacle_Angle_Rate_0x750_1 : 8;
  vbittype Obstacle_Scale_Change_0x750_0 : 8;
  vbittype Obstacle_Scale_Change_0x750_1 : 8;
  vbittype Object_Accel_X_0x750_0 : 8;
  vbittype Object_Accel_X_0x750_1 : 2;
  vbittype unused0 : 2;
  vbittype Obstacle_Replaced_0x750 : 1;
  vbittype unused1 : 3;
  vbittype Obstacle_Angle_0x750_0 : 8;
  vbittype Obstacle_Angle_0x750_1 : 8;
} _c_Obstacle_Data_X_RDS_msgType;

typedef struct _c_Car_Info_RDS_msgTypeTag
{
  vbittype Brakes_0x760 : 1;
  vbittype Left_Signal_0x760 : 1;
  vbittype Right_Signal_0x760 : 1;
  vbittype Wipers_0x760 : 1;
  vbittype Low_Beam_0x760 : 1;
  vbittype High_Beam_0x760 : 1;
  vbittype unused0 : 2;
  vbittype unused1 : 3;
  vbittype Wipers_available_0x760 : 1;
  vbittype Low_Beam_available_0x760 : 1;
  vbittype High_Beam_Available_0x760 : 1;
  vbittype unused2 : 1;
  vbittype Speed_Available_0x760 : 1;
  vbittype Speed_0x760 : 8;
  vbittype unused3 : 8;
  vbittype unused4 : 8;
  vbittype unused5 : 8;
  vbittype unused6 : 8;
  vbittype unused7 : 8;
} _c_Car_Info_RDS_msgType;

typedef struct _c_LKA_left_lane_A_RDS_msgTypeTag
{
  vbittype Lane_type_0x766 : 4;
  vbittype Quality_0x766 : 2;
  vbittype Model_degree_0x766 : 2;
  vbittype Position_Parameter_C0_0x766_0 : 8;
  vbittype Position_Parameter_C0_0x766_1 : 8;
  vbittype Curvature_Parameter_C2_0x766_0 : 8;
  vbittype Curvature_Parameter_C2_0x766_1 : 8;
  vbittype Curvature_derivative_C3_0x766_0 : 8;
  vbittype Curvature_derivative_C3_0x766_1 : 8;
  vbittype Width_left_marking_0x766 : 8;
} _c_LKA_left_lane_A_RDS_msgType;

typedef struct _c_LKA_left_lane_B_RDS_msgTypeTag
{
  vbittype Heading_angle_Parameter_C1_0x767_0 : 8;
  vbittype Heading_angle_Parameter_C1_0x767_1 : 8;
  vbittype View_range_0x767_0 : 8;
  vbittype View_range_0x767_1 : 7;
  vbittype View_range_availability_0x767 : 1;
} _c_LKA_left_lane_B_RDS_msgType;

typedef struct _c_LKA_right_lane_A_RDS_msgTypeTag
{
  vbittype Lane_type_0x768 : 4;
  vbittype Quality_0x768 : 2;
  vbittype Model_degree_0x768 : 2;
  vbittype Position_Parameter_C0_0x768_0 : 8;
  vbittype Position_Parameter_C0_0x768_1 : 8;
  vbittype Curvature_Parameter_C2_0x768_0 : 8;
  vbittype Curvature_Parameter_C2_0x768_1 : 8;
  vbittype Curvature_derivative_C3_0x768_0 : 8;
  vbittype Curvature_derivative_C3_0x768_1 : 8;
  vbittype Width_right_marking_0x768 : 8;
} _c_LKA_right_lane_A_RDS_msgType;

typedef struct _c_LKA_right_lane_B_RDS_msgTypeTag
{
  vbittype Heading_angle_Parameter_C1_0x769_0 : 8;
  vbittype Heading_angle_Parameter_C1_0x769_1 : 8;
  vbittype View_range_0x769_0 : 8;
  vbittype View_range_0x769_1 : 7;
  vbittype View_range_availability_0x769 : 1;
} _c_LKA_right_lane_B_RDS_msgType;

typedef struct _c_Reference_points_RDS_msgTypeTag
{
  vbittype Ref_point_1_Position_0x76A_0 : 8;
  vbittype Ref_point_1_Position_0x76A_1 : 8;
  vbittype Ref_point_1_Distance_0x76A_0 : 8;
  vbittype Ref_point_1_Distance_0x76A_1 : 7;
  vbittype Ref_point_1_validity_0x76A : 1;
  vbittype Ref_point_2_Position_0x76A_0 : 8;
  vbittype Ref_point_2_Position_0x76A_1 : 8;
  vbittype Ref_point_2_Distance_0x76A_0 : 8;
  vbittype Ref_point_2_Distance_0x76A_1 : 7;
  vbittype Ref_point_2_validity_0x76A : 1;
} _c_Reference_points_RDS_msgType;

typedef struct _c_Numebr_of_next_lane_RDS_msgTypeTag
{
  vbittype Number_lane_markers_reported0x76B : 8;
} _c_Numebr_of_next_lane_RDS_msgType;

typedef struct _c_Next_lane_Left_A_RDS_msgTypeTag
{
  vbittype Lane_type_0x76C : 4;
  vbittype Quality_0x76C : 2;
  vbittype Model_degree_0x76C : 2;
  vbittype Position_Parameter_C0_0x76C_0 : 8;
  vbittype Position_Parameter_C0_0x76C_1 : 8;
  vbittype Curvature_Parameter_C2_0x76C_0 : 8;
  vbittype Curvature_Parameter_C2_0x76C_1 : 8;
  vbittype Curvature_derivative_C3_0x76C_0 : 8;
  vbittype Curvature_derivative_C3_0x76C_1 : 8;
  vbittype Lane_mark_width_0x76C : 8;
} _c_Next_lane_Left_A_RDS_msgType;

typedef struct _c_Next_lane_Left_B_RDS_msgTypeTag
{
  vbittype Heading_angle_Parameter_C1_0x76D_0 : 8;
  vbittype Heading_angle_Parameter_C1_0x76D_1 : 8;
  vbittype View_range_0x76D_0 : 8;
  vbittype View_range_0x76D_1 : 7;
  vbittype View_range_availability_0x76D : 1;
} _c_Next_lane_Left_B_RDS_msgType;

typedef struct _c_Next_lane_Right_C_RDS_msgTypeTag
{
  vbittype Lane_type_0x76E : 4;
  vbittype Quality_0x76E : 2;
  vbittype Model_degree_0x76E : 2;
  vbittype Position_Parameter_C0_0x76E_0 : 8;
  vbittype Position_Parameter_C0_0x76E_1 : 8;
  vbittype Curvature_Parameter_C2_0x76E_0 : 8;
  vbittype Curvature_Parameter_C2_0x76E_1 : 8;
  vbittype Curvature_derivative_C3_0x76E_0 : 8;
  vbittype Curvature_derivative_C3_0x76E_1 : 8;
  vbittype Lane_mark_width_0x76E : 8;
} _c_Next_lane_Right_C_RDS_msgType;

typedef struct _c_Next_lane_Right_D_RDS_msgTypeTag
{
  vbittype Heading_angle_Parameter_C1_0x76F_0 : 8;
  vbittype Heading_angle_Parameter_C1_0x76F_1 : 8;
  vbittype View_range_0x76F_0 : 8;
  vbittype View_range_0x76F_1 : 7;
  vbittype View_range_availability_0x76F : 1;
} _c_Next_lane_Right_D_RDS_msgType;

typedef struct _c_Next_lane_Left_E_RDS_msgTypeTag
{
  vbittype Lane_type_0x770 : 4;
  vbittype Quality_0x770 : 2;
  vbittype Model_degree_0x770 : 2;
  vbittype Position_Parameter_C0_0x770_0 : 8;
  vbittype Position_Parameter_C0_0x770_1 : 8;
  vbittype Curvature_Parameter_C2_0x770_0 : 8;
  vbittype Curvature_Parameter_C2_0x770_1 : 8;
  vbittype Curvature_derivative_C3_0x770_0 : 8;
  vbittype Curvature_derivative_C3_0x770_1 : 8;
  vbittype Lane_mark_width_0x770 : 8;
} _c_Next_lane_Left_E_RDS_msgType;

typedef struct _c_Next_lane_Left_F_RDS_msgTypeTag
{
  vbittype Heading_angle_Parameter_C1_0x771_0 : 8;
  vbittype Heading_angle_Parameter_C1_0x771_1 : 8;
  vbittype View_range_0x771_0 : 8;
  vbittype View_range_0x771_1 : 7;
  vbittype View_range_availability_0x771 : 1;
} _c_Next_lane_Left_F_RDS_msgType;

typedef struct _c_Next_lane_Right_G_RDS_msgTypeTag
{
  vbittype Lane_type_0x772 : 4;
  vbittype Quality_0x772 : 2;
  vbittype Model_degree_0x772 : 2;
  vbittype Position_Parameter_C0_0x772_0 : 8;
  vbittype Position_Parameter_C0_0x772_1 : 8;
  vbittype Curvature_Parameter_C2_0x772_0 : 8;
  vbittype Curvature_Parameter_C2_0x772_1 : 8;
  vbittype Curvature_derivative_C3_0x772_0 : 8;
  vbittype Curvature_derivative_C3_0x772_1 : 8;
  vbittype Lane_mark_width_0x772 : 8;
} _c_Next_lane_Right_G_RDS_msgType;

typedef struct _c_Next_lane_Right_H_RDS_msgTypeTag
{
  vbittype Heading_angle_Parameter_C1_0x773_0 : 8;
  vbittype Heading_angle_Parameter_C1_0x773_1 : 8;
  vbittype View_range_0x773_0 : 8;
  vbittype View_range_0x773_1 : 7;
  vbittype View_range_availability_0x773 : 1;
} _c_Next_lane_Right_H_RDS_msgType;

typedef struct _c_Next_lane_Left_I_RDS_msgTypeTag
{
  vbittype Lane_type_0x774 : 4;
  vbittype Quality_0x774 : 2;
  vbittype Model_degree_0x774 : 2;
  vbittype Position_Parameter_C0_0x774_0 : 8;
  vbittype Position_Parameter_C0_0x774_1 : 8;
  vbittype Curvature_Parameter_C2_0x774_0 : 8;
  vbittype Curvature_Parameter_C2_0x774_1 : 8;
  vbittype Curvature_derivative_C3_0x774_0 : 8;
  vbittype Curvature_derivative_C3_0x774_1 : 8;
  vbittype Lane_mark_width_0x774 : 8;
} _c_Next_lane_Left_I_RDS_msgType;

typedef struct _c_Next_lane_Left_J_RDS_msgTypeTag
{
  vbittype Heading_angle_Parameter_C1_0x775_0 : 8;
  vbittype Heading_angle_Parameter_C1_0x775_1 : 8;
  vbittype View_range_0x775_0 : 8;
  vbittype View_range_0x775_1 : 7;
  vbittype View_range_availability_0x775 : 1;
} _c_Next_lane_Left_J_RDS_msgType;

typedef struct _c_Next_lane_Right_K_RDS_msgTypeTag
{
  vbittype Lane_type_0x776 : 4;
  vbittype Quality_0x776 : 2;
  vbittype Model_degree_0x776 : 2;
  vbittype Position_Parameter_C0_0x776_0 : 8;
  vbittype Position_Parameter_C0_0x776_1 : 8;
  vbittype Curvature_Parameter_C2_0x776_0 : 8;
  vbittype Curvature_Parameter_C2_0x776_1 : 8;
  vbittype Curvature_derivative_C3_0x776_0 : 8;
  vbittype Curvature_derivative_C3_0x776_1 : 8;
  vbittype Lane_mark_width_0x776 : 8;
} _c_Next_lane_Right_K_RDS_msgType;

typedef struct _c_Next_lane_Right_L_RDS_msgTypeTag
{
  vbittype Heading_angle_Parameter_C1_0x777_0 : 8;
  vbittype Heading_angle_Parameter_C1_0x777_1 : 8;
  vbittype View_range_0x777_0 : 8;
  vbittype View_range_0x777_1 : 7;
  vbittype View_range_availability_0x777 : 1;
} _c_Next_lane_Right_L_RDS_msgType;

typedef struct _c_Next_lane_Left_M_RDS_msgTypeTag
{
  vbittype Lane_type_0x778 : 4;
  vbittype Quality_0x778 : 2;
  vbittype Model_degree_0x778 : 2;
  vbittype Position_Parameter_C0_0x778_0 : 8;
  vbittype Position_Parameter_C0_0x778_1 : 8;
  vbittype Curvature_Parameter_C2_0x778_0 : 8;
  vbittype Curvature_Parameter_C2_0x778_1 : 8;
  vbittype Curvature_derivative_C3_0x778_0 : 8;
  vbittype Curvature_derivative_C3_0x778_1 : 8;
  vbittype Lane_mark_width_0x778 : 8;
} _c_Next_lane_Left_M_RDS_msgType;

typedef struct _c_Next_lane_Left_N_RDS_msgTypeTag
{
  vbittype Heading_angle_Parameter_C1_0x779_0 : 8;
  vbittype Heading_angle_Parameter_C1_0x779_1 : 8;
  vbittype View_range_0x779_0 : 8;
  vbittype View_range_0x779_1 : 7;
  vbittype View_range_availability_0x779 : 1;
} _c_Next_lane_Left_N_RDS_msgType;

typedef struct _c_Next_lane_Right_O_RDS_msgTypeTag
{
  vbittype Lane_type_0x77A : 4;
  vbittype Quality_0x77A : 2;
  vbittype Model_degree_0x77A : 2;
  vbittype Position_Parameter_C0_0x77A_0 : 8;
  vbittype Position_Parameter_C0_0x77A_1 : 8;
  vbittype Curvature_Parameter_C2_0x77A_0 : 8;
  vbittype Curvature_Parameter_C2_0x77A_1 : 8;
  vbittype Curvature_derivative_C3_0x77A_0 : 8;
  vbittype Curvature_derivative_C3_0x77A_1 : 8;
  vbittype Lane_mark_width_0x77A : 8;
} _c_Next_lane_Right_O_RDS_msgType;

typedef struct _c_Next_lane_Right_P_RDS_msgTypeTag
{
  vbittype Heading_angle_Parameter_C1_0x77B_0 : 8;
  vbittype Heading_angle_Parameter_C1_0x77B_1 : 8;
  vbittype View_range_0x77B_0 : 8;
  vbittype View_range_0x77B_1 : 7;
  vbittype View_range_availability_0x77B : 1;
} _c_Next_lane_Right_P_RDS_msgType;

typedef struct _c_TSR_message_G_RDS_msgTypeTag
{
  vbittype Vision_only_Sign_Type_0x726 : 8;
  vbittype Supplementary_Sign_Type_0x726 : 8;
  vbittype Sign_Position_X_0x726 : 8;
  vbittype Sign_Position_Y_0x726 : 8;
  vbittype Sign_Position_Z_0x726 : 8;
  vbittype Filter_Type_0x726 : 8;
} _c_TSR_message_G_RDS_msgType;

typedef struct _c_ESR_Status1_RDS_msgTypeTag
{
  vbittype CAN_TX_DSP_TIMESTAMP_1 : 6;
  vbittype CAN_TX_ROLLING_COUNT_1 : 2;
  vbittype CAN_TX_RADIUS_CURVATURE_CALC_1 : 6;
  vbittype CAN_TX_COMM_ERROR : 1;
  vbittype CAN_TX_DSP_TIMESTAMP_0 : 1;
  vbittype CAN_TX_RADIUS_CURVATURE_CALC_0 : 8;
  vbittype CAN_TX_SCAN_INDEX_1 : 8;
  vbittype CAN_TX_SCAN_INDEX_0 : 8;
  vbittype CAN_TX_YAW_RATE_CALC_1 : 8;
  vbittype CAN_TX_VEHICLE_SPEED_CALC_1 : 3;
  vbittype unused0 : 1;
  vbittype CAN_TX_YAW_RATE_CALC_0 : 4;
  vbittype CAN_TX_VEHICLE_SPEED_CALC_0 : 8;
} _c_ESR_Status1_RDS_msgType;

typedef struct _c_ESR_Status9_RDS_msgTypeTag
{
  vbittype CAN_TX_AVG_PWR_CWBLKG_1 : 8;
  vbittype CAN_TX_SIDESLIP_ANGLE_1 : 2;
  vbittype unused0 : 2;
  vbittype CAN_TX_AVG_PWR_CWBLKG_0 : 4;
  vbittype CAN_TX_SIDESLIP_ANGLE_0 : 8;
  vbittype CAN_TX_SERIAL_NUM_3RD_BYTE : 8;
  vbittype CAN_TX_FILTERED_XOHP_ACC_CIPV_1 : 1;
  vbittype CAN_TX_WATEG_SPRAY_TARGET_ID : 7;
  vbittype CAN_TX_FILTERED_XOHP_ACC_CIPV_0 : 8;
  vbittype CAN_TX_PATH_ID_ACC_2 : 8;
  vbittype CAN_TX_PATH_ID_ACC_3 : 8;
} _c_ESR_Status9_RDS_msgType;

typedef struct _c_ESR_Status8_RDS_msgTypeTag
{
  vbittype CAN_TX_HISTORY_FAULT_0 : 8;
  vbittype CAN_TX_HISTORY_FAULT_1 : 8;
  vbittype CAN_TX_HISTORY_FAULT_2 : 8;
  vbittype CAN_TX_HISTORY_FAULT_3 : 8;
  vbittype CAN_TX_HISTORY_FAULT_4 : 8;
  vbittype CAN_TX_HISTORY_FAULT_5 : 8;
  vbittype CAN_TX_HISTORY_FAULT_6 : 8;
  vbittype CAN_TX_HISTORY_FAULT_7 : 8;
} _c_ESR_Status8_RDS_msgType;

typedef struct _c_ESR_Status7_RDS_msgTypeTag
{
  vbittype CAN_TX_ACTIVE_FAULT_0 : 8;
  vbittype CAN_TX_ACTIVE_FAULT_1 : 8;
  vbittype CAN_TX_ACTIVE_FAULT_2 : 8;
  vbittype CAN_TX_ACTIVE_FAULT_3 : 8;
  vbittype CAN_TX_ACTIVE_FAULT_4 : 8;
  vbittype CAN_TX_ACTIVE_FAULT_5 : 8;
  vbittype CAN_TX_ACTIVE_FAULT_6 : 8;
  vbittype CAN_TX_ACTIVE_FAULT_7 : 8;
} _c_ESR_Status7_RDS_msgType;

typedef struct _c_ESR_Status6_RDS_msgTypeTag
{
  vbittype CAN_TX_SUPPLY_1P8V_A2D : 8;
  vbittype CAN_TX_SUPPLY_N5V_A2D : 8;
  vbittype CAN_TX_WAVE_DIFF_A2D : 8;
  vbittype CAN_TX_SYSTEM_POWER_MODE : 3;
  vbittype CAN_TX_VERTICAL_ALIGN_UPDATED : 1;
  vbittype CAN_TX_SW_VERSION_DSP_3RD_BYTE : 4;
  vbittype CAN_TX_FACTORY_ALIGN_STATUS_2 : 3;
  vbittype CAN_TX_FACTORY_ALIGN_STATUS_1 : 3;
  vbittype CAN_TX_RECOMMEND_UNCONVERGE : 1;
  vbittype CAN_TX_FOUND_TARGET : 1;
  vbittype CAN_TX_FACTORY_MISALIGNMENT : 8;
  vbittype CAN_TX_SERV_ALIGN_UPDATES_DONE : 8;
  vbittype CAN_TX_VERTICAL_MISALIGNMENT : 8;
} _c_ESR_Status6_RDS_msgType;

typedef struct _c_ESR_Status5_RDS_msgTypeTag
{
  vbittype CAN_TX_SWBATT_A2D : 8;
  vbittype CAN_TX_IGNP_A2D : 8;
  vbittype CAN_TX_TEMP1_A2D : 8;
  vbittype CAN_TX_TEMP2_A2D : 8;
  vbittype CAN_TX_SUPPLY_5VA_A2D : 8;
  vbittype CAN_TX_SUPPLY_5VDX_A2D : 8;
  vbittype CAN_TX_SUPPLY_3P3V_A2D : 8;
  vbittype CAN_TX_SUPPLY_10V_A2D : 8;
} _c_ESR_Status5_RDS_msgType;

typedef struct _c_ESR_Track64_RDS_msgTypeTag
{
  vbittype CAN_TX_TRACK_ONCOMING_64 : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED_64 : 1;
  vbittype CAN_TX_TRACK_LAT_RATE_64 : 6;
  vbittype CAN_TX_TRACK_ANGLE_64_1 : 5;
  vbittype CAN_TX_TRACK_STATUS_64 : 3;
  vbittype CAN_TX_TRACK_RANGE_64_1 : 3;
  vbittype CAN_TX_TRACK_ANGLE_64_0 : 5;
  vbittype CAN_TX_TRACK_RANGE_64_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_64_1 : 2;
  vbittype CAN_TX_TRACK_WIDTH_64 : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT_64 : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT_64 : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_64_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_64_1 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE_64 : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_64_0 : 8;
} _c_ESR_Track64_RDS_msgType;

typedef struct _c_ESR_Track63_RDS_msgTypeTag
{
  vbittype CAN_TX_TRACK_ONCOMING_63 : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED_63 : 1;
  vbittype CAN_TX_TRACK_LAT_RATE_63 : 6;
  vbittype CAN_TX_TRACK_ANGLE_63_1 : 5;
  vbittype CAN_TX_TRACK_STATUS_63 : 3;
  vbittype CAN_TX_TRACK_RANGE_63_1 : 3;
  vbittype CAN_TX_TRACK_ANGLE_63_0 : 5;
  vbittype CAN_TX_TRACK_RANGE_63_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_63_1 : 2;
  vbittype CAN_TX_TRACK_WIDTH_63 : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT_63 : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT_63 : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_63_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_63_1 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE_63 : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_63_0 : 8;
} _c_ESR_Track63_RDS_msgType;

typedef struct _c_ESR_Track62_RDS_msgTypeTag
{
  vbittype CAN_TX_TRACK_ONCOMING_62 : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED_62 : 1;
  vbittype CAN_TX_TRACK_LAT_RATE_62 : 6;
  vbittype CAN_TX_TRACK_ANGLE_62_1 : 5;
  vbittype CAN_TX_TRACK_STATUS_62 : 3;
  vbittype CAN_TX_TRACK_RANGE_62_1 : 3;
  vbittype CAN_TX_TRACK_ANGLE_62_0 : 5;
  vbittype CAN_TX_TRACK_RANGE_62_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_62_1 : 2;
  vbittype CAN_TX_TRACK_WIDTH_62 : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT_62 : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT_62 : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_62_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_62_1 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE_62 : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_62_0 : 8;
} _c_ESR_Track62_RDS_msgType;

typedef struct _c_ESR_Track61_RDS_msgTypeTag
{
  vbittype CAN_TX_TRACK_ONCOMING_61 : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED_61 : 1;
  vbittype CAN_TX_TRACK_LAT_RATE_61 : 6;
  vbittype CAN_TX_TRACK_ANGLE_61_1 : 5;
  vbittype CAN_TX_TRACK_STATUS_61 : 3;
  vbittype CAN_TX_TRACK_RANGE_61_1 : 3;
  vbittype CAN_TX_TRACK_ANGLE_61_0 : 5;
  vbittype CAN_TX_TRACK_RANGE_61_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_61_1 : 2;
  vbittype CAN_TX_TRACK_WIDTH_61 : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT_61 : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT_61 : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_61_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_61_1 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE_61 : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_61_0 : 8;
} _c_ESR_Track61_RDS_msgType;

typedef struct _c_ESR_Track60_RDS_msgTypeTag
{
  vbittype CAN_TX_TRACK_ONCOMING_60 : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED_60 : 1;
  vbittype CAN_TX_TRACK_LAT_RATE_60 : 6;
  vbittype CAN_TX_TRACK_ANGLE_60_1 : 5;
  vbittype CAN_TX_TRACK_STATUS_60 : 3;
  vbittype CAN_TX_TRACK_RANGE_60_1 : 3;
  vbittype CAN_TX_TRACK_ANGLE_60_0 : 5;
  vbittype CAN_TX_TRACK_RANGE_60_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_60_1 : 2;
  vbittype CAN_TX_TRACK_WIDTH_60 : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT_60 : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT_60 : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_60_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_60_1 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE_60 : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_60_0 : 8;
} _c_ESR_Track60_RDS_msgType;

typedef struct _c_ESR_Track59_RDS_msgTypeTag
{
  vbittype CAN_TX_TRACK_ONCOMING_59 : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED_59 : 1;
  vbittype CAN_TX_TRACK_LAT_RATE_59 : 6;
  vbittype CAN_TX_TRACK_ANGLE_59_1 : 5;
  vbittype CAN_TX_TRACK_STATUS_59 : 3;
  vbittype CAN_TX_TRACK_RANGE_59_1 : 3;
  vbittype CAN_TX_TRACK_ANGLE_59_0 : 5;
  vbittype CAN_TX_TRACK_RANGE_59_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_59_1 : 2;
  vbittype CAN_TX_TRACK_WIDTH_59 : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT_59 : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT_59 : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_59_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_59_1 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE_59 : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_59_0 : 8;
} _c_ESR_Track59_RDS_msgType;

typedef struct _c_ESR_Track58_RDS_msgTypeTag
{
  vbittype CAN_TX_TRACK_ONCOMING_58 : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED_58 : 1;
  vbittype CAN_TX_TRACK_LAT_RATE_58 : 6;
  vbittype CAN_TX_TRACK_ANGLE_58_1 : 5;
  vbittype CAN_TX_TRACK_STATUS_58 : 3;
  vbittype CAN_TX_TRACK_RANGE_58_1 : 3;
  vbittype CAN_TX_TRACK_ANGLE_58_0 : 5;
  vbittype CAN_TX_TRACK_RANGE_58_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_58_1 : 2;
  vbittype CAN_TX_TRACK_WIDTH_58 : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT_58 : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT_58 : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_58_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_58_1 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE_58 : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_58_0 : 8;
} _c_ESR_Track58_RDS_msgType;

typedef struct _c_ESR_Track57_RDS_msgTypeTag
{
  vbittype CAN_TX_TRACK_ONCOMING_57 : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED_57 : 1;
  vbittype CAN_TX_TRACK_LAT_RATE_57 : 6;
  vbittype CAN_TX_TRACK_ANGLE_57_1 : 5;
  vbittype CAN_TX_TRACK_STATUS_57 : 3;
  vbittype CAN_TX_TRACK_RANGE_57_1 : 3;
  vbittype CAN_TX_TRACK_ANGLE_57_0 : 5;
  vbittype CAN_TX_TRACK_RANGE_57_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_57_1 : 2;
  vbittype CAN_TX_TRACK_WIDTH_57 : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT_57 : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT_57 : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_57_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_57_1 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE_57 : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_57_0 : 8;
} _c_ESR_Track57_RDS_msgType;

typedef struct _c_ESR_Track56_RDS_msgTypeTag
{
  vbittype CAN_TX_TRACK_ONCOMING_56 : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED_56 : 1;
  vbittype CAN_TX_TRACK_LAT_RATE_56 : 6;
  vbittype CAN_TX_TRACK_ANGLE_56_1 : 5;
  vbittype CAN_TX_TRACK_STATUS_56 : 3;
  vbittype CAN_TX_TRACK_RANGE_56_1 : 3;
  vbittype CAN_TX_TRACK_ANGLE_56_0 : 5;
  vbittype CAN_TX_TRACK_RANGE_56_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_56_1 : 2;
  vbittype CAN_TX_TRACK_WIDTH_56 : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT_56 : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT_56 : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_56_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_56_1 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE_56 : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_56_0 : 8;
} _c_ESR_Track56_RDS_msgType;

typedef struct _c_ESR_Track55_RDS_msgTypeTag
{
  vbittype CAN_TX_TRACK_ONCOMING_55 : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED_55 : 1;
  vbittype CAN_TX_TRACK_LAT_RATE_55 : 6;
  vbittype CAN_TX_TRACK_ANGLE_55_1 : 5;
  vbittype CAN_TX_TRACK_STATUS_55 : 3;
  vbittype CAN_TX_TRACK_RANGE_55_1 : 3;
  vbittype CAN_TX_TRACK_ANGLE_55_0 : 5;
  vbittype CAN_TX_TRACK_RANGE_55_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_55_1 : 2;
  vbittype CAN_TX_TRACK_WIDTH_55 : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT_55 : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT_55 : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_55_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_55_1 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE_55 : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_55_0 : 8;
} _c_ESR_Track55_RDS_msgType;

typedef struct _c_ESR_Track54_RDS_msgTypeTag
{
  vbittype CAN_TX_TRACK_ONCOMING_54 : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED_54 : 1;
  vbittype CAN_TX_TRACK_LAT_RATE_54 : 6;
  vbittype CAN_TX_TRACK_ANGLE_54_1 : 5;
  vbittype CAN_TX_TRACK_STATUS_54 : 3;
  vbittype CAN_TX_TRACK_RANGE_54_1 : 3;
  vbittype CAN_TX_TRACK_ANGLE_54_0 : 5;
  vbittype CAN_TX_TRACK_RANGE_54_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_54_1 : 2;
  vbittype CAN_TX_TRACK_WIDTH_54 : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT_54 : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT_54 : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_54_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_54_1 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE_54 : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_54_0 : 8;
} _c_ESR_Track54_RDS_msgType;

typedef struct _c_ESR_Track53_RDS_msgTypeTag
{
  vbittype CAN_TX_TRACK_ONCOMING_53 : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED_53 : 1;
  vbittype CAN_TX_TRACK_LAT_RATE_53 : 6;
  vbittype CAN_TX_TRACK_ANGLE_53_1 : 5;
  vbittype CAN_TX_TRACK_STATUS_53 : 3;
  vbittype CAN_TX_TRACK_RANGE_53_1 : 3;
  vbittype CAN_TX_TRACK_ANGLE_53_0 : 5;
  vbittype CAN_TX_TRACK_RANGE_53_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_53_1 : 2;
  vbittype CAN_TX_TRACK_WIDTH_53 : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT_53 : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT_53 : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_53_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_53_1 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE_53 : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_53_0 : 8;
} _c_ESR_Track53_RDS_msgType;

typedef struct _c_ESR_Track52_RDS_msgTypeTag
{
  vbittype CAN_TX_TRACK_ONCOMING_52 : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED_52 : 1;
  vbittype CAN_TX_TRACK_LAT_RATE_52 : 6;
  vbittype CAN_TX_TRACK_ANGLE_52_1 : 5;
  vbittype CAN_TX_TRACK_STATUS_52 : 3;
  vbittype CAN_TX_TRACK_RANGE_52_1 : 3;
  vbittype CAN_TX_TRACK_ANGLE_52_0 : 5;
  vbittype CAN_TX_TRACK_RANGE_52_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_52_1 : 2;
  vbittype CAN_TX_TRACK_WIDTH_52 : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT_52 : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT_52 : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_52_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_52_1 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE_52 : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_52_0 : 8;
} _c_ESR_Track52_RDS_msgType;

typedef struct _c_ESR_Track51_RDS_msgTypeTag
{
  vbittype CAN_TX_TRACK_ONCOMING_51 : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED_51 : 1;
  vbittype CAN_TX_TRACK_LAT_RATE_51 : 6;
  vbittype CAN_TX_TRACK_ANGLE_51_1 : 5;
  vbittype CAN_TX_TRACK_STATUS_51 : 3;
  vbittype CAN_TX_TRACK_RANGE_51_1 : 3;
  vbittype CAN_TX_TRACK_ANGLE_51_0 : 5;
  vbittype CAN_TX_TRACK_RANGE_51_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_51_1 : 2;
  vbittype CAN_TX_TRACK_WIDTH_51 : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT_51 : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT_51 : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_51_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_51_1 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE_51 : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_51_0 : 8;
} _c_ESR_Track51_RDS_msgType;

typedef struct _c_ESR_Track50_RDS_msgTypeTag
{
  vbittype CAN_TX_TRACK_ONCOMING_50 : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED_50 : 1;
  vbittype CAN_TX_TRACK_LAT_RATE_50 : 6;
  vbittype CAN_TX_TRACK_ANGLE_50_1 : 5;
  vbittype CAN_TX_TRACK_STATUS_50 : 3;
  vbittype CAN_TX_TRACK_RANGE_50_1 : 3;
  vbittype CAN_TX_TRACK_ANGLE_50_0 : 5;
  vbittype CAN_TX_TRACK_RANGE_50_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_50_1 : 2;
  vbittype CAN_TX_TRACK_WIDTH_50 : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT_50 : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT_50 : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_50_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_50_1 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE_50 : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_50_0 : 8;
} _c_ESR_Track50_RDS_msgType;

typedef struct _c_ESR_Track49_RDS_msgTypeTag
{
  vbittype CAN_TX_TRACK_ONCOMING_49 : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED_49 : 1;
  vbittype CAN_TX_TRACK_LAT_RATE_49 : 6;
  vbittype CAN_TX_TRACK_ANGLE_49_1 : 5;
  vbittype CAN_TX_TRACK_STATUS_49 : 3;
  vbittype CAN_TX_TRACK_RANGE_49_1 : 3;
  vbittype CAN_TX_TRACK_ANGLE_49_0 : 5;
  vbittype CAN_TX_TRACK_RANGE_49_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_49_1 : 2;
  vbittype CAN_TX_TRACK_WIDTH_49 : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT_49 : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT_49 : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_49_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_49_1 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE_49 : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_49_0 : 8;
} _c_ESR_Track49_RDS_msgType;

typedef struct _c_ESR_Track48_RDS_msgTypeTag
{
  vbittype CAN_TX_TRACK_ONCOMING_48 : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED_48 : 1;
  vbittype CAN_TX_TRACK_LAT_RATE_48 : 6;
  vbittype CAN_TX_TRACK_ANGLE_48_1 : 5;
  vbittype CAN_TX_TRACK_STATUS_48 : 3;
  vbittype CAN_TX_TRACK_RANGE_48_1 : 3;
  vbittype CAN_TX_TRACK_ANGLE_48_0 : 5;
  vbittype CAN_TX_TRACK_RANGE_48_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_48_1 : 2;
  vbittype CAN_TX_TRACK_WIDTH_48 : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT_48 : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT_48 : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_48_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_48_1 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE_48 : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_48_0 : 8;
} _c_ESR_Track48_RDS_msgType;

typedef struct _c_ESR_Track47_RDS_msgTypeTag
{
  vbittype CAN_TX_TRACK_ONCOMING_47 : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED_47 : 1;
  vbittype CAN_TX_TRACK_LAT_RATE_47 : 6;
  vbittype CAN_TX_TRACK_ANGLE_47_1 : 5;
  vbittype CAN_TX_TRACK_STATUS_47 : 3;
  vbittype CAN_TX_TRACK_RANGE_47_1 : 3;
  vbittype CAN_TX_TRACK_ANGLE_47_0 : 5;
  vbittype CAN_TX_TRACK_RANGE_47_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_47_1 : 2;
  vbittype CAN_TX_TRACK_WIDTH_47 : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT_47 : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT_47 : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_47_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_47_1 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE_47 : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_47_0 : 8;
} _c_ESR_Track47_RDS_msgType;

typedef struct _c_ESR_Track46_RDS_msgTypeTag
{
  vbittype CAN_TX_TRACK_ONCOMING_46 : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED_46 : 1;
  vbittype CAN_TX_TRACK_LAT_RATE_46 : 6;
  vbittype CAN_TX_TRACK_ANGLE_46_1 : 5;
  vbittype CAN_TX_TRACK_STATUS_46 : 3;
  vbittype CAN_TX_TRACK_RANGE_46_1 : 3;
  vbittype CAN_TX_TRACK_ANGLE_46_0 : 5;
  vbittype CAN_TX_TRACK_RANGE_46_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_46_1 : 2;
  vbittype CAN_TX_TRACK_WIDTH_46 : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT_46 : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT_46 : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_46_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_46_1 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE_46 : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_46_0 : 8;
} _c_ESR_Track46_RDS_msgType;

typedef struct _c_ESR_Track45_RDS_msgTypeTag
{
  vbittype CAN_TX_TRACK_ONCOMING_45 : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED_45 : 1;
  vbittype CAN_TX_TRACK_LAT_RATE_45 : 6;
  vbittype CAN_TX_TRACK_ANGLE_45_1 : 5;
  vbittype CAN_TX_TRACK_STATUS_45 : 3;
  vbittype CAN_TX_TRACK_RANGE_45_1 : 3;
  vbittype CAN_TX_TRACK_ANGLE_45_0 : 5;
  vbittype CAN_TX_TRACK_RANGE_45_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_45_1 : 2;
  vbittype CAN_TX_TRACK_WIDTH_45 : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT_45 : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT_45 : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_45_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_45_1 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE_45 : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_45_0 : 8;
} _c_ESR_Track45_RDS_msgType;

typedef struct _c_ESR_Track44_RDS_msgTypeTag
{
  vbittype CAN_TX_TRACK_ONCOMING_44 : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED_44 : 1;
  vbittype CAN_TX_TRACK_LAT_RATE_44 : 6;
  vbittype CAN_TX_TRACK_ANGLE_44_1 : 5;
  vbittype CAN_TX_TRACK_STATUS_44 : 3;
  vbittype CAN_TX_TRACK_RANGE_44_1 : 3;
  vbittype CAN_TX_TRACK_ANGLE_44_0 : 5;
  vbittype CAN_TX_TRACK_RANGE_44_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_44_1 : 2;
  vbittype CAN_TX_TRACK_WIDTH_44 : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT_44 : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT_44 : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_44_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_44_1 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE_44 : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_44_0 : 8;
} _c_ESR_Track44_RDS_msgType;

typedef struct _c_ESR_Track43_RDS_msgTypeTag
{
  vbittype CAN_TX_TRACK_ONCOMING_43 : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED_43 : 1;
  vbittype CAN_TX_TRACK_LAT_RATE_43 : 6;
  vbittype CAN_TX_TRACK_ANGLE_43_1 : 5;
  vbittype CAN_TX_TRACK_STATUS_43 : 3;
  vbittype CAN_TX_TRACK_RANGE_43_1 : 3;
  vbittype CAN_TX_TRACK_ANGLE_43_0 : 5;
  vbittype CAN_TX_TRACK_RANGE_43_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_43_1 : 2;
  vbittype CAN_TX_TRACK_WIDTH_43 : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT_43 : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT_43 : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_43_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_43_1 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE_43 : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_43_0 : 8;
} _c_ESR_Track43_RDS_msgType;

typedef struct _c_ESR_Track42_RDS_msgTypeTag
{
  vbittype CAN_TX_TRACK_ONCOMING_42 : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED_42 : 1;
  vbittype CAN_TX_TRACK_LAT_RATE_42 : 6;
  vbittype CAN_TX_TRACK_ANGLE_42_1 : 5;
  vbittype CAN_TX_TRACK_STATUS_42 : 3;
  vbittype CAN_TX_TRACK_RANGE_42_1 : 3;
  vbittype CAN_TX_TRACK_ANGLE_42_0 : 5;
  vbittype CAN_TX_TRACK_RANGE_42_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_42_1 : 2;
  vbittype CAN_TX_TRACK_WIDTH_42 : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT_42 : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT_42 : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_42_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_42_1 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE_42 : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_42_0 : 8;
} _c_ESR_Track42_RDS_msgType;

typedef struct _c_ESR_Track41_RDS_msgTypeTag
{
  vbittype CAN_TX_TRACK_ONCOMING_41 : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED_41 : 1;
  vbittype CAN_TX_TRACK_LAT_RATE_41 : 6;
  vbittype CAN_TX_TRACK_ANGLE_41_1 : 5;
  vbittype CAN_TX_TRACK_STATUS_41 : 3;
  vbittype CAN_TX_TRACK_RANGE_41_1 : 3;
  vbittype CAN_TX_TRACK_ANGLE_41_0 : 5;
  vbittype CAN_TX_TRACK_RANGE_41_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_41_1 : 2;
  vbittype CAN_TX_TRACK_WIDTH_41 : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT_41 : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT_41 : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_41_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_41_1 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE_41 : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_41_0 : 8;
} _c_ESR_Track41_RDS_msgType;

typedef struct _c_ESR_Track40_RDS_msgTypeTag
{
  vbittype CAN_TX_TRACK_ONCOMING_40 : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED_40 : 1;
  vbittype CAN_TX_TRACK_LAT_RATE_40 : 6;
  vbittype CAN_TX_TRACK_ANGLE_40_1 : 5;
  vbittype CAN_TX_TRACK_STATUS_40 : 3;
  vbittype CAN_TX_TRACK_RANGE_40_1 : 3;
  vbittype CAN_TX_TRACK_ANGLE_40_0 : 5;
  vbittype CAN_TX_TRACK_RANGE_40_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_40_1 : 2;
  vbittype CAN_TX_TRACK_WIDTH_40 : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT_40 : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT_40 : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_40_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_40_1 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE_40 : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_40_0 : 8;
} _c_ESR_Track40_RDS_msgType;

typedef struct _c_ESR_Track39_RDS_msgTypeTag
{
  vbittype CAN_TX_TRACK_ONCOMING_39 : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED_39 : 1;
  vbittype CAN_TX_TRACK_LAT_RATE_39 : 6;
  vbittype CAN_TX_TRACK_ANGLE_39_1 : 5;
  vbittype CAN_TX_TRACK_STATUS_39 : 3;
  vbittype CAN_TX_TRACK_RANGE_39_1 : 3;
  vbittype CAN_TX_TRACK_ANGLE_39_0 : 5;
  vbittype CAN_TX_TRACK_RANGE_39_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_39_1 : 2;
  vbittype CAN_TX_TRACK_WIDTH_39 : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT_39 : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT_39 : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_39_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_39_1 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE_39 : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_39_0 : 8;
} _c_ESR_Track39_RDS_msgType;

typedef struct _c_ESR_Track38_RDS_msgTypeTag
{
  vbittype CAN_TX_TRACK_ONCOMING_38 : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED_38 : 1;
  vbittype CAN_TX_TRACK_LAT_RATE_38 : 6;
  vbittype CAN_TX_TRACK_ANGLE_38_1 : 5;
  vbittype CAN_TX_TRACK_STATUS_38 : 3;
  vbittype CAN_TX_TRACK_RANGE_38_1 : 3;
  vbittype CAN_TX_TRACK_ANGLE_38_0 : 5;
  vbittype CAN_TX_TRACK_RANGE_38_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_38_1 : 2;
  vbittype CAN_TX_TRACK_WIDTH_38 : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT_38 : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT_38 : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_38_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_38_1 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE_38 : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_38_0 : 8;
} _c_ESR_Track38_RDS_msgType;

typedef struct _c_ESR_Track37_RDS_msgTypeTag
{
  vbittype CAN_TX_TRACK_ONCOMING_37 : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED_37 : 1;
  vbittype CAN_TX_TRACK_LAT_RATE_37 : 6;
  vbittype CAN_TX_TRACK_ANGLE_37_1 : 5;
  vbittype CAN_TX_TRACK_STATUS_37 : 3;
  vbittype CAN_TX_TRACK_RANGE_37_1 : 3;
  vbittype CAN_TX_TRACK_ANGLE_37_0 : 5;
  vbittype CAN_TX_TRACK_RANGE_37_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_37_1 : 2;
  vbittype CAN_TX_TRACK_WIDTH_37 : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT_37 : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT_37 : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_37_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_37_1 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE_37 : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_37_0 : 8;
} _c_ESR_Track37_RDS_msgType;

typedef struct _c_ESR_Track36_RDS_msgTypeTag
{
  vbittype CAN_TX_TRACK_ONCOMING_36 : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED_36 : 1;
  vbittype CAN_TX_TRACK_LAT_RATE_36 : 6;
  vbittype CAN_TX_TRACK_ANGLE_36_1 : 5;
  vbittype CAN_TX_TRACK_STATUS_36 : 3;
  vbittype CAN_TX_TRACK_RANGE_36_1 : 3;
  vbittype CAN_TX_TRACK_ANGLE_36_0 : 5;
  vbittype CAN_TX_TRACK_RANGE_36_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_36_1 : 2;
  vbittype CAN_TX_TRACK_WIDTH_36 : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT_36 : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT_36 : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_36_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_36_1 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE_36 : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_36_0 : 8;
} _c_ESR_Track36_RDS_msgType;

typedef struct _c_ESR_Track35_RDS_msgTypeTag
{
  vbittype CAN_TX_TRACK_ONCOMING_35 : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED_35 : 1;
  vbittype CAN_TX_TRACK_LAT_RATE_35 : 6;
  vbittype CAN_TX_TRACK_ANGLE_35_1 : 5;
  vbittype CAN_TX_TRACK_STATUS_35 : 3;
  vbittype CAN_TX_TRACK_RANGE_35_1 : 3;
  vbittype CAN_TX_TRACK_ANGLE_35_0 : 5;
  vbittype CAN_TX_TRACK_RANGE_35_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_35_1 : 2;
  vbittype CAN_TX_TRACK_WIDTH_35 : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT_35 : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT_35 : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_35_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_35_1 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE_35 : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_35_0 : 8;
} _c_ESR_Track35_RDS_msgType;

typedef struct _c_ESR_Track34_RDS_msgTypeTag
{
  vbittype CAN_TX_TRACK_ONCOMING_34 : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED_34 : 1;
  vbittype CAN_TX_TRACK_LAT_RATE_34 : 6;
  vbittype CAN_TX_TRACK_ANGLE_34_1 : 5;
  vbittype CAN_TX_TRACK_STATUS_34 : 3;
  vbittype CAN_TX_TRACK_RANGE_34_1 : 3;
  vbittype CAN_TX_TRACK_ANGLE_34_0 : 5;
  vbittype CAN_TX_TRACK_RANGE_34_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_34_1 : 2;
  vbittype CAN_TX_TRACK_WIDTH_34 : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT_34 : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT_34 : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_34_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_34_1 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE_34 : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_34_0 : 8;
} _c_ESR_Track34_RDS_msgType;

typedef struct _c_ESR_Track33_RDS_msgTypeTag
{
  vbittype CAN_TX_TRACK_ONCOMING_33 : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED_33 : 1;
  vbittype CAN_TX_TRACK_LAT_RATE_33 : 6;
  vbittype CAN_TX_TRACK_ANGLE_33_1 : 5;
  vbittype CAN_TX_TRACK_STATUS_33 : 3;
  vbittype CAN_TX_TRACK_RANGE_33_1 : 3;
  vbittype CAN_TX_TRACK_ANGLE_33_0 : 5;
  vbittype CAN_TX_TRACK_RANGE_33_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_33_1 : 2;
  vbittype CAN_TX_TRACK_WIDTH_33 : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT_33 : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT_33 : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_33_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_33_1 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE_33 : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_33_0 : 8;
} _c_ESR_Track33_RDS_msgType;

typedef struct _c_ESR_Track32_RDS_msgTypeTag
{
  vbittype CAN_TX_TRACK_ONCOMING_32 : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED_32 : 1;
  vbittype CAN_TX_TRACK_LAT_RATE_32 : 6;
  vbittype CAN_TX_TRACK_ANGLE_32_1 : 5;
  vbittype CAN_TX_TRACK_STATUS_32 : 3;
  vbittype CAN_TX_TRACK_RANGE_32_1 : 3;
  vbittype CAN_TX_TRACK_ANGLE_32_0 : 5;
  vbittype CAN_TX_TRACK_RANGE_32_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_32_1 : 2;
  vbittype CAN_TX_TRACK_WIDTH_32 : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT_32 : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT_32 : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_32_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_32_1 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE_32 : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_32_0 : 8;
} _c_ESR_Track32_RDS_msgType;

typedef struct _c_ESR_Track31_RDS_msgTypeTag
{
  vbittype CAN_TX_TRACK_ONCOMING_31 : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED_31 : 1;
  vbittype CAN_TX_TRACK_LAT_RATE_31 : 6;
  vbittype CAN_TX_TRACK_ANGLE_31_1 : 5;
  vbittype CAN_TX_TRACK_STATUS_31 : 3;
  vbittype CAN_TX_TRACK_RANGE_31_1 : 3;
  vbittype CAN_TX_TRACK_ANGLE_31_0 : 5;
  vbittype CAN_TX_TRACK_RANGE_31_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_31_1 : 2;
  vbittype CAN_TX_TRACK_WIDTH_31 : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT_31 : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT_31 : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_31_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_31_1 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE_31 : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_31_0 : 8;
} _c_ESR_Track31_RDS_msgType;

typedef struct _c_ESR_Track30_RDS_msgTypeTag
{
  vbittype CAN_TX_TRACK_ONCOMING_30 : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED_30 : 1;
  vbittype CAN_TX_TRACK_LAT_RATE_30 : 6;
  vbittype CAN_TX_TRACK_ANGLE_30_1 : 5;
  vbittype CAN_TX_TRACK_STATUS_30 : 3;
  vbittype CAN_TX_TRACK_RANGE_30_1 : 3;
  vbittype CAN_TX_TRACK_ANGLE_30_0 : 5;
  vbittype CAN_TX_TRACK_RANGE_30_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_30_1 : 2;
  vbittype CAN_TX_TRACK_WIDTH_30 : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT_30 : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT_30 : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_30_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_30_1 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE_30 : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_30_0 : 8;
} _c_ESR_Track30_RDS_msgType;

typedef struct _c_ESR_Track29_RDS_msgTypeTag
{
  vbittype CAN_TX_TRACK_ONCOMING_29 : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED_29 : 1;
  vbittype CAN_TX_TRACK_LAT_RATE_29 : 6;
  vbittype CAN_TX_TRACK_ANGLE_29_1 : 5;
  vbittype CAN_TX_TRACK_STATUS_29 : 3;
  vbittype CAN_TX_TRACK_RANGE_29_1 : 3;
  vbittype CAN_TX_TRACK_ANGLE_29_0 : 5;
  vbittype CAN_TX_TRACK_RANGE_29_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_29_1 : 2;
  vbittype CAN_TX_TRACK_WIDTH_29 : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT_29 : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT_29 : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_29_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_29_1 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE_29 : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_29_0 : 8;
} _c_ESR_Track29_RDS_msgType;

typedef struct _c_ESR_Track28_RDS_msgTypeTag
{
  vbittype CAN_TX_TRACK_ONCOMING_28 : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED_28 : 1;
  vbittype CAN_TX_TRACK_LAT_RATE_28 : 6;
  vbittype CAN_TX_TRACK_ANGLE_28_1 : 5;
  vbittype CAN_TX_TRACK_STATUS_28 : 3;
  vbittype CAN_TX_TRACK_RANGE_28_1 : 3;
  vbittype CAN_TX_TRACK_ANGLE_28_0 : 5;
  vbittype CAN_TX_TRACK_RANGE_28_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_28_1 : 2;
  vbittype CAN_TX_TRACK_WIDTH_28 : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT_28 : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT_28 : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_28_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_28_1 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE_28 : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_28_0 : 8;
} _c_ESR_Track28_RDS_msgType;

typedef struct _c_ESR_Track27_RDS_msgTypeTag
{
  vbittype CAN_TX_TRACK_ONCOMING_27 : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED_27 : 1;
  vbittype CAN_TX_TRACK_LAT_RATE_27 : 6;
  vbittype CAN_TX_TRACK_ANGLE_27_1 : 5;
  vbittype CAN_TX_TRACK_STATUS_27 : 3;
  vbittype CAN_TX_TRACK_RANGE_27_1 : 3;
  vbittype CAN_TX_TRACK_ANGLE_27_0 : 5;
  vbittype CAN_TX_TRACK_RANGE_27_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_27_1 : 2;
  vbittype CAN_TX_TRACK_WIDTH_27 : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT_27 : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT_27 : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_27_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_27_1 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE_27 : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_27_0 : 8;
} _c_ESR_Track27_RDS_msgType;

typedef struct _c_ESR_Track26_RDS_msgTypeTag
{
  vbittype CAN_TX_TRACK_ONCOMING_26 : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED_26 : 1;
  vbittype CAN_TX_TRACK_LAT_RATE_26 : 6;
  vbittype CAN_TX_TRACK_ANGLE_26_1 : 5;
  vbittype CAN_TX_TRACK_STATUS_26 : 3;
  vbittype CAN_TX_TRACK_RANGE_26_1 : 3;
  vbittype CAN_TX_TRACK_ANGLE_26_0 : 5;
  vbittype CAN_TX_TRACK_RANGE_26_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_26_1 : 2;
  vbittype CAN_TX_TRACK_WIDTH_26 : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT_26 : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT_26 : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_26_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_26_1 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE_26 : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_26_0 : 8;
} _c_ESR_Track26_RDS_msgType;

typedef struct _c_ESR_Track25_RDS_msgTypeTag
{
  vbittype CAN_TX_TRACK_ONCOMING_25 : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED_25 : 1;
  vbittype CAN_TX_TRACK_LAT_RATE_25 : 6;
  vbittype CAN_TX_TRACK_ANGLE_25_1 : 5;
  vbittype CAN_TX_TRACK_STATUS_25 : 3;
  vbittype CAN_TX_TRACK_RANGE_25_1 : 3;
  vbittype CAN_TX_TRACK_ANGLE_25_0 : 5;
  vbittype CAN_TX_TRACK_RANGE_25_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_25_1 : 2;
  vbittype CAN_TX_TRACK_WIDTH_25 : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT_25 : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT_25 : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_25_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_25_1 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE_25 : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_25_0 : 8;
} _c_ESR_Track25_RDS_msgType;

typedef struct _c_ESR_Track24_RDS_msgTypeTag
{
  vbittype CAN_TX_TRACK_ONCOMING_24 : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED_24 : 1;
  vbittype CAN_TX_TRACK_LAT_RATE_24 : 6;
  vbittype CAN_TX_TRACK_ANGLE_24_1 : 5;
  vbittype CAN_TX_TRACK_STATUS_24 : 3;
  vbittype CAN_TX_TRACK_RANGE_24_1 : 3;
  vbittype CAN_TX_TRACK_ANGLE_24_0 : 5;
  vbittype CAN_TX_TRACK_RANGE_24_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_24_1 : 2;
  vbittype CAN_TX_TRACK_WIDTH_24 : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT_24 : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT_24 : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_24_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_24_1 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE_24 : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_24_0 : 8;
} _c_ESR_Track24_RDS_msgType;

typedef struct _c_ESR_Track23_RDS_msgTypeTag
{
  vbittype CAN_TX_TRACK_ONCOMING_23 : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED_23 : 1;
  vbittype CAN_TX_TRACK_LAT_RATE_23 : 6;
  vbittype CAN_TX_TRACK_ANGLE_23_1 : 5;
  vbittype CAN_TX_TRACK_STATUS_23 : 3;
  vbittype CAN_TX_TRACK_RANGE_23_1 : 3;
  vbittype CAN_TX_TRACK_ANGLE_23_0 : 5;
  vbittype CAN_TX_TRACK_RANGE_23_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_23_1 : 2;
  vbittype CAN_TX_TRACK_WIDTH_23 : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT_23 : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_23_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_23_1 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE_23 : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_23_0 : 8;
} _c_ESR_Track23_RDS_msgType;

typedef struct _c_ESR_Track22_RDS_msgTypeTag
{
  vbittype CAN_TX_TRACK_ONCOMING_22 : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED_22 : 1;
  vbittype CAN_TX_TRACK_LAT_RATE_22 : 6;
  vbittype CAN_TX_TRACK_ANGLE_22_1 : 5;
  vbittype CAN_TX_TRACK_STATUS_22 : 3;
  vbittype CAN_TX_TRACK_RANGE_22_1 : 3;
  vbittype CAN_TX_TRACK_ANGLE_22_0 : 5;
  vbittype CAN_TX_TRACK_RANGE_22_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_22_1 : 2;
  vbittype CAN_TX_TRACK_WIDTH_22 : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT_22 : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT_22 : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_22_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_22_1 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE_22 : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_22_0 : 8;
} _c_ESR_Track22_RDS_msgType;

typedef struct _c_ESR_Track21_RDS_msgTypeTag
{
  vbittype CAN_TX_TRACK_ONCOMING_21 : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED_21 : 1;
  vbittype CAN_TX_TRACK_LAT_RATE_21 : 6;
  vbittype CAN_TX_TRACK_ANGLE_21_1 : 5;
  vbittype CAN_TX_TRACK_STATUS_21 : 3;
  vbittype CAN_TX_TRACK_RANGE_21_1 : 3;
  vbittype CAN_TX_TRACK_ANGLE_21_0 : 5;
  vbittype CAN_TX_TRACK_RANGE_21_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_21_1 : 2;
  vbittype CAN_TX_TRACK_WIDTH_21 : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT_21 : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT_21 : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_21_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_21_1 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE_21 : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_21_0 : 8;
} _c_ESR_Track21_RDS_msgType;

typedef struct _c_ESR_Track20_RDS_msgTypeTag
{
  vbittype CAN_TX_TRACK_ONCOMING_20 : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED_20 : 1;
  vbittype CAN_TX_TRACK_LAT_RATE_20 : 6;
  vbittype CAN_TX_TRACK_ANGLE_20_1 : 5;
  vbittype CAN_TX_TRACK_STATUS_20 : 3;
  vbittype CAN_TX_TRACK_RANGE_20_1 : 3;
  vbittype CAN_TX_TRACK_ANGLE_20_0 : 5;
  vbittype CAN_TX_TRACK_RANGE_20_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_20_1 : 2;
  vbittype CAN_TX_TRACK_WIDTH_20 : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT_20 : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT_20 : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_20_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_20_1 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE_20 : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_20_0 : 8;
} _c_ESR_Track20_RDS_msgType;

typedef struct _c_ESR_Track19_RDS_msgTypeTag
{
  vbittype CAN_TX_TRACK_ONCOMING_19 : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED_19 : 1;
  vbittype CAN_TX_TRACK_LAT_RATE_19 : 6;
  vbittype CAN_TX_TRACK_ANGLE_19_1 : 5;
  vbittype CAN_TX_TRACK_STATUS_19 : 3;
  vbittype CAN_TX_TRACK_RANGE_19_1 : 3;
  vbittype CAN_TX_TRACK_ANGLE_19_0 : 5;
  vbittype CAN_TX_TRACK_RANGE_19_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_19_1 : 2;
  vbittype CAN_TX_TRACK_WIDTH_19 : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT_19 : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT_19 : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_19_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_19_1 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE_19 : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_19_0 : 8;
} _c_ESR_Track19_RDS_msgType;

typedef struct _c_ESR_Track18_RDS_msgTypeTag
{
  vbittype CAN_TX_TRACK_ONCOMING_18 : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED_18 : 1;
  vbittype CAN_TX_TRACK_LAT_RATE_18 : 6;
  vbittype CAN_TX_TRACK_ANGLE_18_1 : 5;
  vbittype CAN_TX_TRACK_STATUS_18 : 3;
  vbittype CAN_TX_TRACK_RANGE_18_1 : 3;
  vbittype CAN_TX_TRACK_ANGLE_18_0 : 5;
  vbittype CAN_TX_TRACK_RANGE_18_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_18_1 : 2;
  vbittype CAN_TX_TRACK_WIDTH_18 : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT_18 : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT_18 : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_18_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_18_1 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE_18 : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_18_0 : 8;
} _c_ESR_Track18_RDS_msgType;

typedef struct _c_ESR_Track17_RDS_msgTypeTag
{
  vbittype CAN_TX_TRACK_ONCOMING_17 : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED_17 : 1;
  vbittype CAN_TX_TRACK_LAT_RATE_17 : 6;
  vbittype CAN_TX_TRACK_ANGLE_17_1 : 5;
  vbittype CAN_TX_TRACK_STATUS_17 : 3;
  vbittype CAN_TX_TRACK_RANGE_17_1 : 3;
  vbittype CAN_TX_TRACK_ANGLE_17_0 : 5;
  vbittype CAN_TX_TRACK_RANGE_17_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_17_1 : 2;
  vbittype CAN_TX_TRACK_WIDTH_17 : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT_17 : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT_17 : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_17_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_17_1 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE_17 : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_17_0 : 8;
} _c_ESR_Track17_RDS_msgType;

typedef struct _c_ESR_Track16_RDS_msgTypeTag
{
  vbittype CAN_TX_TRACK_ONCOMING_16 : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED_16 : 1;
  vbittype CAN_TX_TRACK_LAT_RATE_16 : 6;
  vbittype CAN_TX_TRACK_ANGLE_16_1 : 5;
  vbittype CAN_TX_TRACK_STATUS_16 : 3;
  vbittype CAN_TX_TRACK_RANGE_16_1 : 3;
  vbittype CAN_TX_TRACK_ANGLE_16_0 : 5;
  vbittype CAN_TX_TRACK_RANGE_16_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_16_1 : 2;
  vbittype CAN_TX_TRACK_WIDTH_16 : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT_16 : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT_16 : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_16_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_16_1 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE_16 : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_16_0 : 8;
} _c_ESR_Track16_RDS_msgType;

typedef struct _c_ESR_Track15_RDS_msgTypeTag
{
  vbittype CAN_TX_TRACK_ONCOMING_15 : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED_15 : 1;
  vbittype CAN_TX_TRACK_LAT_RATE_15 : 6;
  vbittype CAN_TX_TRACK_ANGLE_15_1 : 5;
  vbittype CAN_TX_TRACK_STATUS_15 : 3;
  vbittype CAN_TX_TRACK_RANGE_15_1 : 3;
  vbittype CAN_TX_TRACK_ANGLE_15_0 : 5;
  vbittype CAN_TX_TRACK_RANGE_15_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_15_1 : 2;
  vbittype CAN_TX_TRACK_WIDTH_15 : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT_15 : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT_15 : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_15_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_15_1 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE_15 : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_15_0 : 8;
} _c_ESR_Track15_RDS_msgType;

typedef struct _c_ESR_Track14_RDS_msgTypeTag
{
  vbittype CAN_TX_TRACK_ONCOMING_14 : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED_14 : 1;
  vbittype CAN_TX_TRACK_LAT_RATE_14 : 6;
  vbittype CAN_TX_TRACK_ANGLE_14_1 : 5;
  vbittype CAN_TX_TRACK_STATUS_14 : 3;
  vbittype CAN_TX_TRACK_RANGE_14_1 : 3;
  vbittype CAN_TX_TRACK_ANGLE_14_0 : 5;
  vbittype CAN_TX_TRACK_RANGE_14_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_14_1 : 2;
  vbittype CAN_TX_TRACK_WIDTH_14 : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT_14 : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT_14 : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_14_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_14_1 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE_14 : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_14_0 : 8;
} _c_ESR_Track14_RDS_msgType;

typedef struct _c_ESR_Track13_RDS_msgTypeTag
{
  vbittype CAN_TX_TRACK_ONCOMING_13 : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED_13 : 1;
  vbittype CAN_TX_TRACK_LAT_RATE_13 : 6;
  vbittype CAN_TX_TRACK_ANGLE_13_1 : 5;
  vbittype CAN_TX_TRACK_STATUS_13 : 3;
  vbittype CAN_TX_TRACK_RANGE_13_1 : 3;
  vbittype CAN_TX_TRACK_ANGLE_13_0 : 5;
  vbittype CAN_TX_TRACK_RANGE_13_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_13_1 : 2;
  vbittype CAN_TX_TRACK_WIDTH_13 : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT_13 : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT_13 : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_13_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_13_1 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE_13 : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_13_0 : 8;
} _c_ESR_Track13_RDS_msgType;

typedef struct _c_ESR_Track12_RDS_msgTypeTag
{
  vbittype CAN_TX_TRACK_ONCOMING_12 : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED_12 : 1;
  vbittype CAN_TX_TRACK_LAT_RATE_12 : 6;
  vbittype CAN_TX_TRACK_ANGLE_12_1 : 5;
  vbittype CAN_TX_TRACK_STATUS_12 : 3;
  vbittype CAN_TX_TRACK_RANGE_12_1 : 3;
  vbittype CAN_TX_TRACK_ANGLE_12_0 : 5;
  vbittype CAN_TX_TRACK_RANGE_12_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_12_1 : 2;
  vbittype CAN_TX_TRACK_WIDTH_12 : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT_12 : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT_12 : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_12_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_12_1 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE_12 : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_12_0 : 8;
} _c_ESR_Track12_RDS_msgType;

typedef struct _c_ESR_Track11_RDS_msgTypeTag
{
  vbittype CAN_TX_TRACK_ONCOMING_11 : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED_11 : 1;
  vbittype CAN_TX_TRACK_LAT_RATE_11 : 6;
  vbittype CAN_TX_TRACK_ANGLE_11_1 : 5;
  vbittype CAN_TX_TRACK_STATUS_11 : 3;
  vbittype CAN_TX_TRACK_RANGE_11_1 : 3;
  vbittype CAN_TX_TRACK_ANGLE_11_0 : 5;
  vbittype CAN_TX_TRACK_RANGE_11_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_11_1 : 2;
  vbittype CAN_TX_TRACK_WIDTH_11 : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT_11 : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT_11 : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_11_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_11_1 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE_11 : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_11_0 : 8;
} _c_ESR_Track11_RDS_msgType;

typedef struct _c_ESR_Track10_RDS_msgTypeTag
{
  vbittype CAN_TX_TRACK_ONCOMING_10 : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED_10 : 1;
  vbittype CAN_TX_TRACK_LAT_RATE_10 : 6;
  vbittype CAN_TX_TRACK_ANGLE_10_1 : 5;
  vbittype CAN_TX_TRACK_STATUS_10 : 3;
  vbittype CAN_TX_TRACK_RANGE_10_1 : 3;
  vbittype CAN_TX_TRACK_ANGLE_10_0 : 5;
  vbittype CAN_TX_TRACK_RANGE_10_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_10_1 : 2;
  vbittype CAN_TX_TRACK_WIDTH_10 : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT_10 : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT_10 : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_10_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_10_1 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE_10 : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_10_0 : 8;
} _c_ESR_Track10_RDS_msgType;

typedef struct _c_ESR_Track09_RDS_msgTypeTag
{
  vbittype CAN_TX_TRACK_ONCOMING_09 : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED_09 : 1;
  vbittype CAN_TX_TRACK_LAT_RATE_09 : 6;
  vbittype CAN_TX_TRACK_ANGLE_09_1 : 5;
  vbittype CAN_TX_TRACK_STATUS_09 : 3;
  vbittype CAN_TX_TRACK_RANGE_09_1 : 3;
  vbittype CAN_TX_TRACK_ANGLE_09_0 : 5;
  vbittype CAN_TX_TRACK_RANGE_09_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_09_1 : 2;
  vbittype CAN_TX_TRACK_WIDTH_09 : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT_09 : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT_09 : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_09_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_09_1 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE_09 : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_09_0 : 8;
} _c_ESR_Track09_RDS_msgType;

typedef struct _c_ESR_Track08_RDS_msgTypeTag
{
  vbittype CAN_TX_TRACK_ONCOMING_08 : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED_08 : 1;
  vbittype CAN_TX_TRACK_LAT_RATE_08 : 6;
  vbittype CAN_TX_TRACK_ANGLE_08_1 : 5;
  vbittype CAN_TX_TRACK_STATUS_08 : 3;
  vbittype CAN_TX_TRACK_RANGE_08_1 : 3;
  vbittype CAN_TX_TRACK_ANGLE_08_0 : 5;
  vbittype CAN_TX_TRACK_RANGE_08_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_08_1 : 2;
  vbittype CAN_TX_TRACK_WIDTH_08 : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT_08 : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT_08 : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_08_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_08_1 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE_08 : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_08_0 : 8;
} _c_ESR_Track08_RDS_msgType;

typedef struct _c_ESR_Track07_RDS_msgTypeTag
{
  vbittype CAN_TX_TRACK_ONCOMING_07 : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED_07 : 1;
  vbittype CAN_TX_TRACK_LAT_RATE_07 : 6;
  vbittype CAN_TX_TRACK_ANGLE_07_1 : 5;
  vbittype CAN_TX_TRACK_STATUS_07 : 3;
  vbittype CAN_TX_TRACK_RANGE_07_1 : 3;
  vbittype CAN_TX_TRACK_ANGLE_07_0 : 5;
  vbittype CAN_TX_TRACK_RANGE_07_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_07_1 : 2;
  vbittype CAN_TX_TRACK_WIDTH_07 : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT_07 : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT_07 : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_07_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_07_1 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE_07 : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_07_0 : 8;
} _c_ESR_Track07_RDS_msgType;

typedef struct _c_ESR_Track06_RDS_msgTypeTag
{
  vbittype CAN_TX_TRACK_ONCOMING_06 : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED_06 : 1;
  vbittype CAN_TX_TRACK_LAT_RATE_06 : 6;
  vbittype CAN_TX_TRACK_ANGLE_06_1 : 5;
  vbittype CAN_TX_TRACK_STATUS_06 : 3;
  vbittype CAN_TX_TRACK_RANGE_06_1 : 3;
  vbittype CAN_TX_TRACK_ANGLE_06_0 : 5;
  vbittype CAN_TX_TRACK_RANGE_06_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_06_1 : 2;
  vbittype CAN_TX_TRACK_WIDTH_06 : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT_06 : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT_06 : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_06_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_06_1 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE_06 : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_06_0 : 8;
} _c_ESR_Track06_RDS_msgType;

typedef struct _c_ESR_Track05_RDS_msgTypeTag
{
  vbittype CAN_TX_TRACK_ONCOMING_05 : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED_05 : 1;
  vbittype CAN_TX_TRACK_LAT_RATE_05 : 6;
  vbittype CAN_TX_TRACK_ANGLE_05_1 : 5;
  vbittype CAN_TX_TRACK_STATUS_05 : 3;
  vbittype CAN_TX_TRACK_RANGE_05_1 : 3;
  vbittype CAN_TX_TRACK_ANGLE_05_0 : 5;
  vbittype CAN_TX_TRACK_RANGE_05_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_05_1 : 2;
  vbittype CAN_TX_TRACK_WIDTH_05 : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT_05 : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT_05 : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_05_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_05_1 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE_05 : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_05_0 : 8;
} _c_ESR_Track05_RDS_msgType;

typedef struct _c_ESR_Track04_RDS_msgTypeTag
{
  vbittype CAN_TX_TRACK_ONCOMING_04 : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED_04 : 1;
  vbittype CAN_TX_TRACK_LAT_RATE_04 : 6;
  vbittype CAN_TX_TRACK_ANGLE_04_1 : 5;
  vbittype CAN_TX_TRACK_STATUS_04 : 3;
  vbittype CAN_TX_TRACK_RANGE_04_1 : 3;
  vbittype CAN_TX_TRACK_ANGLE_04_0 : 5;
  vbittype CAN_TX_TRACK_RANGE_04_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_04_1 : 2;
  vbittype CAN_TX_TRACK_WIDTH_04 : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT_04 : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT_04 : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_04_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_04_1 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE_04 : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_04_0 : 8;
} _c_ESR_Track04_RDS_msgType;

typedef struct _c_ESR_Track03_RDS_msgTypeTag
{
  vbittype CAN_TX_TRACK_ONCOMING_03 : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED_03 : 1;
  vbittype CAN_TX_TRACK_LAT_RATE_03 : 6;
  vbittype CAN_TX_TRACK_ANGLE_03_1 : 5;
  vbittype CAN_TX_TRACK_STATUS_03 : 3;
  vbittype CAN_TX_TRACK_RANGE_03_1 : 3;
  vbittype CAN_TX_TRACK_ANGLE_03_0 : 5;
  vbittype CAN_TX_TRACK_RANGE_03_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_03_1 : 2;
  vbittype CAN_TX_TRACK_WIDTH_03 : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT_03 : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT_03 : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_03_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_03_1 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE_03 : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_03_0 : 8;
} _c_ESR_Track03_RDS_msgType;

typedef struct _c_ESR_Track02_RDS_msgTypeTag
{
  vbittype CAN_TX_TRACK_ONCOMING_02 : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED_02 : 1;
  vbittype CAN_TX_TRACK_LAT_RATE_02 : 6;
  vbittype CAN_TX_TRACK_ANGLE_02_1 : 5;
  vbittype CAN_TX_TRACK_STATUS_02 : 3;
  vbittype CAN_TX_TRACK_RANGE_02_1 : 3;
  vbittype CAN_TX_TRACK_ANGLE_02_0 : 5;
  vbittype CAN_TX_TRACK_RANGE_02_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_02_1 : 2;
  vbittype CAN_TX_TRACK_WIDTH_02 : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT_02 : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT_02 : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_02_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_02_1 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE_02 : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_02_0 : 8;
} _c_ESR_Track02_RDS_msgType;

typedef struct _c_ESR_Track01_RDS_msgTypeTag
{
  vbittype CAN_TX_TRACK_ONCOMING_01 : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED_01 : 1;
  vbittype CAN_TX_TRACK_LAT_RATE_01 : 6;
  vbittype CAN_TX_TRACK_ANGLE_01_1 : 5;
  vbittype CAN_TX_TRACK_STATUS_01 : 3;
  vbittype CAN_TX_TRACK_RANGE_01_1 : 3;
  vbittype CAN_TX_TRACK_ANGLE_01_0 : 5;
  vbittype CAN_TX_TRACK_RANGE_01_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_01_1 : 2;
  vbittype CAN_TX_TRACK_WIDTH_01 : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT_01 : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT_01 : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_01_0 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_01_1 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE_01 : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_01_0 : 8;
} _c_ESR_Track01_RDS_msgType;

typedef struct _c_ESR_Status4_RDS_msgTypeTag
{
  vbittype CAN_TX_ROLLING_COUNT_3 : 2;
  vbittype CAN_TX_MR_LR_MODE : 2;
  vbittype CAN_TX_PARTIAL_BLOCKAGE : 1;
  vbittype CAN_TX_SIDELIBE_BLOCKAGE : 1;
  vbittype CAN_TX_LR_ONLY_GRATING_LOBE_DET : 1;
  vbittype CAN_TX_TRUCK_TARGET_DET : 1;
  vbittype CAN_TX_PATH_ID_ACC : 8;
  vbittype CAN_TX_PATH_ID_CMBB_MOVE : 8;
  vbittype CAN_TX_PATH_ID_CMBB_STAT : 8;
  vbittype CAN_TX_PATH_ID_FCW_MOVE : 8;
  vbittype CAN_TX_PATH_ID_FCW_STAT : 8;
  vbittype CAN_TX_AUTO_ALIGE_ANGLE : 8;
  vbittype CAN_TX_PATH_ID_ACC_STAT : 8;
} _c_ESR_Status4_RDS_msgType;

typedef struct _c_ESR_Status3_RDS_msgTypeTag
{
  vbittype CAN_TX_HW_VERSION : 4;
  vbittype CAN_TX_INTERFACE_VERSION : 4;
  vbittype CAN_TX_SW_VERSION_HOST_2 : 8;
  vbittype CAN_TX_SW_VERSION_HOST_1 : 8;
  vbittype CAN_TX_SW_VERSION_HOST_0 : 8;
  vbittype CAN_TX_SERIAL_NUM_2 : 8;
  vbittype CAN_TX_SERIAL_NUM_1 : 8;
  vbittype CAN_TX_SERIAL_NUM_0 : 8;
  vbittype CAN_TX_SW_VERSION_PLD : 8;
} _c_ESR_Status3_RDS_msgType;

typedef struct _c_ESR_Status2_RDS_msgTypeTag
{
  vbittype CAN_TX_ROLLING_COUNT_2 : 2;
  vbittype CAN_TX_MAXIMUM_TRACKS_ACK : 6;
  vbittype CAN_TX_STEERING_ANGLE_ACK_1 : 3;
  vbittype CAN_TX_RAW_DATA_MODE : 1;
  vbittype CAN_TX_XCVR_OPERATIONAL : 1;
  vbittype CAN_TX_INTERNAL_ERROR : 1;
  vbittype CAN_TX_RANGE_PERF_ERROR : 1;
  vbittype CAN_TX_OVERHEAT_ERROR : 1;
  vbittype CAN_TX_STEERING_ANGLE_ACK_0 : 8;
  vbittype CAN_TX_TEMPERATURE : 8;
  vbittype CAN_TX_GROUPING_MODE : 2;
  vbittype CAN_TX_VEH_SPD_COMP_FACTOR : 6;
  vbittype CAN_TX_YAW_RATE_BIAS : 8;
  vbittype CAN_TX_SW_VERSION_DSP_1 : 8;
  vbittype CAN_TX_SW_VERSION_DSP_0 : 8;
} _c_ESR_Status2_RDS_msgType;

typedef union _c_RDS0_bufTag
{
  vuint8 _c[8];
  _c_Fixed_FOE_RDS_msgType Fixed_FOE;
} _c_RDS0_buf;
typedef union _c_RDS1_bufTag
{
  vuint8 _c[8];
  _c_Detils_Lane_RDS_msgType Detils_Lane;
} _c_RDS1_buf;
typedef union _c_RDS2_bufTag
{
  vuint8 _c[8];
  _c_C2_Display_and_warning_RDS_msgType C2_Display_and_warning;
} _c_RDS2_buf;
typedef union _c_RDS3_bufTag
{
  vuint8 _c[6];
  _c_TSR_message_A_RDS_msgType TSR_message_A;
} _c_RDS3_buf;
typedef union _c_RDS4_bufTag
{
  vuint8 _c[6];
  _c_TSR_message_B_RDS_msgType TSR_message_B;
} _c_RDS4_buf;
typedef union _c_RDS5_bufTag
{
  vuint8 _c[6];
  _c_TSR_message_C_RDS_msgType TSR_message_C;
} _c_RDS5_buf;
typedef union _c_RDS6_bufTag
{
  vuint8 _c[6];
  _c_TSR_message_D_RDS_msgType TSR_message_D;
} _c_RDS6_buf;
typedef union _c_RDS7_bufTag
{
  vuint8 _c[6];
  _c_TSR_message_E_RDS_msgType TSR_message_E;
} _c_RDS7_buf;
typedef union _c_RDS8_bufTag
{
  vuint8 _c[6];
  _c_TSR_message_F_RDS_msgType TSR_message_F;
} _c_RDS8_buf;
typedef union _c_RDS9_bufTag
{
  vuint8 _c[8];
  _c_Sign_Type_RDS_msgType Sign_Type;
} _c_RDS9_buf;
typedef union _c_RDS10_bufTag
{
  vuint8 _c[3];
  _c_AHBC_high_low_beam_RDS_msgType AHBC_high_low_beam;
} _c_RDS10_buf;
typedef union _c_RDS11_bufTag
{
  vuint8 _c[7];
  _c_AHBC_Gradual_RDS_msgType AHBC_Gradual;
} _c_RDS11_buf;
typedef union _c_RDS12_bufTag
{
  vuint8 _c[8];
  _c_Lane_RDS_msgType Lane;
} _c_RDS12_buf;
typedef union _c_RDS13_bufTag
{
  vuint8 _c[6];
  _c_Obstacle_Status_RDS_msgType Obstacle_Status;
} _c_RDS13_buf;
typedef union _c_RDS14_bufTag
{
  vuint8 _c[8];
  _c_Obstacle_Data_A_RDS_msgType Obstacle_Data_A;
} _c_RDS14_buf;
typedef union _c_RDS15_bufTag
{
  vuint8 _c[8];
  _c_Obstacle_Data_B_RDS_msgType Obstacle_Data_B;
} _c_RDS15_buf;
typedef union _c_RDS16_bufTag
{
  vuint8 _c[8];
  _c_Obstacle_Data_C_RDS_msgType Obstacle_Data_C;
} _c_RDS16_buf;
typedef union _c_RDS17_bufTag
{
  vuint8 _c[8];
  _c_Obstacle_Data_D_RDS_msgType Obstacle_Data_D;
} _c_RDS17_buf;
typedef union _c_RDS18_bufTag
{
  vuint8 _c[8];
  _c_Obstacle_Data_E_RDS_msgType Obstacle_Data_E;
} _c_RDS18_buf;
typedef union _c_RDS19_bufTag
{
  vuint8 _c[8];
  _c_Obstacle_Data_F_RDS_msgType Obstacle_Data_F;
} _c_RDS19_buf;
typedef union _c_RDS20_bufTag
{
  vuint8 _c[8];
  _c_Obstacle_Data_G_RDS_msgType Obstacle_Data_G;
} _c_RDS20_buf;
typedef union _c_RDS21_bufTag
{
  vuint8 _c[8];
  _c_Obstacle_Data_H_RDS_msgType Obstacle_Data_H;
} _c_RDS21_buf;
typedef union _c_RDS22_bufTag
{
  vuint8 _c[8];
  _c_Obstacle_Data_I_RDS_msgType Obstacle_Data_I;
} _c_RDS22_buf;
typedef union _c_RDS23_bufTag
{
  vuint8 _c[8];
  _c_Obstacle_Data_J_RDS_msgType Obstacle_Data_J;
} _c_RDS23_buf;
typedef union _c_RDS24_bufTag
{
  vuint8 _c[8];
  _c_Obstacle_Data_K_RDS_msgType Obstacle_Data_K;
} _c_RDS24_buf;
typedef union _c_RDS25_bufTag
{
  vuint8 _c[8];
  _c_Obstacle_Data_L_RDS_msgType Obstacle_Data_L;
} _c_RDS25_buf;
typedef union _c_RDS26_bufTag
{
  vuint8 _c[8];
  _c_Obstacle_Data_M_RDS_msgType Obstacle_Data_M;
} _c_RDS26_buf;
typedef union _c_RDS27_bufTag
{
  vuint8 _c[8];
  _c_Obstacle_Data_N_RDS_msgType Obstacle_Data_N;
} _c_RDS27_buf;
typedef union _c_RDS28_bufTag
{
  vuint8 _c[8];
  _c_Obstacle_Data_O_RDS_msgType Obstacle_Data_O;
} _c_RDS28_buf;
typedef union _c_RDS29_bufTag
{
  vuint8 _c[8];
  _c_Obstacle_Data_P_RDS_msgType Obstacle_Data_P;
} _c_RDS29_buf;
typedef union _c_RDS30_bufTag
{
  vuint8 _c[8];
  _c_Obstacle_Data_Q_RDS_msgType Obstacle_Data_Q;
} _c_RDS30_buf;
typedef union _c_RDS31_bufTag
{
  vuint8 _c[8];
  _c_Obstacle_Data_R_RDS_msgType Obstacle_Data_R;
} _c_RDS31_buf;
typedef union _c_RDS32_bufTag
{
  vuint8 _c[8];
  _c_Obstacle_Data_S_RDS_msgType Obstacle_Data_S;
} _c_RDS32_buf;
typedef union _c_RDS33_bufTag
{
  vuint8 _c[8];
  _c_Obstacle_Data_T_RDS_msgType Obstacle_Data_T;
} _c_RDS33_buf;
typedef union _c_RDS34_bufTag
{
  vuint8 _c[8];
  _c_Obstacle_Data_U_RDS_msgType Obstacle_Data_U;
} _c_RDS34_buf;
typedef union _c_RDS35_bufTag
{
  vuint8 _c[8];
  _c_Obstacle_Data_V_RDS_msgType Obstacle_Data_V;
} _c_RDS35_buf;
typedef union _c_RDS36_bufTag
{
  vuint8 _c[8];
  _c_Obstacle_Data_W_RDS_msgType Obstacle_Data_W;
} _c_RDS36_buf;
typedef union _c_RDS37_bufTag
{
  vuint8 _c[8];
  _c_Obstacle_Data_X_RDS_msgType Obstacle_Data_X;
} _c_RDS37_buf;
typedef union _c_RDS38_bufTag
{
  vuint8 _c[8];
  _c_Car_Info_RDS_msgType Car_Info;
} _c_RDS38_buf;
typedef union _c_RDS39_bufTag
{
  vuint8 _c[8];
  _c_LKA_left_lane_A_RDS_msgType LKA_left_lane_A;
} _c_RDS39_buf;
typedef union _c_RDS40_bufTag
{
  vuint8 _c[4];
  _c_LKA_left_lane_B_RDS_msgType LKA_left_lane_B;
} _c_RDS40_buf;
typedef union _c_RDS41_bufTag
{
  vuint8 _c[8];
  _c_LKA_right_lane_A_RDS_msgType LKA_right_lane_A;
} _c_RDS41_buf;
typedef union _c_RDS42_bufTag
{
  vuint8 _c[4];
  _c_LKA_right_lane_B_RDS_msgType LKA_right_lane_B;
} _c_RDS42_buf;
typedef union _c_RDS43_bufTag
{
  vuint8 _c[8];
  _c_Reference_points_RDS_msgType Reference_points;
} _c_RDS43_buf;
typedef union _c_RDS44_bufTag
{
  vuint8 _c[1];
  _c_Numebr_of_next_lane_RDS_msgType Numebr_of_next_lane;
} _c_RDS44_buf;
typedef union _c_RDS45_bufTag
{
  vuint8 _c[8];
  _c_Next_lane_Left_A_RDS_msgType Next_lane_Left_A;
} _c_RDS45_buf;
typedef union _c_RDS46_bufTag
{
  vuint8 _c[4];
  _c_Next_lane_Left_B_RDS_msgType Next_lane_Left_B;
} _c_RDS46_buf;
typedef union _c_RDS47_bufTag
{
  vuint8 _c[8];
  _c_Next_lane_Right_C_RDS_msgType Next_lane_Right_C;
} _c_RDS47_buf;
typedef union _c_RDS48_bufTag
{
  vuint8 _c[4];
  _c_Next_lane_Right_D_RDS_msgType Next_lane_Right_D;
} _c_RDS48_buf;
typedef union _c_RDS49_bufTag
{
  vuint8 _c[8];
  _c_Next_lane_Left_E_RDS_msgType Next_lane_Left_E;
} _c_RDS49_buf;
typedef union _c_RDS50_bufTag
{
  vuint8 _c[4];
  _c_Next_lane_Left_F_RDS_msgType Next_lane_Left_F;
} _c_RDS50_buf;
typedef union _c_RDS51_bufTag
{
  vuint8 _c[8];
  _c_Next_lane_Right_G_RDS_msgType Next_lane_Right_G;
} _c_RDS51_buf;
typedef union _c_RDS52_bufTag
{
  vuint8 _c[4];
  _c_Next_lane_Right_H_RDS_msgType Next_lane_Right_H;
} _c_RDS52_buf;
typedef union _c_RDS53_bufTag
{
  vuint8 _c[8];
  _c_Next_lane_Left_I_RDS_msgType Next_lane_Left_I;
} _c_RDS53_buf;
typedef union _c_RDS54_bufTag
{
  vuint8 _c[4];
  _c_Next_lane_Left_J_RDS_msgType Next_lane_Left_J;
} _c_RDS54_buf;
typedef union _c_RDS55_bufTag
{
  vuint8 _c[8];
  _c_Next_lane_Right_K_RDS_msgType Next_lane_Right_K;
} _c_RDS55_buf;
typedef union _c_RDS56_bufTag
{
  vuint8 _c[4];
  _c_Next_lane_Right_L_RDS_msgType Next_lane_Right_L;
} _c_RDS56_buf;
typedef union _c_RDS57_bufTag
{
  vuint8 _c[8];
  _c_Next_lane_Left_M_RDS_msgType Next_lane_Left_M;
} _c_RDS57_buf;
typedef union _c_RDS58_bufTag
{
  vuint8 _c[4];
  _c_Next_lane_Left_N_RDS_msgType Next_lane_Left_N;
} _c_RDS58_buf;
typedef union _c_RDS59_bufTag
{
  vuint8 _c[8];
  _c_Next_lane_Right_O_RDS_msgType Next_lane_Right_O;
} _c_RDS59_buf;
typedef union _c_RDS60_bufTag
{
  vuint8 _c[4];
  _c_Next_lane_Right_P_RDS_msgType Next_lane_Right_P;
} _c_RDS60_buf;
typedef union _c_RDS_Tx_bufTag
{
  vuint8 _c[6];
  _c_TSR_message_G_RDS_msgType TSR_message_G;
} _c_RDS_Tx_buf;
typedef union _c_RDSBasic_bufTag
{
  vuint8 _c[8];
  _c_ESR_Status1_RDS_msgType ESR_Status1;
  _c_ESR_Status9_RDS_msgType ESR_Status9;
  _c_ESR_Status8_RDS_msgType ESR_Status8;
  _c_ESR_Status7_RDS_msgType ESR_Status7;
  _c_ESR_Status6_RDS_msgType ESR_Status6;
  _c_ESR_Status5_RDS_msgType ESR_Status5;
  _c_ESR_Track64_RDS_msgType ESR_Track64;
  _c_ESR_Track63_RDS_msgType ESR_Track63;
  _c_ESR_Track62_RDS_msgType ESR_Track62;
  _c_ESR_Track61_RDS_msgType ESR_Track61;
  _c_ESR_Track60_RDS_msgType ESR_Track60;
  _c_ESR_Track59_RDS_msgType ESR_Track59;
  _c_ESR_Track58_RDS_msgType ESR_Track58;
  _c_ESR_Track57_RDS_msgType ESR_Track57;
  _c_ESR_Track56_RDS_msgType ESR_Track56;
  _c_ESR_Track55_RDS_msgType ESR_Track55;
  _c_ESR_Track54_RDS_msgType ESR_Track54;
  _c_ESR_Track53_RDS_msgType ESR_Track53;
  _c_ESR_Track52_RDS_msgType ESR_Track52;
  _c_ESR_Track51_RDS_msgType ESR_Track51;
  _c_ESR_Track50_RDS_msgType ESR_Track50;
  _c_ESR_Track49_RDS_msgType ESR_Track49;
  _c_ESR_Track48_RDS_msgType ESR_Track48;
  _c_ESR_Track47_RDS_msgType ESR_Track47;
  _c_ESR_Track46_RDS_msgType ESR_Track46;
  _c_ESR_Track45_RDS_msgType ESR_Track45;
  _c_ESR_Track44_RDS_msgType ESR_Track44;
  _c_ESR_Track43_RDS_msgType ESR_Track43;
  _c_ESR_Track42_RDS_msgType ESR_Track42;
  _c_ESR_Track41_RDS_msgType ESR_Track41;
  _c_ESR_Track40_RDS_msgType ESR_Track40;
  _c_ESR_Track39_RDS_msgType ESR_Track39;
  _c_ESR_Track38_RDS_msgType ESR_Track38;
  _c_ESR_Track37_RDS_msgType ESR_Track37;
  _c_ESR_Track36_RDS_msgType ESR_Track36;
  _c_ESR_Track35_RDS_msgType ESR_Track35;
  _c_ESR_Track34_RDS_msgType ESR_Track34;
  _c_ESR_Track33_RDS_msgType ESR_Track33;
  _c_ESR_Track32_RDS_msgType ESR_Track32;
  _c_ESR_Track31_RDS_msgType ESR_Track31;
  _c_ESR_Track30_RDS_msgType ESR_Track30;
  _c_ESR_Track29_RDS_msgType ESR_Track29;
  _c_ESR_Track28_RDS_msgType ESR_Track28;
  _c_ESR_Track27_RDS_msgType ESR_Track27;
  _c_ESR_Track26_RDS_msgType ESR_Track26;
  _c_ESR_Track25_RDS_msgType ESR_Track25;
  _c_ESR_Track24_RDS_msgType ESR_Track24;
  _c_ESR_Track23_RDS_msgType ESR_Track23;
  _c_ESR_Track22_RDS_msgType ESR_Track22;
  _c_ESR_Track21_RDS_msgType ESR_Track21;
  _c_ESR_Track20_RDS_msgType ESR_Track20;
  _c_ESR_Track19_RDS_msgType ESR_Track19;
  _c_ESR_Track18_RDS_msgType ESR_Track18;
  _c_ESR_Track17_RDS_msgType ESR_Track17;
  _c_ESR_Track16_RDS_msgType ESR_Track16;
  _c_ESR_Track15_RDS_msgType ESR_Track15;
  _c_ESR_Track14_RDS_msgType ESR_Track14;
  _c_ESR_Track13_RDS_msgType ESR_Track13;
  _c_ESR_Track12_RDS_msgType ESR_Track12;
  _c_ESR_Track11_RDS_msgType ESR_Track11;
  _c_ESR_Track10_RDS_msgType ESR_Track10;
  _c_ESR_Track09_RDS_msgType ESR_Track09;
  _c_ESR_Track08_RDS_msgType ESR_Track08;
  _c_ESR_Track07_RDS_msgType ESR_Track07;
  _c_ESR_Track06_RDS_msgType ESR_Track06;
  _c_ESR_Track05_RDS_msgType ESR_Track05;
  _c_ESR_Track04_RDS_msgType ESR_Track04;
  _c_ESR_Track03_RDS_msgType ESR_Track03;
  _c_ESR_Track02_RDS_msgType ESR_Track02;
  _c_ESR_Track01_RDS_msgType ESR_Track01;
  _c_ESR_Status4_RDS_msgType ESR_Status4;
  _c_ESR_Status3_RDS_msgType ESR_Status3;
  _c_ESR_Status2_RDS_msgType ESR_Status2;
} _c_RDSBasic_buf;


#define RDS0                                 ((* ((_c_RDS0_buf MEMORY_NORMAL *)(canRDSTxPtr[0]))))
#define RDS1                                 ((* ((_c_RDS1_buf MEMORY_NORMAL *)(canRDSTxPtr[1]))))
#define RDS2                                 ((* ((_c_RDS2_buf MEMORY_NORMAL *)(canRDSTxPtr[2]))))
#define RDS3                                 ((* ((_c_RDS3_buf MEMORY_NORMAL *)(canRDSTxPtr[3]))))
#define RDS4                                 ((* ((_c_RDS4_buf MEMORY_NORMAL *)(canRDSTxPtr[4]))))
#define RDS5                                 ((* ((_c_RDS5_buf MEMORY_NORMAL *)(canRDSTxPtr[5]))))
#define RDS6                                 ((* ((_c_RDS6_buf MEMORY_NORMAL *)(canRDSTxPtr[6]))))
#define RDS7                                 ((* ((_c_RDS7_buf MEMORY_NORMAL *)(canRDSTxPtr[7]))))
#define RDS8                                 ((* ((_c_RDS8_buf MEMORY_NORMAL *)(canRDSTxPtr[8]))))
#define RDS9                                 ((* ((_c_RDS9_buf MEMORY_NORMAL *)(canRDSTxPtr[9]))))
#define RDS10                                ((* ((_c_RDS10_buf MEMORY_NORMAL *)(canRDSTxPtr[10]))))
#define RDS11                                ((* ((_c_RDS11_buf MEMORY_NORMAL *)(canRDSTxPtr[11]))))
#define RDS12                                ((* ((_c_RDS12_buf MEMORY_NORMAL *)(canRDSTxPtr[12]))))
#define RDS13                                ((* ((_c_RDS13_buf MEMORY_NORMAL *)(canRDSTxPtr[13]))))
#define RDS14                                ((* ((_c_RDS14_buf MEMORY_NORMAL *)(canRDSTxPtr[14]))))
#define RDS15                                ((* ((_c_RDS15_buf MEMORY_NORMAL *)(canRDSTxPtr[15]))))
#define RDS16                                ((* ((_c_RDS16_buf MEMORY_NORMAL *)(canRDSTxPtr[16]))))
#define RDS17                                ((* ((_c_RDS17_buf MEMORY_NORMAL *)(canRDSTxPtr[17]))))
#define RDS18                                ((* ((_c_RDS18_buf MEMORY_NORMAL *)(canRDSTxPtr[18]))))
#define RDS19                                ((* ((_c_RDS19_buf MEMORY_NORMAL *)(canRDSTxPtr[19]))))
#define RDS20                                ((* ((_c_RDS20_buf MEMORY_NORMAL *)(canRDSTxPtr[20]))))
#define RDS21                                ((* ((_c_RDS21_buf MEMORY_NORMAL *)(canRDSTxPtr[21]))))
#define RDS22                                ((* ((_c_RDS22_buf MEMORY_NORMAL *)(canRDSTxPtr[22]))))
#define RDS23                                ((* ((_c_RDS23_buf MEMORY_NORMAL *)(canRDSTxPtr[23]))))
#define RDS24                                ((* ((_c_RDS24_buf MEMORY_NORMAL *)(canRDSTxPtr[24]))))
#define RDS25                                ((* ((_c_RDS25_buf MEMORY_NORMAL *)(canRDSTxPtr[25]))))
#define RDS26                                ((* ((_c_RDS26_buf MEMORY_NORMAL *)(canRDSTxPtr[26]))))
#define RDS27                                ((* ((_c_RDS27_buf MEMORY_NORMAL *)(canRDSTxPtr[27]))))
#define RDS28                                ((* ((_c_RDS28_buf MEMORY_NORMAL *)(canRDSTxPtr[28]))))
#define RDS29                                ((* ((_c_RDS29_buf MEMORY_NORMAL *)(canRDSTxPtr[29]))))
#define RDS30                                ((* ((_c_RDS30_buf MEMORY_NORMAL *)(canRDSTxPtr[30]))))
#define RDS31                                ((* ((_c_RDS31_buf MEMORY_NORMAL *)(canRDSTxPtr[31]))))
#define RDS32                                ((* ((_c_RDS32_buf MEMORY_NORMAL *)(canRDSTxPtr[32]))))
#define RDS33                                ((* ((_c_RDS33_buf MEMORY_NORMAL *)(canRDSTxPtr[33]))))
#define RDS34                                ((* ((_c_RDS34_buf MEMORY_NORMAL *)(canRDSTxPtr[34]))))
#define RDS35                                ((* ((_c_RDS35_buf MEMORY_NORMAL *)(canRDSTxPtr[35]))))
#define RDS36                                ((* ((_c_RDS36_buf MEMORY_NORMAL *)(canRDSTxPtr[36]))))
#define RDS37                                ((* ((_c_RDS37_buf MEMORY_NORMAL *)(canRDSTxPtr[37]))))
#define RDS38                                ((* ((_c_RDS38_buf MEMORY_NORMAL *)(canRDSTxPtr[38]))))
#define RDS39                                ((* ((_c_RDS39_buf MEMORY_NORMAL *)(canRDSTxPtr[39]))))
#define RDS40                                ((* ((_c_RDS40_buf MEMORY_NORMAL *)(canRDSTxPtr[40]))))
#define RDS41                                ((* ((_c_RDS41_buf MEMORY_NORMAL *)(canRDSTxPtr[41]))))
#define RDS42                                ((* ((_c_RDS42_buf MEMORY_NORMAL *)(canRDSTxPtr[42]))))
#define RDS43                                ((* ((_c_RDS43_buf MEMORY_NORMAL *)(canRDSTxPtr[43]))))
#define RDS44                                ((* ((_c_RDS44_buf MEMORY_NORMAL *)(canRDSTxPtr[44]))))
#define RDS45                                ((* ((_c_RDS45_buf MEMORY_NORMAL *)(canRDSTxPtr[45]))))
#define RDS46                                ((* ((_c_RDS46_buf MEMORY_NORMAL *)(canRDSTxPtr[46]))))
#define RDS47                                ((* ((_c_RDS47_buf MEMORY_NORMAL *)(canRDSTxPtr[47]))))
#define RDS48                                ((* ((_c_RDS48_buf MEMORY_NORMAL *)(canRDSTxPtr[48]))))
#define RDS49                                ((* ((_c_RDS49_buf MEMORY_NORMAL *)(canRDSTxPtr[49]))))
#define RDS50                                ((* ((_c_RDS50_buf MEMORY_NORMAL *)(canRDSTxPtr[50]))))
#define RDS51                                ((* ((_c_RDS51_buf MEMORY_NORMAL *)(canRDSTxPtr[51]))))
#define RDS52                                ((* ((_c_RDS52_buf MEMORY_NORMAL *)(canRDSTxPtr[52]))))
#define RDS53                                ((* ((_c_RDS53_buf MEMORY_NORMAL *)(canRDSTxPtr[53]))))
#define RDS54                                ((* ((_c_RDS54_buf MEMORY_NORMAL *)(canRDSTxPtr[54]))))
#define RDS55                                ((* ((_c_RDS55_buf MEMORY_NORMAL *)(canRDSTxPtr[55]))))
#define RDS56                                ((* ((_c_RDS56_buf MEMORY_NORMAL *)(canRDSTxPtr[56]))))
#define RDS57                                ((* ((_c_RDS57_buf MEMORY_NORMAL *)(canRDSTxPtr[57]))))
#define RDS58                                ((* ((_c_RDS58_buf MEMORY_NORMAL *)(canRDSTxPtr[58]))))
#define RDS59                                ((* ((_c_RDS59_buf MEMORY_NORMAL *)(canRDSTxPtr[59]))))
#define RDS60                                ((* ((_c_RDS60_buf MEMORY_NORMAL *)(canRDSTxPtr[60]))))
#define RDSTx                                ((* ((_c_RDS_Tx_buf MEMORY_NORMAL *)(canRDSTxPtr[61]))))
#define RDSBasic                             ((* ((_c_RDSBasic_buf MEMORY_NORMAL *)(canRDSRxPtr[0]))))



/* -----------------------------------------------------------------------------
    &&&~ Message Hardware Objects
 ----------------------------------------------------------------------------- */

#define CanTxFixed_FOE_HW_OBJ                0
#define CanTxFixed_FOE_HW_CHANNEL            0
#define CanTxDetils_Lane_HW_OBJ              1
#define CanTxDetils_Lane_HW_CHANNEL          0
#define CanTxC2_Display_and_warning_HW_OBJ   2
#define CanTxC2_Display_and_warning_HW_CHANNEL 0
#define CanTxTSR_message_A_HW_OBJ            3
#define CanTxTSR_message_A_HW_CHANNEL        0
#define CanTxTSR_message_B_HW_OBJ            4
#define CanTxTSR_message_B_HW_CHANNEL        0
#define CanTxTSR_message_C_HW_OBJ            5
#define CanTxTSR_message_C_HW_CHANNEL        0
#define CanTxTSR_message_D_HW_OBJ            6
#define CanTxTSR_message_D_HW_CHANNEL        0
#define CanTxTSR_message_E_HW_OBJ            7
#define CanTxTSR_message_E_HW_CHANNEL        0
#define CanTxTSR_message_F_HW_OBJ            8
#define CanTxTSR_message_F_HW_CHANNEL        0
#define CanTxSign_Type_HW_OBJ                9
#define CanTxSign_Type_HW_CHANNEL            0
#define CanTxAHBC_high_low_beam_HW_OBJ       10
#define CanTxAHBC_high_low_beam_HW_CHANNEL   0
#define CanTxAHBC_Gradual_HW_OBJ             11
#define CanTxAHBC_Gradual_HW_CHANNEL         0
#define CanTxLane_HW_OBJ                     12
#define CanTxLane_HW_CHANNEL                 0
#define CanTxObstacle_Status_HW_OBJ          13
#define CanTxObstacle_Status_HW_CHANNEL      0
#define CanTxObstacle_Data_A_HW_OBJ          14
#define CanTxObstacle_Data_A_HW_CHANNEL      0
#define CanTxObstacle_Data_B_HW_OBJ          15
#define CanTxObstacle_Data_B_HW_CHANNEL      0
#define CanTxObstacle_Data_C_HW_OBJ          16
#define CanTxObstacle_Data_C_HW_CHANNEL      0
#define CanTxObstacle_Data_D_HW_OBJ          17
#define CanTxObstacle_Data_D_HW_CHANNEL      0
#define CanTxObstacle_Data_E_HW_OBJ          18
#define CanTxObstacle_Data_E_HW_CHANNEL      0
#define CanTxObstacle_Data_F_HW_OBJ          19
#define CanTxObstacle_Data_F_HW_CHANNEL      0
#define CanTxObstacle_Data_G_HW_OBJ          20
#define CanTxObstacle_Data_G_HW_CHANNEL      0
#define CanTxObstacle_Data_H_HW_OBJ          21
#define CanTxObstacle_Data_H_HW_CHANNEL      0
#define CanTxObstacle_Data_I_HW_OBJ          22
#define CanTxObstacle_Data_I_HW_CHANNEL      0
#define CanTxObstacle_Data_J_HW_OBJ          23
#define CanTxObstacle_Data_J_HW_CHANNEL      0
#define CanTxObstacle_Data_K_HW_OBJ          24
#define CanTxObstacle_Data_K_HW_CHANNEL      0
#define CanTxObstacle_Data_L_HW_OBJ          25
#define CanTxObstacle_Data_L_HW_CHANNEL      0
#define CanTxObstacle_Data_M_HW_OBJ          26
#define CanTxObstacle_Data_M_HW_CHANNEL      0
#define CanTxObstacle_Data_N_HW_OBJ          27
#define CanTxObstacle_Data_N_HW_CHANNEL      0
#define CanTxObstacle_Data_O_HW_OBJ          28
#define CanTxObstacle_Data_O_HW_CHANNEL      0
#define CanTxObstacle_Data_P_HW_OBJ          29
#define CanTxObstacle_Data_P_HW_CHANNEL      0
#define CanTxObstacle_Data_Q_HW_OBJ          30
#define CanTxObstacle_Data_Q_HW_CHANNEL      0
#define CanTxObstacle_Data_R_HW_OBJ          31
#define CanTxObstacle_Data_R_HW_CHANNEL      0
#define CanTxObstacle_Data_S_HW_OBJ          32
#define CanTxObstacle_Data_S_HW_CHANNEL      0
#define CanTxObstacle_Data_T_HW_OBJ          33
#define CanTxObstacle_Data_T_HW_CHANNEL      0
#define CanTxObstacle_Data_U_HW_OBJ          34
#define CanTxObstacle_Data_U_HW_CHANNEL      0
#define CanTxObstacle_Data_V_HW_OBJ          35
#define CanTxObstacle_Data_V_HW_CHANNEL      0
#define CanTxObstacle_Data_W_HW_OBJ          36
#define CanTxObstacle_Data_W_HW_CHANNEL      0
#define CanTxObstacle_Data_X_HW_OBJ          37
#define CanTxObstacle_Data_X_HW_CHANNEL      0
#define CanTxCar_Info_HW_OBJ                 38
#define CanTxCar_Info_HW_CHANNEL             0
#define CanTxLKA_left_lane_A_HW_OBJ          39
#define CanTxLKA_left_lane_A_HW_CHANNEL      0
#define CanTxLKA_left_lane_B_HW_OBJ          40
#define CanTxLKA_left_lane_B_HW_CHANNEL      0
#define CanTxLKA_right_lane_A_HW_OBJ         41
#define CanTxLKA_right_lane_A_HW_CHANNEL     0
#define CanTxLKA_right_lane_B_HW_OBJ         42
#define CanTxLKA_right_lane_B_HW_CHANNEL     0
#define CanTxReference_points_HW_OBJ         43
#define CanTxReference_points_HW_CHANNEL     0
#define CanTxNumebr_of_next_lane_HW_OBJ      44
#define CanTxNumebr_of_next_lane_HW_CHANNEL  0
#define CanTxNext_lane_Left_A_HW_OBJ         45
#define CanTxNext_lane_Left_A_HW_CHANNEL     0
#define CanTxNext_lane_Left_B_HW_OBJ         46
#define CanTxNext_lane_Left_B_HW_CHANNEL     0
#define CanTxNext_lane_Right_C_HW_OBJ        47
#define CanTxNext_lane_Right_C_HW_CHANNEL    0
#define CanTxNext_lane_Right_D_HW_OBJ        48
#define CanTxNext_lane_Right_D_HW_CHANNEL    0
#define CanTxNext_lane_Left_E_HW_OBJ         49
#define CanTxNext_lane_Left_E_HW_CHANNEL     0
#define CanTxNext_lane_Left_F_HW_OBJ         50
#define CanTxNext_lane_Left_F_HW_CHANNEL     0
#define CanTxNext_lane_Right_G_HW_OBJ        51
#define CanTxNext_lane_Right_G_HW_CHANNEL    0
#define CanTxNext_lane_Right_H_HW_OBJ        52
#define CanTxNext_lane_Right_H_HW_CHANNEL    0
#define CanTxNext_lane_Left_I_HW_OBJ         53
#define CanTxNext_lane_Left_I_HW_CHANNEL     0
#define CanTxNext_lane_Left_J_HW_OBJ         54
#define CanTxNext_lane_Left_J_HW_CHANNEL     0
#define CanTxNext_lane_Right_K_HW_OBJ        55
#define CanTxNext_lane_Right_K_HW_CHANNEL    0
#define CanTxNext_lane_Right_L_HW_OBJ        56
#define CanTxNext_lane_Right_L_HW_CHANNEL    0
#define CanTxNext_lane_Left_M_HW_OBJ         57
#define CanTxNext_lane_Left_M_HW_CHANNEL     0
#define CanTxNext_lane_Left_N_HW_OBJ         58
#define CanTxNext_lane_Left_N_HW_CHANNEL     0
#define CanTxNext_lane_Right_O_HW_OBJ        59
#define CanTxNext_lane_Right_O_HW_CHANNEL    0
#define CanTxNext_lane_Right_P_HW_OBJ        60
#define CanTxNext_lane_Right_P_HW_CHANNEL    0
#define C_TX_NORMAL_HW_OBJ                   61
#define C_TX_NORMAL_HW_CHANNEL               0
#define C_BASIC0_HW_OBJ                      62
#define C_BASIC0_HW_CHANNEL                  0





/* begin Fileversion check */
#ifndef SKIP_MAGIC_NUMBER
#ifdef MAGIC_NUMBER
  #if MAGIC_NUMBER != 297263386
      #error "The magic number of the generated file <D:\code\McuCode\GENy-IL-interfaceGenerator\tools\Geny\can_par.h> is different. Please check time and date of generated files!"
  #endif
#else
  #define MAGIC_NUMBER 297263386
#endif  /* MAGIC_NUMBER */
#endif  /* SKIP_MAGIC_NUMBER */

/* end Fileversion check */

#endif /* __CAN_PAR_H__ */
