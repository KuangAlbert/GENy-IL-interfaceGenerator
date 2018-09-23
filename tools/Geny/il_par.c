/* -----------------------------------------------------------------------------
  Filename:    il_par.c
  Description: Toolversion: 02.03.18.01.80.00.17.01.00.00
               
               Serial Number: CBD1800017
               Customer Info: Huizhou Desay SV Automotive Co., Ltd.
                              Package: CBD_Vector_SLP2
                              Micro: TDA2XXHG
                              Compiler: Texas Instruments 16.9.2
               
               
               Generator Fwk   : GENy 
               Generator Module: Il_Vector
               
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

/* -----------------------------------------------------------------------------
    &&&~ Misra  justifications
 ----------------------------------------------------------------------------- */

/* PRQA S 3458 EOF *//* MD_CBD_19.4 */
/* PRQA S 3408 EOF *//* MD_Il_8.8 */
/* PRQA S 3460 EOF *//* MD_CBD_19.4 */
/* PRQA S 3412 EOF *//* MD_CBD_19.4 */
/* PRQA S 3453 EOF *//* MD_CBD_19.7 */
/* PRQA S 2006 EOF *//* MD_CBD_14.7 */
/* PRQA S 0777 EOF *//* MD_Il_0777 */
/* PRQA S 0778 EOF *//* MD_Il_0778 */
/* PRQA S 0779 EOF *//* MD_Il_0779 */
/* PRQA S 3673 EOF *//* MD_Il_3673 */
/* PRQA S 0310 EOF *//* MD_Il_0310 */
/* PRQA S 0312 EOF *//* MD_Il_0312 */
/* PRQA S 0635 EOF *//* MD_Il_0635 */
/* PRQA S 0781 EOF *//* MD_Il_0781 */
/* PRQA S 3410 EOF *//* MD_Il_3410 */
/* PRQA S 1330 EOF *//* MD_Il_1330 */
/* PRQA S 0342 EOF *//* MD_Il_0342 */
/* PRQA S 0857 EOF *//* MD_CBD_1.1 */
/* PRQA S 3109 EOF *//* MD_CBD_14.3 */
/* PRQA S 0883 EOF *//* */


#include "il_inc.h"

/* -----------------------------------------------------------------------------
    &&&~ local variables
 ----------------------------------------------------------------------------- */

#if defined(IL_ENABLE_TX) && defined(IL_ENABLE_TX_CYCLIC_EVENT)
#endif



/* -----------------------------------------------------------------------------
    &&&~ Local function prototypes
 ----------------------------------------------------------------------------- */



#if defined(IL_ENABLE_TX) && defined(IL_ENABLE_TX_TIMEOUT)
V_MEMROM0 V_MEMROM1 vuint8 V_MEMROM2 IlTxTimeoutIndirection[kIlNumberOfTxObjects] = 
{
  kIlNoTxToutIndirection /* ID: 0x00000726, Handle: 0, TSR_message_G [BC] */, 
  kIlNoTxToutIndirection /* ID: 0x0000077b, Handle: 1, Next_lane_Right_P [FC] */, 
  kIlNoTxToutIndirection /* ID: 0x0000077a, Handle: 2, Next_lane_Right_O [FC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000779, Handle: 3, Next_lane_Left_N [FC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000778, Handle: 4, Next_lane_Left_M [FC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000777, Handle: 5, Next_lane_Right_L [FC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000776, Handle: 6, Next_lane_Right_K [FC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000775, Handle: 7, Next_lane_Left_J [FC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000774, Handle: 8, Next_lane_Left_I [FC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000773, Handle: 9, Next_lane_Right_H [FC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000772, Handle: 10, Next_lane_Right_G [FC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000771, Handle: 11, Next_lane_Left_F [FC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000770, Handle: 12, Next_lane_Left_E [FC] */, 
  kIlNoTxToutIndirection /* ID: 0x0000076f, Handle: 13, Next_lane_Right_D [FC] */, 
  kIlNoTxToutIndirection /* ID: 0x0000076e, Handle: 14, Next_lane_Right_C [FC] */, 
  kIlNoTxToutIndirection /* ID: 0x0000076d, Handle: 15, Next_lane_Left_B [FC] */, 
  kIlNoTxToutIndirection /* ID: 0x0000076c, Handle: 16, Next_lane_Left_A [FC] */, 
  kIlNoTxToutIndirection /* ID: 0x0000076b, Handle: 17, Numebr_of_next_lane [FC] */, 
  kIlNoTxToutIndirection /* ID: 0x0000076a, Handle: 18, Reference_points [FC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000769, Handle: 19, LKA_right_lane_B [FC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000768, Handle: 20, LKA_right_lane_A [FC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000767, Handle: 21, LKA_left_lane_B [FC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000766, Handle: 22, LKA_left_lane_A [FC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000760, Handle: 23, Car_Info [FC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000750, Handle: 24, Obstacle_Data_X [FC] */, 
  kIlNoTxToutIndirection /* ID: 0x0000074f, Handle: 25, Obstacle_Data_W [FC] */, 
  kIlNoTxToutIndirection /* ID: 0x0000074e, Handle: 26, Obstacle_Data_V [FC] */, 
  kIlNoTxToutIndirection /* ID: 0x0000074d, Handle: 27, Obstacle_Data_U [FC] */, 
  kIlNoTxToutIndirection /* ID: 0x0000074c, Handle: 28, Obstacle_Data_T [FC] */, 
  kIlNoTxToutIndirection /* ID: 0x0000074b, Handle: 29, Obstacle_Data_S [FC] */, 
  kIlNoTxToutIndirection /* ID: 0x0000074a, Handle: 30, Obstacle_Data_R [FC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000749, Handle: 31, Obstacle_Data_Q [FC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000748, Handle: 32, Obstacle_Data_P [FC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000747, Handle: 33, Obstacle_Data_O [FC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000746, Handle: 34, Obstacle_Data_N [FC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000745, Handle: 35, Obstacle_Data_M [FC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000744, Handle: 36, Obstacle_Data_L [FC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000743, Handle: 37, Obstacle_Data_K [FC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000742, Handle: 38, Obstacle_Data_J [FC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000741, Handle: 39, Obstacle_Data_I [FC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000740, Handle: 40, Obstacle_Data_H [FC] */, 
  kIlNoTxToutIndirection /* ID: 0x0000073f, Handle: 41, Obstacle_Data_G [FC] */, 
  kIlNoTxToutIndirection /* ID: 0x0000073e, Handle: 42, Obstacle_Data_F [FC] */, 
  kIlNoTxToutIndirection /* ID: 0x0000073d, Handle: 43, Obstacle_Data_E [FC] */, 
  kIlNoTxToutIndirection /* ID: 0x0000073c, Handle: 44, Obstacle_Data_D [FC] */, 
  kIlNoTxToutIndirection /* ID: 0x0000073b, Handle: 45, Obstacle_Data_C [FC] */, 
  kIlNoTxToutIndirection /* ID: 0x0000073a, Handle: 46, Obstacle_Data_B [FC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000739, Handle: 47, Obstacle_Data_A [FC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000738, Handle: 48, Obstacle_Status [FC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000737, Handle: 49, Lane [FC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000729, Handle: 50, AHBC_Gradual [FC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000728, Handle: 51, AHBC_high_low_beam [FC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000727, Handle: 52, Sign_Type [FC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000725, Handle: 53, TSR_message_F [FC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000724, Handle: 54, TSR_message_E [FC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000723, Handle: 55, TSR_message_D [FC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000722, Handle: 56, TSR_message_C [FC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000721, Handle: 57, TSR_message_B [FC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000720, Handle: 58, TSR_message_A [FC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000700, Handle: 59, C2_Display_and_warning [FC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000669, Handle: 60, Detils_Lane [FC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000650, Handle: 61, Fixed_FOE [FC] */
};
#endif


#if defined(IL_ENABLE_TX) && defined(IL_ENABLE_TX_FAST_ON_START)
V_MEMROM0 V_MEMROM1 IltTxCounter V_MEMROM2 IlTxFastOnStartDuration[kIlNumberOfTxObjects] = 
{
  kIlNoFastOnStartDuration /* ID: 0x00000726, Handle: 0, TSR_message_G [BC] */, 
  kIlNoFastOnStartDuration /* ID: 0x0000077b, Handle: 1, Next_lane_Right_P [FC] */, 
  kIlNoFastOnStartDuration /* ID: 0x0000077a, Handle: 2, Next_lane_Right_O [FC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000779, Handle: 3, Next_lane_Left_N [FC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000778, Handle: 4, Next_lane_Left_M [FC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000777, Handle: 5, Next_lane_Right_L [FC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000776, Handle: 6, Next_lane_Right_K [FC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000775, Handle: 7, Next_lane_Left_J [FC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000774, Handle: 8, Next_lane_Left_I [FC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000773, Handle: 9, Next_lane_Right_H [FC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000772, Handle: 10, Next_lane_Right_G [FC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000771, Handle: 11, Next_lane_Left_F [FC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000770, Handle: 12, Next_lane_Left_E [FC] */, 
  kIlNoFastOnStartDuration /* ID: 0x0000076f, Handle: 13, Next_lane_Right_D [FC] */, 
  kIlNoFastOnStartDuration /* ID: 0x0000076e, Handle: 14, Next_lane_Right_C [FC] */, 
  kIlNoFastOnStartDuration /* ID: 0x0000076d, Handle: 15, Next_lane_Left_B [FC] */, 
  kIlNoFastOnStartDuration /* ID: 0x0000076c, Handle: 16, Next_lane_Left_A [FC] */, 
  kIlNoFastOnStartDuration /* ID: 0x0000076b, Handle: 17, Numebr_of_next_lane [FC] */, 
  kIlNoFastOnStartDuration /* ID: 0x0000076a, Handle: 18, Reference_points [FC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000769, Handle: 19, LKA_right_lane_B [FC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000768, Handle: 20, LKA_right_lane_A [FC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000767, Handle: 21, LKA_left_lane_B [FC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000766, Handle: 22, LKA_left_lane_A [FC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000760, Handle: 23, Car_Info [FC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000750, Handle: 24, Obstacle_Data_X [FC] */, 
  kIlNoFastOnStartDuration /* ID: 0x0000074f, Handle: 25, Obstacle_Data_W [FC] */, 
  kIlNoFastOnStartDuration /* ID: 0x0000074e, Handle: 26, Obstacle_Data_V [FC] */, 
  kIlNoFastOnStartDuration /* ID: 0x0000074d, Handle: 27, Obstacle_Data_U [FC] */, 
  kIlNoFastOnStartDuration /* ID: 0x0000074c, Handle: 28, Obstacle_Data_T [FC] */, 
  kIlNoFastOnStartDuration /* ID: 0x0000074b, Handle: 29, Obstacle_Data_S [FC] */, 
  kIlNoFastOnStartDuration /* ID: 0x0000074a, Handle: 30, Obstacle_Data_R [FC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000749, Handle: 31, Obstacle_Data_Q [FC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000748, Handle: 32, Obstacle_Data_P [FC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000747, Handle: 33, Obstacle_Data_O [FC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000746, Handle: 34, Obstacle_Data_N [FC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000745, Handle: 35, Obstacle_Data_M [FC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000744, Handle: 36, Obstacle_Data_L [FC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000743, Handle: 37, Obstacle_Data_K [FC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000742, Handle: 38, Obstacle_Data_J [FC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000741, Handle: 39, Obstacle_Data_I [FC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000740, Handle: 40, Obstacle_Data_H [FC] */, 
  kIlNoFastOnStartDuration /* ID: 0x0000073f, Handle: 41, Obstacle_Data_G [FC] */, 
  kIlNoFastOnStartDuration /* ID: 0x0000073e, Handle: 42, Obstacle_Data_F [FC] */, 
  kIlNoFastOnStartDuration /* ID: 0x0000073d, Handle: 43, Obstacle_Data_E [FC] */, 
  kIlNoFastOnStartDuration /* ID: 0x0000073c, Handle: 44, Obstacle_Data_D [FC] */, 
  kIlNoFastOnStartDuration /* ID: 0x0000073b, Handle: 45, Obstacle_Data_C [FC] */, 
  kIlNoFastOnStartDuration /* ID: 0x0000073a, Handle: 46, Obstacle_Data_B [FC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000739, Handle: 47, Obstacle_Data_A [FC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000738, Handle: 48, Obstacle_Status [FC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000737, Handle: 49, Lane [FC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000729, Handle: 50, AHBC_Gradual [FC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000728, Handle: 51, AHBC_high_low_beam [FC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000727, Handle: 52, Sign_Type [FC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000725, Handle: 53, TSR_message_F [FC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000724, Handle: 54, TSR_message_E [FC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000723, Handle: 55, TSR_message_D [FC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000722, Handle: 56, TSR_message_C [FC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000721, Handle: 57, TSR_message_B [FC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000720, Handle: 58, TSR_message_A [FC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000700, Handle: 59, C2_Display_and_warning [FC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000669, Handle: 60, Detils_Lane [FC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000650, Handle: 61, Fixed_FOE [FC] */
};
#endif


#if defined(IL_ENABLE_TX) && defined(IL_ENABLE_TX_FAST_ON_START) && defined(IL_ENABLE_TX_MODE_SIGNALS)
V_MEMROM0 V_MEMROM1 IltTxCounter V_MEMROM2 IlTxFastOnStartMuxDelay[kIlNumberOfTxObjects] = 
{
  0 /* ID: 0x00000726, Handle: 0, TSR_message_G [BC] */, 
  0 /* ID: 0x0000077b, Handle: 1, Next_lane_Right_P [FC] */, 
  0 /* ID: 0x0000077a, Handle: 2, Next_lane_Right_O [FC] */, 
  0 /* ID: 0x00000779, Handle: 3, Next_lane_Left_N [FC] */, 
  0 /* ID: 0x00000778, Handle: 4, Next_lane_Left_M [FC] */, 
  0 /* ID: 0x00000777, Handle: 5, Next_lane_Right_L [FC] */, 
  0 /* ID: 0x00000776, Handle: 6, Next_lane_Right_K [FC] */, 
  0 /* ID: 0x00000775, Handle: 7, Next_lane_Left_J [FC] */, 
  0 /* ID: 0x00000774, Handle: 8, Next_lane_Left_I [FC] */, 
  0 /* ID: 0x00000773, Handle: 9, Next_lane_Right_H [FC] */, 
  0 /* ID: 0x00000772, Handle: 10, Next_lane_Right_G [FC] */, 
  0 /* ID: 0x00000771, Handle: 11, Next_lane_Left_F [FC] */, 
  0 /* ID: 0x00000770, Handle: 12, Next_lane_Left_E [FC] */, 
  0 /* ID: 0x0000076f, Handle: 13, Next_lane_Right_D [FC] */, 
  0 /* ID: 0x0000076e, Handle: 14, Next_lane_Right_C [FC] */, 
  0 /* ID: 0x0000076d, Handle: 15, Next_lane_Left_B [FC] */, 
  0 /* ID: 0x0000076c, Handle: 16, Next_lane_Left_A [FC] */, 
  0 /* ID: 0x0000076b, Handle: 17, Numebr_of_next_lane [FC] */, 
  0 /* ID: 0x0000076a, Handle: 18, Reference_points [FC] */, 
  0 /* ID: 0x00000769, Handle: 19, LKA_right_lane_B [FC] */, 
  0 /* ID: 0x00000768, Handle: 20, LKA_right_lane_A [FC] */, 
  0 /* ID: 0x00000767, Handle: 21, LKA_left_lane_B [FC] */, 
  0 /* ID: 0x00000766, Handle: 22, LKA_left_lane_A [FC] */, 
  0 /* ID: 0x00000760, Handle: 23, Car_Info [FC] */, 
  0 /* ID: 0x00000750, Handle: 24, Obstacle_Data_X [FC] */, 
  0 /* ID: 0x0000074f, Handle: 25, Obstacle_Data_W [FC] */, 
  0 /* ID: 0x0000074e, Handle: 26, Obstacle_Data_V [FC] */, 
  0 /* ID: 0x0000074d, Handle: 27, Obstacle_Data_U [FC] */, 
  0 /* ID: 0x0000074c, Handle: 28, Obstacle_Data_T [FC] */, 
  0 /* ID: 0x0000074b, Handle: 29, Obstacle_Data_S [FC] */, 
  0 /* ID: 0x0000074a, Handle: 30, Obstacle_Data_R [FC] */, 
  0 /* ID: 0x00000749, Handle: 31, Obstacle_Data_Q [FC] */, 
  0 /* ID: 0x00000748, Handle: 32, Obstacle_Data_P [FC] */, 
  0 /* ID: 0x00000747, Handle: 33, Obstacle_Data_O [FC] */, 
  0 /* ID: 0x00000746, Handle: 34, Obstacle_Data_N [FC] */, 
  0 /* ID: 0x00000745, Handle: 35, Obstacle_Data_M [FC] */, 
  0 /* ID: 0x00000744, Handle: 36, Obstacle_Data_L [FC] */, 
  0 /* ID: 0x00000743, Handle: 37, Obstacle_Data_K [FC] */, 
  0 /* ID: 0x00000742, Handle: 38, Obstacle_Data_J [FC] */, 
  0 /* ID: 0x00000741, Handle: 39, Obstacle_Data_I [FC] */, 
  0 /* ID: 0x00000740, Handle: 40, Obstacle_Data_H [FC] */, 
  0 /* ID: 0x0000073f, Handle: 41, Obstacle_Data_G [FC] */, 
  0 /* ID: 0x0000073e, Handle: 42, Obstacle_Data_F [FC] */, 
  0 /* ID: 0x0000073d, Handle: 43, Obstacle_Data_E [FC] */, 
  0 /* ID: 0x0000073c, Handle: 44, Obstacle_Data_D [FC] */, 
  0 /* ID: 0x0000073b, Handle: 45, Obstacle_Data_C [FC] */, 
  0 /* ID: 0x0000073a, Handle: 46, Obstacle_Data_B [FC] */, 
  0 /* ID: 0x00000739, Handle: 47, Obstacle_Data_A [FC] */, 
  0 /* ID: 0x00000738, Handle: 48, Obstacle_Status [FC] */, 
  0 /* ID: 0x00000737, Handle: 49, Lane [FC] */, 
  0 /* ID: 0x00000729, Handle: 50, AHBC_Gradual [FC] */, 
  0 /* ID: 0x00000728, Handle: 51, AHBC_high_low_beam [FC] */, 
  0 /* ID: 0x00000727, Handle: 52, Sign_Type [FC] */, 
  0 /* ID: 0x00000725, Handle: 53, TSR_message_F [FC] */, 
  0 /* ID: 0x00000724, Handle: 54, TSR_message_E [FC] */, 
  0 /* ID: 0x00000723, Handle: 55, TSR_message_D [FC] */, 
  0 /* ID: 0x00000722, Handle: 56, TSR_message_C [FC] */, 
  0 /* ID: 0x00000721, Handle: 57, TSR_message_B [FC] */, 
  0 /* ID: 0x00000720, Handle: 58, TSR_message_A [FC] */, 
  0 /* ID: 0x00000700, Handle: 59, C2_Display_and_warning [FC] */, 
  0 /* ID: 0x00000669, Handle: 60, Detils_Lane [FC] */, 
  0 /* ID: 0x00000650, Handle: 61, Fixed_FOE [FC] */
};
#endif


#if defined(IL_ENABLE_TX)
V_MEMROM0 V_MEMROM1 IltTxCounter V_MEMROM2 IlTxStartCycles[kIlNumberOfTxObjects] = 
{
  kIlNoCycleTime /* ID: 0x00000726, Handle: 0, TSR_message_G [BC] */, 
  kIlNoCycleTime /* ID: 0x0000077b, Handle: 1, Next_lane_Right_P [FC] */, 
  kIlNoCycleTime /* ID: 0x0000077a, Handle: 2, Next_lane_Right_O [FC] */, 
  kIlNoCycleTime /* ID: 0x00000779, Handle: 3, Next_lane_Left_N [FC] */, 
  kIlNoCycleTime /* ID: 0x00000778, Handle: 4, Next_lane_Left_M [FC] */, 
  kIlNoCycleTime /* ID: 0x00000777, Handle: 5, Next_lane_Right_L [FC] */, 
  kIlNoCycleTime /* ID: 0x00000776, Handle: 6, Next_lane_Right_K [FC] */, 
  kIlNoCycleTime /* ID: 0x00000775, Handle: 7, Next_lane_Left_J [FC] */, 
  kIlNoCycleTime /* ID: 0x00000774, Handle: 8, Next_lane_Left_I [FC] */, 
  kIlNoCycleTime /* ID: 0x00000773, Handle: 9, Next_lane_Right_H [FC] */, 
  kIlNoCycleTime /* ID: 0x00000772, Handle: 10, Next_lane_Right_G [FC] */, 
  kIlNoCycleTime /* ID: 0x00000771, Handle: 11, Next_lane_Left_F [FC] */, 
  kIlNoCycleTime /* ID: 0x00000770, Handle: 12, Next_lane_Left_E [FC] */, 
  kIlNoCycleTime /* ID: 0x0000076f, Handle: 13, Next_lane_Right_D [FC] */, 
  kIlNoCycleTime /* ID: 0x0000076e, Handle: 14, Next_lane_Right_C [FC] */, 
  kIlNoCycleTime /* ID: 0x0000076d, Handle: 15, Next_lane_Left_B [FC] */, 
  kIlNoCycleTime /* ID: 0x0000076c, Handle: 16, Next_lane_Left_A [FC] */, 
  kIlNoCycleTime /* ID: 0x0000076b, Handle: 17, Numebr_of_next_lane [FC] */, 
  kIlNoCycleTime /* ID: 0x0000076a, Handle: 18, Reference_points [FC] */, 
  kIlNoCycleTime /* ID: 0x00000769, Handle: 19, LKA_right_lane_B [FC] */, 
  kIlNoCycleTime /* ID: 0x00000768, Handle: 20, LKA_right_lane_A [FC] */, 
  kIlNoCycleTime /* ID: 0x00000767, Handle: 21, LKA_left_lane_B [FC] */, 
  kIlNoCycleTime /* ID: 0x00000766, Handle: 22, LKA_left_lane_A [FC] */, 
  kIlNoCycleTime /* ID: 0x00000760, Handle: 23, Car_Info [FC] */, 
  kIlNoCycleTime /* ID: 0x00000750, Handle: 24, Obstacle_Data_X [FC] */, 
  kIlNoCycleTime /* ID: 0x0000074f, Handle: 25, Obstacle_Data_W [FC] */, 
  kIlNoCycleTime /* ID: 0x0000074e, Handle: 26, Obstacle_Data_V [FC] */, 
  kIlNoCycleTime /* ID: 0x0000074d, Handle: 27, Obstacle_Data_U [FC] */, 
  kIlNoCycleTime /* ID: 0x0000074c, Handle: 28, Obstacle_Data_T [FC] */, 
  kIlNoCycleTime /* ID: 0x0000074b, Handle: 29, Obstacle_Data_S [FC] */, 
  kIlNoCycleTime /* ID: 0x0000074a, Handle: 30, Obstacle_Data_R [FC] */, 
  kIlNoCycleTime /* ID: 0x00000749, Handle: 31, Obstacle_Data_Q [FC] */, 
  kIlNoCycleTime /* ID: 0x00000748, Handle: 32, Obstacle_Data_P [FC] */, 
  kIlNoCycleTime /* ID: 0x00000747, Handle: 33, Obstacle_Data_O [FC] */, 
  kIlNoCycleTime /* ID: 0x00000746, Handle: 34, Obstacle_Data_N [FC] */, 
  kIlNoCycleTime /* ID: 0x00000745, Handle: 35, Obstacle_Data_M [FC] */, 
  kIlNoCycleTime /* ID: 0x00000744, Handle: 36, Obstacle_Data_L [FC] */, 
  kIlNoCycleTime /* ID: 0x00000743, Handle: 37, Obstacle_Data_K [FC] */, 
  kIlNoCycleTime /* ID: 0x00000742, Handle: 38, Obstacle_Data_J [FC] */, 
  kIlNoCycleTime /* ID: 0x00000741, Handle: 39, Obstacle_Data_I [FC] */, 
  kIlNoCycleTime /* ID: 0x00000740, Handle: 40, Obstacle_Data_H [FC] */, 
  kIlNoCycleTime /* ID: 0x0000073f, Handle: 41, Obstacle_Data_G [FC] */, 
  kIlNoCycleTime /* ID: 0x0000073e, Handle: 42, Obstacle_Data_F [FC] */, 
  kIlNoCycleTime /* ID: 0x0000073d, Handle: 43, Obstacle_Data_E [FC] */, 
  kIlNoCycleTime /* ID: 0x0000073c, Handle: 44, Obstacle_Data_D [FC] */, 
  kIlNoCycleTime /* ID: 0x0000073b, Handle: 45, Obstacle_Data_C [FC] */, 
  kIlNoCycleTime /* ID: 0x0000073a, Handle: 46, Obstacle_Data_B [FC] */, 
  kIlNoCycleTime /* ID: 0x00000739, Handle: 47, Obstacle_Data_A [FC] */, 
  kIlNoCycleTime /* ID: 0x00000738, Handle: 48, Obstacle_Status [FC] */, 
  kIlNoCycleTime /* ID: 0x00000737, Handle: 49, Lane [FC] */, 
  kIlNoCycleTime /* ID: 0x00000729, Handle: 50, AHBC_Gradual [FC] */, 
  kIlNoCycleTime /* ID: 0x00000728, Handle: 51, AHBC_high_low_beam [FC] */, 
  kIlNoCycleTime /* ID: 0x00000727, Handle: 52, Sign_Type [FC] */, 
  kIlNoCycleTime /* ID: 0x00000725, Handle: 53, TSR_message_F [FC] */, 
  kIlNoCycleTime /* ID: 0x00000724, Handle: 54, TSR_message_E [FC] */, 
  kIlNoCycleTime /* ID: 0x00000723, Handle: 55, TSR_message_D [FC] */, 
  kIlNoCycleTime /* ID: 0x00000722, Handle: 56, TSR_message_C [FC] */, 
  kIlNoCycleTime /* ID: 0x00000721, Handle: 57, TSR_message_B [FC] */, 
  kIlNoCycleTime /* ID: 0x00000720, Handle: 58, TSR_message_A [FC] */, 
  kIlNoCycleTime /* ID: 0x00000700, Handle: 59, C2_Display_and_warning [FC] */, 
  kIlNoCycleTime /* ID: 0x00000669, Handle: 60, Detils_Lane [FC] */, 
  kIlNoCycleTime /* ID: 0x00000650, Handle: 61, Fixed_FOE [FC] */
};
#endif


#if defined(IL_ENABLE_TX)
V_MEMROM0 V_MEMROM1 IltTxUpdateCounter V_MEMROM2 IlTxUpdateCycles[kIlNumberOfTxObjects] = 
{
  kIlNoDelayTime /* ID: 0x00000726, Handle: 0, TSR_message_G [BC] */, 
  kIlNoDelayTime /* ID: 0x0000077b, Handle: 1, Next_lane_Right_P [FC] */, 
  kIlNoDelayTime /* ID: 0x0000077a, Handle: 2, Next_lane_Right_O [FC] */, 
  kIlNoDelayTime /* ID: 0x00000779, Handle: 3, Next_lane_Left_N [FC] */, 
  kIlNoDelayTime /* ID: 0x00000778, Handle: 4, Next_lane_Left_M [FC] */, 
  kIlNoDelayTime /* ID: 0x00000777, Handle: 5, Next_lane_Right_L [FC] */, 
  kIlNoDelayTime /* ID: 0x00000776, Handle: 6, Next_lane_Right_K [FC] */, 
  kIlNoDelayTime /* ID: 0x00000775, Handle: 7, Next_lane_Left_J [FC] */, 
  kIlNoDelayTime /* ID: 0x00000774, Handle: 8, Next_lane_Left_I [FC] */, 
  kIlNoDelayTime /* ID: 0x00000773, Handle: 9, Next_lane_Right_H [FC] */, 
  kIlNoDelayTime /* ID: 0x00000772, Handle: 10, Next_lane_Right_G [FC] */, 
  kIlNoDelayTime /* ID: 0x00000771, Handle: 11, Next_lane_Left_F [FC] */, 
  kIlNoDelayTime /* ID: 0x00000770, Handle: 12, Next_lane_Left_E [FC] */, 
  kIlNoDelayTime /* ID: 0x0000076f, Handle: 13, Next_lane_Right_D [FC] */, 
  kIlNoDelayTime /* ID: 0x0000076e, Handle: 14, Next_lane_Right_C [FC] */, 
  kIlNoDelayTime /* ID: 0x0000076d, Handle: 15, Next_lane_Left_B [FC] */, 
  kIlNoDelayTime /* ID: 0x0000076c, Handle: 16, Next_lane_Left_A [FC] */, 
  kIlNoDelayTime /* ID: 0x0000076b, Handle: 17, Numebr_of_next_lane [FC] */, 
  kIlNoDelayTime /* ID: 0x0000076a, Handle: 18, Reference_points [FC] */, 
  kIlNoDelayTime /* ID: 0x00000769, Handle: 19, LKA_right_lane_B [FC] */, 
  kIlNoDelayTime /* ID: 0x00000768, Handle: 20, LKA_right_lane_A [FC] */, 
  kIlNoDelayTime /* ID: 0x00000767, Handle: 21, LKA_left_lane_B [FC] */, 
  kIlNoDelayTime /* ID: 0x00000766, Handle: 22, LKA_left_lane_A [FC] */, 
  kIlNoDelayTime /* ID: 0x00000760, Handle: 23, Car_Info [FC] */, 
  kIlNoDelayTime /* ID: 0x00000750, Handle: 24, Obstacle_Data_X [FC] */, 
  kIlNoDelayTime /* ID: 0x0000074f, Handle: 25, Obstacle_Data_W [FC] */, 
  kIlNoDelayTime /* ID: 0x0000074e, Handle: 26, Obstacle_Data_V [FC] */, 
  kIlNoDelayTime /* ID: 0x0000074d, Handle: 27, Obstacle_Data_U [FC] */, 
  kIlNoDelayTime /* ID: 0x0000074c, Handle: 28, Obstacle_Data_T [FC] */, 
  kIlNoDelayTime /* ID: 0x0000074b, Handle: 29, Obstacle_Data_S [FC] */, 
  kIlNoDelayTime /* ID: 0x0000074a, Handle: 30, Obstacle_Data_R [FC] */, 
  kIlNoDelayTime /* ID: 0x00000749, Handle: 31, Obstacle_Data_Q [FC] */, 
  kIlNoDelayTime /* ID: 0x00000748, Handle: 32, Obstacle_Data_P [FC] */, 
  kIlNoDelayTime /* ID: 0x00000747, Handle: 33, Obstacle_Data_O [FC] */, 
  kIlNoDelayTime /* ID: 0x00000746, Handle: 34, Obstacle_Data_N [FC] */, 
  kIlNoDelayTime /* ID: 0x00000745, Handle: 35, Obstacle_Data_M [FC] */, 
  kIlNoDelayTime /* ID: 0x00000744, Handle: 36, Obstacle_Data_L [FC] */, 
  kIlNoDelayTime /* ID: 0x00000743, Handle: 37, Obstacle_Data_K [FC] */, 
  kIlNoDelayTime /* ID: 0x00000742, Handle: 38, Obstacle_Data_J [FC] */, 
  kIlNoDelayTime /* ID: 0x00000741, Handle: 39, Obstacle_Data_I [FC] */, 
  kIlNoDelayTime /* ID: 0x00000740, Handle: 40, Obstacle_Data_H [FC] */, 
  kIlNoDelayTime /* ID: 0x0000073f, Handle: 41, Obstacle_Data_G [FC] */, 
  kIlNoDelayTime /* ID: 0x0000073e, Handle: 42, Obstacle_Data_F [FC] */, 
  kIlNoDelayTime /* ID: 0x0000073d, Handle: 43, Obstacle_Data_E [FC] */, 
  kIlNoDelayTime /* ID: 0x0000073c, Handle: 44, Obstacle_Data_D [FC] */, 
  kIlNoDelayTime /* ID: 0x0000073b, Handle: 45, Obstacle_Data_C [FC] */, 
  kIlNoDelayTime /* ID: 0x0000073a, Handle: 46, Obstacle_Data_B [FC] */, 
  kIlNoDelayTime /* ID: 0x00000739, Handle: 47, Obstacle_Data_A [FC] */, 
  kIlNoDelayTime /* ID: 0x00000738, Handle: 48, Obstacle_Status [FC] */, 
  kIlNoDelayTime /* ID: 0x00000737, Handle: 49, Lane [FC] */, 
  kIlNoDelayTime /* ID: 0x00000729, Handle: 50, AHBC_Gradual [FC] */, 
  kIlNoDelayTime /* ID: 0x00000728, Handle: 51, AHBC_high_low_beam [FC] */, 
  kIlNoDelayTime /* ID: 0x00000727, Handle: 52, Sign_Type [FC] */, 
  kIlNoDelayTime /* ID: 0x00000725, Handle: 53, TSR_message_F [FC] */, 
  kIlNoDelayTime /* ID: 0x00000724, Handle: 54, TSR_message_E [FC] */, 
  kIlNoDelayTime /* ID: 0x00000723, Handle: 55, TSR_message_D [FC] */, 
  kIlNoDelayTime /* ID: 0x00000722, Handle: 56, TSR_message_C [FC] */, 
  kIlNoDelayTime /* ID: 0x00000721, Handle: 57, TSR_message_B [FC] */, 
  kIlNoDelayTime /* ID: 0x00000720, Handle: 58, TSR_message_A [FC] */, 
  kIlNoDelayTime /* ID: 0x00000700, Handle: 59, C2_Display_and_warning [FC] */, 
  kIlNoDelayTime /* ID: 0x00000669, Handle: 60, Detils_Lane [FC] */, 
  kIlNoDelayTime /* ID: 0x00000650, Handle: 61, Fixed_FOE [FC] */
};
#endif


#if defined(IL_ENABLE_TX)
V_MEMROM0 V_MEMROM1 IltTxCounter V_MEMROM2 IlTxCyclicCycles[kIlNumberOfTxObjects] = 
{
  2 /* ID: 0x00000726, Handle: 0, TSR_message_G [BC] */, 
  2 /* ID: 0x0000077b, Handle: 1, Next_lane_Right_P [FC] */, 
  2 /* ID: 0x0000077a, Handle: 2, Next_lane_Right_O [FC] */, 
  2 /* ID: 0x00000779, Handle: 3, Next_lane_Left_N [FC] */, 
  2 /* ID: 0x00000778, Handle: 4, Next_lane_Left_M [FC] */, 
  2 /* ID: 0x00000777, Handle: 5, Next_lane_Right_L [FC] */, 
  2 /* ID: 0x00000776, Handle: 6, Next_lane_Right_K [FC] */, 
  2 /* ID: 0x00000775, Handle: 7, Next_lane_Left_J [FC] */, 
  2 /* ID: 0x00000774, Handle: 8, Next_lane_Left_I [FC] */, 
  2 /* ID: 0x00000773, Handle: 9, Next_lane_Right_H [FC] */, 
  2 /* ID: 0x00000772, Handle: 10, Next_lane_Right_G [FC] */, 
  2 /* ID: 0x00000771, Handle: 11, Next_lane_Left_F [FC] */, 
  2 /* ID: 0x00000770, Handle: 12, Next_lane_Left_E [FC] */, 
  2 /* ID: 0x0000076f, Handle: 13, Next_lane_Right_D [FC] */, 
  2 /* ID: 0x0000076e, Handle: 14, Next_lane_Right_C [FC] */, 
  2 /* ID: 0x0000076d, Handle: 15, Next_lane_Left_B [FC] */, 
  2 /* ID: 0x0000076c, Handle: 16, Next_lane_Left_A [FC] */, 
  2 /* ID: 0x0000076b, Handle: 17, Numebr_of_next_lane [FC] */, 
  2 /* ID: 0x0000076a, Handle: 18, Reference_points [FC] */, 
  2 /* ID: 0x00000769, Handle: 19, LKA_right_lane_B [FC] */, 
  2 /* ID: 0x00000768, Handle: 20, LKA_right_lane_A [FC] */, 
  2 /* ID: 0x00000767, Handle: 21, LKA_left_lane_B [FC] */, 
  2 /* ID: 0x00000766, Handle: 22, LKA_left_lane_A [FC] */, 
  2 /* ID: 0x00000760, Handle: 23, Car_Info [FC] */, 
  2 /* ID: 0x00000750, Handle: 24, Obstacle_Data_X [FC] */, 
  2 /* ID: 0x0000074f, Handle: 25, Obstacle_Data_W [FC] */, 
  2 /* ID: 0x0000074e, Handle: 26, Obstacle_Data_V [FC] */, 
  2 /* ID: 0x0000074d, Handle: 27, Obstacle_Data_U [FC] */, 
  2 /* ID: 0x0000074c, Handle: 28, Obstacle_Data_T [FC] */, 
  2 /* ID: 0x0000074b, Handle: 29, Obstacle_Data_S [FC] */, 
  2 /* ID: 0x0000074a, Handle: 30, Obstacle_Data_R [FC] */, 
  2 /* ID: 0x00000749, Handle: 31, Obstacle_Data_Q [FC] */, 
  2 /* ID: 0x00000748, Handle: 32, Obstacle_Data_P [FC] */, 
  2 /* ID: 0x00000747, Handle: 33, Obstacle_Data_O [FC] */, 
  2 /* ID: 0x00000746, Handle: 34, Obstacle_Data_N [FC] */, 
  2 /* ID: 0x00000745, Handle: 35, Obstacle_Data_M [FC] */, 
  2 /* ID: 0x00000744, Handle: 36, Obstacle_Data_L [FC] */, 
  2 /* ID: 0x00000743, Handle: 37, Obstacle_Data_K [FC] */, 
  2 /* ID: 0x00000742, Handle: 38, Obstacle_Data_J [FC] */, 
  2 /* ID: 0x00000741, Handle: 39, Obstacle_Data_I [FC] */, 
  2 /* ID: 0x00000740, Handle: 40, Obstacle_Data_H [FC] */, 
  2 /* ID: 0x0000073f, Handle: 41, Obstacle_Data_G [FC] */, 
  2 /* ID: 0x0000073e, Handle: 42, Obstacle_Data_F [FC] */, 
  2 /* ID: 0x0000073d, Handle: 43, Obstacle_Data_E [FC] */, 
  2 /* ID: 0x0000073c, Handle: 44, Obstacle_Data_D [FC] */, 
  2 /* ID: 0x0000073b, Handle: 45, Obstacle_Data_C [FC] */, 
  2 /* ID: 0x0000073a, Handle: 46, Obstacle_Data_B [FC] */, 
  2 /* ID: 0x00000739, Handle: 47, Obstacle_Data_A [FC] */, 
  2 /* ID: 0x00000738, Handle: 48, Obstacle_Status [FC] */, 
  2 /* ID: 0x00000737, Handle: 49, Lane [FC] */, 
  2 /* ID: 0x00000729, Handle: 50, AHBC_Gradual [FC] */, 
  2 /* ID: 0x00000728, Handle: 51, AHBC_high_low_beam [FC] */, 
  2 /* ID: 0x00000727, Handle: 52, Sign_Type [FC] */, 
  2 /* ID: 0x00000725, Handle: 53, TSR_message_F [FC] */, 
  2 /* ID: 0x00000724, Handle: 54, TSR_message_E [FC] */, 
  2 /* ID: 0x00000723, Handle: 55, TSR_message_D [FC] */, 
  2 /* ID: 0x00000722, Handle: 56, TSR_message_C [FC] */, 
  2 /* ID: 0x00000721, Handle: 57, TSR_message_B [FC] */, 
  2 /* ID: 0x00000720, Handle: 58, TSR_message_A [FC] */, 
  2 /* ID: 0x00000700, Handle: 59, C2_Display_and_warning [FC] */, 
  2 /* ID: 0x00000669, Handle: 60, Detils_Lane [FC] */, 
  2 /* ID: 0x00000650, Handle: 61, Fixed_FOE [FC] */
};
#endif


#if defined(IL_ENABLE_TX) && (defined(IL_ENABLE_TX_CYCLIC_EVENT) || defined(IL_ENABLE_TX_SECURE_EVENT) || defined(IL_ENABLE_TX_FAST_ON_START))
V_MEMROM0 V_MEMROM1 IltTxCounter V_MEMROM2 IlTxEventCycles[kIlNumberOfTxObjects] = 
{
  kIlNoCycleTimeFast /* ID: 0x00000726, Handle: 0, TSR_message_G [BC] */, 
  kIlNoCycleTimeFast /* ID: 0x0000077b, Handle: 1, Next_lane_Right_P [FC] */, 
  kIlNoCycleTimeFast /* ID: 0x0000077a, Handle: 2, Next_lane_Right_O [FC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000779, Handle: 3, Next_lane_Left_N [FC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000778, Handle: 4, Next_lane_Left_M [FC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000777, Handle: 5, Next_lane_Right_L [FC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000776, Handle: 6, Next_lane_Right_K [FC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000775, Handle: 7, Next_lane_Left_J [FC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000774, Handle: 8, Next_lane_Left_I [FC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000773, Handle: 9, Next_lane_Right_H [FC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000772, Handle: 10, Next_lane_Right_G [FC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000771, Handle: 11, Next_lane_Left_F [FC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000770, Handle: 12, Next_lane_Left_E [FC] */, 
  kIlNoCycleTimeFast /* ID: 0x0000076f, Handle: 13, Next_lane_Right_D [FC] */, 
  kIlNoCycleTimeFast /* ID: 0x0000076e, Handle: 14, Next_lane_Right_C [FC] */, 
  kIlNoCycleTimeFast /* ID: 0x0000076d, Handle: 15, Next_lane_Left_B [FC] */, 
  kIlNoCycleTimeFast /* ID: 0x0000076c, Handle: 16, Next_lane_Left_A [FC] */, 
  kIlNoCycleTimeFast /* ID: 0x0000076b, Handle: 17, Numebr_of_next_lane [FC] */, 
  kIlNoCycleTimeFast /* ID: 0x0000076a, Handle: 18, Reference_points [FC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000769, Handle: 19, LKA_right_lane_B [FC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000768, Handle: 20, LKA_right_lane_A [FC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000767, Handle: 21, LKA_left_lane_B [FC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000766, Handle: 22, LKA_left_lane_A [FC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000760, Handle: 23, Car_Info [FC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000750, Handle: 24, Obstacle_Data_X [FC] */, 
  kIlNoCycleTimeFast /* ID: 0x0000074f, Handle: 25, Obstacle_Data_W [FC] */, 
  kIlNoCycleTimeFast /* ID: 0x0000074e, Handle: 26, Obstacle_Data_V [FC] */, 
  kIlNoCycleTimeFast /* ID: 0x0000074d, Handle: 27, Obstacle_Data_U [FC] */, 
  kIlNoCycleTimeFast /* ID: 0x0000074c, Handle: 28, Obstacle_Data_T [FC] */, 
  kIlNoCycleTimeFast /* ID: 0x0000074b, Handle: 29, Obstacle_Data_S [FC] */, 
  kIlNoCycleTimeFast /* ID: 0x0000074a, Handle: 30, Obstacle_Data_R [FC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000749, Handle: 31, Obstacle_Data_Q [FC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000748, Handle: 32, Obstacle_Data_P [FC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000747, Handle: 33, Obstacle_Data_O [FC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000746, Handle: 34, Obstacle_Data_N [FC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000745, Handle: 35, Obstacle_Data_M [FC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000744, Handle: 36, Obstacle_Data_L [FC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000743, Handle: 37, Obstacle_Data_K [FC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000742, Handle: 38, Obstacle_Data_J [FC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000741, Handle: 39, Obstacle_Data_I [FC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000740, Handle: 40, Obstacle_Data_H [FC] */, 
  kIlNoCycleTimeFast /* ID: 0x0000073f, Handle: 41, Obstacle_Data_G [FC] */, 
  kIlNoCycleTimeFast /* ID: 0x0000073e, Handle: 42, Obstacle_Data_F [FC] */, 
  kIlNoCycleTimeFast /* ID: 0x0000073d, Handle: 43, Obstacle_Data_E [FC] */, 
  kIlNoCycleTimeFast /* ID: 0x0000073c, Handle: 44, Obstacle_Data_D [FC] */, 
  kIlNoCycleTimeFast /* ID: 0x0000073b, Handle: 45, Obstacle_Data_C [FC] */, 
  kIlNoCycleTimeFast /* ID: 0x0000073a, Handle: 46, Obstacle_Data_B [FC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000739, Handle: 47, Obstacle_Data_A [FC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000738, Handle: 48, Obstacle_Status [FC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000737, Handle: 49, Lane [FC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000729, Handle: 50, AHBC_Gradual [FC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000728, Handle: 51, AHBC_high_low_beam [FC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000727, Handle: 52, Sign_Type [FC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000725, Handle: 53, TSR_message_F [FC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000724, Handle: 54, TSR_message_E [FC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000723, Handle: 55, TSR_message_D [FC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000722, Handle: 56, TSR_message_C [FC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000721, Handle: 57, TSR_message_B [FC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000720, Handle: 58, TSR_message_A [FC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000700, Handle: 59, C2_Display_and_warning [FC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000669, Handle: 60, Detils_Lane [FC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000650, Handle: 61, Fixed_FOE [FC] */
};
#endif


#if defined(IL_ENABLE_TX) && defined(IL_ENABLE_TX_POLLING)
V_MEMROM0 V_MEMROM1 IlConfirmationFct V_MEMROM2 IlTxConfirmationFctPtr[kIlNumberOfTxObjects] = 
{
  V_NULL /* ID: 0x00000726, Handle: 0, TSR_message_G [BC] */, 
  V_NULL /* ID: 0x0000077b, Handle: 1, Next_lane_Right_P [FC] */, 
  V_NULL /* ID: 0x0000077a, Handle: 2, Next_lane_Right_O [FC] */, 
  V_NULL /* ID: 0x00000779, Handle: 3, Next_lane_Left_N [FC] */, 
  V_NULL /* ID: 0x00000778, Handle: 4, Next_lane_Left_M [FC] */, 
  V_NULL /* ID: 0x00000777, Handle: 5, Next_lane_Right_L [FC] */, 
  V_NULL /* ID: 0x00000776, Handle: 6, Next_lane_Right_K [FC] */, 
  V_NULL /* ID: 0x00000775, Handle: 7, Next_lane_Left_J [FC] */, 
  V_NULL /* ID: 0x00000774, Handle: 8, Next_lane_Left_I [FC] */, 
  V_NULL /* ID: 0x00000773, Handle: 9, Next_lane_Right_H [FC] */, 
  V_NULL /* ID: 0x00000772, Handle: 10, Next_lane_Right_G [FC] */, 
  V_NULL /* ID: 0x00000771, Handle: 11, Next_lane_Left_F [FC] */, 
  V_NULL /* ID: 0x00000770, Handle: 12, Next_lane_Left_E [FC] */, 
  V_NULL /* ID: 0x0000076f, Handle: 13, Next_lane_Right_D [FC] */, 
  V_NULL /* ID: 0x0000076e, Handle: 14, Next_lane_Right_C [FC] */, 
  V_NULL /* ID: 0x0000076d, Handle: 15, Next_lane_Left_B [FC] */, 
  V_NULL /* ID: 0x0000076c, Handle: 16, Next_lane_Left_A [FC] */, 
  V_NULL /* ID: 0x0000076b, Handle: 17, Numebr_of_next_lane [FC] */, 
  V_NULL /* ID: 0x0000076a, Handle: 18, Reference_points [FC] */, 
  V_NULL /* ID: 0x00000769, Handle: 19, LKA_right_lane_B [FC] */, 
  V_NULL /* ID: 0x00000768, Handle: 20, LKA_right_lane_A [FC] */, 
  V_NULL /* ID: 0x00000767, Handle: 21, LKA_left_lane_B [FC] */, 
  V_NULL /* ID: 0x00000766, Handle: 22, LKA_left_lane_A [FC] */, 
  V_NULL /* ID: 0x00000760, Handle: 23, Car_Info [FC] */, 
  V_NULL /* ID: 0x00000750, Handle: 24, Obstacle_Data_X [FC] */, 
  V_NULL /* ID: 0x0000074f, Handle: 25, Obstacle_Data_W [FC] */, 
  V_NULL /* ID: 0x0000074e, Handle: 26, Obstacle_Data_V [FC] */, 
  V_NULL /* ID: 0x0000074d, Handle: 27, Obstacle_Data_U [FC] */, 
  V_NULL /* ID: 0x0000074c, Handle: 28, Obstacle_Data_T [FC] */, 
  V_NULL /* ID: 0x0000074b, Handle: 29, Obstacle_Data_S [FC] */, 
  V_NULL /* ID: 0x0000074a, Handle: 30, Obstacle_Data_R [FC] */, 
  V_NULL /* ID: 0x00000749, Handle: 31, Obstacle_Data_Q [FC] */, 
  V_NULL /* ID: 0x00000748, Handle: 32, Obstacle_Data_P [FC] */, 
  V_NULL /* ID: 0x00000747, Handle: 33, Obstacle_Data_O [FC] */, 
  V_NULL /* ID: 0x00000746, Handle: 34, Obstacle_Data_N [FC] */, 
  V_NULL /* ID: 0x00000745, Handle: 35, Obstacle_Data_M [FC] */, 
  V_NULL /* ID: 0x00000744, Handle: 36, Obstacle_Data_L [FC] */, 
  V_NULL /* ID: 0x00000743, Handle: 37, Obstacle_Data_K [FC] */, 
  V_NULL /* ID: 0x00000742, Handle: 38, Obstacle_Data_J [FC] */, 
  V_NULL /* ID: 0x00000741, Handle: 39, Obstacle_Data_I [FC] */, 
  V_NULL /* ID: 0x00000740, Handle: 40, Obstacle_Data_H [FC] */, 
  V_NULL /* ID: 0x0000073f, Handle: 41, Obstacle_Data_G [FC] */, 
  V_NULL /* ID: 0x0000073e, Handle: 42, Obstacle_Data_F [FC] */, 
  V_NULL /* ID: 0x0000073d, Handle: 43, Obstacle_Data_E [FC] */, 
  V_NULL /* ID: 0x0000073c, Handle: 44, Obstacle_Data_D [FC] */, 
  V_NULL /* ID: 0x0000073b, Handle: 45, Obstacle_Data_C [FC] */, 
  V_NULL /* ID: 0x0000073a, Handle: 46, Obstacle_Data_B [FC] */, 
  V_NULL /* ID: 0x00000739, Handle: 47, Obstacle_Data_A [FC] */, 
  V_NULL /* ID: 0x00000738, Handle: 48, Obstacle_Status [FC] */, 
  V_NULL /* ID: 0x00000737, Handle: 49, Lane [FC] */, 
  V_NULL /* ID: 0x00000729, Handle: 50, AHBC_Gradual [FC] */, 
  V_NULL /* ID: 0x00000728, Handle: 51, AHBC_high_low_beam [FC] */, 
  V_NULL /* ID: 0x00000727, Handle: 52, Sign_Type [FC] */, 
  V_NULL /* ID: 0x00000725, Handle: 53, TSR_message_F [FC] */, 
  V_NULL /* ID: 0x00000724, Handle: 54, TSR_message_E [FC] */, 
  V_NULL /* ID: 0x00000723, Handle: 55, TSR_message_D [FC] */, 
  V_NULL /* ID: 0x00000722, Handle: 56, TSR_message_C [FC] */, 
  V_NULL /* ID: 0x00000721, Handle: 57, TSR_message_B [FC] */, 
  V_NULL /* ID: 0x00000720, Handle: 58, TSR_message_A [FC] */, 
  V_NULL /* ID: 0x00000700, Handle: 59, C2_Display_and_warning [FC] */, 
  V_NULL /* ID: 0x00000669, Handle: 60, Detils_Lane [FC] */, 
  V_NULL /* ID: 0x00000650, Handle: 61, Fixed_FOE [FC] */
};
#endif


#if defined(IL_ENABLE_TX) && defined(IL_ENABLE_TX_TIMEOUT) && defined(C_MULTIPLE_RECEIVE_CHANNEL) && defined(IL_ENABLE_TX_VARYING_TIMEOUT) && (kIlNumberOfChannels > 1)
V_MEMROM0 V_MEMROM1 IltTxTimeoutCounter V_MEMROM2 IlTxTimeout[kIlNumberOfChannels] = 
{
  5
};
#endif


#if defined(IL_ENABLE_TX) && defined(IL_ENABLE_TX_SECURE_EVENT) && defined(IL_ENABLE_TX_VARYING_REPETITION) && (kIlNumberOfTxObjects > 1)
V_MEMROM0 V_MEMROM1 IltTxRepetitionCounter V_MEMROM2 IlTxRepetitionCounters[kIlNumberOfTxObjects] = 
{
  0 /* ID: 0x00000726, Handle: 0, TSR_message_G [BC] */, 
  0 /* ID: 0x0000077b, Handle: 1, Next_lane_Right_P [FC] */, 
  0 /* ID: 0x0000077a, Handle: 2, Next_lane_Right_O [FC] */, 
  0 /* ID: 0x00000779, Handle: 3, Next_lane_Left_N [FC] */, 
  0 /* ID: 0x00000778, Handle: 4, Next_lane_Left_M [FC] */, 
  0 /* ID: 0x00000777, Handle: 5, Next_lane_Right_L [FC] */, 
  0 /* ID: 0x00000776, Handle: 6, Next_lane_Right_K [FC] */, 
  0 /* ID: 0x00000775, Handle: 7, Next_lane_Left_J [FC] */, 
  0 /* ID: 0x00000774, Handle: 8, Next_lane_Left_I [FC] */, 
  0 /* ID: 0x00000773, Handle: 9, Next_lane_Right_H [FC] */, 
  0 /* ID: 0x00000772, Handle: 10, Next_lane_Right_G [FC] */, 
  0 /* ID: 0x00000771, Handle: 11, Next_lane_Left_F [FC] */, 
  0 /* ID: 0x00000770, Handle: 12, Next_lane_Left_E [FC] */, 
  0 /* ID: 0x0000076f, Handle: 13, Next_lane_Right_D [FC] */, 
  0 /* ID: 0x0000076e, Handle: 14, Next_lane_Right_C [FC] */, 
  0 /* ID: 0x0000076d, Handle: 15, Next_lane_Left_B [FC] */, 
  0 /* ID: 0x0000076c, Handle: 16, Next_lane_Left_A [FC] */, 
  0 /* ID: 0x0000076b, Handle: 17, Numebr_of_next_lane [FC] */, 
  0 /* ID: 0x0000076a, Handle: 18, Reference_points [FC] */, 
  0 /* ID: 0x00000769, Handle: 19, LKA_right_lane_B [FC] */, 
  0 /* ID: 0x00000768, Handle: 20, LKA_right_lane_A [FC] */, 
  0 /* ID: 0x00000767, Handle: 21, LKA_left_lane_B [FC] */, 
  0 /* ID: 0x00000766, Handle: 22, LKA_left_lane_A [FC] */, 
  0 /* ID: 0x00000760, Handle: 23, Car_Info [FC] */, 
  0 /* ID: 0x00000750, Handle: 24, Obstacle_Data_X [FC] */, 
  0 /* ID: 0x0000074f, Handle: 25, Obstacle_Data_W [FC] */, 
  0 /* ID: 0x0000074e, Handle: 26, Obstacle_Data_V [FC] */, 
  0 /* ID: 0x0000074d, Handle: 27, Obstacle_Data_U [FC] */, 
  0 /* ID: 0x0000074c, Handle: 28, Obstacle_Data_T [FC] */, 
  0 /* ID: 0x0000074b, Handle: 29, Obstacle_Data_S [FC] */, 
  0 /* ID: 0x0000074a, Handle: 30, Obstacle_Data_R [FC] */, 
  0 /* ID: 0x00000749, Handle: 31, Obstacle_Data_Q [FC] */, 
  0 /* ID: 0x00000748, Handle: 32, Obstacle_Data_P [FC] */, 
  0 /* ID: 0x00000747, Handle: 33, Obstacle_Data_O [FC] */, 
  0 /* ID: 0x00000746, Handle: 34, Obstacle_Data_N [FC] */, 
  0 /* ID: 0x00000745, Handle: 35, Obstacle_Data_M [FC] */, 
  0 /* ID: 0x00000744, Handle: 36, Obstacle_Data_L [FC] */, 
  0 /* ID: 0x00000743, Handle: 37, Obstacle_Data_K [FC] */, 
  0 /* ID: 0x00000742, Handle: 38, Obstacle_Data_J [FC] */, 
  0 /* ID: 0x00000741, Handle: 39, Obstacle_Data_I [FC] */, 
  0 /* ID: 0x00000740, Handle: 40, Obstacle_Data_H [FC] */, 
  0 /* ID: 0x0000073f, Handle: 41, Obstacle_Data_G [FC] */, 
  0 /* ID: 0x0000073e, Handle: 42, Obstacle_Data_F [FC] */, 
  0 /* ID: 0x0000073d, Handle: 43, Obstacle_Data_E [FC] */, 
  0 /* ID: 0x0000073c, Handle: 44, Obstacle_Data_D [FC] */, 
  0 /* ID: 0x0000073b, Handle: 45, Obstacle_Data_C [FC] */, 
  0 /* ID: 0x0000073a, Handle: 46, Obstacle_Data_B [FC] */, 
  0 /* ID: 0x00000739, Handle: 47, Obstacle_Data_A [FC] */, 
  0 /* ID: 0x00000738, Handle: 48, Obstacle_Status [FC] */, 
  0 /* ID: 0x00000737, Handle: 49, Lane [FC] */, 
  0 /* ID: 0x00000729, Handle: 50, AHBC_Gradual [FC] */, 
  0 /* ID: 0x00000728, Handle: 51, AHBC_high_low_beam [FC] */, 
  0 /* ID: 0x00000727, Handle: 52, Sign_Type [FC] */, 
  0 /* ID: 0x00000725, Handle: 53, TSR_message_F [FC] */, 
  0 /* ID: 0x00000724, Handle: 54, TSR_message_E [FC] */, 
  0 /* ID: 0x00000723, Handle: 55, TSR_message_D [FC] */, 
  0 /* ID: 0x00000722, Handle: 56, TSR_message_C [FC] */, 
  0 /* ID: 0x00000721, Handle: 57, TSR_message_B [FC] */, 
  0 /* ID: 0x00000720, Handle: 58, TSR_message_A [FC] */, 
  0 /* ID: 0x00000700, Handle: 59, C2_Display_and_warning [FC] */, 
  0 /* ID: 0x00000669, Handle: 60, Detils_Lane [FC] */, 
  0 /* ID: 0x00000650, Handle: 61, Fixed_FOE [FC] */
};
#endif


#if defined(IL_ENABLE_RX) && defined(IL_ENABLE_RX_POLLING)
V_MEMROM0 V_MEMROM1 IlIndicationFct V_MEMROM2 IlCanRxIndicationFctPtr[kIlCanNumberOfRxObjects] = 
{
  V_NULL /* ID: 0x000005e8, Handle: 0, ESR_Status9 [BC] */, 
  V_NULL /* ID: 0x000005e7, Handle: 1, ESR_Status8 [BC] */, 
  V_NULL /* ID: 0x000005e6, Handle: 2, ESR_Status7 [BC] */, 
  V_NULL /* ID: 0x000005e5, Handle: 3, ESR_Status6 [BC] */, 
  V_NULL /* ID: 0x000005e4, Handle: 4, ESR_Status5 [BC] */, 
  V_NULL /* ID: 0x0000053f, Handle: 5, ESR_Track64 [BC] */, 
  V_NULL /* ID: 0x0000053e, Handle: 6, ESR_Track63 [BC] */, 
  V_NULL /* ID: 0x0000053d, Handle: 7, ESR_Track62 [BC] */, 
  V_NULL /* ID: 0x0000053c, Handle: 8, ESR_Track61 [BC] */, 
  V_NULL /* ID: 0x0000053b, Handle: 9, ESR_Track60 [BC] */, 
  V_NULL /* ID: 0x0000053a, Handle: 10, ESR_Track59 [BC] */, 
  V_NULL /* ID: 0x00000539, Handle: 11, ESR_Track58 [BC] */, 
  V_NULL /* ID: 0x00000538, Handle: 12, ESR_Track57 [BC] */, 
  V_NULL /* ID: 0x00000537, Handle: 13, ESR_Track56 [BC] */, 
  V_NULL /* ID: 0x00000536, Handle: 14, ESR_Track55 [BC] */, 
  V_NULL /* ID: 0x00000535, Handle: 15, ESR_Track54 [BC] */, 
  V_NULL /* ID: 0x00000534, Handle: 16, ESR_Track53 [BC] */, 
  V_NULL /* ID: 0x00000533, Handle: 17, ESR_Track52 [BC] */, 
  V_NULL /* ID: 0x00000532, Handle: 18, ESR_Track51 [BC] */, 
  V_NULL /* ID: 0x00000531, Handle: 19, ESR_Track50 [BC] */, 
  V_NULL /* ID: 0x00000530, Handle: 20, ESR_Track49 [BC] */, 
  V_NULL /* ID: 0x0000052f, Handle: 21, ESR_Track48 [BC] */, 
  V_NULL /* ID: 0x0000052e, Handle: 22, ESR_Track47 [BC] */, 
  V_NULL /* ID: 0x0000052d, Handle: 23, ESR_Track46 [BC] */, 
  V_NULL /* ID: 0x0000052c, Handle: 24, ESR_Track45 [BC] */, 
  V_NULL /* ID: 0x0000052b, Handle: 25, ESR_Track44 [BC] */, 
  V_NULL /* ID: 0x0000052a, Handle: 26, ESR_Track43 [BC] */, 
  V_NULL /* ID: 0x00000529, Handle: 27, ESR_Track42 [BC] */, 
  V_NULL /* ID: 0x00000528, Handle: 28, ESR_Track41 [BC] */, 
  V_NULL /* ID: 0x00000527, Handle: 29, ESR_Track40 [BC] */, 
  V_NULL /* ID: 0x00000526, Handle: 30, ESR_Track39 [BC] */, 
  V_NULL /* ID: 0x00000525, Handle: 31, ESR_Track38 [BC] */, 
  V_NULL /* ID: 0x00000524, Handle: 32, ESR_Track37 [BC] */, 
  V_NULL /* ID: 0x00000523, Handle: 33, ESR_Track36 [BC] */, 
  V_NULL /* ID: 0x00000522, Handle: 34, ESR_Track35 [BC] */, 
  V_NULL /* ID: 0x00000521, Handle: 35, ESR_Track34 [BC] */, 
  V_NULL /* ID: 0x00000520, Handle: 36, ESR_Track33 [BC] */, 
  V_NULL /* ID: 0x0000051f, Handle: 37, ESR_Track32 [BC] */, 
  V_NULL /* ID: 0x0000051e, Handle: 38, ESR_Track31 [BC] */, 
  V_NULL /* ID: 0x0000051d, Handle: 39, ESR_Track30 [BC] */, 
  V_NULL /* ID: 0x0000051c, Handle: 40, ESR_Track29 [BC] */, 
  V_NULL /* ID: 0x0000051b, Handle: 41, ESR_Track28 [BC] */, 
  V_NULL /* ID: 0x0000051a, Handle: 42, ESR_Track27 [BC] */, 
  V_NULL /* ID: 0x00000519, Handle: 43, ESR_Track26 [BC] */, 
  V_NULL /* ID: 0x00000518, Handle: 44, ESR_Track25 [BC] */, 
  V_NULL /* ID: 0x00000517, Handle: 45, ESR_Track24 [BC] */, 
  V_NULL /* ID: 0x00000516, Handle: 46, ESR_Track23 [BC] */, 
  V_NULL /* ID: 0x00000515, Handle: 47, ESR_Track22 [BC] */, 
  V_NULL /* ID: 0x00000514, Handle: 48, ESR_Track21 [BC] */, 
  V_NULL /* ID: 0x00000513, Handle: 49, ESR_Track20 [BC] */, 
  V_NULL /* ID: 0x00000512, Handle: 50, ESR_Track19 [BC] */, 
  V_NULL /* ID: 0x00000511, Handle: 51, ESR_Track18 [BC] */, 
  V_NULL /* ID: 0x00000510, Handle: 52, ESR_Track17 [BC] */, 
  V_NULL /* ID: 0x0000050f, Handle: 53, ESR_Track16 [BC] */, 
  V_NULL /* ID: 0x0000050e, Handle: 54, ESR_Track15 [BC] */, 
  V_NULL /* ID: 0x0000050d, Handle: 55, ESR_Track14 [BC] */, 
  V_NULL /* ID: 0x0000050c, Handle: 56, ESR_Track13 [BC] */, 
  V_NULL /* ID: 0x0000050b, Handle: 57, ESR_Track12 [BC] */, 
  V_NULL /* ID: 0x0000050a, Handle: 58, ESR_Track11 [BC] */, 
  V_NULL /* ID: 0x00000509, Handle: 59, ESR_Track10 [BC] */, 
  V_NULL /* ID: 0x00000508, Handle: 60, ESR_Track09 [BC] */, 
  V_NULL /* ID: 0x00000507, Handle: 61, ESR_Track08 [BC] */, 
  V_NULL /* ID: 0x00000506, Handle: 62, ESR_Track07 [BC] */, 
  V_NULL /* ID: 0x00000505, Handle: 63, ESR_Track06 [BC] */, 
  V_NULL /* ID: 0x00000504, Handle: 64, ESR_Track05 [BC] */, 
  V_NULL /* ID: 0x00000503, Handle: 65, ESR_Track04 [BC] */, 
  V_NULL /* ID: 0x00000502, Handle: 66, ESR_Track03 [BC] */, 
  V_NULL /* ID: 0x00000501, Handle: 67, ESR_Track02 [BC] */, 
  V_NULL /* ID: 0x00000500, Handle: 68, ESR_Track01 [BC] */, 
  V_NULL /* ID: 0x000004e3, Handle: 69, ESR_Status4 [BC] */, 
  V_NULL /* ID: 0x000004e2, Handle: 70, ESR_Status3 [BC] */, 
  V_NULL /* ID: 0x000004e1, Handle: 71, ESR_Status2 [BC] */, 
  V_NULL /* ID: 0x000004e0, Handle: 72, ESR_Status1 [BC] */
};
#endif


/* -----------------------------------------------------------------------------
    &&&~ Implementation of a function to check IfActive flags
 ----------------------------------------------------------------------------- */

#if defined(IL_ENABLE_SYS_TX_SIGNALS_ARE_ACTIVE_FCT)
Il_Boolean IlTxSignalsAreActive(void )
{
  return IL_FALSE;
}


#endif



/* -----------------------------------------------------------------------------
    &&&~ Implementation function to reset indication flags
 ----------------------------------------------------------------------------- */

#if defined(IL_ENABLE_RX) && defined(IL_ENABLE_RX_POLLING)
void IlResetCanIndicationFlags(void )
{
  CanGlobalInterruptDisable();
  CanGlobalInterruptRestore();
}


#endif



/* -----------------------------------------------------------------------------
    &&&~ Implementation function to reset confirmation flags
 ----------------------------------------------------------------------------- */

#if defined(IL_ENABLE_TX)
void IlResetCanConfirmationFlags(void )
{
  CanGlobalInterruptDisable();
  IlGetTxConfirmationFlags(0) &= (vuint8) 0x00;
  IlGetTxConfirmationFlags(1) &= (vuint8) 0x00;
  IlGetTxConfirmationFlags(2) &= (vuint8) 0x00;
  IlGetTxConfirmationFlags(3) &= (vuint8) 0x00;
  IlGetTxConfirmationFlags(4) &= (vuint8) 0x00;
  IlGetTxConfirmationFlags(5) &= (vuint8) 0x00;
  IlGetTxConfirmationFlags(6) &= (vuint8) 0x00;
  IlGetTxConfirmationFlags(7) &= (vuint8) 0xC0;
  CanGlobalInterruptRestore();
}


#endif



/* -----------------------------------------------------------------------------
    &&&~ Get Rx Signal Access for signals greater 8bit and smaller or equal 32bit
 ----------------------------------------------------------------------------- */

/* Handle:    0,Name:          CAN_TX_AVG_PWR_CWBLKG,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_AVG_PWR_CWBLKG(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_AVG_PWR_CWBLKG();
  rc = ((vuint16) ESR_Status9.ESR_Status9.CAN_TX_AVG_PWR_CWBLKG_0);
  rc |= ((vuint16) ESR_Status9.ESR_Status9.CAN_TX_AVG_PWR_CWBLKG_1) << 4;
  IlLeaveCriticalCAN_TX_AVG_PWR_CWBLKG();
  return rc;
}


#endif

/* Handle:    1,Name:          CAN_TX_SIDESLIP_ANGLE,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_SIDESLIP_ANGLE(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_SIDESLIP_ANGLE();
  rc = ((vuint16) ESR_Status9.ESR_Status9.CAN_TX_SIDESLIP_ANGLE_0);
  rc |= ((vuint16) ESR_Status9.ESR_Status9.CAN_TX_SIDESLIP_ANGLE_1) << 8;
  IlLeaveCriticalCAN_TX_SIDESLIP_ANGLE();
  return rc;
}


#endif

/* Handle:    3,Name:  CAN_TX_FILTERED_XOHP_ACC_CIPV,Size:  9,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_FILTERED_XOHP_ACC_CIPV(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_FILTERED_XOHP_ACC_CIPV();
  rc = ((vuint16) ESR_Status9.ESR_Status9.CAN_TX_FILTERED_XOHP_ACC_CIPV_0);
  rc |= ((vuint16) ESR_Status9.ESR_Status9.CAN_TX_FILTERED_XOHP_ACC_CIPV_1) << 8;
  IlLeaveCriticalCAN_TX_FILTERED_XOHP_ACC_CIPV();
  return rc;
}


#endif

/* Handle:   47,Name:          CAN_TX_TRACK_ANGLE_64,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_64(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_64();
  rc = ((vuint16) ESR_Track64.ESR_Track64.CAN_TX_TRACK_ANGLE_64_0);
  rc |= ((vuint16) ESR_Track64.ESR_Track64.CAN_TX_TRACK_ANGLE_64_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_64();
  return rc;
}


#endif

/* Handle:   49,Name:          CAN_TX_TRACK_RANGE_64,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_64(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_64();
  rc = ((vuint16) ESR_Track64.ESR_Track64.CAN_TX_TRACK_RANGE_64_0);
  rc |= ((vuint16) ESR_Track64.ESR_Track64.CAN_TX_TRACK_RANGE_64_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_64();
  return rc;
}


#endif

/* Handle:   50,Name:    CAN_TX_TRACK_RANGE_ACCEL_64,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_64(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_64();
  rc = ((vuint16) ESR_Track64.ESR_Track64.CAN_TX_TRACK_RANGE_ACCEL_64_0);
  rc |= ((vuint16) ESR_Track64.ESR_Track64.CAN_TX_TRACK_RANGE_ACCEL_64_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_64();
  return rc;
}


#endif

/* Handle:   54,Name:     CAN_TX_TRACK_RANGE_RATE_64,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_64(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_64();
  rc = ((vuint16) ESR_Track64.ESR_Track64.CAN_TX_TRACK_RANGE_RATE_64_0);
  rc |= ((vuint16) ESR_Track64.ESR_Track64.CAN_TX_TRACK_RANGE_RATE_64_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_64();
  return rc;
}


#endif

/* Handle:   59,Name:          CAN_TX_TRACK_ANGLE_63,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_63(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_63();
  rc = ((vuint16) ESR_Track63.ESR_Track63.CAN_TX_TRACK_ANGLE_63_0);
  rc |= ((vuint16) ESR_Track63.ESR_Track63.CAN_TX_TRACK_ANGLE_63_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_63();
  return rc;
}


#endif

/* Handle:   61,Name:          CAN_TX_TRACK_RANGE_63,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_63(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_63();
  rc = ((vuint16) ESR_Track63.ESR_Track63.CAN_TX_TRACK_RANGE_63_0);
  rc |= ((vuint16) ESR_Track63.ESR_Track63.CAN_TX_TRACK_RANGE_63_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_63();
  return rc;
}


#endif

/* Handle:   62,Name:    CAN_TX_TRACK_RANGE_ACCEL_63,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_63(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_63();
  rc = ((vuint16) ESR_Track63.ESR_Track63.CAN_TX_TRACK_RANGE_ACCEL_63_0);
  rc |= ((vuint16) ESR_Track63.ESR_Track63.CAN_TX_TRACK_RANGE_ACCEL_63_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_63();
  return rc;
}


#endif

/* Handle:   66,Name:     CAN_TX_TRACK_RANGE_RATE_63,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_63(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_63();
  rc = ((vuint16) ESR_Track63.ESR_Track63.CAN_TX_TRACK_RANGE_RATE_63_0);
  rc |= ((vuint16) ESR_Track63.ESR_Track63.CAN_TX_TRACK_RANGE_RATE_63_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_63();
  return rc;
}


#endif

/* Handle:   71,Name:          CAN_TX_TRACK_ANGLE_62,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_62(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_62();
  rc = ((vuint16) ESR_Track62.ESR_Track62.CAN_TX_TRACK_ANGLE_62_0);
  rc |= ((vuint16) ESR_Track62.ESR_Track62.CAN_TX_TRACK_ANGLE_62_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_62();
  return rc;
}


#endif

/* Handle:   73,Name:          CAN_TX_TRACK_RANGE_62,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_62(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_62();
  rc = ((vuint16) ESR_Track62.ESR_Track62.CAN_TX_TRACK_RANGE_62_0);
  rc |= ((vuint16) ESR_Track62.ESR_Track62.CAN_TX_TRACK_RANGE_62_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_62();
  return rc;
}


#endif

/* Handle:   74,Name:    CAN_TX_TRACK_RANGE_ACCEL_62,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_62(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_62();
  rc = ((vuint16) ESR_Track62.ESR_Track62.CAN_TX_TRACK_RANGE_ACCEL_62_0);
  rc |= ((vuint16) ESR_Track62.ESR_Track62.CAN_TX_TRACK_RANGE_ACCEL_62_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_62();
  return rc;
}


#endif

/* Handle:   78,Name:     CAN_TX_TRACK_RANGE_RATE_62,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_62(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_62();
  rc = ((vuint16) ESR_Track62.ESR_Track62.CAN_TX_TRACK_RANGE_RATE_62_0);
  rc |= ((vuint16) ESR_Track62.ESR_Track62.CAN_TX_TRACK_RANGE_RATE_62_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_62();
  return rc;
}


#endif

/* Handle:   83,Name:          CAN_TX_TRACK_ANGLE_61,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_61(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_61();
  rc = ((vuint16) ESR_Track61.ESR_Track61.CAN_TX_TRACK_ANGLE_61_0);
  rc |= ((vuint16) ESR_Track61.ESR_Track61.CAN_TX_TRACK_ANGLE_61_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_61();
  return rc;
}


#endif

/* Handle:   85,Name:          CAN_TX_TRACK_RANGE_61,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_61(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_61();
  rc = ((vuint16) ESR_Track61.ESR_Track61.CAN_TX_TRACK_RANGE_61_0);
  rc |= ((vuint16) ESR_Track61.ESR_Track61.CAN_TX_TRACK_RANGE_61_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_61();
  return rc;
}


#endif

/* Handle:   86,Name:    CAN_TX_TRACK_RANGE_ACCEL_61,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_61(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_61();
  rc = ((vuint16) ESR_Track61.ESR_Track61.CAN_TX_TRACK_RANGE_ACCEL_61_0);
  rc |= ((vuint16) ESR_Track61.ESR_Track61.CAN_TX_TRACK_RANGE_ACCEL_61_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_61();
  return rc;
}


#endif

/* Handle:   90,Name:     CAN_TX_TRACK_RANGE_RATE_61,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_61(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_61();
  rc = ((vuint16) ESR_Track61.ESR_Track61.CAN_TX_TRACK_RANGE_RATE_61_0);
  rc |= ((vuint16) ESR_Track61.ESR_Track61.CAN_TX_TRACK_RANGE_RATE_61_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_61();
  return rc;
}


#endif

/* Handle:   95,Name:          CAN_TX_TRACK_ANGLE_60,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_60(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_60();
  rc = ((vuint16) ESR_Track60.ESR_Track60.CAN_TX_TRACK_ANGLE_60_0);
  rc |= ((vuint16) ESR_Track60.ESR_Track60.CAN_TX_TRACK_ANGLE_60_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_60();
  return rc;
}


#endif

/* Handle:   97,Name:          CAN_TX_TRACK_RANGE_60,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_60(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_60();
  rc = ((vuint16) ESR_Track60.ESR_Track60.CAN_TX_TRACK_RANGE_60_0);
  rc |= ((vuint16) ESR_Track60.ESR_Track60.CAN_TX_TRACK_RANGE_60_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_60();
  return rc;
}


#endif

/* Handle:   98,Name:    CAN_TX_TRACK_RANGE_ACCEL_60,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_60(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_60();
  rc = ((vuint16) ESR_Track60.ESR_Track60.CAN_TX_TRACK_RANGE_ACCEL_60_0);
  rc |= ((vuint16) ESR_Track60.ESR_Track60.CAN_TX_TRACK_RANGE_ACCEL_60_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_60();
  return rc;
}


#endif

/* Handle:  102,Name:     CAN_TX_TRACK_RANGE_RATE_60,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_60(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_60();
  rc = ((vuint16) ESR_Track60.ESR_Track60.CAN_TX_TRACK_RANGE_RATE_60_0);
  rc |= ((vuint16) ESR_Track60.ESR_Track60.CAN_TX_TRACK_RANGE_RATE_60_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_60();
  return rc;
}


#endif

/* Handle:  107,Name:          CAN_TX_TRACK_ANGLE_59,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_59(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_59();
  rc = ((vuint16) ESR_Track59.ESR_Track59.CAN_TX_TRACK_ANGLE_59_0);
  rc |= ((vuint16) ESR_Track59.ESR_Track59.CAN_TX_TRACK_ANGLE_59_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_59();
  return rc;
}


#endif

/* Handle:  109,Name:          CAN_TX_TRACK_RANGE_59,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_59(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_59();
  rc = ((vuint16) ESR_Track59.ESR_Track59.CAN_TX_TRACK_RANGE_59_0);
  rc |= ((vuint16) ESR_Track59.ESR_Track59.CAN_TX_TRACK_RANGE_59_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_59();
  return rc;
}


#endif

/* Handle:  110,Name:    CAN_TX_TRACK_RANGE_ACCEL_59,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_59(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_59();
  rc = ((vuint16) ESR_Track59.ESR_Track59.CAN_TX_TRACK_RANGE_ACCEL_59_0);
  rc |= ((vuint16) ESR_Track59.ESR_Track59.CAN_TX_TRACK_RANGE_ACCEL_59_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_59();
  return rc;
}


#endif

/* Handle:  114,Name:     CAN_TX_TRACK_RANGE_RATE_59,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_59(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_59();
  rc = ((vuint16) ESR_Track59.ESR_Track59.CAN_TX_TRACK_RANGE_RATE_59_0);
  rc |= ((vuint16) ESR_Track59.ESR_Track59.CAN_TX_TRACK_RANGE_RATE_59_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_59();
  return rc;
}


#endif

/* Handle:  119,Name:          CAN_TX_TRACK_ANGLE_58,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_58(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_58();
  rc = ((vuint16) ESR_Track58.ESR_Track58.CAN_TX_TRACK_ANGLE_58_0);
  rc |= ((vuint16) ESR_Track58.ESR_Track58.CAN_TX_TRACK_ANGLE_58_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_58();
  return rc;
}


#endif

/* Handle:  121,Name:          CAN_TX_TRACK_RANGE_58,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_58(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_58();
  rc = ((vuint16) ESR_Track58.ESR_Track58.CAN_TX_TRACK_RANGE_58_0);
  rc |= ((vuint16) ESR_Track58.ESR_Track58.CAN_TX_TRACK_RANGE_58_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_58();
  return rc;
}


#endif

/* Handle:  122,Name:    CAN_TX_TRACK_RANGE_ACCEL_58,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_58(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_58();
  rc = ((vuint16) ESR_Track58.ESR_Track58.CAN_TX_TRACK_RANGE_ACCEL_58_0);
  rc |= ((vuint16) ESR_Track58.ESR_Track58.CAN_TX_TRACK_RANGE_ACCEL_58_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_58();
  return rc;
}


#endif

/* Handle:  126,Name:     CAN_TX_TRACK_RANGE_RATE_58,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_58(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_58();
  rc = ((vuint16) ESR_Track58.ESR_Track58.CAN_TX_TRACK_RANGE_RATE_58_0);
  rc |= ((vuint16) ESR_Track58.ESR_Track58.CAN_TX_TRACK_RANGE_RATE_58_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_58();
  return rc;
}


#endif

/* Handle:  131,Name:          CAN_TX_TRACK_ANGLE_57,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_57(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_57();
  rc = ((vuint16) ESR_Track57.ESR_Track57.CAN_TX_TRACK_ANGLE_57_0);
  rc |= ((vuint16) ESR_Track57.ESR_Track57.CAN_TX_TRACK_ANGLE_57_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_57();
  return rc;
}


#endif

/* Handle:  133,Name:          CAN_TX_TRACK_RANGE_57,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_57(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_57();
  rc = ((vuint16) ESR_Track57.ESR_Track57.CAN_TX_TRACK_RANGE_57_0);
  rc |= ((vuint16) ESR_Track57.ESR_Track57.CAN_TX_TRACK_RANGE_57_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_57();
  return rc;
}


#endif

/* Handle:  134,Name:    CAN_TX_TRACK_RANGE_ACCEL_57,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_57(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_57();
  rc = ((vuint16) ESR_Track57.ESR_Track57.CAN_TX_TRACK_RANGE_ACCEL_57_0);
  rc |= ((vuint16) ESR_Track57.ESR_Track57.CAN_TX_TRACK_RANGE_ACCEL_57_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_57();
  return rc;
}


#endif

/* Handle:  138,Name:     CAN_TX_TRACK_RANGE_RATE_57,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_57(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_57();
  rc = ((vuint16) ESR_Track57.ESR_Track57.CAN_TX_TRACK_RANGE_RATE_57_0);
  rc |= ((vuint16) ESR_Track57.ESR_Track57.CAN_TX_TRACK_RANGE_RATE_57_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_57();
  return rc;
}


#endif

/* Handle:  143,Name:          CAN_TX_TRACK_ANGLE_56,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_56(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_56();
  rc = ((vuint16) ESR_Track56.ESR_Track56.CAN_TX_TRACK_ANGLE_56_0);
  rc |= ((vuint16) ESR_Track56.ESR_Track56.CAN_TX_TRACK_ANGLE_56_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_56();
  return rc;
}


#endif

/* Handle:  145,Name:          CAN_TX_TRACK_RANGE_56,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_56(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_56();
  rc = ((vuint16) ESR_Track56.ESR_Track56.CAN_TX_TRACK_RANGE_56_0);
  rc |= ((vuint16) ESR_Track56.ESR_Track56.CAN_TX_TRACK_RANGE_56_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_56();
  return rc;
}


#endif

/* Handle:  146,Name:    CAN_TX_TRACK_RANGE_ACCEL_56,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_56(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_56();
  rc = ((vuint16) ESR_Track56.ESR_Track56.CAN_TX_TRACK_RANGE_ACCEL_56_0);
  rc |= ((vuint16) ESR_Track56.ESR_Track56.CAN_TX_TRACK_RANGE_ACCEL_56_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_56();
  return rc;
}


#endif

/* Handle:  150,Name:     CAN_TX_TRACK_RANGE_RATE_56,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_56(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_56();
  rc = ((vuint16) ESR_Track56.ESR_Track56.CAN_TX_TRACK_RANGE_RATE_56_0);
  rc |= ((vuint16) ESR_Track56.ESR_Track56.CAN_TX_TRACK_RANGE_RATE_56_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_56();
  return rc;
}


#endif

/* Handle:  155,Name:          CAN_TX_TRACK_ANGLE_55,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_55(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_55();
  rc = ((vuint16) ESR_Track55.ESR_Track55.CAN_TX_TRACK_ANGLE_55_0);
  rc |= ((vuint16) ESR_Track55.ESR_Track55.CAN_TX_TRACK_ANGLE_55_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_55();
  return rc;
}


#endif

/* Handle:  157,Name:          CAN_TX_TRACK_RANGE_55,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_55(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_55();
  rc = ((vuint16) ESR_Track55.ESR_Track55.CAN_TX_TRACK_RANGE_55_0);
  rc |= ((vuint16) ESR_Track55.ESR_Track55.CAN_TX_TRACK_RANGE_55_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_55();
  return rc;
}


#endif

/* Handle:  158,Name:    CAN_TX_TRACK_RANGE_ACCEL_55,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_55(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_55();
  rc = ((vuint16) ESR_Track55.ESR_Track55.CAN_TX_TRACK_RANGE_ACCEL_55_0);
  rc |= ((vuint16) ESR_Track55.ESR_Track55.CAN_TX_TRACK_RANGE_ACCEL_55_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_55();
  return rc;
}


#endif

/* Handle:  162,Name:     CAN_TX_TRACK_RANGE_RATE_55,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_55(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_55();
  rc = ((vuint16) ESR_Track55.ESR_Track55.CAN_TX_TRACK_RANGE_RATE_55_0);
  rc |= ((vuint16) ESR_Track55.ESR_Track55.CAN_TX_TRACK_RANGE_RATE_55_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_55();
  return rc;
}


#endif

/* Handle:  167,Name:          CAN_TX_TRACK_ANGLE_54,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_54(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_54();
  rc = ((vuint16) ESR_Track54.ESR_Track54.CAN_TX_TRACK_ANGLE_54_0);
  rc |= ((vuint16) ESR_Track54.ESR_Track54.CAN_TX_TRACK_ANGLE_54_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_54();
  return rc;
}


#endif

/* Handle:  169,Name:          CAN_TX_TRACK_RANGE_54,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_54(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_54();
  rc = ((vuint16) ESR_Track54.ESR_Track54.CAN_TX_TRACK_RANGE_54_0);
  rc |= ((vuint16) ESR_Track54.ESR_Track54.CAN_TX_TRACK_RANGE_54_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_54();
  return rc;
}


#endif

/* Handle:  170,Name:    CAN_TX_TRACK_RANGE_ACCEL_54,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_54(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_54();
  rc = ((vuint16) ESR_Track54.ESR_Track54.CAN_TX_TRACK_RANGE_ACCEL_54_0);
  rc |= ((vuint16) ESR_Track54.ESR_Track54.CAN_TX_TRACK_RANGE_ACCEL_54_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_54();
  return rc;
}


#endif

/* Handle:  174,Name:     CAN_TX_TRACK_RANGE_RATE_54,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_54(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_54();
  rc = ((vuint16) ESR_Track54.ESR_Track54.CAN_TX_TRACK_RANGE_RATE_54_0);
  rc |= ((vuint16) ESR_Track54.ESR_Track54.CAN_TX_TRACK_RANGE_RATE_54_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_54();
  return rc;
}


#endif

/* Handle:  179,Name:          CAN_TX_TRACK_ANGLE_53,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_53(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_53();
  rc = ((vuint16) ESR_Track53.ESR_Track53.CAN_TX_TRACK_ANGLE_53_0);
  rc |= ((vuint16) ESR_Track53.ESR_Track53.CAN_TX_TRACK_ANGLE_53_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_53();
  return rc;
}


#endif

/* Handle:  181,Name:          CAN_TX_TRACK_RANGE_53,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_53(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_53();
  rc = ((vuint16) ESR_Track53.ESR_Track53.CAN_TX_TRACK_RANGE_53_0);
  rc |= ((vuint16) ESR_Track53.ESR_Track53.CAN_TX_TRACK_RANGE_53_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_53();
  return rc;
}


#endif

/* Handle:  182,Name:    CAN_TX_TRACK_RANGE_ACCEL_53,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_53(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_53();
  rc = ((vuint16) ESR_Track53.ESR_Track53.CAN_TX_TRACK_RANGE_ACCEL_53_0);
  rc |= ((vuint16) ESR_Track53.ESR_Track53.CAN_TX_TRACK_RANGE_ACCEL_53_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_53();
  return rc;
}


#endif

/* Handle:  186,Name:     CAN_TX_TRACK_RANGE_RATE_53,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_53(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_53();
  rc = ((vuint16) ESR_Track53.ESR_Track53.CAN_TX_TRACK_RANGE_RATE_53_0);
  rc |= ((vuint16) ESR_Track53.ESR_Track53.CAN_TX_TRACK_RANGE_RATE_53_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_53();
  return rc;
}


#endif

/* Handle:  191,Name:          CAN_TX_TRACK_ANGLE_52,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_52(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_52();
  rc = ((vuint16) ESR_Track52.ESR_Track52.CAN_TX_TRACK_ANGLE_52_0);
  rc |= ((vuint16) ESR_Track52.ESR_Track52.CAN_TX_TRACK_ANGLE_52_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_52();
  return rc;
}


#endif

/* Handle:  193,Name:          CAN_TX_TRACK_RANGE_52,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_52(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_52();
  rc = ((vuint16) ESR_Track52.ESR_Track52.CAN_TX_TRACK_RANGE_52_0);
  rc |= ((vuint16) ESR_Track52.ESR_Track52.CAN_TX_TRACK_RANGE_52_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_52();
  return rc;
}


#endif

/* Handle:  194,Name:    CAN_TX_TRACK_RANGE_ACCEL_52,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_52(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_52();
  rc = ((vuint16) ESR_Track52.ESR_Track52.CAN_TX_TRACK_RANGE_ACCEL_52_0);
  rc |= ((vuint16) ESR_Track52.ESR_Track52.CAN_TX_TRACK_RANGE_ACCEL_52_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_52();
  return rc;
}


#endif

/* Handle:  198,Name:     CAN_TX_TRACK_RANGE_RATE_52,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_52(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_52();
  rc = ((vuint16) ESR_Track52.ESR_Track52.CAN_TX_TRACK_RANGE_RATE_52_0);
  rc |= ((vuint16) ESR_Track52.ESR_Track52.CAN_TX_TRACK_RANGE_RATE_52_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_52();
  return rc;
}


#endif

/* Handle:  203,Name:          CAN_TX_TRACK_ANGLE_51,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_51(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_51();
  rc = ((vuint16) ESR_Track51.ESR_Track51.CAN_TX_TRACK_ANGLE_51_0);
  rc |= ((vuint16) ESR_Track51.ESR_Track51.CAN_TX_TRACK_ANGLE_51_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_51();
  return rc;
}


#endif

/* Handle:  205,Name:          CAN_TX_TRACK_RANGE_51,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_51(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_51();
  rc = ((vuint16) ESR_Track51.ESR_Track51.CAN_TX_TRACK_RANGE_51_0);
  rc |= ((vuint16) ESR_Track51.ESR_Track51.CAN_TX_TRACK_RANGE_51_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_51();
  return rc;
}


#endif

/* Handle:  206,Name:    CAN_TX_TRACK_RANGE_ACCEL_51,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_51(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_51();
  rc = ((vuint16) ESR_Track51.ESR_Track51.CAN_TX_TRACK_RANGE_ACCEL_51_0);
  rc |= ((vuint16) ESR_Track51.ESR_Track51.CAN_TX_TRACK_RANGE_ACCEL_51_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_51();
  return rc;
}


#endif

/* Handle:  210,Name:     CAN_TX_TRACK_RANGE_RATE_51,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_51(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_51();
  rc = ((vuint16) ESR_Track51.ESR_Track51.CAN_TX_TRACK_RANGE_RATE_51_0);
  rc |= ((vuint16) ESR_Track51.ESR_Track51.CAN_TX_TRACK_RANGE_RATE_51_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_51();
  return rc;
}


#endif

/* Handle:  215,Name:          CAN_TX_TRACK_ANGLE_50,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_50(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_50();
  rc = ((vuint16) ESR_Track50.ESR_Track50.CAN_TX_TRACK_ANGLE_50_0);
  rc |= ((vuint16) ESR_Track50.ESR_Track50.CAN_TX_TRACK_ANGLE_50_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_50();
  return rc;
}


#endif

/* Handle:  217,Name:          CAN_TX_TRACK_RANGE_50,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_50(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_50();
  rc = ((vuint16) ESR_Track50.ESR_Track50.CAN_TX_TRACK_RANGE_50_0);
  rc |= ((vuint16) ESR_Track50.ESR_Track50.CAN_TX_TRACK_RANGE_50_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_50();
  return rc;
}


#endif

/* Handle:  218,Name:    CAN_TX_TRACK_RANGE_ACCEL_50,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_50(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_50();
  rc = ((vuint16) ESR_Track50.ESR_Track50.CAN_TX_TRACK_RANGE_ACCEL_50_0);
  rc |= ((vuint16) ESR_Track50.ESR_Track50.CAN_TX_TRACK_RANGE_ACCEL_50_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_50();
  return rc;
}


#endif

/* Handle:  222,Name:     CAN_TX_TRACK_RANGE_RATE_50,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_50(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_50();
  rc = ((vuint16) ESR_Track50.ESR_Track50.CAN_TX_TRACK_RANGE_RATE_50_0);
  rc |= ((vuint16) ESR_Track50.ESR_Track50.CAN_TX_TRACK_RANGE_RATE_50_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_50();
  return rc;
}


#endif

/* Handle:  227,Name:          CAN_TX_TRACK_ANGLE_49,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_49(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_49();
  rc = ((vuint16) ESR_Track49.ESR_Track49.CAN_TX_TRACK_ANGLE_49_0);
  rc |= ((vuint16) ESR_Track49.ESR_Track49.CAN_TX_TRACK_ANGLE_49_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_49();
  return rc;
}


#endif

/* Handle:  229,Name:          CAN_TX_TRACK_RANGE_49,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_49(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_49();
  rc = ((vuint16) ESR_Track49.ESR_Track49.CAN_TX_TRACK_RANGE_49_0);
  rc |= ((vuint16) ESR_Track49.ESR_Track49.CAN_TX_TRACK_RANGE_49_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_49();
  return rc;
}


#endif

/* Handle:  230,Name:    CAN_TX_TRACK_RANGE_ACCEL_49,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_49(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_49();
  rc = ((vuint16) ESR_Track49.ESR_Track49.CAN_TX_TRACK_RANGE_ACCEL_49_0);
  rc |= ((vuint16) ESR_Track49.ESR_Track49.CAN_TX_TRACK_RANGE_ACCEL_49_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_49();
  return rc;
}


#endif

/* Handle:  234,Name:     CAN_TX_TRACK_RANGE_RATE_49,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_49(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_49();
  rc = ((vuint16) ESR_Track49.ESR_Track49.CAN_TX_TRACK_RANGE_RATE_49_0);
  rc |= ((vuint16) ESR_Track49.ESR_Track49.CAN_TX_TRACK_RANGE_RATE_49_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_49();
  return rc;
}


#endif

/* Handle:  239,Name:          CAN_TX_TRACK_ANGLE_48,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_48(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_48();
  rc = ((vuint16) ESR_Track48.ESR_Track48.CAN_TX_TRACK_ANGLE_48_0);
  rc |= ((vuint16) ESR_Track48.ESR_Track48.CAN_TX_TRACK_ANGLE_48_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_48();
  return rc;
}


#endif

/* Handle:  241,Name:          CAN_TX_TRACK_RANGE_48,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_48(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_48();
  rc = ((vuint16) ESR_Track48.ESR_Track48.CAN_TX_TRACK_RANGE_48_0);
  rc |= ((vuint16) ESR_Track48.ESR_Track48.CAN_TX_TRACK_RANGE_48_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_48();
  return rc;
}


#endif

/* Handle:  242,Name:    CAN_TX_TRACK_RANGE_ACCEL_48,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_48(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_48();
  rc = ((vuint16) ESR_Track48.ESR_Track48.CAN_TX_TRACK_RANGE_ACCEL_48_0);
  rc |= ((vuint16) ESR_Track48.ESR_Track48.CAN_TX_TRACK_RANGE_ACCEL_48_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_48();
  return rc;
}


#endif

/* Handle:  246,Name:     CAN_TX_TRACK_RANGE_RATE_48,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_48(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_48();
  rc = ((vuint16) ESR_Track48.ESR_Track48.CAN_TX_TRACK_RANGE_RATE_48_0);
  rc |= ((vuint16) ESR_Track48.ESR_Track48.CAN_TX_TRACK_RANGE_RATE_48_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_48();
  return rc;
}


#endif

/* Handle:  251,Name:          CAN_TX_TRACK_ANGLE_47,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_47(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_47();
  rc = ((vuint16) ESR_Track47.ESR_Track47.CAN_TX_TRACK_ANGLE_47_0);
  rc |= ((vuint16) ESR_Track47.ESR_Track47.CAN_TX_TRACK_ANGLE_47_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_47();
  return rc;
}


#endif

/* Handle:  253,Name:          CAN_TX_TRACK_RANGE_47,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_47(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_47();
  rc = ((vuint16) ESR_Track47.ESR_Track47.CAN_TX_TRACK_RANGE_47_0);
  rc |= ((vuint16) ESR_Track47.ESR_Track47.CAN_TX_TRACK_RANGE_47_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_47();
  return rc;
}


#endif

/* Handle:  254,Name:    CAN_TX_TRACK_RANGE_ACCEL_47,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_47(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_47();
  rc = ((vuint16) ESR_Track47.ESR_Track47.CAN_TX_TRACK_RANGE_ACCEL_47_0);
  rc |= ((vuint16) ESR_Track47.ESR_Track47.CAN_TX_TRACK_RANGE_ACCEL_47_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_47();
  return rc;
}


#endif

/* Handle:  258,Name:     CAN_TX_TRACK_RANGE_RATE_47,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_47(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_47();
  rc = ((vuint16) ESR_Track47.ESR_Track47.CAN_TX_TRACK_RANGE_RATE_47_0);
  rc |= ((vuint16) ESR_Track47.ESR_Track47.CAN_TX_TRACK_RANGE_RATE_47_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_47();
  return rc;
}


#endif

/* Handle:  263,Name:          CAN_TX_TRACK_ANGLE_46,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_46(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_46();
  rc = ((vuint16) ESR_Track46.ESR_Track46.CAN_TX_TRACK_ANGLE_46_0);
  rc |= ((vuint16) ESR_Track46.ESR_Track46.CAN_TX_TRACK_ANGLE_46_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_46();
  return rc;
}


#endif

/* Handle:  265,Name:          CAN_TX_TRACK_RANGE_46,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_46(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_46();
  rc = ((vuint16) ESR_Track46.ESR_Track46.CAN_TX_TRACK_RANGE_46_0);
  rc |= ((vuint16) ESR_Track46.ESR_Track46.CAN_TX_TRACK_RANGE_46_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_46();
  return rc;
}


#endif

/* Handle:  266,Name:    CAN_TX_TRACK_RANGE_ACCEL_46,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_46(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_46();
  rc = ((vuint16) ESR_Track46.ESR_Track46.CAN_TX_TRACK_RANGE_ACCEL_46_0);
  rc |= ((vuint16) ESR_Track46.ESR_Track46.CAN_TX_TRACK_RANGE_ACCEL_46_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_46();
  return rc;
}


#endif

/* Handle:  270,Name:     CAN_TX_TRACK_RANGE_RATE_46,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_46(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_46();
  rc = ((vuint16) ESR_Track46.ESR_Track46.CAN_TX_TRACK_RANGE_RATE_46_0);
  rc |= ((vuint16) ESR_Track46.ESR_Track46.CAN_TX_TRACK_RANGE_RATE_46_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_46();
  return rc;
}


#endif

/* Handle:  275,Name:          CAN_TX_TRACK_ANGLE_45,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_45(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_45();
  rc = ((vuint16) ESR_Track45.ESR_Track45.CAN_TX_TRACK_ANGLE_45_0);
  rc |= ((vuint16) ESR_Track45.ESR_Track45.CAN_TX_TRACK_ANGLE_45_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_45();
  return rc;
}


#endif

/* Handle:  277,Name:          CAN_TX_TRACK_RANGE_45,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_45(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_45();
  rc = ((vuint16) ESR_Track45.ESR_Track45.CAN_TX_TRACK_RANGE_45_0);
  rc |= ((vuint16) ESR_Track45.ESR_Track45.CAN_TX_TRACK_RANGE_45_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_45();
  return rc;
}


#endif

/* Handle:  278,Name:    CAN_TX_TRACK_RANGE_ACCEL_45,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_45(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_45();
  rc = ((vuint16) ESR_Track45.ESR_Track45.CAN_TX_TRACK_RANGE_ACCEL_45_0);
  rc |= ((vuint16) ESR_Track45.ESR_Track45.CAN_TX_TRACK_RANGE_ACCEL_45_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_45();
  return rc;
}


#endif

/* Handle:  282,Name:     CAN_TX_TRACK_RANGE_RATE_45,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_45(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_45();
  rc = ((vuint16) ESR_Track45.ESR_Track45.CAN_TX_TRACK_RANGE_RATE_45_0);
  rc |= ((vuint16) ESR_Track45.ESR_Track45.CAN_TX_TRACK_RANGE_RATE_45_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_45();
  return rc;
}


#endif

/* Handle:  287,Name:          CAN_TX_TRACK_ANGLE_44,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_44(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_44();
  rc = ((vuint16) ESR_Track44.ESR_Track44.CAN_TX_TRACK_ANGLE_44_0);
  rc |= ((vuint16) ESR_Track44.ESR_Track44.CAN_TX_TRACK_ANGLE_44_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_44();
  return rc;
}


#endif

/* Handle:  289,Name:          CAN_TX_TRACK_RANGE_44,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_44(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_44();
  rc = ((vuint16) ESR_Track44.ESR_Track44.CAN_TX_TRACK_RANGE_44_0);
  rc |= ((vuint16) ESR_Track44.ESR_Track44.CAN_TX_TRACK_RANGE_44_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_44();
  return rc;
}


#endif

/* Handle:  290,Name:    CAN_TX_TRACK_RANGE_ACCEL_44,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_44(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_44();
  rc = ((vuint16) ESR_Track44.ESR_Track44.CAN_TX_TRACK_RANGE_ACCEL_44_0);
  rc |= ((vuint16) ESR_Track44.ESR_Track44.CAN_TX_TRACK_RANGE_ACCEL_44_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_44();
  return rc;
}


#endif

/* Handle:  294,Name:     CAN_TX_TRACK_RANGE_RATE_44,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_44(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_44();
  rc = ((vuint16) ESR_Track44.ESR_Track44.CAN_TX_TRACK_RANGE_RATE_44_0);
  rc |= ((vuint16) ESR_Track44.ESR_Track44.CAN_TX_TRACK_RANGE_RATE_44_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_44();
  return rc;
}


#endif

/* Handle:  299,Name:          CAN_TX_TRACK_ANGLE_43,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_43(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_43();
  rc = ((vuint16) ESR_Track43.ESR_Track43.CAN_TX_TRACK_ANGLE_43_0);
  rc |= ((vuint16) ESR_Track43.ESR_Track43.CAN_TX_TRACK_ANGLE_43_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_43();
  return rc;
}


#endif

/* Handle:  301,Name:          CAN_TX_TRACK_RANGE_43,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_43(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_43();
  rc = ((vuint16) ESR_Track43.ESR_Track43.CAN_TX_TRACK_RANGE_43_0);
  rc |= ((vuint16) ESR_Track43.ESR_Track43.CAN_TX_TRACK_RANGE_43_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_43();
  return rc;
}


#endif

/* Handle:  302,Name:    CAN_TX_TRACK_RANGE_ACCEL_43,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_43(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_43();
  rc = ((vuint16) ESR_Track43.ESR_Track43.CAN_TX_TRACK_RANGE_ACCEL_43_0);
  rc |= ((vuint16) ESR_Track43.ESR_Track43.CAN_TX_TRACK_RANGE_ACCEL_43_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_43();
  return rc;
}


#endif

/* Handle:  306,Name:     CAN_TX_TRACK_RANGE_RATE_43,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_43(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_43();
  rc = ((vuint16) ESR_Track43.ESR_Track43.CAN_TX_TRACK_RANGE_RATE_43_0);
  rc |= ((vuint16) ESR_Track43.ESR_Track43.CAN_TX_TRACK_RANGE_RATE_43_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_43();
  return rc;
}


#endif

/* Handle:  311,Name:          CAN_TX_TRACK_ANGLE_42,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_42(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_42();
  rc = ((vuint16) ESR_Track42.ESR_Track42.CAN_TX_TRACK_ANGLE_42_0);
  rc |= ((vuint16) ESR_Track42.ESR_Track42.CAN_TX_TRACK_ANGLE_42_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_42();
  return rc;
}


#endif

/* Handle:  313,Name:          CAN_TX_TRACK_RANGE_42,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_42(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_42();
  rc = ((vuint16) ESR_Track42.ESR_Track42.CAN_TX_TRACK_RANGE_42_0);
  rc |= ((vuint16) ESR_Track42.ESR_Track42.CAN_TX_TRACK_RANGE_42_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_42();
  return rc;
}


#endif

/* Handle:  314,Name:    CAN_TX_TRACK_RANGE_ACCEL_42,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_42(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_42();
  rc = ((vuint16) ESR_Track42.ESR_Track42.CAN_TX_TRACK_RANGE_ACCEL_42_0);
  rc |= ((vuint16) ESR_Track42.ESR_Track42.CAN_TX_TRACK_RANGE_ACCEL_42_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_42();
  return rc;
}


#endif

/* Handle:  318,Name:     CAN_TX_TRACK_RANGE_RATE_42,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_42(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_42();
  rc = ((vuint16) ESR_Track42.ESR_Track42.CAN_TX_TRACK_RANGE_RATE_42_0);
  rc |= ((vuint16) ESR_Track42.ESR_Track42.CAN_TX_TRACK_RANGE_RATE_42_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_42();
  return rc;
}


#endif

/* Handle:  323,Name:          CAN_TX_TRACK_ANGLE_41,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_41(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_41();
  rc = ((vuint16) ESR_Track41.ESR_Track41.CAN_TX_TRACK_ANGLE_41_0);
  rc |= ((vuint16) ESR_Track41.ESR_Track41.CAN_TX_TRACK_ANGLE_41_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_41();
  return rc;
}


#endif

/* Handle:  325,Name:          CAN_TX_TRACK_RANGE_41,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_41(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_41();
  rc = ((vuint16) ESR_Track41.ESR_Track41.CAN_TX_TRACK_RANGE_41_0);
  rc |= ((vuint16) ESR_Track41.ESR_Track41.CAN_TX_TRACK_RANGE_41_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_41();
  return rc;
}


#endif

/* Handle:  326,Name:    CAN_TX_TRACK_RANGE_ACCEL_41,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_41(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_41();
  rc = ((vuint16) ESR_Track41.ESR_Track41.CAN_TX_TRACK_RANGE_ACCEL_41_0);
  rc |= ((vuint16) ESR_Track41.ESR_Track41.CAN_TX_TRACK_RANGE_ACCEL_41_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_41();
  return rc;
}


#endif

/* Handle:  330,Name:     CAN_TX_TRACK_RANGE_RATE_41,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_41(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_41();
  rc = ((vuint16) ESR_Track41.ESR_Track41.CAN_TX_TRACK_RANGE_RATE_41_0);
  rc |= ((vuint16) ESR_Track41.ESR_Track41.CAN_TX_TRACK_RANGE_RATE_41_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_41();
  return rc;
}


#endif

/* Handle:  335,Name:          CAN_TX_TRACK_ANGLE_40,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_40(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_40();
  rc = ((vuint16) ESR_Track40.ESR_Track40.CAN_TX_TRACK_ANGLE_40_0);
  rc |= ((vuint16) ESR_Track40.ESR_Track40.CAN_TX_TRACK_ANGLE_40_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_40();
  return rc;
}


#endif

/* Handle:  337,Name:          CAN_TX_TRACK_RANGE_40,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_40(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_40();
  rc = ((vuint16) ESR_Track40.ESR_Track40.CAN_TX_TRACK_RANGE_40_0);
  rc |= ((vuint16) ESR_Track40.ESR_Track40.CAN_TX_TRACK_RANGE_40_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_40();
  return rc;
}


#endif

/* Handle:  338,Name:    CAN_TX_TRACK_RANGE_ACCEL_40,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_40(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_40();
  rc = ((vuint16) ESR_Track40.ESR_Track40.CAN_TX_TRACK_RANGE_ACCEL_40_0);
  rc |= ((vuint16) ESR_Track40.ESR_Track40.CAN_TX_TRACK_RANGE_ACCEL_40_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_40();
  return rc;
}


#endif

/* Handle:  342,Name:     CAN_TX_TRACK_RANGE_RATE_40,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_40(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_40();
  rc = ((vuint16) ESR_Track40.ESR_Track40.CAN_TX_TRACK_RANGE_RATE_40_0);
  rc |= ((vuint16) ESR_Track40.ESR_Track40.CAN_TX_TRACK_RANGE_RATE_40_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_40();
  return rc;
}


#endif

/* Handle:  347,Name:          CAN_TX_TRACK_ANGLE_39,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_39(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_39();
  rc = ((vuint16) ESR_Track39.ESR_Track39.CAN_TX_TRACK_ANGLE_39_0);
  rc |= ((vuint16) ESR_Track39.ESR_Track39.CAN_TX_TRACK_ANGLE_39_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_39();
  return rc;
}


#endif

/* Handle:  349,Name:          CAN_TX_TRACK_RANGE_39,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_39(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_39();
  rc = ((vuint16) ESR_Track39.ESR_Track39.CAN_TX_TRACK_RANGE_39_0);
  rc |= ((vuint16) ESR_Track39.ESR_Track39.CAN_TX_TRACK_RANGE_39_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_39();
  return rc;
}


#endif

/* Handle:  350,Name:    CAN_TX_TRACK_RANGE_ACCEL_39,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_39(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_39();
  rc = ((vuint16) ESR_Track39.ESR_Track39.CAN_TX_TRACK_RANGE_ACCEL_39_0);
  rc |= ((vuint16) ESR_Track39.ESR_Track39.CAN_TX_TRACK_RANGE_ACCEL_39_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_39();
  return rc;
}


#endif

/* Handle:  354,Name:     CAN_TX_TRACK_RANGE_RATE_39,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_39(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_39();
  rc = ((vuint16) ESR_Track39.ESR_Track39.CAN_TX_TRACK_RANGE_RATE_39_0);
  rc |= ((vuint16) ESR_Track39.ESR_Track39.CAN_TX_TRACK_RANGE_RATE_39_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_39();
  return rc;
}


#endif

/* Handle:  359,Name:          CAN_TX_TRACK_ANGLE_38,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_38(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_38();
  rc = ((vuint16) ESR_Track38.ESR_Track38.CAN_TX_TRACK_ANGLE_38_0);
  rc |= ((vuint16) ESR_Track38.ESR_Track38.CAN_TX_TRACK_ANGLE_38_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_38();
  return rc;
}


#endif

/* Handle:  361,Name:          CAN_TX_TRACK_RANGE_38,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_38(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_38();
  rc = ((vuint16) ESR_Track38.ESR_Track38.CAN_TX_TRACK_RANGE_38_0);
  rc |= ((vuint16) ESR_Track38.ESR_Track38.CAN_TX_TRACK_RANGE_38_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_38();
  return rc;
}


#endif

/* Handle:  362,Name:    CAN_TX_TRACK_RANGE_ACCEL_38,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_38(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_38();
  rc = ((vuint16) ESR_Track38.ESR_Track38.CAN_TX_TRACK_RANGE_ACCEL_38_0);
  rc |= ((vuint16) ESR_Track38.ESR_Track38.CAN_TX_TRACK_RANGE_ACCEL_38_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_38();
  return rc;
}


#endif

/* Handle:  366,Name:     CAN_TX_TRACK_RANGE_RATE_38,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_38(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_38();
  rc = ((vuint16) ESR_Track38.ESR_Track38.CAN_TX_TRACK_RANGE_RATE_38_0);
  rc |= ((vuint16) ESR_Track38.ESR_Track38.CAN_TX_TRACK_RANGE_RATE_38_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_38();
  return rc;
}


#endif

/* Handle:  371,Name:          CAN_TX_TRACK_ANGLE_37,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_37(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_37();
  rc = ((vuint16) ESR_Track37.ESR_Track37.CAN_TX_TRACK_ANGLE_37_0);
  rc |= ((vuint16) ESR_Track37.ESR_Track37.CAN_TX_TRACK_ANGLE_37_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_37();
  return rc;
}


#endif

/* Handle:  373,Name:          CAN_TX_TRACK_RANGE_37,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_37(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_37();
  rc = ((vuint16) ESR_Track37.ESR_Track37.CAN_TX_TRACK_RANGE_37_0);
  rc |= ((vuint16) ESR_Track37.ESR_Track37.CAN_TX_TRACK_RANGE_37_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_37();
  return rc;
}


#endif

/* Handle:  374,Name:    CAN_TX_TRACK_RANGE_ACCEL_37,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_37(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_37();
  rc = ((vuint16) ESR_Track37.ESR_Track37.CAN_TX_TRACK_RANGE_ACCEL_37_0);
  rc |= ((vuint16) ESR_Track37.ESR_Track37.CAN_TX_TRACK_RANGE_ACCEL_37_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_37();
  return rc;
}


#endif

/* Handle:  378,Name:     CAN_TX_TRACK_RANGE_RATE_37,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_37(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_37();
  rc = ((vuint16) ESR_Track37.ESR_Track37.CAN_TX_TRACK_RANGE_RATE_37_0);
  rc |= ((vuint16) ESR_Track37.ESR_Track37.CAN_TX_TRACK_RANGE_RATE_37_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_37();
  return rc;
}


#endif

/* Handle:  383,Name:          CAN_TX_TRACK_ANGLE_36,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_36(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_36();
  rc = ((vuint16) ESR_Track36.ESR_Track36.CAN_TX_TRACK_ANGLE_36_0);
  rc |= ((vuint16) ESR_Track36.ESR_Track36.CAN_TX_TRACK_ANGLE_36_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_36();
  return rc;
}


#endif

/* Handle:  385,Name:          CAN_TX_TRACK_RANGE_36,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_36(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_36();
  rc = ((vuint16) ESR_Track36.ESR_Track36.CAN_TX_TRACK_RANGE_36_0);
  rc |= ((vuint16) ESR_Track36.ESR_Track36.CAN_TX_TRACK_RANGE_36_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_36();
  return rc;
}


#endif

/* Handle:  386,Name:    CAN_TX_TRACK_RANGE_ACCEL_36,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_36(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_36();
  rc = ((vuint16) ESR_Track36.ESR_Track36.CAN_TX_TRACK_RANGE_ACCEL_36_0);
  rc |= ((vuint16) ESR_Track36.ESR_Track36.CAN_TX_TRACK_RANGE_ACCEL_36_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_36();
  return rc;
}


#endif

/* Handle:  390,Name:     CAN_TX_TRACK_RANGE_RATE_36,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_36(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_36();
  rc = ((vuint16) ESR_Track36.ESR_Track36.CAN_TX_TRACK_RANGE_RATE_36_0);
  rc |= ((vuint16) ESR_Track36.ESR_Track36.CAN_TX_TRACK_RANGE_RATE_36_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_36();
  return rc;
}


#endif

/* Handle:  395,Name:          CAN_TX_TRACK_ANGLE_35,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_35(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_35();
  rc = ((vuint16) ESR_Track35.ESR_Track35.CAN_TX_TRACK_ANGLE_35_0);
  rc |= ((vuint16) ESR_Track35.ESR_Track35.CAN_TX_TRACK_ANGLE_35_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_35();
  return rc;
}


#endif

/* Handle:  397,Name:          CAN_TX_TRACK_RANGE_35,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_35(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_35();
  rc = ((vuint16) ESR_Track35.ESR_Track35.CAN_TX_TRACK_RANGE_35_0);
  rc |= ((vuint16) ESR_Track35.ESR_Track35.CAN_TX_TRACK_RANGE_35_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_35();
  return rc;
}


#endif

/* Handle:  398,Name:    CAN_TX_TRACK_RANGE_ACCEL_35,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_35(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_35();
  rc = ((vuint16) ESR_Track35.ESR_Track35.CAN_TX_TRACK_RANGE_ACCEL_35_0);
  rc |= ((vuint16) ESR_Track35.ESR_Track35.CAN_TX_TRACK_RANGE_ACCEL_35_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_35();
  return rc;
}


#endif

/* Handle:  402,Name:     CAN_TX_TRACK_RANGE_RATE_35,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_35(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_35();
  rc = ((vuint16) ESR_Track35.ESR_Track35.CAN_TX_TRACK_RANGE_RATE_35_0);
  rc |= ((vuint16) ESR_Track35.ESR_Track35.CAN_TX_TRACK_RANGE_RATE_35_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_35();
  return rc;
}


#endif

/* Handle:  407,Name:          CAN_TX_TRACK_ANGLE_34,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_34(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_34();
  rc = ((vuint16) ESR_Track34.ESR_Track34.CAN_TX_TRACK_ANGLE_34_0);
  rc |= ((vuint16) ESR_Track34.ESR_Track34.CAN_TX_TRACK_ANGLE_34_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_34();
  return rc;
}


#endif

/* Handle:  409,Name:          CAN_TX_TRACK_RANGE_34,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_34(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_34();
  rc = ((vuint16) ESR_Track34.ESR_Track34.CAN_TX_TRACK_RANGE_34_0);
  rc |= ((vuint16) ESR_Track34.ESR_Track34.CAN_TX_TRACK_RANGE_34_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_34();
  return rc;
}


#endif

/* Handle:  410,Name:    CAN_TX_TRACK_RANGE_ACCEL_34,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_34(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_34();
  rc = ((vuint16) ESR_Track34.ESR_Track34.CAN_TX_TRACK_RANGE_ACCEL_34_0);
  rc |= ((vuint16) ESR_Track34.ESR_Track34.CAN_TX_TRACK_RANGE_ACCEL_34_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_34();
  return rc;
}


#endif

/* Handle:  414,Name:     CAN_TX_TRACK_RANGE_RATE_34,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_34(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_34();
  rc = ((vuint16) ESR_Track34.ESR_Track34.CAN_TX_TRACK_RANGE_RATE_34_0);
  rc |= ((vuint16) ESR_Track34.ESR_Track34.CAN_TX_TRACK_RANGE_RATE_34_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_34();
  return rc;
}


#endif

/* Handle:  419,Name:          CAN_TX_TRACK_ANGLE_33,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_33(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_33();
  rc = ((vuint16) ESR_Track33.ESR_Track33.CAN_TX_TRACK_ANGLE_33_0);
  rc |= ((vuint16) ESR_Track33.ESR_Track33.CAN_TX_TRACK_ANGLE_33_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_33();
  return rc;
}


#endif

/* Handle:  421,Name:          CAN_TX_TRACK_RANGE_33,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_33(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_33();
  rc = ((vuint16) ESR_Track33.ESR_Track33.CAN_TX_TRACK_RANGE_33_0);
  rc |= ((vuint16) ESR_Track33.ESR_Track33.CAN_TX_TRACK_RANGE_33_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_33();
  return rc;
}


#endif

/* Handle:  422,Name:    CAN_TX_TRACK_RANGE_ACCEL_33,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_33(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_33();
  rc = ((vuint16) ESR_Track33.ESR_Track33.CAN_TX_TRACK_RANGE_ACCEL_33_0);
  rc |= ((vuint16) ESR_Track33.ESR_Track33.CAN_TX_TRACK_RANGE_ACCEL_33_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_33();
  return rc;
}


#endif

/* Handle:  426,Name:     CAN_TX_TRACK_RANGE_RATE_33,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_33(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_33();
  rc = ((vuint16) ESR_Track33.ESR_Track33.CAN_TX_TRACK_RANGE_RATE_33_0);
  rc |= ((vuint16) ESR_Track33.ESR_Track33.CAN_TX_TRACK_RANGE_RATE_33_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_33();
  return rc;
}


#endif

/* Handle:  431,Name:          CAN_TX_TRACK_ANGLE_32,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_32(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_32();
  rc = ((vuint16) ESR_Track32.ESR_Track32.CAN_TX_TRACK_ANGLE_32_0);
  rc |= ((vuint16) ESR_Track32.ESR_Track32.CAN_TX_TRACK_ANGLE_32_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_32();
  return rc;
}


#endif

/* Handle:  433,Name:          CAN_TX_TRACK_RANGE_32,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_32(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_32();
  rc = ((vuint16) ESR_Track32.ESR_Track32.CAN_TX_TRACK_RANGE_32_0);
  rc |= ((vuint16) ESR_Track32.ESR_Track32.CAN_TX_TRACK_RANGE_32_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_32();
  return rc;
}


#endif

/* Handle:  434,Name:    CAN_TX_TRACK_RANGE_ACCEL_32,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_32(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_32();
  rc = ((vuint16) ESR_Track32.ESR_Track32.CAN_TX_TRACK_RANGE_ACCEL_32_0);
  rc |= ((vuint16) ESR_Track32.ESR_Track32.CAN_TX_TRACK_RANGE_ACCEL_32_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_32();
  return rc;
}


#endif

/* Handle:  438,Name:     CAN_TX_TRACK_RANGE_RATE_32,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_32(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_32();
  rc = ((vuint16) ESR_Track32.ESR_Track32.CAN_TX_TRACK_RANGE_RATE_32_0);
  rc |= ((vuint16) ESR_Track32.ESR_Track32.CAN_TX_TRACK_RANGE_RATE_32_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_32();
  return rc;
}


#endif

/* Handle:  443,Name:          CAN_TX_TRACK_ANGLE_31,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_31(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_31();
  rc = ((vuint16) ESR_Track31.ESR_Track31.CAN_TX_TRACK_ANGLE_31_0);
  rc |= ((vuint16) ESR_Track31.ESR_Track31.CAN_TX_TRACK_ANGLE_31_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_31();
  return rc;
}


#endif

/* Handle:  445,Name:          CAN_TX_TRACK_RANGE_31,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_31(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_31();
  rc = ((vuint16) ESR_Track31.ESR_Track31.CAN_TX_TRACK_RANGE_31_0);
  rc |= ((vuint16) ESR_Track31.ESR_Track31.CAN_TX_TRACK_RANGE_31_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_31();
  return rc;
}


#endif

/* Handle:  446,Name:    CAN_TX_TRACK_RANGE_ACCEL_31,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_31(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_31();
  rc = ((vuint16) ESR_Track31.ESR_Track31.CAN_TX_TRACK_RANGE_ACCEL_31_0);
  rc |= ((vuint16) ESR_Track31.ESR_Track31.CAN_TX_TRACK_RANGE_ACCEL_31_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_31();
  return rc;
}


#endif

/* Handle:  450,Name:     CAN_TX_TRACK_RANGE_RATE_31,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_31(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_31();
  rc = ((vuint16) ESR_Track31.ESR_Track31.CAN_TX_TRACK_RANGE_RATE_31_0);
  rc |= ((vuint16) ESR_Track31.ESR_Track31.CAN_TX_TRACK_RANGE_RATE_31_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_31();
  return rc;
}


#endif

/* Handle:  455,Name:          CAN_TX_TRACK_ANGLE_30,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_30(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_30();
  rc = ((vuint16) ESR_Track30.ESR_Track30.CAN_TX_TRACK_ANGLE_30_0);
  rc |= ((vuint16) ESR_Track30.ESR_Track30.CAN_TX_TRACK_ANGLE_30_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_30();
  return rc;
}


#endif

/* Handle:  457,Name:          CAN_TX_TRACK_RANGE_30,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_30(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_30();
  rc = ((vuint16) ESR_Track30.ESR_Track30.CAN_TX_TRACK_RANGE_30_0);
  rc |= ((vuint16) ESR_Track30.ESR_Track30.CAN_TX_TRACK_RANGE_30_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_30();
  return rc;
}


#endif

/* Handle:  458,Name:    CAN_TX_TRACK_RANGE_ACCEL_30,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_30(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_30();
  rc = ((vuint16) ESR_Track30.ESR_Track30.CAN_TX_TRACK_RANGE_ACCEL_30_0);
  rc |= ((vuint16) ESR_Track30.ESR_Track30.CAN_TX_TRACK_RANGE_ACCEL_30_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_30();
  return rc;
}


#endif

/* Handle:  462,Name:     CAN_TX_TRACK_RANGE_RATE_30,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_30(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_30();
  rc = ((vuint16) ESR_Track30.ESR_Track30.CAN_TX_TRACK_RANGE_RATE_30_0);
  rc |= ((vuint16) ESR_Track30.ESR_Track30.CAN_TX_TRACK_RANGE_RATE_30_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_30();
  return rc;
}


#endif

/* Handle:  467,Name:          CAN_TX_TRACK_ANGLE_29,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_29(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_29();
  rc = ((vuint16) ESR_Track29.ESR_Track29.CAN_TX_TRACK_ANGLE_29_0);
  rc |= ((vuint16) ESR_Track29.ESR_Track29.CAN_TX_TRACK_ANGLE_29_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_29();
  return rc;
}


#endif

/* Handle:  469,Name:          CAN_TX_TRACK_RANGE_29,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_29(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_29();
  rc = ((vuint16) ESR_Track29.ESR_Track29.CAN_TX_TRACK_RANGE_29_0);
  rc |= ((vuint16) ESR_Track29.ESR_Track29.CAN_TX_TRACK_RANGE_29_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_29();
  return rc;
}


#endif

/* Handle:  470,Name:    CAN_TX_TRACK_RANGE_ACCEL_29,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_29(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_29();
  rc = ((vuint16) ESR_Track29.ESR_Track29.CAN_TX_TRACK_RANGE_ACCEL_29_0);
  rc |= ((vuint16) ESR_Track29.ESR_Track29.CAN_TX_TRACK_RANGE_ACCEL_29_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_29();
  return rc;
}


#endif

/* Handle:  474,Name:     CAN_TX_TRACK_RANGE_RATE_29,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_29(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_29();
  rc = ((vuint16) ESR_Track29.ESR_Track29.CAN_TX_TRACK_RANGE_RATE_29_0);
  rc |= ((vuint16) ESR_Track29.ESR_Track29.CAN_TX_TRACK_RANGE_RATE_29_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_29();
  return rc;
}


#endif

/* Handle:  479,Name:          CAN_TX_TRACK_ANGLE_28,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_28(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_28();
  rc = ((vuint16) ESR_Track28.ESR_Track28.CAN_TX_TRACK_ANGLE_28_0);
  rc |= ((vuint16) ESR_Track28.ESR_Track28.CAN_TX_TRACK_ANGLE_28_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_28();
  return rc;
}


#endif

/* Handle:  481,Name:          CAN_TX_TRACK_RANGE_28,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_28(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_28();
  rc = ((vuint16) ESR_Track28.ESR_Track28.CAN_TX_TRACK_RANGE_28_0);
  rc |= ((vuint16) ESR_Track28.ESR_Track28.CAN_TX_TRACK_RANGE_28_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_28();
  return rc;
}


#endif

/* Handle:  482,Name:    CAN_TX_TRACK_RANGE_ACCEL_28,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_28(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_28();
  rc = ((vuint16) ESR_Track28.ESR_Track28.CAN_TX_TRACK_RANGE_ACCEL_28_0);
  rc |= ((vuint16) ESR_Track28.ESR_Track28.CAN_TX_TRACK_RANGE_ACCEL_28_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_28();
  return rc;
}


#endif

/* Handle:  486,Name:     CAN_TX_TRACK_RANGE_RATE_28,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_28(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_28();
  rc = ((vuint16) ESR_Track28.ESR_Track28.CAN_TX_TRACK_RANGE_RATE_28_0);
  rc |= ((vuint16) ESR_Track28.ESR_Track28.CAN_TX_TRACK_RANGE_RATE_28_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_28();
  return rc;
}


#endif

/* Handle:  491,Name:          CAN_TX_TRACK_ANGLE_27,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_27(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_27();
  rc = ((vuint16) ESR_Track27.ESR_Track27.CAN_TX_TRACK_ANGLE_27_0);
  rc |= ((vuint16) ESR_Track27.ESR_Track27.CAN_TX_TRACK_ANGLE_27_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_27();
  return rc;
}


#endif

/* Handle:  493,Name:          CAN_TX_TRACK_RANGE_27,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_27(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_27();
  rc = ((vuint16) ESR_Track27.ESR_Track27.CAN_TX_TRACK_RANGE_27_0);
  rc |= ((vuint16) ESR_Track27.ESR_Track27.CAN_TX_TRACK_RANGE_27_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_27();
  return rc;
}


#endif

/* Handle:  494,Name:    CAN_TX_TRACK_RANGE_ACCEL_27,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_27(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_27();
  rc = ((vuint16) ESR_Track27.ESR_Track27.CAN_TX_TRACK_RANGE_ACCEL_27_0);
  rc |= ((vuint16) ESR_Track27.ESR_Track27.CAN_TX_TRACK_RANGE_ACCEL_27_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_27();
  return rc;
}


#endif

/* Handle:  498,Name:     CAN_TX_TRACK_RANGE_RATE_27,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_27(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_27();
  rc = ((vuint16) ESR_Track27.ESR_Track27.CAN_TX_TRACK_RANGE_RATE_27_0);
  rc |= ((vuint16) ESR_Track27.ESR_Track27.CAN_TX_TRACK_RANGE_RATE_27_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_27();
  return rc;
}


#endif

/* Handle:  503,Name:          CAN_TX_TRACK_ANGLE_26,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_26(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_26();
  rc = ((vuint16) ESR_Track26.ESR_Track26.CAN_TX_TRACK_ANGLE_26_0);
  rc |= ((vuint16) ESR_Track26.ESR_Track26.CAN_TX_TRACK_ANGLE_26_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_26();
  return rc;
}


#endif

/* Handle:  505,Name:          CAN_TX_TRACK_RANGE_26,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_26(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_26();
  rc = ((vuint16) ESR_Track26.ESR_Track26.CAN_TX_TRACK_RANGE_26_0);
  rc |= ((vuint16) ESR_Track26.ESR_Track26.CAN_TX_TRACK_RANGE_26_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_26();
  return rc;
}


#endif

/* Handle:  506,Name:    CAN_TX_TRACK_RANGE_ACCEL_26,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_26(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_26();
  rc = ((vuint16) ESR_Track26.ESR_Track26.CAN_TX_TRACK_RANGE_ACCEL_26_0);
  rc |= ((vuint16) ESR_Track26.ESR_Track26.CAN_TX_TRACK_RANGE_ACCEL_26_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_26();
  return rc;
}


#endif

/* Handle:  510,Name:     CAN_TX_TRACK_RANGE_RATE_26,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_26(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_26();
  rc = ((vuint16) ESR_Track26.ESR_Track26.CAN_TX_TRACK_RANGE_RATE_26_0);
  rc |= ((vuint16) ESR_Track26.ESR_Track26.CAN_TX_TRACK_RANGE_RATE_26_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_26();
  return rc;
}


#endif

/* Handle:  515,Name:          CAN_TX_TRACK_ANGLE_25,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_25(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_25();
  rc = ((vuint16) ESR_Track25.ESR_Track25.CAN_TX_TRACK_ANGLE_25_0);
  rc |= ((vuint16) ESR_Track25.ESR_Track25.CAN_TX_TRACK_ANGLE_25_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_25();
  return rc;
}


#endif

/* Handle:  517,Name:          CAN_TX_TRACK_RANGE_25,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_25(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_25();
  rc = ((vuint16) ESR_Track25.ESR_Track25.CAN_TX_TRACK_RANGE_25_0);
  rc |= ((vuint16) ESR_Track25.ESR_Track25.CAN_TX_TRACK_RANGE_25_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_25();
  return rc;
}


#endif

/* Handle:  518,Name:    CAN_TX_TRACK_RANGE_ACCEL_25,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_25(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_25();
  rc = ((vuint16) ESR_Track25.ESR_Track25.CAN_TX_TRACK_RANGE_ACCEL_25_0);
  rc |= ((vuint16) ESR_Track25.ESR_Track25.CAN_TX_TRACK_RANGE_ACCEL_25_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_25();
  return rc;
}


#endif

/* Handle:  522,Name:     CAN_TX_TRACK_RANGE_RATE_25,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_25(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_25();
  rc = ((vuint16) ESR_Track25.ESR_Track25.CAN_TX_TRACK_RANGE_RATE_25_0);
  rc |= ((vuint16) ESR_Track25.ESR_Track25.CAN_TX_TRACK_RANGE_RATE_25_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_25();
  return rc;
}


#endif

/* Handle:  527,Name:          CAN_TX_TRACK_ANGLE_24,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_24(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_24();
  rc = ((vuint16) ESR_Track24.ESR_Track24.CAN_TX_TRACK_ANGLE_24_0);
  rc |= ((vuint16) ESR_Track24.ESR_Track24.CAN_TX_TRACK_ANGLE_24_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_24();
  return rc;
}


#endif

/* Handle:  529,Name:          CAN_TX_TRACK_RANGE_24,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_24(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_24();
  rc = ((vuint16) ESR_Track24.ESR_Track24.CAN_TX_TRACK_RANGE_24_0);
  rc |= ((vuint16) ESR_Track24.ESR_Track24.CAN_TX_TRACK_RANGE_24_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_24();
  return rc;
}


#endif

/* Handle:  530,Name:    CAN_TX_TRACK_RANGE_ACCEL_24,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_24(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_24();
  rc = ((vuint16) ESR_Track24.ESR_Track24.CAN_TX_TRACK_RANGE_ACCEL_24_0);
  rc |= ((vuint16) ESR_Track24.ESR_Track24.CAN_TX_TRACK_RANGE_ACCEL_24_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_24();
  return rc;
}


#endif

/* Handle:  534,Name:     CAN_TX_TRACK_RANGE_RATE_24,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_24(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_24();
  rc = ((vuint16) ESR_Track24.ESR_Track24.CAN_TX_TRACK_RANGE_RATE_24_0);
  rc |= ((vuint16) ESR_Track24.ESR_Track24.CAN_TX_TRACK_RANGE_RATE_24_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_24();
  return rc;
}


#endif

/* Handle:  539,Name:          CAN_TX_TRACK_ANGLE_23,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_23(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_23();
  rc = ((vuint16) ESR_Track23.ESR_Track23.CAN_TX_TRACK_ANGLE_23_0);
  rc |= ((vuint16) ESR_Track23.ESR_Track23.CAN_TX_TRACK_ANGLE_23_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_23();
  return rc;
}


#endif

/* Handle:  541,Name:          CAN_TX_TRACK_RANGE_23,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_23(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_23();
  rc = ((vuint16) ESR_Track23.ESR_Track23.CAN_TX_TRACK_RANGE_23_0);
  rc |= ((vuint16) ESR_Track23.ESR_Track23.CAN_TX_TRACK_RANGE_23_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_23();
  return rc;
}


#endif

/* Handle:  542,Name:    CAN_TX_TRACK_RANGE_ACCEL_23,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_23(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_23();
  rc = ((vuint16) ESR_Track23.ESR_Track23.CAN_TX_TRACK_RANGE_ACCEL_23_0);
  rc |= ((vuint16) ESR_Track23.ESR_Track23.CAN_TX_TRACK_RANGE_ACCEL_23_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_23();
  return rc;
}


#endif

/* Handle:  546,Name:     CAN_TX_TRACK_RANGE_RATE_23,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_23(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_23();
  rc = ((vuint16) ESR_Track23.ESR_Track23.CAN_TX_TRACK_RANGE_RATE_23_0);
  rc |= ((vuint16) ESR_Track23.ESR_Track23.CAN_TX_TRACK_RANGE_RATE_23_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_23();
  return rc;
}


#endif

/* Handle:  551,Name:          CAN_TX_TRACK_ANGLE_22,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_22(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_22();
  rc = ((vuint16) ESR_Track22.ESR_Track22.CAN_TX_TRACK_ANGLE_22_0);
  rc |= ((vuint16) ESR_Track22.ESR_Track22.CAN_TX_TRACK_ANGLE_22_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_22();
  return rc;
}


#endif

/* Handle:  553,Name:          CAN_TX_TRACK_RANGE_22,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_22(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_22();
  rc = ((vuint16) ESR_Track22.ESR_Track22.CAN_TX_TRACK_RANGE_22_0);
  rc |= ((vuint16) ESR_Track22.ESR_Track22.CAN_TX_TRACK_RANGE_22_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_22();
  return rc;
}


#endif

/* Handle:  554,Name:    CAN_TX_TRACK_RANGE_ACCEL_22,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_22(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_22();
  rc = ((vuint16) ESR_Track22.ESR_Track22.CAN_TX_TRACK_RANGE_ACCEL_22_0);
  rc |= ((vuint16) ESR_Track22.ESR_Track22.CAN_TX_TRACK_RANGE_ACCEL_22_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_22();
  return rc;
}


#endif

/* Handle:  558,Name:     CAN_TX_TRACK_RANGE_RATE_22,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_22(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_22();
  rc = ((vuint16) ESR_Track22.ESR_Track22.CAN_TX_TRACK_RANGE_RATE_22_0);
  rc |= ((vuint16) ESR_Track22.ESR_Track22.CAN_TX_TRACK_RANGE_RATE_22_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_22();
  return rc;
}


#endif

/* Handle:  563,Name:          CAN_TX_TRACK_ANGLE_21,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_21(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_21();
  rc = ((vuint16) ESR_Track21.ESR_Track21.CAN_TX_TRACK_ANGLE_21_0);
  rc |= ((vuint16) ESR_Track21.ESR_Track21.CAN_TX_TRACK_ANGLE_21_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_21();
  return rc;
}


#endif

/* Handle:  565,Name:          CAN_TX_TRACK_RANGE_21,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_21(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_21();
  rc = ((vuint16) ESR_Track21.ESR_Track21.CAN_TX_TRACK_RANGE_21_0);
  rc |= ((vuint16) ESR_Track21.ESR_Track21.CAN_TX_TRACK_RANGE_21_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_21();
  return rc;
}


#endif

/* Handle:  566,Name:    CAN_TX_TRACK_RANGE_ACCEL_21,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_21(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_21();
  rc = ((vuint16) ESR_Track21.ESR_Track21.CAN_TX_TRACK_RANGE_ACCEL_21_0);
  rc |= ((vuint16) ESR_Track21.ESR_Track21.CAN_TX_TRACK_RANGE_ACCEL_21_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_21();
  return rc;
}


#endif

/* Handle:  570,Name:     CAN_TX_TRACK_RANGE_RATE_21,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_21(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_21();
  rc = ((vuint16) ESR_Track21.ESR_Track21.CAN_TX_TRACK_RANGE_RATE_21_0);
  rc |= ((vuint16) ESR_Track21.ESR_Track21.CAN_TX_TRACK_RANGE_RATE_21_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_21();
  return rc;
}


#endif

/* Handle:  575,Name:          CAN_TX_TRACK_ANGLE_20,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_20(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_20();
  rc = ((vuint16) ESR_Track20.ESR_Track20.CAN_TX_TRACK_ANGLE_20_0);
  rc |= ((vuint16) ESR_Track20.ESR_Track20.CAN_TX_TRACK_ANGLE_20_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_20();
  return rc;
}


#endif

/* Handle:  577,Name:          CAN_TX_TRACK_RANGE_20,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_20(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_20();
  rc = ((vuint16) ESR_Track20.ESR_Track20.CAN_TX_TRACK_RANGE_20_0);
  rc |= ((vuint16) ESR_Track20.ESR_Track20.CAN_TX_TRACK_RANGE_20_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_20();
  return rc;
}


#endif

/* Handle:  578,Name:    CAN_TX_TRACK_RANGE_ACCEL_20,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_20(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_20();
  rc = ((vuint16) ESR_Track20.ESR_Track20.CAN_TX_TRACK_RANGE_ACCEL_20_0);
  rc |= ((vuint16) ESR_Track20.ESR_Track20.CAN_TX_TRACK_RANGE_ACCEL_20_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_20();
  return rc;
}


#endif

/* Handle:  582,Name:     CAN_TX_TRACK_RANGE_RATE_20,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_20(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_20();
  rc = ((vuint16) ESR_Track20.ESR_Track20.CAN_TX_TRACK_RANGE_RATE_20_0);
  rc |= ((vuint16) ESR_Track20.ESR_Track20.CAN_TX_TRACK_RANGE_RATE_20_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_20();
  return rc;
}


#endif

/* Handle:  587,Name:          CAN_TX_TRACK_ANGLE_19,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_19(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_19();
  rc = ((vuint16) ESR_Track19.ESR_Track19.CAN_TX_TRACK_ANGLE_19_0);
  rc |= ((vuint16) ESR_Track19.ESR_Track19.CAN_TX_TRACK_ANGLE_19_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_19();
  return rc;
}


#endif

/* Handle:  589,Name:          CAN_TX_TRACK_RANGE_19,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_19(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_19();
  rc = ((vuint16) ESR_Track19.ESR_Track19.CAN_TX_TRACK_RANGE_19_0);
  rc |= ((vuint16) ESR_Track19.ESR_Track19.CAN_TX_TRACK_RANGE_19_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_19();
  return rc;
}


#endif

/* Handle:  590,Name:    CAN_TX_TRACK_RANGE_ACCEL_19,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_19(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_19();
  rc = ((vuint16) ESR_Track19.ESR_Track19.CAN_TX_TRACK_RANGE_ACCEL_19_0);
  rc |= ((vuint16) ESR_Track19.ESR_Track19.CAN_TX_TRACK_RANGE_ACCEL_19_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_19();
  return rc;
}


#endif

/* Handle:  594,Name:     CAN_TX_TRACK_RANGE_RATE_19,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_19(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_19();
  rc = ((vuint16) ESR_Track19.ESR_Track19.CAN_TX_TRACK_RANGE_RATE_19_0);
  rc |= ((vuint16) ESR_Track19.ESR_Track19.CAN_TX_TRACK_RANGE_RATE_19_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_19();
  return rc;
}


#endif

/* Handle:  599,Name:          CAN_TX_TRACK_ANGLE_18,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_18(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_18();
  rc = ((vuint16) ESR_Track18.ESR_Track18.CAN_TX_TRACK_ANGLE_18_0);
  rc |= ((vuint16) ESR_Track18.ESR_Track18.CAN_TX_TRACK_ANGLE_18_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_18();
  return rc;
}


#endif

/* Handle:  601,Name:          CAN_TX_TRACK_RANGE_18,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_18(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_18();
  rc = ((vuint16) ESR_Track18.ESR_Track18.CAN_TX_TRACK_RANGE_18_0);
  rc |= ((vuint16) ESR_Track18.ESR_Track18.CAN_TX_TRACK_RANGE_18_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_18();
  return rc;
}


#endif

/* Handle:  602,Name:    CAN_TX_TRACK_RANGE_ACCEL_18,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_18(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_18();
  rc = ((vuint16) ESR_Track18.ESR_Track18.CAN_TX_TRACK_RANGE_ACCEL_18_0);
  rc |= ((vuint16) ESR_Track18.ESR_Track18.CAN_TX_TRACK_RANGE_ACCEL_18_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_18();
  return rc;
}


#endif

/* Handle:  606,Name:     CAN_TX_TRACK_RANGE_RATE_18,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_18(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_18();
  rc = ((vuint16) ESR_Track18.ESR_Track18.CAN_TX_TRACK_RANGE_RATE_18_0);
  rc |= ((vuint16) ESR_Track18.ESR_Track18.CAN_TX_TRACK_RANGE_RATE_18_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_18();
  return rc;
}


#endif

/* Handle:  611,Name:          CAN_TX_TRACK_ANGLE_17,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_17(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_17();
  rc = ((vuint16) ESR_Track17.ESR_Track17.CAN_TX_TRACK_ANGLE_17_0);
  rc |= ((vuint16) ESR_Track17.ESR_Track17.CAN_TX_TRACK_ANGLE_17_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_17();
  return rc;
}


#endif

/* Handle:  613,Name:          CAN_TX_TRACK_RANGE_17,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_17(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_17();
  rc = ((vuint16) ESR_Track17.ESR_Track17.CAN_TX_TRACK_RANGE_17_0);
  rc |= ((vuint16) ESR_Track17.ESR_Track17.CAN_TX_TRACK_RANGE_17_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_17();
  return rc;
}


#endif

/* Handle:  614,Name:    CAN_TX_TRACK_RANGE_ACCEL_17,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_17(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_17();
  rc = ((vuint16) ESR_Track17.ESR_Track17.CAN_TX_TRACK_RANGE_ACCEL_17_0);
  rc |= ((vuint16) ESR_Track17.ESR_Track17.CAN_TX_TRACK_RANGE_ACCEL_17_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_17();
  return rc;
}


#endif

/* Handle:  618,Name:     CAN_TX_TRACK_RANGE_RATE_17,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_17(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_17();
  rc = ((vuint16) ESR_Track17.ESR_Track17.CAN_TX_TRACK_RANGE_RATE_17_0);
  rc |= ((vuint16) ESR_Track17.ESR_Track17.CAN_TX_TRACK_RANGE_RATE_17_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_17();
  return rc;
}


#endif

/* Handle:  623,Name:          CAN_TX_TRACK_ANGLE_16,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_16(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_16();
  rc = ((vuint16) ESR_Track16.ESR_Track16.CAN_TX_TRACK_ANGLE_16_0);
  rc |= ((vuint16) ESR_Track16.ESR_Track16.CAN_TX_TRACK_ANGLE_16_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_16();
  return rc;
}


#endif

/* Handle:  625,Name:          CAN_TX_TRACK_RANGE_16,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_16(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_16();
  rc = ((vuint16) ESR_Track16.ESR_Track16.CAN_TX_TRACK_RANGE_16_0);
  rc |= ((vuint16) ESR_Track16.ESR_Track16.CAN_TX_TRACK_RANGE_16_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_16();
  return rc;
}


#endif

/* Handle:  626,Name:    CAN_TX_TRACK_RANGE_ACCEL_16,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_16(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_16();
  rc = ((vuint16) ESR_Track16.ESR_Track16.CAN_TX_TRACK_RANGE_ACCEL_16_0);
  rc |= ((vuint16) ESR_Track16.ESR_Track16.CAN_TX_TRACK_RANGE_ACCEL_16_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_16();
  return rc;
}


#endif

/* Handle:  630,Name:     CAN_TX_TRACK_RANGE_RATE_16,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_16(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_16();
  rc = ((vuint16) ESR_Track16.ESR_Track16.CAN_TX_TRACK_RANGE_RATE_16_0);
  rc |= ((vuint16) ESR_Track16.ESR_Track16.CAN_TX_TRACK_RANGE_RATE_16_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_16();
  return rc;
}


#endif

/* Handle:  635,Name:          CAN_TX_TRACK_ANGLE_15,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_15(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_15();
  rc = ((vuint16) ESR_Track15.ESR_Track15.CAN_TX_TRACK_ANGLE_15_0);
  rc |= ((vuint16) ESR_Track15.ESR_Track15.CAN_TX_TRACK_ANGLE_15_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_15();
  return rc;
}


#endif

/* Handle:  637,Name:          CAN_TX_TRACK_RANGE_15,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_15(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_15();
  rc = ((vuint16) ESR_Track15.ESR_Track15.CAN_TX_TRACK_RANGE_15_0);
  rc |= ((vuint16) ESR_Track15.ESR_Track15.CAN_TX_TRACK_RANGE_15_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_15();
  return rc;
}


#endif

/* Handle:  638,Name:    CAN_TX_TRACK_RANGE_ACCEL_15,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_15(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_15();
  rc = ((vuint16) ESR_Track15.ESR_Track15.CAN_TX_TRACK_RANGE_ACCEL_15_0);
  rc |= ((vuint16) ESR_Track15.ESR_Track15.CAN_TX_TRACK_RANGE_ACCEL_15_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_15();
  return rc;
}


#endif

/* Handle:  642,Name:     CAN_TX_TRACK_RANGE_RATE_15,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_15(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_15();
  rc = ((vuint16) ESR_Track15.ESR_Track15.CAN_TX_TRACK_RANGE_RATE_15_0);
  rc |= ((vuint16) ESR_Track15.ESR_Track15.CAN_TX_TRACK_RANGE_RATE_15_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_15();
  return rc;
}


#endif

/* Handle:  647,Name:          CAN_TX_TRACK_ANGLE_14,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_14(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_14();
  rc = ((vuint16) ESR_Track14.ESR_Track14.CAN_TX_TRACK_ANGLE_14_0);
  rc |= ((vuint16) ESR_Track14.ESR_Track14.CAN_TX_TRACK_ANGLE_14_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_14();
  return rc;
}


#endif

/* Handle:  649,Name:          CAN_TX_TRACK_RANGE_14,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_14(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_14();
  rc = ((vuint16) ESR_Track14.ESR_Track14.CAN_TX_TRACK_RANGE_14_0);
  rc |= ((vuint16) ESR_Track14.ESR_Track14.CAN_TX_TRACK_RANGE_14_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_14();
  return rc;
}


#endif

/* Handle:  650,Name:    CAN_TX_TRACK_RANGE_ACCEL_14,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_14(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_14();
  rc = ((vuint16) ESR_Track14.ESR_Track14.CAN_TX_TRACK_RANGE_ACCEL_14_0);
  rc |= ((vuint16) ESR_Track14.ESR_Track14.CAN_TX_TRACK_RANGE_ACCEL_14_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_14();
  return rc;
}


#endif

/* Handle:  654,Name:     CAN_TX_TRACK_RANGE_RATE_14,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_14(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_14();
  rc = ((vuint16) ESR_Track14.ESR_Track14.CAN_TX_TRACK_RANGE_RATE_14_0);
  rc |= ((vuint16) ESR_Track14.ESR_Track14.CAN_TX_TRACK_RANGE_RATE_14_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_14();
  return rc;
}


#endif

/* Handle:  659,Name:          CAN_TX_TRACK_ANGLE_13,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_13(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_13();
  rc = ((vuint16) ESR_Track13.ESR_Track13.CAN_TX_TRACK_ANGLE_13_0);
  rc |= ((vuint16) ESR_Track13.ESR_Track13.CAN_TX_TRACK_ANGLE_13_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_13();
  return rc;
}


#endif

/* Handle:  661,Name:          CAN_TX_TRACK_RANGE_13,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_13(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_13();
  rc = ((vuint16) ESR_Track13.ESR_Track13.CAN_TX_TRACK_RANGE_13_0);
  rc |= ((vuint16) ESR_Track13.ESR_Track13.CAN_TX_TRACK_RANGE_13_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_13();
  return rc;
}


#endif

/* Handle:  662,Name:    CAN_TX_TRACK_RANGE_ACCEL_13,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_13(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_13();
  rc = ((vuint16) ESR_Track13.ESR_Track13.CAN_TX_TRACK_RANGE_ACCEL_13_0);
  rc |= ((vuint16) ESR_Track13.ESR_Track13.CAN_TX_TRACK_RANGE_ACCEL_13_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_13();
  return rc;
}


#endif

/* Handle:  666,Name:     CAN_TX_TRACK_RANGE_RATE_13,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_13(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_13();
  rc = ((vuint16) ESR_Track13.ESR_Track13.CAN_TX_TRACK_RANGE_RATE_13_0);
  rc |= ((vuint16) ESR_Track13.ESR_Track13.CAN_TX_TRACK_RANGE_RATE_13_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_13();
  return rc;
}


#endif

/* Handle:  671,Name:          CAN_TX_TRACK_ANGLE_12,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_12(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_12();
  rc = ((vuint16) ESR_Track12.ESR_Track12.CAN_TX_TRACK_ANGLE_12_0);
  rc |= ((vuint16) ESR_Track12.ESR_Track12.CAN_TX_TRACK_ANGLE_12_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_12();
  return rc;
}


#endif

/* Handle:  673,Name:          CAN_TX_TRACK_RANGE_12,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_12(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_12();
  rc = ((vuint16) ESR_Track12.ESR_Track12.CAN_TX_TRACK_RANGE_12_0);
  rc |= ((vuint16) ESR_Track12.ESR_Track12.CAN_TX_TRACK_RANGE_12_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_12();
  return rc;
}


#endif

/* Handle:  674,Name:    CAN_TX_TRACK_RANGE_ACCEL_12,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_12(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_12();
  rc = ((vuint16) ESR_Track12.ESR_Track12.CAN_TX_TRACK_RANGE_ACCEL_12_0);
  rc |= ((vuint16) ESR_Track12.ESR_Track12.CAN_TX_TRACK_RANGE_ACCEL_12_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_12();
  return rc;
}


#endif

/* Handle:  678,Name:     CAN_TX_TRACK_RANGE_RATE_12,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_12(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_12();
  rc = ((vuint16) ESR_Track12.ESR_Track12.CAN_TX_TRACK_RANGE_RATE_12_0);
  rc |= ((vuint16) ESR_Track12.ESR_Track12.CAN_TX_TRACK_RANGE_RATE_12_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_12();
  return rc;
}


#endif

/* Handle:  683,Name:          CAN_TX_TRACK_ANGLE_11,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_11(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_11();
  rc = ((vuint16) ESR_Track11.ESR_Track11.CAN_TX_TRACK_ANGLE_11_0);
  rc |= ((vuint16) ESR_Track11.ESR_Track11.CAN_TX_TRACK_ANGLE_11_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_11();
  return rc;
}


#endif

/* Handle:  685,Name:          CAN_TX_TRACK_RANGE_11,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_11(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_11();
  rc = ((vuint16) ESR_Track11.ESR_Track11.CAN_TX_TRACK_RANGE_11_0);
  rc |= ((vuint16) ESR_Track11.ESR_Track11.CAN_TX_TRACK_RANGE_11_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_11();
  return rc;
}


#endif

/* Handle:  686,Name:    CAN_TX_TRACK_RANGE_ACCEL_11,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_11(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_11();
  rc = ((vuint16) ESR_Track11.ESR_Track11.CAN_TX_TRACK_RANGE_ACCEL_11_0);
  rc |= ((vuint16) ESR_Track11.ESR_Track11.CAN_TX_TRACK_RANGE_ACCEL_11_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_11();
  return rc;
}


#endif

/* Handle:  690,Name:     CAN_TX_TRACK_RANGE_RATE_11,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_11(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_11();
  rc = ((vuint16) ESR_Track11.ESR_Track11.CAN_TX_TRACK_RANGE_RATE_11_0);
  rc |= ((vuint16) ESR_Track11.ESR_Track11.CAN_TX_TRACK_RANGE_RATE_11_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_11();
  return rc;
}


#endif

/* Handle:  695,Name:          CAN_TX_TRACK_ANGLE_10,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_10(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_10();
  rc = ((vuint16) ESR_Track10.ESR_Track10.CAN_TX_TRACK_ANGLE_10_0);
  rc |= ((vuint16) ESR_Track10.ESR_Track10.CAN_TX_TRACK_ANGLE_10_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_10();
  return rc;
}


#endif

/* Handle:  697,Name:          CAN_TX_TRACK_RANGE_10,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_10(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_10();
  rc = ((vuint16) ESR_Track10.ESR_Track10.CAN_TX_TRACK_RANGE_10_0);
  rc |= ((vuint16) ESR_Track10.ESR_Track10.CAN_TX_TRACK_RANGE_10_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_10();
  return rc;
}


#endif

/* Handle:  698,Name:    CAN_TX_TRACK_RANGE_ACCEL_10,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_10(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_10();
  rc = ((vuint16) ESR_Track10.ESR_Track10.CAN_TX_TRACK_RANGE_ACCEL_10_0);
  rc |= ((vuint16) ESR_Track10.ESR_Track10.CAN_TX_TRACK_RANGE_ACCEL_10_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_10();
  return rc;
}


#endif

/* Handle:  702,Name:     CAN_TX_TRACK_RANGE_RATE_10,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_10(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_10();
  rc = ((vuint16) ESR_Track10.ESR_Track10.CAN_TX_TRACK_RANGE_RATE_10_0);
  rc |= ((vuint16) ESR_Track10.ESR_Track10.CAN_TX_TRACK_RANGE_RATE_10_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_10();
  return rc;
}


#endif

/* Handle:  707,Name:          CAN_TX_TRACK_ANGLE_09,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_09(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_09();
  rc = ((vuint16) ESR_Track09.ESR_Track09.CAN_TX_TRACK_ANGLE_09_0);
  rc |= ((vuint16) ESR_Track09.ESR_Track09.CAN_TX_TRACK_ANGLE_09_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_09();
  return rc;
}


#endif

/* Handle:  709,Name:          CAN_TX_TRACK_RANGE_09,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_09(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_09();
  rc = ((vuint16) ESR_Track09.ESR_Track09.CAN_TX_TRACK_RANGE_09_0);
  rc |= ((vuint16) ESR_Track09.ESR_Track09.CAN_TX_TRACK_RANGE_09_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_09();
  return rc;
}


#endif

/* Handle:  710,Name:    CAN_TX_TRACK_RANGE_ACCEL_09,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_09(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_09();
  rc = ((vuint16) ESR_Track09.ESR_Track09.CAN_TX_TRACK_RANGE_ACCEL_09_0);
  rc |= ((vuint16) ESR_Track09.ESR_Track09.CAN_TX_TRACK_RANGE_ACCEL_09_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_09();
  return rc;
}


#endif

/* Handle:  714,Name:     CAN_TX_TRACK_RANGE_RATE_09,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_09(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_09();
  rc = ((vuint16) ESR_Track09.ESR_Track09.CAN_TX_TRACK_RANGE_RATE_09_0);
  rc |= ((vuint16) ESR_Track09.ESR_Track09.CAN_TX_TRACK_RANGE_RATE_09_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_09();
  return rc;
}


#endif

/* Handle:  719,Name:          CAN_TX_TRACK_ANGLE_08,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_08(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_08();
  rc = ((vuint16) ESR_Track08.ESR_Track08.CAN_TX_TRACK_ANGLE_08_0);
  rc |= ((vuint16) ESR_Track08.ESR_Track08.CAN_TX_TRACK_ANGLE_08_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_08();
  return rc;
}


#endif

/* Handle:  721,Name:          CAN_TX_TRACK_RANGE_08,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_08(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_08();
  rc = ((vuint16) ESR_Track08.ESR_Track08.CAN_TX_TRACK_RANGE_08_0);
  rc |= ((vuint16) ESR_Track08.ESR_Track08.CAN_TX_TRACK_RANGE_08_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_08();
  return rc;
}


#endif

/* Handle:  722,Name:    CAN_TX_TRACK_RANGE_ACCEL_08,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_08(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_08();
  rc = ((vuint16) ESR_Track08.ESR_Track08.CAN_TX_TRACK_RANGE_ACCEL_08_0);
  rc |= ((vuint16) ESR_Track08.ESR_Track08.CAN_TX_TRACK_RANGE_ACCEL_08_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_08();
  return rc;
}


#endif

/* Handle:  726,Name:     CAN_TX_TRACK_RANGE_RATE_08,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_08(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_08();
  rc = ((vuint16) ESR_Track08.ESR_Track08.CAN_TX_TRACK_RANGE_RATE_08_0);
  rc |= ((vuint16) ESR_Track08.ESR_Track08.CAN_TX_TRACK_RANGE_RATE_08_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_08();
  return rc;
}


#endif

/* Handle:  731,Name:          CAN_TX_TRACK_ANGLE_07,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_07(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_07();
  rc = ((vuint16) ESR_Track07.ESR_Track07.CAN_TX_TRACK_ANGLE_07_0);
  rc |= ((vuint16) ESR_Track07.ESR_Track07.CAN_TX_TRACK_ANGLE_07_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_07();
  return rc;
}


#endif

/* Handle:  733,Name:          CAN_TX_TRACK_RANGE_07,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_07(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_07();
  rc = ((vuint16) ESR_Track07.ESR_Track07.CAN_TX_TRACK_RANGE_07_0);
  rc |= ((vuint16) ESR_Track07.ESR_Track07.CAN_TX_TRACK_RANGE_07_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_07();
  return rc;
}


#endif

/* Handle:  734,Name:    CAN_TX_TRACK_RANGE_ACCEL_07,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_07(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_07();
  rc = ((vuint16) ESR_Track07.ESR_Track07.CAN_TX_TRACK_RANGE_ACCEL_07_0);
  rc |= ((vuint16) ESR_Track07.ESR_Track07.CAN_TX_TRACK_RANGE_ACCEL_07_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_07();
  return rc;
}


#endif

/* Handle:  738,Name:     CAN_TX_TRACK_RANGE_RATE_07,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_07(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_07();
  rc = ((vuint16) ESR_Track07.ESR_Track07.CAN_TX_TRACK_RANGE_RATE_07_0);
  rc |= ((vuint16) ESR_Track07.ESR_Track07.CAN_TX_TRACK_RANGE_RATE_07_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_07();
  return rc;
}


#endif

/* Handle:  743,Name:          CAN_TX_TRACK_ANGLE_06,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_06(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_06();
  rc = ((vuint16) ESR_Track06.ESR_Track06.CAN_TX_TRACK_ANGLE_06_0);
  rc |= ((vuint16) ESR_Track06.ESR_Track06.CAN_TX_TRACK_ANGLE_06_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_06();
  return rc;
}


#endif

/* Handle:  745,Name:          CAN_TX_TRACK_RANGE_06,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_06(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_06();
  rc = ((vuint16) ESR_Track06.ESR_Track06.CAN_TX_TRACK_RANGE_06_0);
  rc |= ((vuint16) ESR_Track06.ESR_Track06.CAN_TX_TRACK_RANGE_06_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_06();
  return rc;
}


#endif

/* Handle:  746,Name:    CAN_TX_TRACK_RANGE_ACCEL_06,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_06(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_06();
  rc = ((vuint16) ESR_Track06.ESR_Track06.CAN_TX_TRACK_RANGE_ACCEL_06_0);
  rc |= ((vuint16) ESR_Track06.ESR_Track06.CAN_TX_TRACK_RANGE_ACCEL_06_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_06();
  return rc;
}


#endif

/* Handle:  750,Name:     CAN_TX_TRACK_RANGE_RATE_06,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_06(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_06();
  rc = ((vuint16) ESR_Track06.ESR_Track06.CAN_TX_TRACK_RANGE_RATE_06_0);
  rc |= ((vuint16) ESR_Track06.ESR_Track06.CAN_TX_TRACK_RANGE_RATE_06_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_06();
  return rc;
}


#endif

/* Handle:  755,Name:          CAN_TX_TRACK_ANGLE_05,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_05(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_05();
  rc = ((vuint16) ESR_Track05.ESR_Track05.CAN_TX_TRACK_ANGLE_05_0);
  rc |= ((vuint16) ESR_Track05.ESR_Track05.CAN_TX_TRACK_ANGLE_05_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_05();
  return rc;
}


#endif

/* Handle:  757,Name:          CAN_TX_TRACK_RANGE_05,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_05(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_05();
  rc = ((vuint16) ESR_Track05.ESR_Track05.CAN_TX_TRACK_RANGE_05_0);
  rc |= ((vuint16) ESR_Track05.ESR_Track05.CAN_TX_TRACK_RANGE_05_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_05();
  return rc;
}


#endif

/* Handle:  758,Name:    CAN_TX_TRACK_RANGE_ACCEL_05,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_05(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_05();
  rc = ((vuint16) ESR_Track05.ESR_Track05.CAN_TX_TRACK_RANGE_ACCEL_05_0);
  rc |= ((vuint16) ESR_Track05.ESR_Track05.CAN_TX_TRACK_RANGE_ACCEL_05_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_05();
  return rc;
}


#endif

/* Handle:  762,Name:     CAN_TX_TRACK_RANGE_RATE_05,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_05(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_05();
  rc = ((vuint16) ESR_Track05.ESR_Track05.CAN_TX_TRACK_RANGE_RATE_05_0);
  rc |= ((vuint16) ESR_Track05.ESR_Track05.CAN_TX_TRACK_RANGE_RATE_05_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_05();
  return rc;
}


#endif

/* Handle:  767,Name:          CAN_TX_TRACK_ANGLE_04,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_04(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_04();
  rc = ((vuint16) ESR_Track04.ESR_Track04.CAN_TX_TRACK_ANGLE_04_0);
  rc |= ((vuint16) ESR_Track04.ESR_Track04.CAN_TX_TRACK_ANGLE_04_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_04();
  return rc;
}


#endif

/* Handle:  769,Name:          CAN_TX_TRACK_RANGE_04,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_04(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_04();
  rc = ((vuint16) ESR_Track04.ESR_Track04.CAN_TX_TRACK_RANGE_04_0);
  rc |= ((vuint16) ESR_Track04.ESR_Track04.CAN_TX_TRACK_RANGE_04_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_04();
  return rc;
}


#endif

/* Handle:  770,Name:    CAN_TX_TRACK_RANGE_ACCEL_04,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_04(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_04();
  rc = ((vuint16) ESR_Track04.ESR_Track04.CAN_TX_TRACK_RANGE_ACCEL_04_0);
  rc |= ((vuint16) ESR_Track04.ESR_Track04.CAN_TX_TRACK_RANGE_ACCEL_04_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_04();
  return rc;
}


#endif

/* Handle:  774,Name:     CAN_TX_TRACK_RANGE_RATE_04,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_04(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_04();
  rc = ((vuint16) ESR_Track04.ESR_Track04.CAN_TX_TRACK_RANGE_RATE_04_0);
  rc |= ((vuint16) ESR_Track04.ESR_Track04.CAN_TX_TRACK_RANGE_RATE_04_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_04();
  return rc;
}


#endif

/* Handle:  779,Name:          CAN_TX_TRACK_ANGLE_03,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_03(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_03();
  rc = ((vuint16) ESR_Track03.ESR_Track03.CAN_TX_TRACK_ANGLE_03_0);
  rc |= ((vuint16) ESR_Track03.ESR_Track03.CAN_TX_TRACK_ANGLE_03_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_03();
  return rc;
}


#endif

/* Handle:  781,Name:          CAN_TX_TRACK_RANGE_03,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_03(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_03();
  rc = ((vuint16) ESR_Track03.ESR_Track03.CAN_TX_TRACK_RANGE_03_0);
  rc |= ((vuint16) ESR_Track03.ESR_Track03.CAN_TX_TRACK_RANGE_03_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_03();
  return rc;
}


#endif

/* Handle:  782,Name:    CAN_TX_TRACK_RANGE_ACCEL_03,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_03(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_03();
  rc = ((vuint16) ESR_Track03.ESR_Track03.CAN_TX_TRACK_RANGE_ACCEL_03_0);
  rc |= ((vuint16) ESR_Track03.ESR_Track03.CAN_TX_TRACK_RANGE_ACCEL_03_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_03();
  return rc;
}


#endif

/* Handle:  786,Name:     CAN_TX_TRACK_RANGE_RATE_03,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_03(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_03();
  rc = ((vuint16) ESR_Track03.ESR_Track03.CAN_TX_TRACK_RANGE_RATE_03_0);
  rc |= ((vuint16) ESR_Track03.ESR_Track03.CAN_TX_TRACK_RANGE_RATE_03_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_03();
  return rc;
}


#endif

/* Handle:  791,Name:          CAN_TX_TRACK_ANGLE_02,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_02(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_02();
  rc = ((vuint16) ESR_Track02.ESR_Track02.CAN_TX_TRACK_ANGLE_02_0);
  rc |= ((vuint16) ESR_Track02.ESR_Track02.CAN_TX_TRACK_ANGLE_02_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_02();
  return rc;
}


#endif

/* Handle:  793,Name:          CAN_TX_TRACK_RANGE_02,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_02(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_02();
  rc = ((vuint16) ESR_Track02.ESR_Track02.CAN_TX_TRACK_RANGE_02_0);
  rc |= ((vuint16) ESR_Track02.ESR_Track02.CAN_TX_TRACK_RANGE_02_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_02();
  return rc;
}


#endif

/* Handle:  794,Name:    CAN_TX_TRACK_RANGE_ACCEL_02,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_02(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_02();
  rc = ((vuint16) ESR_Track02.ESR_Track02.CAN_TX_TRACK_RANGE_ACCEL_02_0);
  rc |= ((vuint16) ESR_Track02.ESR_Track02.CAN_TX_TRACK_RANGE_ACCEL_02_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_02();
  return rc;
}


#endif

/* Handle:  798,Name:     CAN_TX_TRACK_RANGE_RATE_02,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_02(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_02();
  rc = ((vuint16) ESR_Track02.ESR_Track02.CAN_TX_TRACK_RANGE_RATE_02_0);
  rc |= ((vuint16) ESR_Track02.ESR_Track02.CAN_TX_TRACK_RANGE_RATE_02_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_02();
  return rc;
}


#endif

/* Handle:  803,Name:          CAN_TX_TRACK_ANGLE_01,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_01(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_01();
  rc = ((vuint16) ESR_Track01.ESR_Track01.CAN_TX_TRACK_ANGLE_01_0);
  rc |= ((vuint16) ESR_Track01.ESR_Track01.CAN_TX_TRACK_ANGLE_01_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_01();
  return rc;
}


#endif

/* Handle:  805,Name:          CAN_TX_TRACK_RANGE_01,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_01(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_01();
  rc = ((vuint16) ESR_Track01.ESR_Track01.CAN_TX_TRACK_RANGE_01_0);
  rc |= ((vuint16) ESR_Track01.ESR_Track01.CAN_TX_TRACK_RANGE_01_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_01();
  return rc;
}


#endif

/* Handle:  806,Name:    CAN_TX_TRACK_RANGE_ACCEL_01,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_01(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_01();
  rc = ((vuint16) ESR_Track01.ESR_Track01.CAN_TX_TRACK_RANGE_ACCEL_01_0);
  rc |= ((vuint16) ESR_Track01.ESR_Track01.CAN_TX_TRACK_RANGE_ACCEL_01_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_01();
  return rc;
}


#endif

/* Handle:  810,Name:     CAN_TX_TRACK_RANGE_RATE_01,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_01(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_01();
  rc = ((vuint16) ESR_Track01.ESR_Track01.CAN_TX_TRACK_RANGE_RATE_01_0);
  rc |= ((vuint16) ESR_Track01.ESR_Track01.CAN_TX_TRACK_RANGE_RATE_01_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_01();
  return rc;
}


#endif

/* Handle:  827,Name:         CAN_TX_SW_VERSION_HOST,Size: 24,UsedBytes:  3,SingleSignal */
#ifdef IL_ENABLE_RX
vuint32 IlGetRxCAN_TX_SW_VERSION_HOST(void)
{
  vuint32 rc;
  IlEnterCriticalCAN_TX_SW_VERSION_HOST();
  rc = ((vuint32) ESR_Status3.ESR_Status3.CAN_TX_SW_VERSION_HOST_0);
  rc |= ((vuint32) ESR_Status3.ESR_Status3.CAN_TX_SW_VERSION_HOST_1) << 8;
  rc |= ((vuint32) ESR_Status3.ESR_Status3.CAN_TX_SW_VERSION_HOST_2) << 16;
  IlLeaveCriticalCAN_TX_SW_VERSION_HOST();
  return rc;
}


#endif

/* Handle:  828,Name:              CAN_TX_SERIAL_NUM,Size: 24,UsedBytes:  3,SingleSignal */
#ifdef IL_ENABLE_RX
vuint32 IlGetRxCAN_TX_SERIAL_NUM(void)
{
  vuint32 rc;
  IlEnterCriticalCAN_TX_SERIAL_NUM();
  rc = ((vuint32) ESR_Status3.ESR_Status3.CAN_TX_SERIAL_NUM_0);
  rc |= ((vuint32) ESR_Status3.ESR_Status3.CAN_TX_SERIAL_NUM_1) << 8;
  rc |= ((vuint32) ESR_Status3.ESR_Status3.CAN_TX_SERIAL_NUM_2) << 16;
  IlLeaveCriticalCAN_TX_SERIAL_NUM();
  return rc;
}


#endif

/* Handle:  832,Name:      CAN_TX_STEERING_ANGLE_ACK,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_STEERING_ANGLE_ACK(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_STEERING_ANGLE_ACK();
  rc = ((vuint16) ESR_Status2.ESR_Status2.CAN_TX_STEERING_ANGLE_ACK_0);
  rc |= ((vuint16) ESR_Status2.ESR_Status2.CAN_TX_STEERING_ANGLE_ACK_1) << 8;
  IlLeaveCriticalCAN_TX_STEERING_ANGLE_ACK();
  return rc;
}


#endif

/* Handle:  842,Name:          CAN_TX_SW_VERSION_DSP,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_SW_VERSION_DSP(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_SW_VERSION_DSP();
  rc = ((vuint16) ESR_Status2.ESR_Status2.CAN_TX_SW_VERSION_DSP_0);
  rc |= ((vuint16) ESR_Status2.ESR_Status2.CAN_TX_SW_VERSION_DSP_1) << 8;
  IlLeaveCriticalCAN_TX_SW_VERSION_DSP();
  return rc;
}


#endif

/* Handle:  843,Name:           CAN_TX_DSP_TIMESTAMP,Size:  7,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint8 IlGetRxCAN_TX_DSP_TIMESTAMP(void)
{
  vuint8 rc;
  IlEnterCriticalCAN_TX_DSP_TIMESTAMP();
  rc = ((vuint8) ESR_Status1.ESR_Status1.CAN_TX_DSP_TIMESTAMP_0);
  rc |= ((vuint8) ESR_Status1.ESR_Status1.CAN_TX_DSP_TIMESTAMP_1) << 1;
  IlLeaveCriticalCAN_TX_DSP_TIMESTAMP();
  return rc;
}


#endif

/* Handle:  845,Name:   CAN_TX_RADIUS_CURVATURE_CALC,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_RADIUS_CURVATURE_CALC(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_RADIUS_CURVATURE_CALC();
  rc = ((vuint16) ESR_Status1.ESR_Status1.CAN_TX_RADIUS_CURVATURE_CALC_0);
  rc |= ((vuint16) ESR_Status1.ESR_Status1.CAN_TX_RADIUS_CURVATURE_CALC_1) << 8;
  IlLeaveCriticalCAN_TX_RADIUS_CURVATURE_CALC();
  return rc;
}


#endif

/* Handle:  847,Name:              CAN_TX_SCAN_INDEX,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_SCAN_INDEX(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_SCAN_INDEX();
  rc = ((vuint16) ESR_Status1.ESR_Status1.CAN_TX_SCAN_INDEX_0);
  rc |= ((vuint16) ESR_Status1.ESR_Status1.CAN_TX_SCAN_INDEX_1) << 8;
  IlLeaveCriticalCAN_TX_SCAN_INDEX();
  return rc;
}


#endif

/* Handle:  848,Name:           CAN_TX_YAW_RATE_CALC,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_YAW_RATE_CALC(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_YAW_RATE_CALC();
  rc = ((vuint16) ESR_Status1.ESR_Status1.CAN_TX_YAW_RATE_CALC_0);
  rc |= ((vuint16) ESR_Status1.ESR_Status1.CAN_TX_YAW_RATE_CALC_1) << 4;
  IlLeaveCriticalCAN_TX_YAW_RATE_CALC();
  return rc;
}


#endif

/* Handle:  849,Name:      CAN_TX_VEHICLE_SPEED_CALC,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_VEHICLE_SPEED_CALC(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_VEHICLE_SPEED_CALC();
  rc = ((vuint16) ESR_Status1.ESR_Status1.CAN_TX_VEHICLE_SPEED_CALC_0);
  rc |= ((vuint16) ESR_Status1.ESR_Status1.CAN_TX_VEHICLE_SPEED_CALC_1) << 8;
  IlLeaveCriticalCAN_TX_VEHICLE_SPEED_CALC();
  return rc;
}


#endif



/* -----------------------------------------------------------------------------
    &&&~ Set Tx Signal Access 
 ----------------------------------------------------------------------------- */

/* Handle:    6,Name: Heading_angle_Parameter_C1_0x77B,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxHeading_angle_Parameter_C1_0x77B(vuint16 sigData)
{
  IlEnterCriticalHeading_angle_Parameter_C1_0x77B();
  Next_lane_Right_P.Next_lane_Right_P.Heading_angle_Parameter_C1_0x77B_0 = ((vuint8) sigData);
  Next_lane_Right_P.Next_lane_Right_P.Heading_angle_Parameter_C1_0x77B_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalHeading_angle_Parameter_C1_0x77B();
}


#endif

/* Handle:    7,Name:               View_range_0x77B,Size: 15,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxView_range_0x77B(vuint16 sigData)
{
  IlEnterCriticalView_range_0x77B();
  Next_lane_Right_P.Next_lane_Right_P.View_range_0x77B_0 = ((vuint8) sigData);
  Next_lane_Right_P.Next_lane_Right_P.View_range_0x77B_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x7F));
  IlLeaveCriticalView_range_0x77B();
}


#endif

/* Handle:   12,Name:    Position_Parameter_C0_0x77A,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxPosition_Parameter_C0_0x77A(vuint16 sigData)
{
  IlEnterCriticalPosition_Parameter_C0_0x77A();
  Next_lane_Right_O.Next_lane_Right_O.Position_Parameter_C0_0x77A_0 = ((vuint8) sigData);
  Next_lane_Right_O.Next_lane_Right_O.Position_Parameter_C0_0x77A_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalPosition_Parameter_C0_0x77A();
}


#endif

/* Handle:   13,Name:   Curvature_Parameter_C2_0x77A,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxCurvature_Parameter_C2_0x77A(vuint16 sigData)
{
  IlEnterCriticalCurvature_Parameter_C2_0x77A();
  Next_lane_Right_O.Next_lane_Right_O.Curvature_Parameter_C2_0x77A_0 = ((vuint8) sigData);
  Next_lane_Right_O.Next_lane_Right_O.Curvature_Parameter_C2_0x77A_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalCurvature_Parameter_C2_0x77A();
}


#endif

/* Handle:   14,Name:  Curvature_derivative_C3_0x77A,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxCurvature_derivative_C3_0x77A(vuint16 sigData)
{
  IlEnterCriticalCurvature_derivative_C3_0x77A();
  Next_lane_Right_O.Next_lane_Right_O.Curvature_derivative_C3_0x77A_0 = ((vuint8) sigData);
  Next_lane_Right_O.Next_lane_Right_O.Curvature_derivative_C3_0x77A_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalCurvature_derivative_C3_0x77A();
}


#endif

/* Handle:   16,Name: Heading_angle_Parameter_C1_0x779,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxHeading_angle_Parameter_C1_0x779(vuint16 sigData)
{
  IlEnterCriticalHeading_angle_Parameter_C1_0x779();
  Next_lane_Left_N.Next_lane_Left_N.Heading_angle_Parameter_C1_0x779_0 = ((vuint8) sigData);
  Next_lane_Left_N.Next_lane_Left_N.Heading_angle_Parameter_C1_0x779_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalHeading_angle_Parameter_C1_0x779();
}


#endif

/* Handle:   17,Name:               View_range_0x779,Size: 15,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxView_range_0x779(vuint16 sigData)
{
  IlEnterCriticalView_range_0x779();
  Next_lane_Left_N.Next_lane_Left_N.View_range_0x779_0 = ((vuint8) sigData);
  Next_lane_Left_N.Next_lane_Left_N.View_range_0x779_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x7F));
  IlLeaveCriticalView_range_0x779();
}


#endif

/* Handle:   22,Name:    Position_Parameter_C0_0x778,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxPosition_Parameter_C0_0x778(vuint16 sigData)
{
  IlEnterCriticalPosition_Parameter_C0_0x778();
  Next_lane_Left_M.Next_lane_Left_M.Position_Parameter_C0_0x778_0 = ((vuint8) sigData);
  Next_lane_Left_M.Next_lane_Left_M.Position_Parameter_C0_0x778_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalPosition_Parameter_C0_0x778();
}


#endif

/* Handle:   23,Name:   Curvature_Parameter_C2_0x778,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxCurvature_Parameter_C2_0x778(vuint16 sigData)
{
  IlEnterCriticalCurvature_Parameter_C2_0x778();
  Next_lane_Left_M.Next_lane_Left_M.Curvature_Parameter_C2_0x778_0 = ((vuint8) sigData);
  Next_lane_Left_M.Next_lane_Left_M.Curvature_Parameter_C2_0x778_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalCurvature_Parameter_C2_0x778();
}


#endif

/* Handle:   24,Name:  Curvature_derivative_C3_0x778,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxCurvature_derivative_C3_0x778(vuint16 sigData)
{
  IlEnterCriticalCurvature_derivative_C3_0x778();
  Next_lane_Left_M.Next_lane_Left_M.Curvature_derivative_C3_0x778_0 = ((vuint8) sigData);
  Next_lane_Left_M.Next_lane_Left_M.Curvature_derivative_C3_0x778_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalCurvature_derivative_C3_0x778();
}


#endif

/* Handle:   26,Name: Heading_angle_Parameter_C1_0x777,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxHeading_angle_Parameter_C1_0x777(vuint16 sigData)
{
  IlEnterCriticalHeading_angle_Parameter_C1_0x777();
  Next_lane_Right_L.Next_lane_Right_L.Heading_angle_Parameter_C1_0x777_0 = ((vuint8) sigData);
  Next_lane_Right_L.Next_lane_Right_L.Heading_angle_Parameter_C1_0x777_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalHeading_angle_Parameter_C1_0x777();
}


#endif

/* Handle:   27,Name:               View_range_0x777,Size: 15,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxView_range_0x777(vuint16 sigData)
{
  IlEnterCriticalView_range_0x777();
  Next_lane_Right_L.Next_lane_Right_L.View_range_0x777_0 = ((vuint8) sigData);
  Next_lane_Right_L.Next_lane_Right_L.View_range_0x777_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x7F));
  IlLeaveCriticalView_range_0x777();
}


#endif

/* Handle:   32,Name:    Position_Parameter_C0_0x776,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxPosition_Parameter_C0_0x776(vuint16 sigData)
{
  IlEnterCriticalPosition_Parameter_C0_0x776();
  Next_lane_Right_K.Next_lane_Right_K.Position_Parameter_C0_0x776_0 = ((vuint8) sigData);
  Next_lane_Right_K.Next_lane_Right_K.Position_Parameter_C0_0x776_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalPosition_Parameter_C0_0x776();
}


#endif

/* Handle:   33,Name:   Curvature_Parameter_C2_0x776,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxCurvature_Parameter_C2_0x776(vuint16 sigData)
{
  IlEnterCriticalCurvature_Parameter_C2_0x776();
  Next_lane_Right_K.Next_lane_Right_K.Curvature_Parameter_C2_0x776_0 = ((vuint8) sigData);
  Next_lane_Right_K.Next_lane_Right_K.Curvature_Parameter_C2_0x776_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalCurvature_Parameter_C2_0x776();
}


#endif

/* Handle:   34,Name:  Curvature_derivative_C3_0x776,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxCurvature_derivative_C3_0x776(vuint16 sigData)
{
  IlEnterCriticalCurvature_derivative_C3_0x776();
  Next_lane_Right_K.Next_lane_Right_K.Curvature_derivative_C3_0x776_0 = ((vuint8) sigData);
  Next_lane_Right_K.Next_lane_Right_K.Curvature_derivative_C3_0x776_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalCurvature_derivative_C3_0x776();
}


#endif

/* Handle:   36,Name: Heading_angle_Parameter_C1_0x775,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxHeading_angle_Parameter_C1_0x775(vuint16 sigData)
{
  IlEnterCriticalHeading_angle_Parameter_C1_0x775();
  Next_lane_Left_J.Next_lane_Left_J.Heading_angle_Parameter_C1_0x775_0 = ((vuint8) sigData);
  Next_lane_Left_J.Next_lane_Left_J.Heading_angle_Parameter_C1_0x775_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalHeading_angle_Parameter_C1_0x775();
}


#endif

/* Handle:   37,Name:               View_range_0x775,Size: 15,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxView_range_0x775(vuint16 sigData)
{
  IlEnterCriticalView_range_0x775();
  Next_lane_Left_J.Next_lane_Left_J.View_range_0x775_0 = ((vuint8) sigData);
  Next_lane_Left_J.Next_lane_Left_J.View_range_0x775_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x7F));
  IlLeaveCriticalView_range_0x775();
}


#endif

/* Handle:   42,Name:    Position_Parameter_C0_0x774,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxPosition_Parameter_C0_0x774(vuint16 sigData)
{
  IlEnterCriticalPosition_Parameter_C0_0x774();
  Next_lane_Left_I.Next_lane_Left_I.Position_Parameter_C0_0x774_0 = ((vuint8) sigData);
  Next_lane_Left_I.Next_lane_Left_I.Position_Parameter_C0_0x774_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalPosition_Parameter_C0_0x774();
}


#endif

/* Handle:   43,Name:   Curvature_Parameter_C2_0x774,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxCurvature_Parameter_C2_0x774(vuint16 sigData)
{
  IlEnterCriticalCurvature_Parameter_C2_0x774();
  Next_lane_Left_I.Next_lane_Left_I.Curvature_Parameter_C2_0x774_0 = ((vuint8) sigData);
  Next_lane_Left_I.Next_lane_Left_I.Curvature_Parameter_C2_0x774_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalCurvature_Parameter_C2_0x774();
}


#endif

/* Handle:   44,Name:  Curvature_derivative_C3_0x774,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxCurvature_derivative_C3_0x774(vuint16 sigData)
{
  IlEnterCriticalCurvature_derivative_C3_0x774();
  Next_lane_Left_I.Next_lane_Left_I.Curvature_derivative_C3_0x774_0 = ((vuint8) sigData);
  Next_lane_Left_I.Next_lane_Left_I.Curvature_derivative_C3_0x774_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalCurvature_derivative_C3_0x774();
}


#endif

/* Handle:   46,Name: Heading_angle_Parameter_C1_0x773,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxHeading_angle_Parameter_C1_0x773(vuint16 sigData)
{
  IlEnterCriticalHeading_angle_Parameter_C1_0x773();
  Next_lane_Right_H.Next_lane_Right_H.Heading_angle_Parameter_C1_0x773_0 = ((vuint8) sigData);
  Next_lane_Right_H.Next_lane_Right_H.Heading_angle_Parameter_C1_0x773_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalHeading_angle_Parameter_C1_0x773();
}


#endif

/* Handle:   47,Name:               View_range_0x773,Size: 15,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxView_range_0x773(vuint16 sigData)
{
  IlEnterCriticalView_range_0x773();
  Next_lane_Right_H.Next_lane_Right_H.View_range_0x773_0 = ((vuint8) sigData);
  Next_lane_Right_H.Next_lane_Right_H.View_range_0x773_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x7F));
  IlLeaveCriticalView_range_0x773();
}


#endif

/* Handle:   52,Name:    Position_Parameter_C0_0x772,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxPosition_Parameter_C0_0x772(vuint16 sigData)
{
  IlEnterCriticalPosition_Parameter_C0_0x772();
  Next_lane_Right_G.Next_lane_Right_G.Position_Parameter_C0_0x772_0 = ((vuint8) sigData);
  Next_lane_Right_G.Next_lane_Right_G.Position_Parameter_C0_0x772_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalPosition_Parameter_C0_0x772();
}


#endif

/* Handle:   53,Name:   Curvature_Parameter_C2_0x772,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxCurvature_Parameter_C2_0x772(vuint16 sigData)
{
  IlEnterCriticalCurvature_Parameter_C2_0x772();
  Next_lane_Right_G.Next_lane_Right_G.Curvature_Parameter_C2_0x772_0 = ((vuint8) sigData);
  Next_lane_Right_G.Next_lane_Right_G.Curvature_Parameter_C2_0x772_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalCurvature_Parameter_C2_0x772();
}


#endif

/* Handle:   54,Name:  Curvature_derivative_C3_0x772,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxCurvature_derivative_C3_0x772(vuint16 sigData)
{
  IlEnterCriticalCurvature_derivative_C3_0x772();
  Next_lane_Right_G.Next_lane_Right_G.Curvature_derivative_C3_0x772_0 = ((vuint8) sigData);
  Next_lane_Right_G.Next_lane_Right_G.Curvature_derivative_C3_0x772_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalCurvature_derivative_C3_0x772();
}


#endif

/* Handle:   56,Name: Heading_angle_Parameter_C1_0x771,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxHeading_angle_Parameter_C1_0x771(vuint16 sigData)
{
  IlEnterCriticalHeading_angle_Parameter_C1_0x771();
  Next_lane_Left_F.Next_lane_Left_F.Heading_angle_Parameter_C1_0x771_0 = ((vuint8) sigData);
  Next_lane_Left_F.Next_lane_Left_F.Heading_angle_Parameter_C1_0x771_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalHeading_angle_Parameter_C1_0x771();
}


#endif

/* Handle:   57,Name:               View_range_0x771,Size: 15,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxView_range_0x771(vuint16 sigData)
{
  IlEnterCriticalView_range_0x771();
  Next_lane_Left_F.Next_lane_Left_F.View_range_0x771_0 = ((vuint8) sigData);
  Next_lane_Left_F.Next_lane_Left_F.View_range_0x771_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x7F));
  IlLeaveCriticalView_range_0x771();
}


#endif

/* Handle:   62,Name:    Position_Parameter_C0_0x770,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxPosition_Parameter_C0_0x770(vuint16 sigData)
{
  IlEnterCriticalPosition_Parameter_C0_0x770();
  Next_lane_Left_E.Next_lane_Left_E.Position_Parameter_C0_0x770_0 = ((vuint8) sigData);
  Next_lane_Left_E.Next_lane_Left_E.Position_Parameter_C0_0x770_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalPosition_Parameter_C0_0x770();
}


#endif

/* Handle:   63,Name:   Curvature_Parameter_C2_0x770,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxCurvature_Parameter_C2_0x770(vuint16 sigData)
{
  IlEnterCriticalCurvature_Parameter_C2_0x770();
  Next_lane_Left_E.Next_lane_Left_E.Curvature_Parameter_C2_0x770_0 = ((vuint8) sigData);
  Next_lane_Left_E.Next_lane_Left_E.Curvature_Parameter_C2_0x770_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalCurvature_Parameter_C2_0x770();
}


#endif

/* Handle:   64,Name:  Curvature_derivative_C3_0x770,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxCurvature_derivative_C3_0x770(vuint16 sigData)
{
  IlEnterCriticalCurvature_derivative_C3_0x770();
  Next_lane_Left_E.Next_lane_Left_E.Curvature_derivative_C3_0x770_0 = ((vuint8) sigData);
  Next_lane_Left_E.Next_lane_Left_E.Curvature_derivative_C3_0x770_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalCurvature_derivative_C3_0x770();
}


#endif

/* Handle:   66,Name: Heading_angle_Parameter_C1_0x76F,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxHeading_angle_Parameter_C1_0x76F(vuint16 sigData)
{
  IlEnterCriticalHeading_angle_Parameter_C1_0x76F();
  Next_lane_Right_D.Next_lane_Right_D.Heading_angle_Parameter_C1_0x76F_0 = ((vuint8) sigData);
  Next_lane_Right_D.Next_lane_Right_D.Heading_angle_Parameter_C1_0x76F_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalHeading_angle_Parameter_C1_0x76F();
}


#endif

/* Handle:   67,Name:               View_range_0x76F,Size: 15,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxView_range_0x76F(vuint16 sigData)
{
  IlEnterCriticalView_range_0x76F();
  Next_lane_Right_D.Next_lane_Right_D.View_range_0x76F_0 = ((vuint8) sigData);
  Next_lane_Right_D.Next_lane_Right_D.View_range_0x76F_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x7F));
  IlLeaveCriticalView_range_0x76F();
}


#endif

/* Handle:   72,Name:    Position_Parameter_C0_0x76E,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxPosition_Parameter_C0_0x76E(vuint16 sigData)
{
  IlEnterCriticalPosition_Parameter_C0_0x76E();
  Next_lane_Right_C.Next_lane_Right_C.Position_Parameter_C0_0x76E_0 = ((vuint8) sigData);
  Next_lane_Right_C.Next_lane_Right_C.Position_Parameter_C0_0x76E_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalPosition_Parameter_C0_0x76E();
}


#endif

/* Handle:   73,Name:   Curvature_Parameter_C2_0x76E,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxCurvature_Parameter_C2_0x76E(vuint16 sigData)
{
  IlEnterCriticalCurvature_Parameter_C2_0x76E();
  Next_lane_Right_C.Next_lane_Right_C.Curvature_Parameter_C2_0x76E_0 = ((vuint8) sigData);
  Next_lane_Right_C.Next_lane_Right_C.Curvature_Parameter_C2_0x76E_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalCurvature_Parameter_C2_0x76E();
}


#endif

/* Handle:   74,Name:  Curvature_derivative_C3_0x76E,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxCurvature_derivative_C3_0x76E(vuint16 sigData)
{
  IlEnterCriticalCurvature_derivative_C3_0x76E();
  Next_lane_Right_C.Next_lane_Right_C.Curvature_derivative_C3_0x76E_0 = ((vuint8) sigData);
  Next_lane_Right_C.Next_lane_Right_C.Curvature_derivative_C3_0x76E_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalCurvature_derivative_C3_0x76E();
}


#endif

/* Handle:   76,Name: Heading_angle_Parameter_C1_0x76D,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxHeading_angle_Parameter_C1_0x76D(vuint16 sigData)
{
  IlEnterCriticalHeading_angle_Parameter_C1_0x76D();
  Next_lane_Left_B.Next_lane_Left_B.Heading_angle_Parameter_C1_0x76D_0 = ((vuint8) sigData);
  Next_lane_Left_B.Next_lane_Left_B.Heading_angle_Parameter_C1_0x76D_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalHeading_angle_Parameter_C1_0x76D();
}


#endif

/* Handle:   77,Name:               View_range_0x76D,Size: 15,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxView_range_0x76D(vuint16 sigData)
{
  IlEnterCriticalView_range_0x76D();
  Next_lane_Left_B.Next_lane_Left_B.View_range_0x76D_0 = ((vuint8) sigData);
  Next_lane_Left_B.Next_lane_Left_B.View_range_0x76D_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x7F));
  IlLeaveCriticalView_range_0x76D();
}


#endif

/* Handle:   82,Name:    Position_Parameter_C0_0x76C,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxPosition_Parameter_C0_0x76C(vuint16 sigData)
{
  IlEnterCriticalPosition_Parameter_C0_0x76C();
  Next_lane_Left_A.Next_lane_Left_A.Position_Parameter_C0_0x76C_0 = ((vuint8) sigData);
  Next_lane_Left_A.Next_lane_Left_A.Position_Parameter_C0_0x76C_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalPosition_Parameter_C0_0x76C();
}


#endif

/* Handle:   83,Name:   Curvature_Parameter_C2_0x76C,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxCurvature_Parameter_C2_0x76C(vuint16 sigData)
{
  IlEnterCriticalCurvature_Parameter_C2_0x76C();
  Next_lane_Left_A.Next_lane_Left_A.Curvature_Parameter_C2_0x76C_0 = ((vuint8) sigData);
  Next_lane_Left_A.Next_lane_Left_A.Curvature_Parameter_C2_0x76C_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalCurvature_Parameter_C2_0x76C();
}


#endif

/* Handle:   84,Name:  Curvature_derivative_C3_0x76C,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxCurvature_derivative_C3_0x76C(vuint16 sigData)
{
  IlEnterCriticalCurvature_derivative_C3_0x76C();
  Next_lane_Left_A.Next_lane_Left_A.Curvature_derivative_C3_0x76C_0 = ((vuint8) sigData);
  Next_lane_Left_A.Next_lane_Left_A.Curvature_derivative_C3_0x76C_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalCurvature_derivative_C3_0x76C();
}


#endif

/* Handle:   87,Name:     Ref_point_1_Position_0x76A,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxRef_point_1_Position_0x76A(vuint16 sigData)
{
  IlEnterCriticalRef_point_1_Position_0x76A();
  Reference_points.Reference_points.Ref_point_1_Position_0x76A_0 = ((vuint8) sigData);
  Reference_points.Reference_points.Ref_point_1_Position_0x76A_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalRef_point_1_Position_0x76A();
}


#endif

/* Handle:   88,Name:     Ref_point_1_Distance_0x76A,Size: 15,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxRef_point_1_Distance_0x76A(vuint16 sigData)
{
  IlEnterCriticalRef_point_1_Distance_0x76A();
  Reference_points.Reference_points.Ref_point_1_Distance_0x76A_0 = ((vuint8) sigData);
  Reference_points.Reference_points.Ref_point_1_Distance_0x76A_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x7F));
  IlLeaveCriticalRef_point_1_Distance_0x76A();
}


#endif

/* Handle:   90,Name:     Ref_point_2_Position_0x76A,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxRef_point_2_Position_0x76A(vuint16 sigData)
{
  IlEnterCriticalRef_point_2_Position_0x76A();
  Reference_points.Reference_points.Ref_point_2_Position_0x76A_0 = ((vuint8) sigData);
  Reference_points.Reference_points.Ref_point_2_Position_0x76A_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalRef_point_2_Position_0x76A();
}


#endif

/* Handle:   91,Name:     Ref_point_2_Distance_0x76A,Size: 15,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxRef_point_2_Distance_0x76A(vuint16 sigData)
{
  IlEnterCriticalRef_point_2_Distance_0x76A();
  Reference_points.Reference_points.Ref_point_2_Distance_0x76A_0 = ((vuint8) sigData);
  Reference_points.Reference_points.Ref_point_2_Distance_0x76A_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x7F));
  IlLeaveCriticalRef_point_2_Distance_0x76A();
}


#endif

/* Handle:   93,Name: Heading_angle_Parameter_C1_0x769,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxHeading_angle_Parameter_C1_0x769(vuint16 sigData)
{
  IlEnterCriticalHeading_angle_Parameter_C1_0x769();
  LKA_right_lane_B.LKA_right_lane_B.Heading_angle_Parameter_C1_0x769_0 = ((vuint8) sigData);
  LKA_right_lane_B.LKA_right_lane_B.Heading_angle_Parameter_C1_0x769_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalHeading_angle_Parameter_C1_0x769();
}


#endif

/* Handle:   94,Name:               View_range_0x769,Size: 15,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxView_range_0x769(vuint16 sigData)
{
  IlEnterCriticalView_range_0x769();
  LKA_right_lane_B.LKA_right_lane_B.View_range_0x769_0 = ((vuint8) sigData);
  LKA_right_lane_B.LKA_right_lane_B.View_range_0x769_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x7F));
  IlLeaveCriticalView_range_0x769();
}


#endif

/* Handle:   99,Name:    Position_Parameter_C0_0x768,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxPosition_Parameter_C0_0x768(vuint16 sigData)
{
  IlEnterCriticalPosition_Parameter_C0_0x768();
  LKA_right_lane_A.LKA_right_lane_A.Position_Parameter_C0_0x768_0 = ((vuint8) sigData);
  LKA_right_lane_A.LKA_right_lane_A.Position_Parameter_C0_0x768_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalPosition_Parameter_C0_0x768();
}


#endif

/* Handle:  100,Name:   Curvature_Parameter_C2_0x768,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxCurvature_Parameter_C2_0x768(vuint16 sigData)
{
  IlEnterCriticalCurvature_Parameter_C2_0x768();
  LKA_right_lane_A.LKA_right_lane_A.Curvature_Parameter_C2_0x768_0 = ((vuint8) sigData);
  LKA_right_lane_A.LKA_right_lane_A.Curvature_Parameter_C2_0x768_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalCurvature_Parameter_C2_0x768();
}


#endif

/* Handle:  101,Name:  Curvature_derivative_C3_0x768,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxCurvature_derivative_C3_0x768(vuint16 sigData)
{
  IlEnterCriticalCurvature_derivative_C3_0x768();
  LKA_right_lane_A.LKA_right_lane_A.Curvature_derivative_C3_0x768_0 = ((vuint8) sigData);
  LKA_right_lane_A.LKA_right_lane_A.Curvature_derivative_C3_0x768_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalCurvature_derivative_C3_0x768();
}


#endif

/* Handle:  103,Name: Heading_angle_Parameter_C1_0x767,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxHeading_angle_Parameter_C1_0x767(vuint16 sigData)
{
  IlEnterCriticalHeading_angle_Parameter_C1_0x767();
  LKA_left_lane_B.LKA_left_lane_B.Heading_angle_Parameter_C1_0x767_0 = ((vuint8) sigData);
  LKA_left_lane_B.LKA_left_lane_B.Heading_angle_Parameter_C1_0x767_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalHeading_angle_Parameter_C1_0x767();
}


#endif

/* Handle:  104,Name:               View_range_0x767,Size: 15,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxView_range_0x767(vuint16 sigData)
{
  IlEnterCriticalView_range_0x767();
  LKA_left_lane_B.LKA_left_lane_B.View_range_0x767_0 = ((vuint8) sigData);
  LKA_left_lane_B.LKA_left_lane_B.View_range_0x767_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x7F));
  IlLeaveCriticalView_range_0x767();
}


#endif

/* Handle:  109,Name:    Position_Parameter_C0_0x766,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxPosition_Parameter_C0_0x766(vuint16 sigData)
{
  IlEnterCriticalPosition_Parameter_C0_0x766();
  LKA_left_lane_A.LKA_left_lane_A.Position_Parameter_C0_0x766_0 = ((vuint8) sigData);
  LKA_left_lane_A.LKA_left_lane_A.Position_Parameter_C0_0x766_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalPosition_Parameter_C0_0x766();
}


#endif

/* Handle:  110,Name:   Curvature_Parameter_C2_0x766,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxCurvature_Parameter_C2_0x766(vuint16 sigData)
{
  IlEnterCriticalCurvature_Parameter_C2_0x766();
  LKA_left_lane_A.LKA_left_lane_A.Curvature_Parameter_C2_0x766_0 = ((vuint8) sigData);
  LKA_left_lane_A.LKA_left_lane_A.Curvature_Parameter_C2_0x766_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalCurvature_Parameter_C2_0x766();
}


#endif

/* Handle:  111,Name:  Curvature_derivative_C3_0x766,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxCurvature_derivative_C3_0x766(vuint16 sigData)
{
  IlEnterCriticalCurvature_derivative_C3_0x766();
  LKA_left_lane_A.LKA_left_lane_A.Curvature_derivative_C3_0x766_0 = ((vuint8) sigData);
  LKA_left_lane_A.LKA_left_lane_A.Curvature_derivative_C3_0x766_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalCurvature_derivative_C3_0x766();
}


#endif

/* Handle:  124,Name:      Obstacle_Angle_Rate_0x750,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Angle_Rate_0x750(vuint16 sigData)
{
  IlEnterCriticalObstacle_Angle_Rate_0x750();
  Obstacle_Data_X.Obstacle_Data_X.Obstacle_Angle_Rate_0x750_0 = ((vuint8) sigData);
  Obstacle_Data_X.Obstacle_Data_X.Obstacle_Angle_Rate_0x750_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalObstacle_Angle_Rate_0x750();
}


#endif

/* Handle:  125,Name:    Obstacle_Scale_Change_0x750,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Scale_Change_0x750(vuint16 sigData)
{
  IlEnterCriticalObstacle_Scale_Change_0x750();
  Obstacle_Data_X.Obstacle_Data_X.Obstacle_Scale_Change_0x750_0 = ((vuint8) sigData);
  Obstacle_Data_X.Obstacle_Data_X.Obstacle_Scale_Change_0x750_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalObstacle_Scale_Change_0x750();
}


#endif

/* Handle:  126,Name:           Object_Accel_X_0x750,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObject_Accel_X_0x750(vuint16 sigData)
{
  IlEnterCriticalObject_Accel_X_0x750();
  Obstacle_Data_X.Obstacle_Data_X.Object_Accel_X_0x750_0 = ((vuint8) sigData);
  Obstacle_Data_X.Obstacle_Data_X.Object_Accel_X_0x750_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x03));
  IlLeaveCriticalObject_Accel_X_0x750();
}


#endif

/* Handle:  128,Name:           Obstacle_Angle_0x750,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Angle_0x750(vuint16 sigData)
{
  IlEnterCriticalObstacle_Angle_0x750();
  Obstacle_Data_X.Obstacle_Data_X.Obstacle_Angle_0x750_0 = ((vuint8) sigData);
  Obstacle_Data_X.Obstacle_Data_X.Obstacle_Angle_0x750_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalObstacle_Angle_0x750();
}


#endif

/* Handle:  130,Name:           Obstacle_Width_0x74F,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Width_0x74F(vuint8 sigData)
{
  IlEnterCriticalObstacle_Width_0x74F();
  Obstacle_Data_W.Obstacle_Data_W.Obstacle_Width_0x74F = ((vuint8) sigData);
  IlSetEvent(IlTxSigHndObstacle_Width_0x74F);
  IlLeaveCriticalObstacle_Width_0x74F();
}


#endif

/* Handle:  131,Name:             Obstacle_Age_0x74F,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Age_0x74F(vuint8 sigData)
{
  IlEnterCriticalObstacle_Age_0x74F();
  Obstacle_Data_W.Obstacle_Data_W.Obstacle_Age_0x74F = ((vuint8) sigData);
  IlSetEvent(IlTxSigHndObstacle_Age_0x74F);
  IlLeaveCriticalObstacle_Age_0x74F();
}


#endif

/* Handle:  134,Name:              Radar_Pos_X_0x74F,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxRadar_Pos_X_0x74F(vuint16 sigData)
{
  IlEnterCriticalRadar_Pos_X_0x74F();
  Obstacle_Data_W.Obstacle_Data_W.Radar_Pos_X_0x74F_0 = ((vuint8) (sigData & (vuint8) 0x0F));
  Obstacle_Data_W.Obstacle_Data_W.Radar_Pos_X_0x74F_1 = ((vuint8) (sigData >> 4));
  IlLeaveCriticalRadar_Pos_X_0x74F();
}


#endif

/* Handle:  135,Name:              Radar_Vel_X_0x74F,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxRadar_Vel_X_0x74F(vuint16 sigData)
{
  IlEnterCriticalRadar_Vel_X_0x74F();
  Obstacle_Data_W.Obstacle_Data_W.Radar_Vel_X_0x74F_0 = ((vuint8) sigData);
  Obstacle_Data_W.Obstacle_Data_W.Radar_Vel_X_0x74F_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x0F));
  IlLeaveCriticalRadar_Vel_X_0x74F();
}


#endif

/* Handle:  139,Name:           Obstacle_Pos_X_0x74E,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Pos_X_0x74E(vuint16 sigData)
{
  IlEnterCriticalObstacle_Pos_X_0x74E();
  Obstacle_Data_V.Obstacle_Data_V.Obstacle_Pos_X_0x74E_0 = ((vuint8) sigData);
  Obstacle_Data_V.Obstacle_Data_V.Obstacle_Pos_X_0x74E_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x0F));
  IlLeaveCriticalObstacle_Pos_X_0x74E();
}


#endif

/* Handle:  140,Name:           Obstacle_Pos_Y_0x74E,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Pos_Y_0x74E(vuint16 sigData)
{
  IlEnterCriticalObstacle_Pos_Y_0x74E();
  Obstacle_Data_V.Obstacle_Data_V.Obstacle_Pos_Y_0x74E_0 = ((vuint8) sigData);
  Obstacle_Data_V.Obstacle_Data_V.Obstacle_Pos_Y_0x74E_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x03));
  IlLeaveCriticalObstacle_Pos_Y_0x74E();
}


#endif

/* Handle:  143,Name:       Obstacle_Rel_Vel_X_0x74E,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Rel_Vel_X_0x74E(vuint16 sigData)
{
  IlEnterCriticalObstacle_Rel_Vel_X_0x74E();
  Obstacle_Data_V.Obstacle_Data_V.Obstacle_Rel_Vel_X_0x74E_0 = ((vuint8) sigData);
  Obstacle_Data_V.Obstacle_Data_V.Obstacle_Rel_Vel_X_0x74E_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x0F));
  IlLeaveCriticalObstacle_Rel_Vel_X_0x74E();
}


#endif

/* Handle:  148,Name:      Obstacle_Angle_Rate_0x74D,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Angle_Rate_0x74D(vuint16 sigData)
{
  IlEnterCriticalObstacle_Angle_Rate_0x74D();
  Obstacle_Data_U.Obstacle_Data_U.Obstacle_Angle_Rate_0x74D_0 = ((vuint8) sigData);
  Obstacle_Data_U.Obstacle_Data_U.Obstacle_Angle_Rate_0x74D_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalObstacle_Angle_Rate_0x74D();
}


#endif

/* Handle:  149,Name:    Obstacle_Scale_Change_0x74D,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Scale_Change_0x74D(vuint16 sigData)
{
  IlEnterCriticalObstacle_Scale_Change_0x74D();
  Obstacle_Data_U.Obstacle_Data_U.Obstacle_Scale_Change_0x74D_0 = ((vuint8) sigData);
  Obstacle_Data_U.Obstacle_Data_U.Obstacle_Scale_Change_0x74D_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalObstacle_Scale_Change_0x74D();
}


#endif

/* Handle:  150,Name:           Object_Accel_X_0x74D,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObject_Accel_X_0x74D(vuint16 sigData)
{
  IlEnterCriticalObject_Accel_X_0x74D();
  Obstacle_Data_U.Obstacle_Data_U.Object_Accel_X_0x74D_0 = ((vuint8) sigData);
  Obstacle_Data_U.Obstacle_Data_U.Object_Accel_X_0x74D_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x03));
  IlLeaveCriticalObject_Accel_X_0x74D();
}


#endif

/* Handle:  152,Name:           Obstacle_Angle_0x74D,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Angle_0x74D(vuint16 sigData)
{
  IlEnterCriticalObstacle_Angle_0x74D();
  Obstacle_Data_U.Obstacle_Data_U.Obstacle_Angle_0x74D_0 = ((vuint8) sigData);
  Obstacle_Data_U.Obstacle_Data_U.Obstacle_Angle_0x74D_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalObstacle_Angle_0x74D();
}


#endif

/* Handle:  154,Name:           Obstacle_Width_0x74C,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Width_0x74C(vuint8 sigData)
{
  IlEnterCriticalObstacle_Width_0x74C();
  Obstacle_Data_T.Obstacle_Data_T.Obstacle_Width_0x74C = ((vuint8) sigData);
  IlSetEvent(IlTxSigHndObstacle_Width_0x74C);
  IlLeaveCriticalObstacle_Width_0x74C();
}


#endif

/* Handle:  155,Name:             Obstacle_Age_0x74C,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Age_0x74C(vuint8 sigData)
{
  IlEnterCriticalObstacle_Age_0x74C();
  Obstacle_Data_T.Obstacle_Data_T.Obstacle_Age_0x74C = ((vuint8) sigData);
  IlSetEvent(IlTxSigHndObstacle_Age_0x74C);
  IlLeaveCriticalObstacle_Age_0x74C();
}


#endif

/* Handle:  158,Name:              Radar_Pos_X_0x74C,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxRadar_Pos_X_0x74C(vuint16 sigData)
{
  IlEnterCriticalRadar_Pos_X_0x74C();
  Obstacle_Data_T.Obstacle_Data_T.Radar_Pos_X_0x74C_0 = ((vuint8) (sigData & (vuint8) 0x0F));
  Obstacle_Data_T.Obstacle_Data_T.Radar_Pos_X_0x74C_1 = ((vuint8) (sigData >> 4));
  IlLeaveCriticalRadar_Pos_X_0x74C();
}


#endif

/* Handle:  159,Name:              Radar_Vel_X_0x74C,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxRadar_Vel_X_0x74C(vuint16 sigData)
{
  IlEnterCriticalRadar_Vel_X_0x74C();
  Obstacle_Data_T.Obstacle_Data_T.Radar_Vel_X_0x74C_0 = ((vuint8) sigData);
  Obstacle_Data_T.Obstacle_Data_T.Radar_Vel_X_0x74C_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x0F));
  IlLeaveCriticalRadar_Vel_X_0x74C();
}


#endif

/* Handle:  163,Name:           Obstacle_Pos_X_0x74B,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Pos_X_0x74B(vuint16 sigData)
{
  IlEnterCriticalObstacle_Pos_X_0x74B();
  Obstacle_Data_S.Obstacle_Data_S.Obstacle_Pos_X_0x74B_0 = ((vuint8) sigData);
  Obstacle_Data_S.Obstacle_Data_S.Obstacle_Pos_X_0x74B_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x0F));
  IlLeaveCriticalObstacle_Pos_X_0x74B();
}


#endif

/* Handle:  164,Name:           Obstacle_Pos_Y_0x74B,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Pos_Y_0x74B(vuint16 sigData)
{
  IlEnterCriticalObstacle_Pos_Y_0x74B();
  Obstacle_Data_S.Obstacle_Data_S.Obstacle_Pos_Y_0x74B_0 = ((vuint8) sigData);
  Obstacle_Data_S.Obstacle_Data_S.Obstacle_Pos_Y_0x74B_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x03));
  IlLeaveCriticalObstacle_Pos_Y_0x74B();
}


#endif

/* Handle:  167,Name:       Obstacle_Rel_Vel_X_0x74B,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Rel_Vel_X_0x74B(vuint16 sigData)
{
  IlEnterCriticalObstacle_Rel_Vel_X_0x74B();
  Obstacle_Data_S.Obstacle_Data_S.Obstacle_Rel_Vel_X_0x74B_0 = ((vuint8) sigData);
  Obstacle_Data_S.Obstacle_Data_S.Obstacle_Rel_Vel_X_0x74B_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x0F));
  IlLeaveCriticalObstacle_Rel_Vel_X_0x74B();
}


#endif

/* Handle:  172,Name:      Obstacle_Angle_Rate_0x74A,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Angle_Rate_0x74A(vuint16 sigData)
{
  IlEnterCriticalObstacle_Angle_Rate_0x74A();
  Obstacle_Data_R.Obstacle_Data_R.Obstacle_Angle_Rate_0x74A_0 = ((vuint8) sigData);
  Obstacle_Data_R.Obstacle_Data_R.Obstacle_Angle_Rate_0x74A_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalObstacle_Angle_Rate_0x74A();
}


#endif

/* Handle:  173,Name:    Obstacle_Scale_Change_0x74A,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Scale_Change_0x74A(vuint16 sigData)
{
  IlEnterCriticalObstacle_Scale_Change_0x74A();
  Obstacle_Data_R.Obstacle_Data_R.Obstacle_Scale_Change_0x74A_0 = ((vuint8) sigData);
  Obstacle_Data_R.Obstacle_Data_R.Obstacle_Scale_Change_0x74A_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalObstacle_Scale_Change_0x74A();
}


#endif

/* Handle:  174,Name:           Object_Accel_X_0x74A,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObject_Accel_X_0x74A(vuint16 sigData)
{
  IlEnterCriticalObject_Accel_X_0x74A();
  Obstacle_Data_R.Obstacle_Data_R.Object_Accel_X_0x74A_0 = ((vuint8) sigData);
  Obstacle_Data_R.Obstacle_Data_R.Object_Accel_X_0x74A_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x03));
  IlLeaveCriticalObject_Accel_X_0x74A();
}


#endif

/* Handle:  176,Name:           Obstacle_Angle_0x74A,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Angle_0x74A(vuint16 sigData)
{
  IlEnterCriticalObstacle_Angle_0x74A();
  Obstacle_Data_R.Obstacle_Data_R.Obstacle_Angle_0x74A_0 = ((vuint8) sigData);
  Obstacle_Data_R.Obstacle_Data_R.Obstacle_Angle_0x74A_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalObstacle_Angle_0x74A();
}


#endif

/* Handle:  178,Name:           Obstacle_Width_0x749,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Width_0x749(vuint8 sigData)
{
  IlEnterCriticalObstacle_Width_0x749();
  Obstacle_Data_Q.Obstacle_Data_Q.Obstacle_Width_0x749 = ((vuint8) sigData);
  IlSetEvent(IlTxSigHndObstacle_Width_0x749);
  IlLeaveCriticalObstacle_Width_0x749();
}


#endif

/* Handle:  179,Name:             Obstacle_Age_0x749,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Age_0x749(vuint8 sigData)
{
  IlEnterCriticalObstacle_Age_0x749();
  Obstacle_Data_Q.Obstacle_Data_Q.Obstacle_Age_0x749 = ((vuint8) sigData);
  IlSetEvent(IlTxSigHndObstacle_Age_0x749);
  IlLeaveCriticalObstacle_Age_0x749();
}


#endif

/* Handle:  182,Name:              Radar_Pos_X_0x749,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxRadar_Pos_X_0x749(vuint16 sigData)
{
  IlEnterCriticalRadar_Pos_X_0x749();
  Obstacle_Data_Q.Obstacle_Data_Q.Radar_Pos_X_0x749_0 = ((vuint8) (sigData & (vuint8) 0x0F));
  Obstacle_Data_Q.Obstacle_Data_Q.Radar_Pos_X_0x749_1 = ((vuint8) (sigData >> 4));
  IlLeaveCriticalRadar_Pos_X_0x749();
}


#endif

/* Handle:  183,Name:              Radar_Vel_X_0x749,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxRadar_Vel_X_0x749(vuint16 sigData)
{
  IlEnterCriticalRadar_Vel_X_0x749();
  Obstacle_Data_Q.Obstacle_Data_Q.Radar_Vel_X_0x749_0 = ((vuint8) sigData);
  Obstacle_Data_Q.Obstacle_Data_Q.Radar_Vel_X_0x749_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x0F));
  IlLeaveCriticalRadar_Vel_X_0x749();
}


#endif

/* Handle:  187,Name:           Obstacle_Pos_X_0x748,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Pos_X_0x748(vuint16 sigData)
{
  IlEnterCriticalObstacle_Pos_X_0x748();
  Obstacle_Data_P.Obstacle_Data_P.Obstacle_Pos_X_0x748_0 = ((vuint8) sigData);
  Obstacle_Data_P.Obstacle_Data_P.Obstacle_Pos_X_0x748_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x0F));
  IlLeaveCriticalObstacle_Pos_X_0x748();
}


#endif

/* Handle:  188,Name:           Obstacle_Pos_Y_0x748,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Pos_Y_0x748(vuint16 sigData)
{
  IlEnterCriticalObstacle_Pos_Y_0x748();
  Obstacle_Data_P.Obstacle_Data_P.Obstacle_Pos_Y_0x748_0 = ((vuint8) sigData);
  Obstacle_Data_P.Obstacle_Data_P.Obstacle_Pos_Y_0x748_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x03));
  IlLeaveCriticalObstacle_Pos_Y_0x748();
}


#endif

/* Handle:  191,Name:       Obstacle_Rel_Vel_X_0x748,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Rel_Vel_X_0x748(vuint16 sigData)
{
  IlEnterCriticalObstacle_Rel_Vel_X_0x748();
  Obstacle_Data_P.Obstacle_Data_P.Obstacle_Rel_Vel_X_0x748_0 = ((vuint8) sigData);
  Obstacle_Data_P.Obstacle_Data_P.Obstacle_Rel_Vel_X_0x748_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x0F));
  IlLeaveCriticalObstacle_Rel_Vel_X_0x748();
}


#endif

/* Handle:  196,Name:      Obstacle_Angle_Rate_0x747,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Angle_Rate_0x747(vuint16 sigData)
{
  IlEnterCriticalObstacle_Angle_Rate_0x747();
  Obstacle_Data_O.Obstacle_Data_O.Obstacle_Angle_Rate_0x747_0 = ((vuint8) sigData);
  Obstacle_Data_O.Obstacle_Data_O.Obstacle_Angle_Rate_0x747_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalObstacle_Angle_Rate_0x747();
}


#endif

/* Handle:  197,Name:    Obstacle_Scale_Change_0x747,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Scale_Change_0x747(vuint16 sigData)
{
  IlEnterCriticalObstacle_Scale_Change_0x747();
  Obstacle_Data_O.Obstacle_Data_O.Obstacle_Scale_Change_0x747_0 = ((vuint8) sigData);
  Obstacle_Data_O.Obstacle_Data_O.Obstacle_Scale_Change_0x747_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalObstacle_Scale_Change_0x747();
}


#endif

/* Handle:  198,Name:           Object_Accel_X_0x747,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObject_Accel_X_0x747(vuint16 sigData)
{
  IlEnterCriticalObject_Accel_X_0x747();
  Obstacle_Data_O.Obstacle_Data_O.Object_Accel_X_0x747_0 = ((vuint8) sigData);
  Obstacle_Data_O.Obstacle_Data_O.Object_Accel_X_0x747_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x03));
  IlLeaveCriticalObject_Accel_X_0x747();
}


#endif

/* Handle:  200,Name:           Obstacle_Angle_0x747,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Angle_0x747(vuint16 sigData)
{
  IlEnterCriticalObstacle_Angle_0x747();
  Obstacle_Data_O.Obstacle_Data_O.Obstacle_Angle_0x747_0 = ((vuint8) sigData);
  Obstacle_Data_O.Obstacle_Data_O.Obstacle_Angle_0x747_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalObstacle_Angle_0x747();
}


#endif

/* Handle:  202,Name:           Obstacle_Width_0x746,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Width_0x746(vuint8 sigData)
{
  IlEnterCriticalObstacle_Width_0x746();
  Obstacle_Data_N.Obstacle_Data_N.Obstacle_Width_0x746 = ((vuint8) sigData);
  IlSetEvent(IlTxSigHndObstacle_Width_0x746);
  IlLeaveCriticalObstacle_Width_0x746();
}


#endif

/* Handle:  203,Name:             Obstacle_Age_0x746,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Age_0x746(vuint8 sigData)
{
  IlEnterCriticalObstacle_Age_0x746();
  Obstacle_Data_N.Obstacle_Data_N.Obstacle_Age_0x746 = ((vuint8) sigData);
  IlSetEvent(IlTxSigHndObstacle_Age_0x746);
  IlLeaveCriticalObstacle_Age_0x746();
}


#endif

/* Handle:  206,Name:              Radar_Pos_X_0x746,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxRadar_Pos_X_0x746(vuint16 sigData)
{
  IlEnterCriticalRadar_Pos_X_0x746();
  Obstacle_Data_N.Obstacle_Data_N.Radar_Pos_X_0x746_0 = ((vuint8) (sigData & (vuint8) 0x0F));
  Obstacle_Data_N.Obstacle_Data_N.Radar_Pos_X_0x746_1 = ((vuint8) (sigData >> 4));
  IlLeaveCriticalRadar_Pos_X_0x746();
}


#endif

/* Handle:  207,Name:              Radar_Vel_X_0x746,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxRadar_Vel_X_0x746(vuint16 sigData)
{
  IlEnterCriticalRadar_Vel_X_0x746();
  Obstacle_Data_N.Obstacle_Data_N.Radar_Vel_X_0x746_0 = ((vuint8) sigData);
  Obstacle_Data_N.Obstacle_Data_N.Radar_Vel_X_0x746_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x0F));
  IlLeaveCriticalRadar_Vel_X_0x746();
}


#endif

/* Handle:  211,Name:           Obstacle_Pos_X_0x745,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Pos_X_0x745(vuint16 sigData)
{
  IlEnterCriticalObstacle_Pos_X_0x745();
  Obstacle_Data_M.Obstacle_Data_M.Obstacle_Pos_X_0x745_0 = ((vuint8) sigData);
  Obstacle_Data_M.Obstacle_Data_M.Obstacle_Pos_X_0x745_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x0F));
  IlLeaveCriticalObstacle_Pos_X_0x745();
}


#endif

/* Handle:  212,Name:           Obstacle_Pos_Y_0x745,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Pos_Y_0x745(vuint16 sigData)
{
  IlEnterCriticalObstacle_Pos_Y_0x745();
  Obstacle_Data_M.Obstacle_Data_M.Obstacle_Pos_Y_0x745_0 = ((vuint8) sigData);
  Obstacle_Data_M.Obstacle_Data_M.Obstacle_Pos_Y_0x745_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x03));
  IlLeaveCriticalObstacle_Pos_Y_0x745();
}


#endif

/* Handle:  215,Name:       Obstacle_Rel_Vel_X_0x745,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Rel_Vel_X_0x745(vuint16 sigData)
{
  IlEnterCriticalObstacle_Rel_Vel_X_0x745();
  Obstacle_Data_M.Obstacle_Data_M.Obstacle_Rel_Vel_X_0x745_0 = ((vuint8) sigData);
  Obstacle_Data_M.Obstacle_Data_M.Obstacle_Rel_Vel_X_0x745_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x0F));
  IlLeaveCriticalObstacle_Rel_Vel_X_0x745();
}


#endif

/* Handle:  220,Name:      Obstacle_Angle_Rate_0x744,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Angle_Rate_0x744(vuint16 sigData)
{
  IlEnterCriticalObstacle_Angle_Rate_0x744();
  Obstacle_Data_L.Obstacle_Data_L.Obstacle_Angle_Rate_0x744_0 = ((vuint8) sigData);
  Obstacle_Data_L.Obstacle_Data_L.Obstacle_Angle_Rate_0x744_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalObstacle_Angle_Rate_0x744();
}


#endif

/* Handle:  221,Name:    Obstacle_Scale_Change_0x744,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Scale_Change_0x744(vuint16 sigData)
{
  IlEnterCriticalObstacle_Scale_Change_0x744();
  Obstacle_Data_L.Obstacle_Data_L.Obstacle_Scale_Change_0x744_0 = ((vuint8) sigData);
  Obstacle_Data_L.Obstacle_Data_L.Obstacle_Scale_Change_0x744_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalObstacle_Scale_Change_0x744();
}


#endif

/* Handle:  222,Name:           Object_Accel_X_0x744,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObject_Accel_X_0x744(vuint16 sigData)
{
  IlEnterCriticalObject_Accel_X_0x744();
  Obstacle_Data_L.Obstacle_Data_L.Object_Accel_X_0x744_0 = ((vuint8) sigData);
  Obstacle_Data_L.Obstacle_Data_L.Object_Accel_X_0x744_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x03));
  IlLeaveCriticalObject_Accel_X_0x744();
}


#endif

/* Handle:  224,Name:           Obstacle_Angle_0x744,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Angle_0x744(vuint16 sigData)
{
  IlEnterCriticalObstacle_Angle_0x744();
  Obstacle_Data_L.Obstacle_Data_L.Obstacle_Angle_0x744_0 = ((vuint8) sigData);
  Obstacle_Data_L.Obstacle_Data_L.Obstacle_Angle_0x744_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalObstacle_Angle_0x744();
}


#endif

/* Handle:  226,Name:           Obstacle_Width_0x743,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Width_0x743(vuint8 sigData)
{
  IlEnterCriticalObstacle_Width_0x743();
  Obstacle_Data_K.Obstacle_Data_K.Obstacle_Width_0x743 = ((vuint8) sigData);
  IlSetEvent(IlTxSigHndObstacle_Width_0x743);
  IlLeaveCriticalObstacle_Width_0x743();
}


#endif

/* Handle:  227,Name:             Obstacle_Age_0x743,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Age_0x743(vuint8 sigData)
{
  IlEnterCriticalObstacle_Age_0x743();
  Obstacle_Data_K.Obstacle_Data_K.Obstacle_Age_0x743 = ((vuint8) sigData);
  IlSetEvent(IlTxSigHndObstacle_Age_0x743);
  IlLeaveCriticalObstacle_Age_0x743();
}


#endif

/* Handle:  230,Name:              Radar_Pos_X_0x743,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxRadar_Pos_X_0x743(vuint16 sigData)
{
  IlEnterCriticalRadar_Pos_X_0x743();
  Obstacle_Data_K.Obstacle_Data_K.Radar_Pos_X_0x743_0 = ((vuint8) (sigData & (vuint8) 0x0F));
  Obstacle_Data_K.Obstacle_Data_K.Radar_Pos_X_0x743_1 = ((vuint8) (sigData >> 4));
  IlLeaveCriticalRadar_Pos_X_0x743();
}


#endif

/* Handle:  231,Name:              Radar_Vel_X_0x743,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxRadar_Vel_X_0x743(vuint16 sigData)
{
  IlEnterCriticalRadar_Vel_X_0x743();
  Obstacle_Data_K.Obstacle_Data_K.Radar_Vel_X_0x743_0 = ((vuint8) sigData);
  Obstacle_Data_K.Obstacle_Data_K.Radar_Vel_X_0x743_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x0F));
  IlLeaveCriticalRadar_Vel_X_0x743();
}


#endif

/* Handle:  235,Name:           Obstacle_Pos_X_0x742,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Pos_X_0x742(vuint16 sigData)
{
  IlEnterCriticalObstacle_Pos_X_0x742();
  Obstacle_Data_J.Obstacle_Data_J.Obstacle_Pos_X_0x742_0 = ((vuint8) sigData);
  Obstacle_Data_J.Obstacle_Data_J.Obstacle_Pos_X_0x742_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x0F));
  IlLeaveCriticalObstacle_Pos_X_0x742();
}


#endif

/* Handle:  236,Name:           Obstacle_Pos_Y_0x742,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Pos_Y_0x742(vuint16 sigData)
{
  IlEnterCriticalObstacle_Pos_Y_0x742();
  Obstacle_Data_J.Obstacle_Data_J.Obstacle_Pos_Y_0x742_0 = ((vuint8) sigData);
  Obstacle_Data_J.Obstacle_Data_J.Obstacle_Pos_Y_0x742_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x03));
  IlLeaveCriticalObstacle_Pos_Y_0x742();
}


#endif

/* Handle:  239,Name:       Obstacle_Rel_Vel_X_0x742,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Rel_Vel_X_0x742(vuint16 sigData)
{
  IlEnterCriticalObstacle_Rel_Vel_X_0x742();
  Obstacle_Data_J.Obstacle_Data_J.Obstacle_Rel_Vel_X_0x742_0 = ((vuint8) sigData);
  Obstacle_Data_J.Obstacle_Data_J.Obstacle_Rel_Vel_X_0x742_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x0F));
  IlLeaveCriticalObstacle_Rel_Vel_X_0x742();
}


#endif

/* Handle:  244,Name:      Obstacle_Angle_Rate_0x741,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Angle_Rate_0x741(vuint16 sigData)
{
  IlEnterCriticalObstacle_Angle_Rate_0x741();
  Obstacle_Data_I.Obstacle_Data_I.Obstacle_Angle_Rate_0x741_0 = ((vuint8) sigData);
  Obstacle_Data_I.Obstacle_Data_I.Obstacle_Angle_Rate_0x741_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalObstacle_Angle_Rate_0x741();
}


#endif

/* Handle:  245,Name:    Obstacle_Scale_Change_0x741,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Scale_Change_0x741(vuint16 sigData)
{
  IlEnterCriticalObstacle_Scale_Change_0x741();
  Obstacle_Data_I.Obstacle_Data_I.Obstacle_Scale_Change_0x741_0 = ((vuint8) sigData);
  Obstacle_Data_I.Obstacle_Data_I.Obstacle_Scale_Change_0x741_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalObstacle_Scale_Change_0x741();
}


#endif

/* Handle:  246,Name:           Object_Accel_X_0x741,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObject_Accel_X_0x741(vuint16 sigData)
{
  IlEnterCriticalObject_Accel_X_0x741();
  Obstacle_Data_I.Obstacle_Data_I.Object_Accel_X_0x741_0 = ((vuint8) sigData);
  Obstacle_Data_I.Obstacle_Data_I.Object_Accel_X_0x741_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x03));
  IlLeaveCriticalObject_Accel_X_0x741();
}


#endif

/* Handle:  248,Name:           Obstacle_Angle_0x741,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Angle_0x741(vuint16 sigData)
{
  IlEnterCriticalObstacle_Angle_0x741();
  Obstacle_Data_I.Obstacle_Data_I.Obstacle_Angle_0x741_0 = ((vuint8) sigData);
  Obstacle_Data_I.Obstacle_Data_I.Obstacle_Angle_0x741_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalObstacle_Angle_0x741();
}


#endif

/* Handle:  250,Name:           Obstacle_Width_0x740,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Width_0x740(vuint8 sigData)
{
  IlEnterCriticalObstacle_Width_0x740();
  Obstacle_Data_H.Obstacle_Data_H.Obstacle_Width_0x740 = ((vuint8) sigData);
  IlSetEvent(IlTxSigHndObstacle_Width_0x740);
  IlLeaveCriticalObstacle_Width_0x740();
}


#endif

/* Handle:  251,Name:             Obstacle_Age_0x740,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Age_0x740(vuint8 sigData)
{
  IlEnterCriticalObstacle_Age_0x740();
  Obstacle_Data_H.Obstacle_Data_H.Obstacle_Age_0x740 = ((vuint8) sigData);
  IlSetEvent(IlTxSigHndObstacle_Age_0x740);
  IlLeaveCriticalObstacle_Age_0x740();
}


#endif

/* Handle:  254,Name:              Radar_Pos_X_0x740,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxRadar_Pos_X_0x740(vuint16 sigData)
{
  IlEnterCriticalRadar_Pos_X_0x740();
  Obstacle_Data_H.Obstacle_Data_H.Radar_Pos_X_0x740_0 = ((vuint8) (sigData & (vuint8) 0x0F));
  Obstacle_Data_H.Obstacle_Data_H.Radar_Pos_X_0x740_1 = ((vuint8) (sigData >> 4));
  IlLeaveCriticalRadar_Pos_X_0x740();
}


#endif

/* Handle:  255,Name:              Radar_Vel_X_0x740,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxRadar_Vel_X_0x740(vuint16 sigData)
{
  IlEnterCriticalRadar_Vel_X_0x740();
  Obstacle_Data_H.Obstacle_Data_H.Radar_Vel_X_0x740_0 = ((vuint8) sigData);
  Obstacle_Data_H.Obstacle_Data_H.Radar_Vel_X_0x740_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x0F));
  IlLeaveCriticalRadar_Vel_X_0x740();
}


#endif

/* Handle:  259,Name:           Obstacle_Pos_X_0x73F,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Pos_X_0x73F(vuint16 sigData)
{
  IlEnterCriticalObstacle_Pos_X_0x73F();
  Obstacle_Data_G.Obstacle_Data_G.Obstacle_Pos_X_0x73F_0 = ((vuint8) sigData);
  Obstacle_Data_G.Obstacle_Data_G.Obstacle_Pos_X_0x73F_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x0F));
  IlLeaveCriticalObstacle_Pos_X_0x73F();
}


#endif

/* Handle:  260,Name:           Obstacle_Pos_Y_0x73F,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Pos_Y_0x73F(vuint16 sigData)
{
  IlEnterCriticalObstacle_Pos_Y_0x73F();
  Obstacle_Data_G.Obstacle_Data_G.Obstacle_Pos_Y_0x73F_0 = ((vuint8) sigData);
  Obstacle_Data_G.Obstacle_Data_G.Obstacle_Pos_Y_0x73F_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x03));
  IlLeaveCriticalObstacle_Pos_Y_0x73F();
}


#endif

/* Handle:  263,Name:       Obstacle_Rel_Vel_X_0x73F,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Rel_Vel_X_0x73F(vuint16 sigData)
{
  IlEnterCriticalObstacle_Rel_Vel_X_0x73F();
  Obstacle_Data_G.Obstacle_Data_G.Obstacle_Rel_Vel_X_0x73F_0 = ((vuint8) sigData);
  Obstacle_Data_G.Obstacle_Data_G.Obstacle_Rel_Vel_X_0x73F_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x0F));
  IlLeaveCriticalObstacle_Rel_Vel_X_0x73F();
}


#endif

/* Handle:  268,Name:      Obstacle_Angle_Rate_0x73E,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Angle_Rate_0x73E(vuint16 sigData)
{
  IlEnterCriticalObstacle_Angle_Rate_0x73E();
  Obstacle_Data_F.Obstacle_Data_F.Obstacle_Angle_Rate_0x73E_0 = ((vuint8) sigData);
  Obstacle_Data_F.Obstacle_Data_F.Obstacle_Angle_Rate_0x73E_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalObstacle_Angle_Rate_0x73E();
}


#endif

/* Handle:  269,Name:    Obstacle_Scale_Change_0x73E,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Scale_Change_0x73E(vuint16 sigData)
{
  IlEnterCriticalObstacle_Scale_Change_0x73E();
  Obstacle_Data_F.Obstacle_Data_F.Obstacle_Scale_Change_0x73E_0 = ((vuint8) sigData);
  Obstacle_Data_F.Obstacle_Data_F.Obstacle_Scale_Change_0x73E_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalObstacle_Scale_Change_0x73E();
}


#endif

/* Handle:  270,Name:           Object_Accel_X_0x73E,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObject_Accel_X_0x73E(vuint16 sigData)
{
  IlEnterCriticalObject_Accel_X_0x73E();
  Obstacle_Data_F.Obstacle_Data_F.Object_Accel_X_0x73E_0 = ((vuint8) sigData);
  Obstacle_Data_F.Obstacle_Data_F.Object_Accel_X_0x73E_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x03));
  IlLeaveCriticalObject_Accel_X_0x73E();
}


#endif

/* Handle:  272,Name:           Obstacle_Angle_0x73E,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Angle_0x73E(vuint16 sigData)
{
  IlEnterCriticalObstacle_Angle_0x73E();
  Obstacle_Data_F.Obstacle_Data_F.Obstacle_Angle_0x73E_0 = ((vuint8) sigData);
  Obstacle_Data_F.Obstacle_Data_F.Obstacle_Angle_0x73E_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalObstacle_Angle_0x73E();
}


#endif

/* Handle:  274,Name:           Obstacle_Width_0x73D,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Width_0x73D(vuint8 sigData)
{
  IlEnterCriticalObstacle_Width_0x73D();
  Obstacle_Data_E.Obstacle_Data_E.Obstacle_Width_0x73D = ((vuint8) sigData);
  IlSetEvent(IlTxSigHndObstacle_Width_0x73D);
  IlLeaveCriticalObstacle_Width_0x73D();
}


#endif

/* Handle:  275,Name:             Obstacle_Age_0x73D,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Age_0x73D(vuint8 sigData)
{
  IlEnterCriticalObstacle_Age_0x73D();
  Obstacle_Data_E.Obstacle_Data_E.Obstacle_Age_0x73D = ((vuint8) sigData);
  IlSetEvent(IlTxSigHndObstacle_Age_0x73D);
  IlLeaveCriticalObstacle_Age_0x73D();
}


#endif

/* Handle:  278,Name:              Radar_Pos_X_0x73D,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxRadar_Pos_X_0x73D(vuint16 sigData)
{
  IlEnterCriticalRadar_Pos_X_0x73D();
  Obstacle_Data_E.Obstacle_Data_E.Radar_Pos_X_0x73D_0 = ((vuint8) (sigData & (vuint8) 0x0F));
  Obstacle_Data_E.Obstacle_Data_E.Radar_Pos_X_0x73D_1 = ((vuint8) (sigData >> 4));
  IlLeaveCriticalRadar_Pos_X_0x73D();
}


#endif

/* Handle:  279,Name:              Radar_Vel_X_0x73D,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxRadar_Vel_X_0x73D(vuint16 sigData)
{
  IlEnterCriticalRadar_Vel_X_0x73D();
  Obstacle_Data_E.Obstacle_Data_E.Radar_Vel_X_0x73D_0 = ((vuint8) sigData);
  Obstacle_Data_E.Obstacle_Data_E.Radar_Vel_X_0x73D_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x0F));
  IlLeaveCriticalRadar_Vel_X_0x73D();
}


#endif

/* Handle:  283,Name:           Obstacle_Pos_X_0x73C,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Pos_X_0x73C(vuint16 sigData)
{
  IlEnterCriticalObstacle_Pos_X_0x73C();
  Obstacle_Data_D.Obstacle_Data_D.Obstacle_Pos_X_0x73C_0 = ((vuint8) sigData);
  Obstacle_Data_D.Obstacle_Data_D.Obstacle_Pos_X_0x73C_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x0F));
  IlLeaveCriticalObstacle_Pos_X_0x73C();
}


#endif

/* Handle:  284,Name:           Obstacle_Pos_Y_0x73C,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Pos_Y_0x73C(vuint16 sigData)
{
  IlEnterCriticalObstacle_Pos_Y_0x73C();
  Obstacle_Data_D.Obstacle_Data_D.Obstacle_Pos_Y_0x73C_0 = ((vuint8) sigData);
  Obstacle_Data_D.Obstacle_Data_D.Obstacle_Pos_Y_0x73C_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x03));
  IlLeaveCriticalObstacle_Pos_Y_0x73C();
}


#endif

/* Handle:  287,Name:       Obstacle_Rel_Vel_X_0x73C,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Rel_Vel_X_0x73C(vuint16 sigData)
{
  IlEnterCriticalObstacle_Rel_Vel_X_0x73C();
  Obstacle_Data_D.Obstacle_Data_D.Obstacle_Rel_Vel_X_0x73C_0 = ((vuint8) sigData);
  Obstacle_Data_D.Obstacle_Data_D.Obstacle_Rel_Vel_X_0x73C_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x0F));
  IlLeaveCriticalObstacle_Rel_Vel_X_0x73C();
}


#endif

/* Handle:  292,Name:      Obstacle_Angle_Rate_0x73B,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Angle_Rate_0x73B(vuint16 sigData)
{
  IlEnterCriticalObstacle_Angle_Rate_0x73B();
  Obstacle_Data_C.Obstacle_Data_C.Obstacle_Angle_Rate_0x73B_0 = ((vuint8) sigData);
  Obstacle_Data_C.Obstacle_Data_C.Obstacle_Angle_Rate_0x73B_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalObstacle_Angle_Rate_0x73B();
}


#endif

/* Handle:  293,Name:    Obstacle_Scale_Change_0x73B,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Scale_Change_0x73B(vuint16 sigData)
{
  IlEnterCriticalObstacle_Scale_Change_0x73B();
  Obstacle_Data_C.Obstacle_Data_C.Obstacle_Scale_Change_0x73B_0 = ((vuint8) sigData);
  Obstacle_Data_C.Obstacle_Data_C.Obstacle_Scale_Change_0x73B_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalObstacle_Scale_Change_0x73B();
}


#endif

/* Handle:  294,Name:           Object_Accel_X_0x73B,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObject_Accel_X_0x73B(vuint16 sigData)
{
  IlEnterCriticalObject_Accel_X_0x73B();
  Obstacle_Data_C.Obstacle_Data_C.Object_Accel_X_0x73B_0 = ((vuint8) sigData);
  Obstacle_Data_C.Obstacle_Data_C.Object_Accel_X_0x73B_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x03));
  IlLeaveCriticalObject_Accel_X_0x73B();
}


#endif

/* Handle:  296,Name:           Obstacle_Angle_0x73B,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Angle_0x73B(vuint16 sigData)
{
  IlEnterCriticalObstacle_Angle_0x73B();
  Obstacle_Data_C.Obstacle_Data_C.Obstacle_Angle_0x73B_0 = ((vuint8) sigData);
  Obstacle_Data_C.Obstacle_Data_C.Obstacle_Angle_0x73B_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalObstacle_Angle_0x73B();
}


#endif

/* Handle:  298,Name:           Obstacle_Width_0x73A,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Width_0x73A(vuint8 sigData)
{
  IlEnterCriticalObstacle_Width_0x73A();
  Obstacle_Data_B.Obstacle_Data_B.Obstacle_Width_0x73A = ((vuint8) sigData);
  IlSetEvent(IlTxSigHndObstacle_Width_0x73A);
  IlLeaveCriticalObstacle_Width_0x73A();
}


#endif

/* Handle:  299,Name:             Obstacle_Age_0x73A,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Age_0x73A(vuint8 sigData)
{
  IlEnterCriticalObstacle_Age_0x73A();
  Obstacle_Data_B.Obstacle_Data_B.Obstacle_Age_0x73A = ((vuint8) sigData);
  IlSetEvent(IlTxSigHndObstacle_Age_0x73A);
  IlLeaveCriticalObstacle_Age_0x73A();
}


#endif

/* Handle:  302,Name:              Radar_Pos_X_0x73A,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxRadar_Pos_X_0x73A(vuint16 sigData)
{
  IlEnterCriticalRadar_Pos_X_0x73A();
  Obstacle_Data_B.Obstacle_Data_B.Radar_Pos_X_0x73A_0 = ((vuint8) (sigData & (vuint8) 0x0F));
  Obstacle_Data_B.Obstacle_Data_B.Radar_Pos_X_0x73A_1 = ((vuint8) (sigData >> 4));
  IlLeaveCriticalRadar_Pos_X_0x73A();
}


#endif

/* Handle:  303,Name:              Radar_Vel_X_0x73A,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxRadar_Vel_X_0x73A(vuint16 sigData)
{
  IlEnterCriticalRadar_Vel_X_0x73A();
  Obstacle_Data_B.Obstacle_Data_B.Radar_Vel_X_0x73A_0 = ((vuint8) sigData);
  Obstacle_Data_B.Obstacle_Data_B.Radar_Vel_X_0x73A_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x0F));
  IlLeaveCriticalRadar_Vel_X_0x73A();
}


#endif

/* Handle:  307,Name:           Obstacle_Pos_X_0x739,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Pos_X_0x739(vuint16 sigData)
{
  IlEnterCriticalObstacle_Pos_X_0x739();
  Obstacle_Data_A.Obstacle_Data_A.Obstacle_Pos_X_0x739_0 = ((vuint8) sigData);
  Obstacle_Data_A.Obstacle_Data_A.Obstacle_Pos_X_0x739_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x0F));
  IlLeaveCriticalObstacle_Pos_X_0x739();
}


#endif

/* Handle:  308,Name:           Obstacle_Pos_Y_0x739,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Pos_Y_0x739(vuint16 sigData)
{
  IlEnterCriticalObstacle_Pos_Y_0x739();
  Obstacle_Data_A.Obstacle_Data_A.Obstacle_Pos_Y_0x739_0 = ((vuint8) sigData);
  Obstacle_Data_A.Obstacle_Data_A.Obstacle_Pos_Y_0x739_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x03));
  IlLeaveCriticalObstacle_Pos_Y_0x739();
}


#endif

/* Handle:  311,Name:       Obstacle_Rel_Vel_X_0x739,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Rel_Vel_X_0x739(vuint16 sigData)
{
  IlEnterCriticalObstacle_Rel_Vel_X_0x739();
  Obstacle_Data_A.Obstacle_Data_A.Obstacle_Rel_Vel_X_0x739_0 = ((vuint8) sigData);
  Obstacle_Data_A.Obstacle_Data_A.Obstacle_Rel_Vel_X_0x739_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x0F));
  IlLeaveCriticalObstacle_Rel_Vel_X_0x739();
}


#endif

/* Handle:  325,Name:                 Failsafe_0x738,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxFailsafe_0x738(vuint8 sigData)
{
  IlEnterCriticalFailsafe_0x738();
  Obstacle_Status.Obstacle_Status.Failsafe_0x738 = ((vuint8) (sigData & (vuint8) 0x0F));
  IlSetEvent(IlTxSigHndFailsafe_0x738);
  IlLeaveCriticalFailsafe_0x738();
}


#endif

/* Handle:  326,Name:           Lane_Curvature_0x737,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxLane_Curvature_0x737(vuint16 sigData)
{
  IlEnterCriticalLane_Curvature_0x737();
  Lane.Lane.Lane_Curvature_0x737_0 = ((vuint8) sigData);
  Lane.Lane.Lane_Curvature_0x737_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalLane_Curvature_0x737();
}


#endif

/* Handle:  327,Name:             Lane_Heading_0x737,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxLane_Heading_0x737(vuint16 sigData)
{
  IlEnterCriticalLane_Heading_0x737();
  Lane.Lane.Lane_Heading_0x737_0 = ((vuint8) sigData);
  Lane.Lane.Lane_Heading_0x737_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x0F));
  IlLeaveCriticalLane_Heading_0x737();
}


#endif

/* Handle:  331,Name:                Yaw_Angle_0x737,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxYaw_Angle_0x737(vuint16 sigData)
{
  IlEnterCriticalYaw_Angle_0x737();
  Lane.Lane.Yaw_Angle_0x737_0 = ((vuint8) sigData);
  Lane.Lane.Yaw_Angle_0x737_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalYaw_Angle_0x737();
}


#endif

/* Handle:  332,Name:              Pitch_Angle_0x737,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxPitch_Angle_0x737(vuint16 sigData)
{
  IlEnterCriticalPitch_Angle_0x737();
  Lane.Lane.Pitch_Angle_0x737_0 = ((vuint8) sigData);
  Lane.Lane.Pitch_Angle_0x737_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalPitch_Angle_0x737();
}


#endif

/* Handle:  334,Name:   Boundary_left_hand_HLB_0x729,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxBoundary_left_hand_HLB_0x729(vuint16 sigData)
{
  IlEnterCriticalBoundary_left_hand_HLB_0x729();
  AHBC_Gradual.AHBC_Gradual.Boundary_left_hand_HLB_0x729_0 = ((vuint8) sigData);
  AHBC_Gradual.AHBC_Gradual.Boundary_left_hand_HLB_0x729_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x0F));
  IlLeaveCriticalBoundary_left_hand_HLB_0x729();
}


#endif

/* Handle:  335,Name:  Boundary_right_hand_HLB_0x729,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxBoundary_right_hand_HLB_0x729(vuint16 sigData)
{
  IlEnterCriticalBoundary_right_hand_HLB_0x729();
  AHBC_Gradual.AHBC_Gradual.Boundary_right_hand_HLB_0x729_0 = ((vuint8) (sigData & (vuint8) 0x0F));
  AHBC_Gradual.AHBC_Gradual.Boundary_right_hand_HLB_0x729_1 = ((vuint8) (sigData >> 4));
  IlLeaveCriticalBoundary_right_hand_HLB_0x729();
}


#endif

/* Handle:  336,Name:      Object_Distance_HLB_0x729,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObject_Distance_HLB_0x729(vuint8 sigData)
{
  IlEnterCriticalObject_Distance_HLB_0x729();
  AHBC_Gradual.AHBC_Gradual.Object_Distance_HLB_0x729 = ((vuint8) sigData);
  IlSetEvent(IlTxSigHndObject_Distance_HLB_0x729);
  IlLeaveCriticalObject_Distance_HLB_0x729();
}


#endif

/* Handle:  346,Name: Reasons_for_switch_to_low_beam_0x728,Size:  9,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxReasons_for_switch_to_low_beam_0x728(vuint16 sigData)
{
  IlEnterCriticalReasons_for_switch_to_low_beam_0x728();
  AHBC_high_low_beam.AHBC_high_low_beam.Reasons_for_switch_to_low_beam_0x728_0 = ((vuint8) sigData);
  AHBC_high_low_beam.AHBC_high_low_beam.Reasons_for_switch_to_low_beam_0x728_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x01));
  IlLeaveCriticalReasons_for_switch_to_low_beam_0x728();
}


#endif

/* Handle:  412,Name:    Distance_To_Left_Lane_0x669,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxDistance_To_Left_Lane_0x669(vuint16 sigData)
{
  IlEnterCriticalDistance_To_Left_Lane_0x669();
  Detils_Lane.Detils_Lane.Distance_To_Left_Lane_0x669_0 = ((vuint8) (sigData & (vuint8) 0x0F));
  Detils_Lane.Detils_Lane.Distance_To_Left_Lane_0x669_1 = ((vuint8) (sigData >> 4));
  IlLeaveCriticalDistance_To_Left_Lane_0x669();
}


#endif

/* Handle:  417,Name:   Distance_To_Right_Lane_0x669,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxDistance_To_Right_Lane_0x669(vuint16 sigData)
{
  IlEnterCriticalDistance_To_Right_Lane_0x669();
  Detils_Lane.Detils_Lane.Distance_To_Right_Lane_0x669_0 = ((vuint8) (sigData & (vuint8) 0x0F));
  Detils_Lane.Detils_Lane.Distance_To_Right_Lane_0x669_1 = ((vuint8) (sigData >> 4));
  IlLeaveCriticalDistance_To_Right_Lane_0x669();
}


#endif

/* Handle:  418,Name:                Fixed_Yaw_0x650,Size: 32,UsedBytes:  4,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxFixed_Yaw_0x650(vuint32 sigData)
{
  IlEnterCriticalFixed_Yaw_0x650();
  Fixed_FOE.Fixed_FOE.Fixed_Yaw_0x650_0 = ((vuint8) sigData);
  Fixed_FOE.Fixed_FOE.Fixed_Yaw_0x650_1 = ((vuint8) (sigData >> 8));
  Fixed_FOE.Fixed_FOE.Fixed_Yaw_0x650_2 = ((vuint8) (sigData >> 16));
  Fixed_FOE.Fixed_FOE.Fixed_Yaw_0x650_3 = ((vuint8) (sigData >> 24));
  IlSetEvent(IlTxSigHndFixed_Yaw_0x650);
  IlLeaveCriticalFixed_Yaw_0x650();
}


#endif

/* Handle:  419,Name:            Fixed_Horizon_0x650,Size: 32,UsedBytes:  4,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxFixed_Horizon_0x650(vuint32 sigData)
{
  IlEnterCriticalFixed_Horizon_0x650();
  Fixed_FOE.Fixed_FOE.Fixed_Horizon_0x650_0 = ((vuint8) sigData);
  Fixed_FOE.Fixed_FOE.Fixed_Horizon_0x650_1 = ((vuint8) (sigData >> 8));
  Fixed_FOE.Fixed_FOE.Fixed_Horizon_0x650_2 = ((vuint8) (sigData >> 16));
  Fixed_FOE.Fixed_FOE.Fixed_Horizon_0x650_3 = ((vuint8) (sigData >> 24));
  IlLeaveCriticalFixed_Horizon_0x650();
}


#endif



#if defined(IL_ENABLE_TX)
V_MEMROM0 V_MEMROM1 CanTransmitHandle V_MEMROM2 IlTxIndirection[kIlNumberOfTxObjects] = 
{
  0 /* ID: 0x00000726, Handle: 0, TSR_message_G [BC] */, 
  1 /* ID: 0x0000077b, Handle: 1, Next_lane_Right_P [FC] */, 
  2 /* ID: 0x0000077a, Handle: 2, Next_lane_Right_O [FC] */, 
  3 /* ID: 0x00000779, Handle: 3, Next_lane_Left_N [FC] */, 
  4 /* ID: 0x00000778, Handle: 4, Next_lane_Left_M [FC] */, 
  5 /* ID: 0x00000777, Handle: 5, Next_lane_Right_L [FC] */, 
  6 /* ID: 0x00000776, Handle: 6, Next_lane_Right_K [FC] */, 
  7 /* ID: 0x00000775, Handle: 7, Next_lane_Left_J [FC] */, 
  8 /* ID: 0x00000774, Handle: 8, Next_lane_Left_I [FC] */, 
  9 /* ID: 0x00000773, Handle: 9, Next_lane_Right_H [FC] */, 
  10 /* ID: 0x00000772, Handle: 10, Next_lane_Right_G [FC] */, 
  11 /* ID: 0x00000771, Handle: 11, Next_lane_Left_F [FC] */, 
  12 /* ID: 0x00000770, Handle: 12, Next_lane_Left_E [FC] */, 
  13 /* ID: 0x0000076f, Handle: 13, Next_lane_Right_D [FC] */, 
  14 /* ID: 0x0000076e, Handle: 14, Next_lane_Right_C [FC] */, 
  15 /* ID: 0x0000076d, Handle: 15, Next_lane_Left_B [FC] */, 
  16 /* ID: 0x0000076c, Handle: 16, Next_lane_Left_A [FC] */, 
  17 /* ID: 0x0000076b, Handle: 17, Numebr_of_next_lane [FC] */, 
  18 /* ID: 0x0000076a, Handle: 18, Reference_points [FC] */, 
  19 /* ID: 0x00000769, Handle: 19, LKA_right_lane_B [FC] */, 
  20 /* ID: 0x00000768, Handle: 20, LKA_right_lane_A [FC] */, 
  21 /* ID: 0x00000767, Handle: 21, LKA_left_lane_B [FC] */, 
  22 /* ID: 0x00000766, Handle: 22, LKA_left_lane_A [FC] */, 
  23 /* ID: 0x00000760, Handle: 23, Car_Info [FC] */, 
  24 /* ID: 0x00000750, Handle: 24, Obstacle_Data_X [FC] */, 
  25 /* ID: 0x0000074f, Handle: 25, Obstacle_Data_W [FC] */, 
  26 /* ID: 0x0000074e, Handle: 26, Obstacle_Data_V [FC] */, 
  27 /* ID: 0x0000074d, Handle: 27, Obstacle_Data_U [FC] */, 
  28 /* ID: 0x0000074c, Handle: 28, Obstacle_Data_T [FC] */, 
  29 /* ID: 0x0000074b, Handle: 29, Obstacle_Data_S [FC] */, 
  30 /* ID: 0x0000074a, Handle: 30, Obstacle_Data_R [FC] */, 
  31 /* ID: 0x00000749, Handle: 31, Obstacle_Data_Q [FC] */, 
  32 /* ID: 0x00000748, Handle: 32, Obstacle_Data_P [FC] */, 
  33 /* ID: 0x00000747, Handle: 33, Obstacle_Data_O [FC] */, 
  34 /* ID: 0x00000746, Handle: 34, Obstacle_Data_N [FC] */, 
  35 /* ID: 0x00000745, Handle: 35, Obstacle_Data_M [FC] */, 
  36 /* ID: 0x00000744, Handle: 36, Obstacle_Data_L [FC] */, 
  37 /* ID: 0x00000743, Handle: 37, Obstacle_Data_K [FC] */, 
  38 /* ID: 0x00000742, Handle: 38, Obstacle_Data_J [FC] */, 
  39 /* ID: 0x00000741, Handle: 39, Obstacle_Data_I [FC] */, 
  40 /* ID: 0x00000740, Handle: 40, Obstacle_Data_H [FC] */, 
  41 /* ID: 0x0000073f, Handle: 41, Obstacle_Data_G [FC] */, 
  42 /* ID: 0x0000073e, Handle: 42, Obstacle_Data_F [FC] */, 
  43 /* ID: 0x0000073d, Handle: 43, Obstacle_Data_E [FC] */, 
  44 /* ID: 0x0000073c, Handle: 44, Obstacle_Data_D [FC] */, 
  45 /* ID: 0x0000073b, Handle: 45, Obstacle_Data_C [FC] */, 
  46 /* ID: 0x0000073a, Handle: 46, Obstacle_Data_B [FC] */, 
  47 /* ID: 0x00000739, Handle: 47, Obstacle_Data_A [FC] */, 
  48 /* ID: 0x00000738, Handle: 48, Obstacle_Status [FC] */, 
  49 /* ID: 0x00000737, Handle: 49, Lane [FC] */, 
  50 /* ID: 0x00000729, Handle: 50, AHBC_Gradual [FC] */, 
  51 /* ID: 0x00000728, Handle: 51, AHBC_high_low_beam [FC] */, 
  52 /* ID: 0x00000727, Handle: 52, Sign_Type [FC] */, 
  53 /* ID: 0x00000725, Handle: 53, TSR_message_F [FC] */, 
  54 /* ID: 0x00000724, Handle: 54, TSR_message_E [FC] */, 
  55 /* ID: 0x00000723, Handle: 55, TSR_message_D [FC] */, 
  56 /* ID: 0x00000722, Handle: 56, TSR_message_C [FC] */, 
  57 /* ID: 0x00000721, Handle: 57, TSR_message_B [FC] */, 
  58 /* ID: 0x00000720, Handle: 58, TSR_message_A [FC] */, 
  59 /* ID: 0x00000700, Handle: 59, C2_Display_and_warning [FC] */, 
  60 /* ID: 0x00000669, Handle: 60, Detils_Lane [FC] */, 
  61 /* ID: 0x00000650, Handle: 61, Fixed_FOE [FC] */
};
#endif


/* -----------------------------------------------------------------------------
    &&&~ CAN handle to Il start stop handle
 ----------------------------------------------------------------------------- */

#if defined(IL_ENABLE_TX) && defined(C_ENABLE_CAN_CANCEL_NOTIFICATION)
V_MEMROM0 V_MEMROM1 IlStartStopHnd V_MEMROM2 IlCanHndToIlHnd[kIlCanNumberOfTxObjects] = 
{
  { 0, 1 } /* start - stop  ID: 0x00000726, TSR_message_G [BC] */, 
  { 1, 2 } /* start - stop  ID: 0x0000077b, Next_lane_Right_P [FC] */, 
  { 2, 3 } /* start - stop  ID: 0x0000077a, Next_lane_Right_O [FC] */, 
  { 3, 4 } /* start - stop  ID: 0x00000779, Next_lane_Left_N [FC] */, 
  { 4, 5 } /* start - stop  ID: 0x00000778, Next_lane_Left_M [FC] */, 
  { 5, 6 } /* start - stop  ID: 0x00000777, Next_lane_Right_L [FC] */, 
  { 6, 7 } /* start - stop  ID: 0x00000776, Next_lane_Right_K [FC] */, 
  { 7, 8 } /* start - stop  ID: 0x00000775, Next_lane_Left_J [FC] */, 
  { 8, 9 } /* start - stop  ID: 0x00000774, Next_lane_Left_I [FC] */, 
  { 9, 10 } /* start - stop  ID: 0x00000773, Next_lane_Right_H [FC] */, 
  { 10, 11 } /* start - stop  ID: 0x00000772, Next_lane_Right_G [FC] */, 
  { 11, 12 } /* start - stop  ID: 0x00000771, Next_lane_Left_F [FC] */, 
  { 12, 13 } /* start - stop  ID: 0x00000770, Next_lane_Left_E [FC] */, 
  { 13, 14 } /* start - stop  ID: 0x0000076f, Next_lane_Right_D [FC] */, 
  { 14, 15 } /* start - stop  ID: 0x0000076e, Next_lane_Right_C [FC] */, 
  { 15, 16 } /* start - stop  ID: 0x0000076d, Next_lane_Left_B [FC] */, 
  { 16, 17 } /* start - stop  ID: 0x0000076c, Next_lane_Left_A [FC] */, 
  { 17, 18 } /* start - stop  ID: 0x0000076b, Numebr_of_next_lane [FC] */, 
  { 18, 19 } /* start - stop  ID: 0x0000076a, Reference_points [FC] */, 
  { 19, 20 } /* start - stop  ID: 0x00000769, LKA_right_lane_B [FC] */, 
  { 20, 21 } /* start - stop  ID: 0x00000768, LKA_right_lane_A [FC] */, 
  { 21, 22 } /* start - stop  ID: 0x00000767, LKA_left_lane_B [FC] */, 
  { 22, 23 } /* start - stop  ID: 0x00000766, LKA_left_lane_A [FC] */, 
  { 23, 24 } /* start - stop  ID: 0x00000760, Car_Info [FC] */, 
  { 24, 25 } /* start - stop  ID: 0x00000750, Obstacle_Data_X [FC] */, 
  { 25, 26 } /* start - stop  ID: 0x0000074f, Obstacle_Data_W [FC] */, 
  { 26, 27 } /* start - stop  ID: 0x0000074e, Obstacle_Data_V [FC] */, 
  { 27, 28 } /* start - stop  ID: 0x0000074d, Obstacle_Data_U [FC] */, 
  { 28, 29 } /* start - stop  ID: 0x0000074c, Obstacle_Data_T [FC] */, 
  { 29, 30 } /* start - stop  ID: 0x0000074b, Obstacle_Data_S [FC] */, 
  { 30, 31 } /* start - stop  ID: 0x0000074a, Obstacle_Data_R [FC] */, 
  { 31, 32 } /* start - stop  ID: 0x00000749, Obstacle_Data_Q [FC] */, 
  { 32, 33 } /* start - stop  ID: 0x00000748, Obstacle_Data_P [FC] */, 
  { 33, 34 } /* start - stop  ID: 0x00000747, Obstacle_Data_O [FC] */, 
  { 34, 35 } /* start - stop  ID: 0x00000746, Obstacle_Data_N [FC] */, 
  { 35, 36 } /* start - stop  ID: 0x00000745, Obstacle_Data_M [FC] */, 
  { 36, 37 } /* start - stop  ID: 0x00000744, Obstacle_Data_L [FC] */, 
  { 37, 38 } /* start - stop  ID: 0x00000743, Obstacle_Data_K [FC] */, 
  { 38, 39 } /* start - stop  ID: 0x00000742, Obstacle_Data_J [FC] */, 
  { 39, 40 } /* start - stop  ID: 0x00000741, Obstacle_Data_I [FC] */, 
  { 40, 41 } /* start - stop  ID: 0x00000740, Obstacle_Data_H [FC] */, 
  { 41, 42 } /* start - stop  ID: 0x0000073f, Obstacle_Data_G [FC] */, 
  { 42, 43 } /* start - stop  ID: 0x0000073e, Obstacle_Data_F [FC] */, 
  { 43, 44 } /* start - stop  ID: 0x0000073d, Obstacle_Data_E [FC] */, 
  { 44, 45 } /* start - stop  ID: 0x0000073c, Obstacle_Data_D [FC] */, 
  { 45, 46 } /* start - stop  ID: 0x0000073b, Obstacle_Data_C [FC] */, 
  { 46, 47 } /* start - stop  ID: 0x0000073a, Obstacle_Data_B [FC] */, 
  { 47, 48 } /* start - stop  ID: 0x00000739, Obstacle_Data_A [FC] */, 
  { 48, 49 } /* start - stop  ID: 0x00000738, Obstacle_Status [FC] */, 
  { 49, 50 } /* start - stop  ID: 0x00000737, Lane [FC] */, 
  { 50, 51 } /* start - stop  ID: 0x00000729, AHBC_Gradual [FC] */, 
  { 51, 52 } /* start - stop  ID: 0x00000728, AHBC_high_low_beam [FC] */, 
  { 52, 53 } /* start - stop  ID: 0x00000727, Sign_Type [FC] */, 
  { 53, 54 } /* start - stop  ID: 0x00000725, TSR_message_F [FC] */, 
  { 54, 55 } /* start - stop  ID: 0x00000724, TSR_message_E [FC] */, 
  { 55, 56 } /* start - stop  ID: 0x00000723, TSR_message_D [FC] */, 
  { 56, 57 } /* start - stop  ID: 0x00000722, TSR_message_C [FC] */, 
  { 57, 58 } /* start - stop  ID: 0x00000721, TSR_message_B [FC] */, 
  { 58, 59 } /* start - stop  ID: 0x00000720, TSR_message_A [FC] */, 
  { 59, 60 } /* start - stop  ID: 0x00000700, C2_Display_and_warning [FC] */, 
  { 60, 61 } /* start - stop  ID: 0x00000669, Detils_Lane [FC] */, 
  { 61, 62 } /* start - stop  ID: 0x00000650, Fixed_FOE [FC] */
};
#endif




/* -----------------------------------------------------------------------------
    &&&~ TxTypes for interaction layer tx messages 
 ----------------------------------------------------------------------------- */

#if defined(IL_ENABLE_TX)
V_MEMROM0 V_MEMROM1 vuint8 V_MEMROM2 IlTxType[kIlNumberOfTxObjects] = 
{
  kTxSendCyclic /* ID: 0x00000726, Handle: 0, TSR_message_G [BC] */, 
  kTxSendCyclic /* ID: 0x0000077b, Handle: 1, Next_lane_Right_P [FC] */, 
  kTxSendCyclic /* ID: 0x0000077a, Handle: 2, Next_lane_Right_O [FC] */, 
  kTxSendCyclic /* ID: 0x00000779, Handle: 3, Next_lane_Left_N [FC] */, 
  kTxSendCyclic /* ID: 0x00000778, Handle: 4, Next_lane_Left_M [FC] */, 
  kTxSendCyclic /* ID: 0x00000777, Handle: 5, Next_lane_Right_L [FC] */, 
  kTxSendCyclic /* ID: 0x00000776, Handle: 6, Next_lane_Right_K [FC] */, 
  kTxSendCyclic /* ID: 0x00000775, Handle: 7, Next_lane_Left_J [FC] */, 
  kTxSendCyclic /* ID: 0x00000774, Handle: 8, Next_lane_Left_I [FC] */, 
  kTxSendCyclic /* ID: 0x00000773, Handle: 9, Next_lane_Right_H [FC] */, 
  kTxSendCyclic /* ID: 0x00000772, Handle: 10, Next_lane_Right_G [FC] */, 
  kTxSendCyclic /* ID: 0x00000771, Handle: 11, Next_lane_Left_F [FC] */, 
  kTxSendCyclic /* ID: 0x00000770, Handle: 12, Next_lane_Left_E [FC] */, 
  kTxSendCyclic /* ID: 0x0000076f, Handle: 13, Next_lane_Right_D [FC] */, 
  kTxSendCyclic /* ID: 0x0000076e, Handle: 14, Next_lane_Right_C [FC] */, 
  kTxSendCyclic /* ID: 0x0000076d, Handle: 15, Next_lane_Left_B [FC] */, 
  kTxSendCyclic /* ID: 0x0000076c, Handle: 16, Next_lane_Left_A [FC] */, 
  kTxSendCyclic /* ID: 0x0000076b, Handle: 17, Numebr_of_next_lane [FC] */, 
  kTxSendCyclic /* ID: 0x0000076a, Handle: 18, Reference_points [FC] */, 
  kTxSendCyclic /* ID: 0x00000769, Handle: 19, LKA_right_lane_B [FC] */, 
  kTxSendCyclic /* ID: 0x00000768, Handle: 20, LKA_right_lane_A [FC] */, 
  kTxSendCyclic /* ID: 0x00000767, Handle: 21, LKA_left_lane_B [FC] */, 
  kTxSendCyclic /* ID: 0x00000766, Handle: 22, LKA_left_lane_A [FC] */, 
  kTxSendCyclic /* ID: 0x00000760, Handle: 23, Car_Info [FC] */, 
  kTxSendCyclic /* ID: 0x00000750, Handle: 24, Obstacle_Data_X [FC] */, 
  kTxSendCyclic /* ID: 0x0000074f, Handle: 25, Obstacle_Data_W [FC] */, 
  kTxSendCyclic /* ID: 0x0000074e, Handle: 26, Obstacle_Data_V [FC] */, 
  kTxSendCyclic /* ID: 0x0000074d, Handle: 27, Obstacle_Data_U [FC] */, 
  kTxSendCyclic /* ID: 0x0000074c, Handle: 28, Obstacle_Data_T [FC] */, 
  kTxSendCyclic /* ID: 0x0000074b, Handle: 29, Obstacle_Data_S [FC] */, 
  kTxSendCyclic /* ID: 0x0000074a, Handle: 30, Obstacle_Data_R [FC] */, 
  kTxSendCyclic /* ID: 0x00000749, Handle: 31, Obstacle_Data_Q [FC] */, 
  kTxSendCyclic /* ID: 0x00000748, Handle: 32, Obstacle_Data_P [FC] */, 
  kTxSendCyclic /* ID: 0x00000747, Handle: 33, Obstacle_Data_O [FC] */, 
  kTxSendCyclic /* ID: 0x00000746, Handle: 34, Obstacle_Data_N [FC] */, 
  kTxSendCyclic /* ID: 0x00000745, Handle: 35, Obstacle_Data_M [FC] */, 
  kTxSendCyclic /* ID: 0x00000744, Handle: 36, Obstacle_Data_L [FC] */, 
  kTxSendCyclic /* ID: 0x00000743, Handle: 37, Obstacle_Data_K [FC] */, 
  kTxSendCyclic /* ID: 0x00000742, Handle: 38, Obstacle_Data_J [FC] */, 
  kTxSendCyclic /* ID: 0x00000741, Handle: 39, Obstacle_Data_I [FC] */, 
  kTxSendCyclic /* ID: 0x00000740, Handle: 40, Obstacle_Data_H [FC] */, 
  kTxSendCyclic /* ID: 0x0000073f, Handle: 41, Obstacle_Data_G [FC] */, 
  kTxSendCyclic /* ID: 0x0000073e, Handle: 42, Obstacle_Data_F [FC] */, 
  kTxSendCyclic /* ID: 0x0000073d, Handle: 43, Obstacle_Data_E [FC] */, 
  kTxSendCyclic /* ID: 0x0000073c, Handle: 44, Obstacle_Data_D [FC] */, 
  kTxSendCyclic /* ID: 0x0000073b, Handle: 45, Obstacle_Data_C [FC] */, 
  kTxSendCyclic /* ID: 0x0000073a, Handle: 46, Obstacle_Data_B [FC] */, 
  kTxSendCyclic /* ID: 0x00000739, Handle: 47, Obstacle_Data_A [FC] */, 
  kTxSendCyclic /* ID: 0x00000738, Handle: 48, Obstacle_Status [FC] */, 
  kTxSendCyclic /* ID: 0x00000737, Handle: 49, Lane [FC] */, 
  kTxSendCyclic /* ID: 0x00000729, Handle: 50, AHBC_Gradual [FC] */, 
  kTxSendCyclic /* ID: 0x00000728, Handle: 51, AHBC_high_low_beam [FC] */, 
  kTxSendCyclic /* ID: 0x00000727, Handle: 52, Sign_Type [FC] */, 
  kTxSendCyclic /* ID: 0x00000725, Handle: 53, TSR_message_F [FC] */, 
  kTxSendCyclic /* ID: 0x00000724, Handle: 54, TSR_message_E [FC] */, 
  kTxSendCyclic /* ID: 0x00000723, Handle: 55, TSR_message_D [FC] */, 
  kTxSendCyclic /* ID: 0x00000722, Handle: 56, TSR_message_C [FC] */, 
  kTxSendCyclic /* ID: 0x00000721, Handle: 57, TSR_message_B [FC] */, 
  kTxSendCyclic /* ID: 0x00000720, Handle: 58, TSR_message_A [FC] */, 
  kTxSendCyclic /* ID: 0x00000700, Handle: 59, C2_Display_and_warning [FC] */, 
  kTxSendCyclic /* ID: 0x00000669, Handle: 60, Detils_Lane [FC] */, 
  kTxSendCyclic /* ID: 0x00000650, Handle: 61, Fixed_FOE [FC] */
};
#endif




/* begin Fileversion check */
#ifndef SKIP_MAGIC_NUMBER
#ifdef MAGIC_NUMBER
  #if MAGIC_NUMBER != 297263386
      #error "The magic number of the generated file <D:\code\McuCode\GENy-IL-interfaceGenerator\tools\Geny\il_par.c> is different. Please check time and date of generated files!"
  #endif
#else
  #error "The magic number is not defined in the generated file <D:\code\McuCode\GENy-IL-interfaceGenerator\tools\Geny\il_par.c> "

#endif  /* MAGIC_NUMBER */
#endif  /* SKIP_MAGIC_NUMBER */

/* end Fileversion check */

