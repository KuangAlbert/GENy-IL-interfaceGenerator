/* -----------------------------------------------------------------------------
  Filename:    can_par.c
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

#define C_DRV_INTERNAL
#include "can_inc.h"
#include "can_par.h"
#include "v_inc.h"

/* ROM CATEGORY 1 START */
V_MEMROM0 V_MEMROM1 tCanTxId0 V_MEMROM2 CanTxId0[kCanNumberOfTxObjects] = 
{
  MK_STDID0(0x726u) /* ID: 0x00000726, Handle: 0, TSR_message_G [BC] */, 
  MK_STDID0(0x77Bu) /* ID: 0x0000077b, Handle: 1, Next_lane_Right_P [FC] */, 
  MK_STDID0(0x77Au) /* ID: 0x0000077a, Handle: 2, Next_lane_Right_O [FC] */, 
  MK_STDID0(0x779u) /* ID: 0x00000779, Handle: 3, Next_lane_Left_N [FC] */, 
  MK_STDID0(0x778u) /* ID: 0x00000778, Handle: 4, Next_lane_Left_M [FC] */, 
  MK_STDID0(0x777u) /* ID: 0x00000777, Handle: 5, Next_lane_Right_L [FC] */, 
  MK_STDID0(0x776u) /* ID: 0x00000776, Handle: 6, Next_lane_Right_K [FC] */, 
  MK_STDID0(0x775u) /* ID: 0x00000775, Handle: 7, Next_lane_Left_J [FC] */, 
  MK_STDID0(0x774u) /* ID: 0x00000774, Handle: 8, Next_lane_Left_I [FC] */, 
  MK_STDID0(0x773u) /* ID: 0x00000773, Handle: 9, Next_lane_Right_H [FC] */, 
  MK_STDID0(0x772u) /* ID: 0x00000772, Handle: 10, Next_lane_Right_G [FC] */, 
  MK_STDID0(0x771u) /* ID: 0x00000771, Handle: 11, Next_lane_Left_F [FC] */, 
  MK_STDID0(0x770u) /* ID: 0x00000770, Handle: 12, Next_lane_Left_E [FC] */, 
  MK_STDID0(0x76Fu) /* ID: 0x0000076f, Handle: 13, Next_lane_Right_D [FC] */, 
  MK_STDID0(0x76Eu) /* ID: 0x0000076e, Handle: 14, Next_lane_Right_C [FC] */, 
  MK_STDID0(0x76Du) /* ID: 0x0000076d, Handle: 15, Next_lane_Left_B [FC] */, 
  MK_STDID0(0x76Cu) /* ID: 0x0000076c, Handle: 16, Next_lane_Left_A [FC] */, 
  MK_STDID0(0x76Bu) /* ID: 0x0000076b, Handle: 17, Numebr_of_next_lane [FC] */, 
  MK_STDID0(0x76Au) /* ID: 0x0000076a, Handle: 18, Reference_points [FC] */, 
  MK_STDID0(0x769u) /* ID: 0x00000769, Handle: 19, LKA_right_lane_B [FC] */, 
  MK_STDID0(0x768u) /* ID: 0x00000768, Handle: 20, LKA_right_lane_A [FC] */, 
  MK_STDID0(0x767u) /* ID: 0x00000767, Handle: 21, LKA_left_lane_B [FC] */, 
  MK_STDID0(0x766u) /* ID: 0x00000766, Handle: 22, LKA_left_lane_A [FC] */, 
  MK_STDID0(0x760u) /* ID: 0x00000760, Handle: 23, Car_Info [FC] */, 
  MK_STDID0(0x750u) /* ID: 0x00000750, Handle: 24, Obstacle_Data_X [FC] */, 
  MK_STDID0(0x74Fu) /* ID: 0x0000074f, Handle: 25, Obstacle_Data_W [FC] */, 
  MK_STDID0(0x74Eu) /* ID: 0x0000074e, Handle: 26, Obstacle_Data_V [FC] */, 
  MK_STDID0(0x74Du) /* ID: 0x0000074d, Handle: 27, Obstacle_Data_U [FC] */, 
  MK_STDID0(0x74Cu) /* ID: 0x0000074c, Handle: 28, Obstacle_Data_T [FC] */, 
  MK_STDID0(0x74Bu) /* ID: 0x0000074b, Handle: 29, Obstacle_Data_S [FC] */, 
  MK_STDID0(0x74Au) /* ID: 0x0000074a, Handle: 30, Obstacle_Data_R [FC] */, 
  MK_STDID0(0x749u) /* ID: 0x00000749, Handle: 31, Obstacle_Data_Q [FC] */, 
  MK_STDID0(0x748u) /* ID: 0x00000748, Handle: 32, Obstacle_Data_P [FC] */, 
  MK_STDID0(0x747u) /* ID: 0x00000747, Handle: 33, Obstacle_Data_O [FC] */, 
  MK_STDID0(0x746u) /* ID: 0x00000746, Handle: 34, Obstacle_Data_N [FC] */, 
  MK_STDID0(0x745u) /* ID: 0x00000745, Handle: 35, Obstacle_Data_M [FC] */, 
  MK_STDID0(0x744u) /* ID: 0x00000744, Handle: 36, Obstacle_Data_L [FC] */, 
  MK_STDID0(0x743u) /* ID: 0x00000743, Handle: 37, Obstacle_Data_K [FC] */, 
  MK_STDID0(0x742u) /* ID: 0x00000742, Handle: 38, Obstacle_Data_J [FC] */, 
  MK_STDID0(0x741u) /* ID: 0x00000741, Handle: 39, Obstacle_Data_I [FC] */, 
  MK_STDID0(0x740u) /* ID: 0x00000740, Handle: 40, Obstacle_Data_H [FC] */, 
  MK_STDID0(0x73Fu) /* ID: 0x0000073f, Handle: 41, Obstacle_Data_G [FC] */, 
  MK_STDID0(0x73Eu) /* ID: 0x0000073e, Handle: 42, Obstacle_Data_F [FC] */, 
  MK_STDID0(0x73Du) /* ID: 0x0000073d, Handle: 43, Obstacle_Data_E [FC] */, 
  MK_STDID0(0x73Cu) /* ID: 0x0000073c, Handle: 44, Obstacle_Data_D [FC] */, 
  MK_STDID0(0x73Bu) /* ID: 0x0000073b, Handle: 45, Obstacle_Data_C [FC] */, 
  MK_STDID0(0x73Au) /* ID: 0x0000073a, Handle: 46, Obstacle_Data_B [FC] */, 
  MK_STDID0(0x739u) /* ID: 0x00000739, Handle: 47, Obstacle_Data_A [FC] */, 
  MK_STDID0(0x738u) /* ID: 0x00000738, Handle: 48, Obstacle_Status [FC] */, 
  MK_STDID0(0x737u) /* ID: 0x00000737, Handle: 49, Lane [FC] */, 
  MK_STDID0(0x729u) /* ID: 0x00000729, Handle: 50, AHBC_Gradual [FC] */, 
  MK_STDID0(0x728u) /* ID: 0x00000728, Handle: 51, AHBC_high_low_beam [FC] */, 
  MK_STDID0(0x727u) /* ID: 0x00000727, Handle: 52, Sign_Type [FC] */, 
  MK_STDID0(0x725u) /* ID: 0x00000725, Handle: 53, TSR_message_F [FC] */, 
  MK_STDID0(0x724u) /* ID: 0x00000724, Handle: 54, TSR_message_E [FC] */, 
  MK_STDID0(0x723u) /* ID: 0x00000723, Handle: 55, TSR_message_D [FC] */, 
  MK_STDID0(0x722u) /* ID: 0x00000722, Handle: 56, TSR_message_C [FC] */, 
  MK_STDID0(0x721u) /* ID: 0x00000721, Handle: 57, TSR_message_B [FC] */, 
  MK_STDID0(0x720u) /* ID: 0x00000720, Handle: 58, TSR_message_A [FC] */, 
  MK_STDID0(0x700u) /* ID: 0x00000700, Handle: 59, C2_Display_and_warning [FC] */, 
  MK_STDID0(0x669u) /* ID: 0x00000669, Handle: 60, Detils_Lane [FC] */, 
  MK_STDID0(0x650u) /* ID: 0x00000650, Handle: 61, Fixed_FOE [FC] */
};
/* ROM CATEGORY 1 END */


/* ROM CATEGORY 1 START */
V_MEMROM0 V_MEMROM1 vuint8 V_MEMROM2 CanTxDLC[kCanNumberOfTxObjects] = 
{
  MK_TX_DLC(6) /* ID: 0x00000726, Handle: 0, TSR_message_G [BC] */, 
  MK_TX_DLC(4) /* ID: 0x0000077b, Handle: 1, Next_lane_Right_P [FC] */, 
  MK_TX_DLC(8) /* ID: 0x0000077a, Handle: 2, Next_lane_Right_O [FC] */, 
  MK_TX_DLC(4) /* ID: 0x00000779, Handle: 3, Next_lane_Left_N [FC] */, 
  MK_TX_DLC(8) /* ID: 0x00000778, Handle: 4, Next_lane_Left_M [FC] */, 
  MK_TX_DLC(4) /* ID: 0x00000777, Handle: 5, Next_lane_Right_L [FC] */, 
  MK_TX_DLC(8) /* ID: 0x00000776, Handle: 6, Next_lane_Right_K [FC] */, 
  MK_TX_DLC(4) /* ID: 0x00000775, Handle: 7, Next_lane_Left_J [FC] */, 
  MK_TX_DLC(8) /* ID: 0x00000774, Handle: 8, Next_lane_Left_I [FC] */, 
  MK_TX_DLC(4) /* ID: 0x00000773, Handle: 9, Next_lane_Right_H [FC] */, 
  MK_TX_DLC(8) /* ID: 0x00000772, Handle: 10, Next_lane_Right_G [FC] */, 
  MK_TX_DLC(4) /* ID: 0x00000771, Handle: 11, Next_lane_Left_F [FC] */, 
  MK_TX_DLC(8) /* ID: 0x00000770, Handle: 12, Next_lane_Left_E [FC] */, 
  MK_TX_DLC(4) /* ID: 0x0000076f, Handle: 13, Next_lane_Right_D [FC] */, 
  MK_TX_DLC(8) /* ID: 0x0000076e, Handle: 14, Next_lane_Right_C [FC] */, 
  MK_TX_DLC(4) /* ID: 0x0000076d, Handle: 15, Next_lane_Left_B [FC] */, 
  MK_TX_DLC(8) /* ID: 0x0000076c, Handle: 16, Next_lane_Left_A [FC] */, 
  MK_TX_DLC(1) /* ID: 0x0000076b, Handle: 17, Numebr_of_next_lane [FC] */, 
  MK_TX_DLC(8) /* ID: 0x0000076a, Handle: 18, Reference_points [FC] */, 
  MK_TX_DLC(4) /* ID: 0x00000769, Handle: 19, LKA_right_lane_B [FC] */, 
  MK_TX_DLC(8) /* ID: 0x00000768, Handle: 20, LKA_right_lane_A [FC] */, 
  MK_TX_DLC(4) /* ID: 0x00000767, Handle: 21, LKA_left_lane_B [FC] */, 
  MK_TX_DLC(8) /* ID: 0x00000766, Handle: 22, LKA_left_lane_A [FC] */, 
  MK_TX_DLC(8) /* ID: 0x00000760, Handle: 23, Car_Info [FC] */, 
  MK_TX_DLC(8) /* ID: 0x00000750, Handle: 24, Obstacle_Data_X [FC] */, 
  MK_TX_DLC(8) /* ID: 0x0000074f, Handle: 25, Obstacle_Data_W [FC] */, 
  MK_TX_DLC(8) /* ID: 0x0000074e, Handle: 26, Obstacle_Data_V [FC] */, 
  MK_TX_DLC(8) /* ID: 0x0000074d, Handle: 27, Obstacle_Data_U [FC] */, 
  MK_TX_DLC(8) /* ID: 0x0000074c, Handle: 28, Obstacle_Data_T [FC] */, 
  MK_TX_DLC(8) /* ID: 0x0000074b, Handle: 29, Obstacle_Data_S [FC] */, 
  MK_TX_DLC(8) /* ID: 0x0000074a, Handle: 30, Obstacle_Data_R [FC] */, 
  MK_TX_DLC(8) /* ID: 0x00000749, Handle: 31, Obstacle_Data_Q [FC] */, 
  MK_TX_DLC(8) /* ID: 0x00000748, Handle: 32, Obstacle_Data_P [FC] */, 
  MK_TX_DLC(8) /* ID: 0x00000747, Handle: 33, Obstacle_Data_O [FC] */, 
  MK_TX_DLC(8) /* ID: 0x00000746, Handle: 34, Obstacle_Data_N [FC] */, 
  MK_TX_DLC(8) /* ID: 0x00000745, Handle: 35, Obstacle_Data_M [FC] */, 
  MK_TX_DLC(8) /* ID: 0x00000744, Handle: 36, Obstacle_Data_L [FC] */, 
  MK_TX_DLC(8) /* ID: 0x00000743, Handle: 37, Obstacle_Data_K [FC] */, 
  MK_TX_DLC(8) /* ID: 0x00000742, Handle: 38, Obstacle_Data_J [FC] */, 
  MK_TX_DLC(8) /* ID: 0x00000741, Handle: 39, Obstacle_Data_I [FC] */, 
  MK_TX_DLC(8) /* ID: 0x00000740, Handle: 40, Obstacle_Data_H [FC] */, 
  MK_TX_DLC(8) /* ID: 0x0000073f, Handle: 41, Obstacle_Data_G [FC] */, 
  MK_TX_DLC(8) /* ID: 0x0000073e, Handle: 42, Obstacle_Data_F [FC] */, 
  MK_TX_DLC(8) /* ID: 0x0000073d, Handle: 43, Obstacle_Data_E [FC] */, 
  MK_TX_DLC(8) /* ID: 0x0000073c, Handle: 44, Obstacle_Data_D [FC] */, 
  MK_TX_DLC(8) /* ID: 0x0000073b, Handle: 45, Obstacle_Data_C [FC] */, 
  MK_TX_DLC(8) /* ID: 0x0000073a, Handle: 46, Obstacle_Data_B [FC] */, 
  MK_TX_DLC(8) /* ID: 0x00000739, Handle: 47, Obstacle_Data_A [FC] */, 
  MK_TX_DLC(6) /* ID: 0x00000738, Handle: 48, Obstacle_Status [FC] */, 
  MK_TX_DLC(8) /* ID: 0x00000737, Handle: 49, Lane [FC] */, 
  MK_TX_DLC(7) /* ID: 0x00000729, Handle: 50, AHBC_Gradual [FC] */, 
  MK_TX_DLC(3) /* ID: 0x00000728, Handle: 51, AHBC_high_low_beam [FC] */, 
  MK_TX_DLC(8) /* ID: 0x00000727, Handle: 52, Sign_Type [FC] */, 
  MK_TX_DLC(6) /* ID: 0x00000725, Handle: 53, TSR_message_F [FC] */, 
  MK_TX_DLC(6) /* ID: 0x00000724, Handle: 54, TSR_message_E [FC] */, 
  MK_TX_DLC(6) /* ID: 0x00000723, Handle: 55, TSR_message_D [FC] */, 
  MK_TX_DLC(6) /* ID: 0x00000722, Handle: 56, TSR_message_C [FC] */, 
  MK_TX_DLC(6) /* ID: 0x00000721, Handle: 57, TSR_message_B [FC] */, 
  MK_TX_DLC(6) /* ID: 0x00000720, Handle: 58, TSR_message_A [FC] */, 
  MK_TX_DLC(8) /* ID: 0x00000700, Handle: 59, C2_Display_and_warning [FC] */, 
  MK_TX_DLC(8) /* ID: 0x00000669, Handle: 60, Detils_Lane [FC] */, 
  MK_TX_DLC(8) /* ID: 0x00000650, Handle: 61, Fixed_FOE [FC] */
};
/* ROM CATEGORY 1 END */


#ifdef C_ENABLE_COPY_TX_DATA
/* ROM CATEGORY 1 START */
V_MEMROM0 V_MEMROM1 TxDataPtr V_MEMROM2 CanTxDataPtr[kCanNumberOfTxObjects] = 
{
  (TxDataPtr) TSR_message_G._c /* ID: 0x00000726, Handle: 0, TSR_message_G [BC] */, 
  (TxDataPtr) Next_lane_Right_P._c /* ID: 0x0000077b, Handle: 1, Next_lane_Right_P [FC] */, 
  (TxDataPtr) Next_lane_Right_O._c /* ID: 0x0000077a, Handle: 2, Next_lane_Right_O [FC] */, 
  (TxDataPtr) Next_lane_Left_N._c /* ID: 0x00000779, Handle: 3, Next_lane_Left_N [FC] */, 
  (TxDataPtr) Next_lane_Left_M._c /* ID: 0x00000778, Handle: 4, Next_lane_Left_M [FC] */, 
  (TxDataPtr) Next_lane_Right_L._c /* ID: 0x00000777, Handle: 5, Next_lane_Right_L [FC] */, 
  (TxDataPtr) Next_lane_Right_K._c /* ID: 0x00000776, Handle: 6, Next_lane_Right_K [FC] */, 
  (TxDataPtr) Next_lane_Left_J._c /* ID: 0x00000775, Handle: 7, Next_lane_Left_J [FC] */, 
  (TxDataPtr) Next_lane_Left_I._c /* ID: 0x00000774, Handle: 8, Next_lane_Left_I [FC] */, 
  (TxDataPtr) Next_lane_Right_H._c /* ID: 0x00000773, Handle: 9, Next_lane_Right_H [FC] */, 
  (TxDataPtr) Next_lane_Right_G._c /* ID: 0x00000772, Handle: 10, Next_lane_Right_G [FC] */, 
  (TxDataPtr) Next_lane_Left_F._c /* ID: 0x00000771, Handle: 11, Next_lane_Left_F [FC] */, 
  (TxDataPtr) Next_lane_Left_E._c /* ID: 0x00000770, Handle: 12, Next_lane_Left_E [FC] */, 
  (TxDataPtr) Next_lane_Right_D._c /* ID: 0x0000076f, Handle: 13, Next_lane_Right_D [FC] */, 
  (TxDataPtr) Next_lane_Right_C._c /* ID: 0x0000076e, Handle: 14, Next_lane_Right_C [FC] */, 
  (TxDataPtr) Next_lane_Left_B._c /* ID: 0x0000076d, Handle: 15, Next_lane_Left_B [FC] */, 
  (TxDataPtr) Next_lane_Left_A._c /* ID: 0x0000076c, Handle: 16, Next_lane_Left_A [FC] */, 
  (TxDataPtr) Numebr_of_next_lane._c /* ID: 0x0000076b, Handle: 17, Numebr_of_next_lane [FC] */, 
  (TxDataPtr) Reference_points._c /* ID: 0x0000076a, Handle: 18, Reference_points [FC] */, 
  (TxDataPtr) LKA_right_lane_B._c /* ID: 0x00000769, Handle: 19, LKA_right_lane_B [FC] */, 
  (TxDataPtr) LKA_right_lane_A._c /* ID: 0x00000768, Handle: 20, LKA_right_lane_A [FC] */, 
  (TxDataPtr) LKA_left_lane_B._c /* ID: 0x00000767, Handle: 21, LKA_left_lane_B [FC] */, 
  (TxDataPtr) LKA_left_lane_A._c /* ID: 0x00000766, Handle: 22, LKA_left_lane_A [FC] */, 
  (TxDataPtr) Car_Info._c /* ID: 0x00000760, Handle: 23, Car_Info [FC] */, 
  (TxDataPtr) Obstacle_Data_X._c /* ID: 0x00000750, Handle: 24, Obstacle_Data_X [FC] */, 
  (TxDataPtr) Obstacle_Data_W._c /* ID: 0x0000074f, Handle: 25, Obstacle_Data_W [FC] */, 
  (TxDataPtr) Obstacle_Data_V._c /* ID: 0x0000074e, Handle: 26, Obstacle_Data_V [FC] */, 
  (TxDataPtr) Obstacle_Data_U._c /* ID: 0x0000074d, Handle: 27, Obstacle_Data_U [FC] */, 
  (TxDataPtr) Obstacle_Data_T._c /* ID: 0x0000074c, Handle: 28, Obstacle_Data_T [FC] */, 
  (TxDataPtr) Obstacle_Data_S._c /* ID: 0x0000074b, Handle: 29, Obstacle_Data_S [FC] */, 
  (TxDataPtr) Obstacle_Data_R._c /* ID: 0x0000074a, Handle: 30, Obstacle_Data_R [FC] */, 
  (TxDataPtr) Obstacle_Data_Q._c /* ID: 0x00000749, Handle: 31, Obstacle_Data_Q [FC] */, 
  (TxDataPtr) Obstacle_Data_P._c /* ID: 0x00000748, Handle: 32, Obstacle_Data_P [FC] */, 
  (TxDataPtr) Obstacle_Data_O._c /* ID: 0x00000747, Handle: 33, Obstacle_Data_O [FC] */, 
  (TxDataPtr) Obstacle_Data_N._c /* ID: 0x00000746, Handle: 34, Obstacle_Data_N [FC] */, 
  (TxDataPtr) Obstacle_Data_M._c /* ID: 0x00000745, Handle: 35, Obstacle_Data_M [FC] */, 
  (TxDataPtr) Obstacle_Data_L._c /* ID: 0x00000744, Handle: 36, Obstacle_Data_L [FC] */, 
  (TxDataPtr) Obstacle_Data_K._c /* ID: 0x00000743, Handle: 37, Obstacle_Data_K [FC] */, 
  (TxDataPtr) Obstacle_Data_J._c /* ID: 0x00000742, Handle: 38, Obstacle_Data_J [FC] */, 
  (TxDataPtr) Obstacle_Data_I._c /* ID: 0x00000741, Handle: 39, Obstacle_Data_I [FC] */, 
  (TxDataPtr) Obstacle_Data_H._c /* ID: 0x00000740, Handle: 40, Obstacle_Data_H [FC] */, 
  (TxDataPtr) Obstacle_Data_G._c /* ID: 0x0000073f, Handle: 41, Obstacle_Data_G [FC] */, 
  (TxDataPtr) Obstacle_Data_F._c /* ID: 0x0000073e, Handle: 42, Obstacle_Data_F [FC] */, 
  (TxDataPtr) Obstacle_Data_E._c /* ID: 0x0000073d, Handle: 43, Obstacle_Data_E [FC] */, 
  (TxDataPtr) Obstacle_Data_D._c /* ID: 0x0000073c, Handle: 44, Obstacle_Data_D [FC] */, 
  (TxDataPtr) Obstacle_Data_C._c /* ID: 0x0000073b, Handle: 45, Obstacle_Data_C [FC] */, 
  (TxDataPtr) Obstacle_Data_B._c /* ID: 0x0000073a, Handle: 46, Obstacle_Data_B [FC] */, 
  (TxDataPtr) Obstacle_Data_A._c /* ID: 0x00000739, Handle: 47, Obstacle_Data_A [FC] */, 
  (TxDataPtr) Obstacle_Status._c /* ID: 0x00000738, Handle: 48, Obstacle_Status [FC] */, 
  (TxDataPtr) Lane._c /* ID: 0x00000737, Handle: 49, Lane [FC] */, 
  (TxDataPtr) AHBC_Gradual._c /* ID: 0x00000729, Handle: 50, AHBC_Gradual [FC] */, 
  (TxDataPtr) AHBC_high_low_beam._c /* ID: 0x00000728, Handle: 51, AHBC_high_low_beam [FC] */, 
  (TxDataPtr) Sign_Type._c /* ID: 0x00000727, Handle: 52, Sign_Type [FC] */, 
  (TxDataPtr) TSR_message_F._c /* ID: 0x00000725, Handle: 53, TSR_message_F [FC] */, 
  (TxDataPtr) TSR_message_E._c /* ID: 0x00000724, Handle: 54, TSR_message_E [FC] */, 
  (TxDataPtr) TSR_message_D._c /* ID: 0x00000723, Handle: 55, TSR_message_D [FC] */, 
  (TxDataPtr) TSR_message_C._c /* ID: 0x00000722, Handle: 56, TSR_message_C [FC] */, 
  (TxDataPtr) TSR_message_B._c /* ID: 0x00000721, Handle: 57, TSR_message_B [FC] */, 
  (TxDataPtr) TSR_message_A._c /* ID: 0x00000720, Handle: 58, TSR_message_A [FC] */, 
  (TxDataPtr) C2_Display_and_warning._c /* ID: 0x00000700, Handle: 59, C2_Display_and_warning [FC] */, 
  (TxDataPtr) Detils_Lane._c /* ID: 0x00000669, Handle: 60, Detils_Lane [FC] */, 
  (TxDataPtr) Fixed_FOE._c /* ID: 0x00000650, Handle: 61, Fixed_FOE [FC] */
};
/* ROM CATEGORY 1 END */

#endif


#ifdef C_ENABLE_PRETRANSMIT_FCT
/* ROM CATEGORY 1 START */
/* PRQA  S 1334 QAC_Can_1334 */ /* MD_Can_1334 */
V_MEMROM0 V_MEMROM1 ApplPreTransmitFct V_MEMROM2 CanTxApplPreTransmitPtr[kCanNumberOfTxObjects] = 
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
/* PRQA  L:QAC_Can_1334 */

/* ROM CATEGORY 1 END */

#endif


#ifdef C_ENABLE_CONFIRMATION_FCT
/* ROM CATEGORY 1 START */
V_MEMROM0 V_MEMROM1 ApplConfirmationFct V_MEMROM2 CanTxApplConfirmationPtr[kCanNumberOfTxObjects] = 
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
/* ROM CATEGORY 1 END */

#endif


#ifdef C_ENABLE_PART_OFFLINE
/* ROM CATEGORY 2 START */

V_MEMROM0 V_MEMROM1 vuint8 V_MEMROM2 CanTxSendMask[kCanNumberOfTxObjects] = 
{
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000726, Handle: 0, TSR_message_G [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x0000077b, Handle: 1, Next_lane_Right_P [FC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x0000077a, Handle: 2, Next_lane_Right_O [FC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000779, Handle: 3, Next_lane_Left_N [FC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000778, Handle: 4, Next_lane_Left_M [FC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000777, Handle: 5, Next_lane_Right_L [FC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000776, Handle: 6, Next_lane_Right_K [FC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000775, Handle: 7, Next_lane_Left_J [FC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000774, Handle: 8, Next_lane_Left_I [FC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000773, Handle: 9, Next_lane_Right_H [FC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000772, Handle: 10, Next_lane_Right_G [FC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000771, Handle: 11, Next_lane_Left_F [FC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000770, Handle: 12, Next_lane_Left_E [FC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x0000076f, Handle: 13, Next_lane_Right_D [FC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x0000076e, Handle: 14, Next_lane_Right_C [FC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x0000076d, Handle: 15, Next_lane_Left_B [FC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x0000076c, Handle: 16, Next_lane_Left_A [FC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x0000076b, Handle: 17, Numebr_of_next_lane [FC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x0000076a, Handle: 18, Reference_points [FC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000769, Handle: 19, LKA_right_lane_B [FC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000768, Handle: 20, LKA_right_lane_A [FC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000767, Handle: 21, LKA_left_lane_B [FC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000766, Handle: 22, LKA_left_lane_A [FC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000760, Handle: 23, Car_Info [FC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000750, Handle: 24, Obstacle_Data_X [FC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x0000074f, Handle: 25, Obstacle_Data_W [FC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x0000074e, Handle: 26, Obstacle_Data_V [FC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x0000074d, Handle: 27, Obstacle_Data_U [FC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x0000074c, Handle: 28, Obstacle_Data_T [FC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x0000074b, Handle: 29, Obstacle_Data_S [FC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x0000074a, Handle: 30, Obstacle_Data_R [FC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000749, Handle: 31, Obstacle_Data_Q [FC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000748, Handle: 32, Obstacle_Data_P [FC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000747, Handle: 33, Obstacle_Data_O [FC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000746, Handle: 34, Obstacle_Data_N [FC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000745, Handle: 35, Obstacle_Data_M [FC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000744, Handle: 36, Obstacle_Data_L [FC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000743, Handle: 37, Obstacle_Data_K [FC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000742, Handle: 38, Obstacle_Data_J [FC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000741, Handle: 39, Obstacle_Data_I [FC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000740, Handle: 40, Obstacle_Data_H [FC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x0000073f, Handle: 41, Obstacle_Data_G [FC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x0000073e, Handle: 42, Obstacle_Data_F [FC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x0000073d, Handle: 43, Obstacle_Data_E [FC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x0000073c, Handle: 44, Obstacle_Data_D [FC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x0000073b, Handle: 45, Obstacle_Data_C [FC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x0000073a, Handle: 46, Obstacle_Data_B [FC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000739, Handle: 47, Obstacle_Data_A [FC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000738, Handle: 48, Obstacle_Status [FC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000737, Handle: 49, Lane [FC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000729, Handle: 50, AHBC_Gradual [FC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000728, Handle: 51, AHBC_high_low_beam [FC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000727, Handle: 52, Sign_Type [FC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000725, Handle: 53, TSR_message_F [FC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000724, Handle: 54, TSR_message_E [FC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000723, Handle: 55, TSR_message_D [FC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000722, Handle: 56, TSR_message_C [FC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000721, Handle: 57, TSR_message_B [FC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000720, Handle: 58, TSR_message_A [FC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000700, Handle: 59, C2_Display_and_warning [FC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000669, Handle: 60, Detils_Lane [FC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000650, Handle: 61, Fixed_FOE [FC] */
};

/* ROM CATEGORY 2 END */

#endif


#ifdef C_ENABLE_CONFIRMATION_FLAG
/* ROM CATEGORY 1 START */
V_MEMROM0 V_MEMROM1 vuint8 V_MEMROM2 CanConfirmationOffset[kCanNumberOfTxObjects] = 
{
  0 /* ID: 0x00000726, Handle: 0, TSR_message_G [BC] */, 
  0 /* ID: 0x0000077b, Handle: 1, Next_lane_Right_P [FC] */, 
  0 /* ID: 0x0000077a, Handle: 2, Next_lane_Right_O [FC] */, 
  0 /* ID: 0x00000779, Handle: 3, Next_lane_Left_N [FC] */, 
  0 /* ID: 0x00000778, Handle: 4, Next_lane_Left_M [FC] */, 
  0 /* ID: 0x00000777, Handle: 5, Next_lane_Right_L [FC] */, 
  0 /* ID: 0x00000776, Handle: 6, Next_lane_Right_K [FC] */, 
  0 /* ID: 0x00000775, Handle: 7, Next_lane_Left_J [FC] */, 
  1 /* ID: 0x00000774, Handle: 8, Next_lane_Left_I [FC] */, 
  1 /* ID: 0x00000773, Handle: 9, Next_lane_Right_H [FC] */, 
  1 /* ID: 0x00000772, Handle: 10, Next_lane_Right_G [FC] */, 
  1 /* ID: 0x00000771, Handle: 11, Next_lane_Left_F [FC] */, 
  1 /* ID: 0x00000770, Handle: 12, Next_lane_Left_E [FC] */, 
  1 /* ID: 0x0000076f, Handle: 13, Next_lane_Right_D [FC] */, 
  1 /* ID: 0x0000076e, Handle: 14, Next_lane_Right_C [FC] */, 
  1 /* ID: 0x0000076d, Handle: 15, Next_lane_Left_B [FC] */, 
  2 /* ID: 0x0000076c, Handle: 16, Next_lane_Left_A [FC] */, 
  2 /* ID: 0x0000076b, Handle: 17, Numebr_of_next_lane [FC] */, 
  2 /* ID: 0x0000076a, Handle: 18, Reference_points [FC] */, 
  2 /* ID: 0x00000769, Handle: 19, LKA_right_lane_B [FC] */, 
  2 /* ID: 0x00000768, Handle: 20, LKA_right_lane_A [FC] */, 
  2 /* ID: 0x00000767, Handle: 21, LKA_left_lane_B [FC] */, 
  2 /* ID: 0x00000766, Handle: 22, LKA_left_lane_A [FC] */, 
  2 /* ID: 0x00000760, Handle: 23, Car_Info [FC] */, 
  3 /* ID: 0x00000750, Handle: 24, Obstacle_Data_X [FC] */, 
  3 /* ID: 0x0000074f, Handle: 25, Obstacle_Data_W [FC] */, 
  3 /* ID: 0x0000074e, Handle: 26, Obstacle_Data_V [FC] */, 
  3 /* ID: 0x0000074d, Handle: 27, Obstacle_Data_U [FC] */, 
  3 /* ID: 0x0000074c, Handle: 28, Obstacle_Data_T [FC] */, 
  3 /* ID: 0x0000074b, Handle: 29, Obstacle_Data_S [FC] */, 
  3 /* ID: 0x0000074a, Handle: 30, Obstacle_Data_R [FC] */, 
  3 /* ID: 0x00000749, Handle: 31, Obstacle_Data_Q [FC] */, 
  4 /* ID: 0x00000748, Handle: 32, Obstacle_Data_P [FC] */, 
  4 /* ID: 0x00000747, Handle: 33, Obstacle_Data_O [FC] */, 
  4 /* ID: 0x00000746, Handle: 34, Obstacle_Data_N [FC] */, 
  4 /* ID: 0x00000745, Handle: 35, Obstacle_Data_M [FC] */, 
  4 /* ID: 0x00000744, Handle: 36, Obstacle_Data_L [FC] */, 
  4 /* ID: 0x00000743, Handle: 37, Obstacle_Data_K [FC] */, 
  4 /* ID: 0x00000742, Handle: 38, Obstacle_Data_J [FC] */, 
  4 /* ID: 0x00000741, Handle: 39, Obstacle_Data_I [FC] */, 
  5 /* ID: 0x00000740, Handle: 40, Obstacle_Data_H [FC] */, 
  5 /* ID: 0x0000073f, Handle: 41, Obstacle_Data_G [FC] */, 
  5 /* ID: 0x0000073e, Handle: 42, Obstacle_Data_F [FC] */, 
  5 /* ID: 0x0000073d, Handle: 43, Obstacle_Data_E [FC] */, 
  5 /* ID: 0x0000073c, Handle: 44, Obstacle_Data_D [FC] */, 
  5 /* ID: 0x0000073b, Handle: 45, Obstacle_Data_C [FC] */, 
  5 /* ID: 0x0000073a, Handle: 46, Obstacle_Data_B [FC] */, 
  5 /* ID: 0x00000739, Handle: 47, Obstacle_Data_A [FC] */, 
  6 /* ID: 0x00000738, Handle: 48, Obstacle_Status [FC] */, 
  6 /* ID: 0x00000737, Handle: 49, Lane [FC] */, 
  6 /* ID: 0x00000729, Handle: 50, AHBC_Gradual [FC] */, 
  6 /* ID: 0x00000728, Handle: 51, AHBC_high_low_beam [FC] */, 
  6 /* ID: 0x00000727, Handle: 52, Sign_Type [FC] */, 
  6 /* ID: 0x00000725, Handle: 53, TSR_message_F [FC] */, 
  6 /* ID: 0x00000724, Handle: 54, TSR_message_E [FC] */, 
  6 /* ID: 0x00000723, Handle: 55, TSR_message_D [FC] */, 
  7 /* ID: 0x00000722, Handle: 56, TSR_message_C [FC] */, 
  7 /* ID: 0x00000721, Handle: 57, TSR_message_B [FC] */, 
  7 /* ID: 0x00000720, Handle: 58, TSR_message_A [FC] */, 
  7 /* ID: 0x00000700, Handle: 59, C2_Display_and_warning [FC] */, 
  7 /* ID: 0x00000669, Handle: 60, Detils_Lane [FC] */, 
  7 /* ID: 0x00000650, Handle: 61, Fixed_FOE [FC] */
};
/* ROM CATEGORY 1 END */


/* ROM CATEGORY 1 START */
V_MEMROM0 V_MEMROM1 vuint8 V_MEMROM2 CanConfirmationMask[kCanNumberOfTxObjects] = 
{
  0x01u /* ID: 0x00000726, Handle: 0, TSR_message_G [BC] */, 
  0x02u /* ID: 0x0000077b, Handle: 1, Next_lane_Right_P [FC] */, 
  0x04u /* ID: 0x0000077a, Handle: 2, Next_lane_Right_O [FC] */, 
  0x08u /* ID: 0x00000779, Handle: 3, Next_lane_Left_N [FC] */, 
  0x10u /* ID: 0x00000778, Handle: 4, Next_lane_Left_M [FC] */, 
  0x20u /* ID: 0x00000777, Handle: 5, Next_lane_Right_L [FC] */, 
  0x40u /* ID: 0x00000776, Handle: 6, Next_lane_Right_K [FC] */, 
  0x80u /* ID: 0x00000775, Handle: 7, Next_lane_Left_J [FC] */, 
  0x01u /* ID: 0x00000774, Handle: 8, Next_lane_Left_I [FC] */, 
  0x02u /* ID: 0x00000773, Handle: 9, Next_lane_Right_H [FC] */, 
  0x04u /* ID: 0x00000772, Handle: 10, Next_lane_Right_G [FC] */, 
  0x08u /* ID: 0x00000771, Handle: 11, Next_lane_Left_F [FC] */, 
  0x10u /* ID: 0x00000770, Handle: 12, Next_lane_Left_E [FC] */, 
  0x20u /* ID: 0x0000076f, Handle: 13, Next_lane_Right_D [FC] */, 
  0x40u /* ID: 0x0000076e, Handle: 14, Next_lane_Right_C [FC] */, 
  0x80u /* ID: 0x0000076d, Handle: 15, Next_lane_Left_B [FC] */, 
  0x01u /* ID: 0x0000076c, Handle: 16, Next_lane_Left_A [FC] */, 
  0x02u /* ID: 0x0000076b, Handle: 17, Numebr_of_next_lane [FC] */, 
  0x04u /* ID: 0x0000076a, Handle: 18, Reference_points [FC] */, 
  0x08u /* ID: 0x00000769, Handle: 19, LKA_right_lane_B [FC] */, 
  0x10u /* ID: 0x00000768, Handle: 20, LKA_right_lane_A [FC] */, 
  0x20u /* ID: 0x00000767, Handle: 21, LKA_left_lane_B [FC] */, 
  0x40u /* ID: 0x00000766, Handle: 22, LKA_left_lane_A [FC] */, 
  0x80u /* ID: 0x00000760, Handle: 23, Car_Info [FC] */, 
  0x01u /* ID: 0x00000750, Handle: 24, Obstacle_Data_X [FC] */, 
  0x02u /* ID: 0x0000074f, Handle: 25, Obstacle_Data_W [FC] */, 
  0x04u /* ID: 0x0000074e, Handle: 26, Obstacle_Data_V [FC] */, 
  0x08u /* ID: 0x0000074d, Handle: 27, Obstacle_Data_U [FC] */, 
  0x10u /* ID: 0x0000074c, Handle: 28, Obstacle_Data_T [FC] */, 
  0x20u /* ID: 0x0000074b, Handle: 29, Obstacle_Data_S [FC] */, 
  0x40u /* ID: 0x0000074a, Handle: 30, Obstacle_Data_R [FC] */, 
  0x80u /* ID: 0x00000749, Handle: 31, Obstacle_Data_Q [FC] */, 
  0x01u /* ID: 0x00000748, Handle: 32, Obstacle_Data_P [FC] */, 
  0x02u /* ID: 0x00000747, Handle: 33, Obstacle_Data_O [FC] */, 
  0x04u /* ID: 0x00000746, Handle: 34, Obstacle_Data_N [FC] */, 
  0x08u /* ID: 0x00000745, Handle: 35, Obstacle_Data_M [FC] */, 
  0x10u /* ID: 0x00000744, Handle: 36, Obstacle_Data_L [FC] */, 
  0x20u /* ID: 0x00000743, Handle: 37, Obstacle_Data_K [FC] */, 
  0x40u /* ID: 0x00000742, Handle: 38, Obstacle_Data_J [FC] */, 
  0x80u /* ID: 0x00000741, Handle: 39, Obstacle_Data_I [FC] */, 
  0x01u /* ID: 0x00000740, Handle: 40, Obstacle_Data_H [FC] */, 
  0x02u /* ID: 0x0000073f, Handle: 41, Obstacle_Data_G [FC] */, 
  0x04u /* ID: 0x0000073e, Handle: 42, Obstacle_Data_F [FC] */, 
  0x08u /* ID: 0x0000073d, Handle: 43, Obstacle_Data_E [FC] */, 
  0x10u /* ID: 0x0000073c, Handle: 44, Obstacle_Data_D [FC] */, 
  0x20u /* ID: 0x0000073b, Handle: 45, Obstacle_Data_C [FC] */, 
  0x40u /* ID: 0x0000073a, Handle: 46, Obstacle_Data_B [FC] */, 
  0x80u /* ID: 0x00000739, Handle: 47, Obstacle_Data_A [FC] */, 
  0x01u /* ID: 0x00000738, Handle: 48, Obstacle_Status [FC] */, 
  0x02u /* ID: 0x00000737, Handle: 49, Lane [FC] */, 
  0x04u /* ID: 0x00000729, Handle: 50, AHBC_Gradual [FC] */, 
  0x08u /* ID: 0x00000728, Handle: 51, AHBC_high_low_beam [FC] */, 
  0x10u /* ID: 0x00000727, Handle: 52, Sign_Type [FC] */, 
  0x20u /* ID: 0x00000725, Handle: 53, TSR_message_F [FC] */, 
  0x40u /* ID: 0x00000724, Handle: 54, TSR_message_E [FC] */, 
  0x80u /* ID: 0x00000723, Handle: 55, TSR_message_D [FC] */, 
  0x01u /* ID: 0x00000722, Handle: 56, TSR_message_C [FC] */, 
  0x02u /* ID: 0x00000721, Handle: 57, TSR_message_B [FC] */, 
  0x04u /* ID: 0x00000720, Handle: 58, TSR_message_A [FC] */, 
  0x08u /* ID: 0x00000700, Handle: 59, C2_Display_and_warning [FC] */, 
  0x10u /* ID: 0x00000669, Handle: 60, Detils_Lane [FC] */, 
  0x20u /* ID: 0x00000650, Handle: 61, Fixed_FOE [FC] */
};
/* ROM CATEGORY 1 END */


#endif




/* Id table depending on search algorithm */
/* Linear search */
/* ROM CATEGORY 1 START */
V_MEMROM0 V_MEMROM1 tCanRxId0 V_MEMROM2 CanRxId0[kCanNumberOfRxObjects] = 
{
  MK_STDID0(0x5E8u) /* ID: 0x000005e8, Handle: 0, ESR_Status9 [BC] */, 
  MK_STDID0(0x5E7u) /* ID: 0x000005e7, Handle: 1, ESR_Status8 [BC] */, 
  MK_STDID0(0x5E6u) /* ID: 0x000005e6, Handle: 2, ESR_Status7 [BC] */, 
  MK_STDID0(0x5E5u) /* ID: 0x000005e5, Handle: 3, ESR_Status6 [BC] */, 
  MK_STDID0(0x5E4u) /* ID: 0x000005e4, Handle: 4, ESR_Status5 [BC] */, 
  MK_STDID0(0x53Fu) /* ID: 0x0000053f, Handle: 5, ESR_Track64 [BC] */, 
  MK_STDID0(0x53Eu) /* ID: 0x0000053e, Handle: 6, ESR_Track63 [BC] */, 
  MK_STDID0(0x53Du) /* ID: 0x0000053d, Handle: 7, ESR_Track62 [BC] */, 
  MK_STDID0(0x53Cu) /* ID: 0x0000053c, Handle: 8, ESR_Track61 [BC] */, 
  MK_STDID0(0x53Bu) /* ID: 0x0000053b, Handle: 9, ESR_Track60 [BC] */, 
  MK_STDID0(0x53Au) /* ID: 0x0000053a, Handle: 10, ESR_Track59 [BC] */, 
  MK_STDID0(0x539u) /* ID: 0x00000539, Handle: 11, ESR_Track58 [BC] */, 
  MK_STDID0(0x538u) /* ID: 0x00000538, Handle: 12, ESR_Track57 [BC] */, 
  MK_STDID0(0x537u) /* ID: 0x00000537, Handle: 13, ESR_Track56 [BC] */, 
  MK_STDID0(0x536u) /* ID: 0x00000536, Handle: 14, ESR_Track55 [BC] */, 
  MK_STDID0(0x535u) /* ID: 0x00000535, Handle: 15, ESR_Track54 [BC] */, 
  MK_STDID0(0x534u) /* ID: 0x00000534, Handle: 16, ESR_Track53 [BC] */, 
  MK_STDID0(0x533u) /* ID: 0x00000533, Handle: 17, ESR_Track52 [BC] */, 
  MK_STDID0(0x532u) /* ID: 0x00000532, Handle: 18, ESR_Track51 [BC] */, 
  MK_STDID0(0x531u) /* ID: 0x00000531, Handle: 19, ESR_Track50 [BC] */, 
  MK_STDID0(0x530u) /* ID: 0x00000530, Handle: 20, ESR_Track49 [BC] */, 
  MK_STDID0(0x52Fu) /* ID: 0x0000052f, Handle: 21, ESR_Track48 [BC] */, 
  MK_STDID0(0x52Eu) /* ID: 0x0000052e, Handle: 22, ESR_Track47 [BC] */, 
  MK_STDID0(0x52Du) /* ID: 0x0000052d, Handle: 23, ESR_Track46 [BC] */, 
  MK_STDID0(0x52Cu) /* ID: 0x0000052c, Handle: 24, ESR_Track45 [BC] */, 
  MK_STDID0(0x52Bu) /* ID: 0x0000052b, Handle: 25, ESR_Track44 [BC] */, 
  MK_STDID0(0x52Au) /* ID: 0x0000052a, Handle: 26, ESR_Track43 [BC] */, 
  MK_STDID0(0x529u) /* ID: 0x00000529, Handle: 27, ESR_Track42 [BC] */, 
  MK_STDID0(0x528u) /* ID: 0x00000528, Handle: 28, ESR_Track41 [BC] */, 
  MK_STDID0(0x527u) /* ID: 0x00000527, Handle: 29, ESR_Track40 [BC] */, 
  MK_STDID0(0x526u) /* ID: 0x00000526, Handle: 30, ESR_Track39 [BC] */, 
  MK_STDID0(0x525u) /* ID: 0x00000525, Handle: 31, ESR_Track38 [BC] */, 
  MK_STDID0(0x524u) /* ID: 0x00000524, Handle: 32, ESR_Track37 [BC] */, 
  MK_STDID0(0x523u) /* ID: 0x00000523, Handle: 33, ESR_Track36 [BC] */, 
  MK_STDID0(0x522u) /* ID: 0x00000522, Handle: 34, ESR_Track35 [BC] */, 
  MK_STDID0(0x521u) /* ID: 0x00000521, Handle: 35, ESR_Track34 [BC] */, 
  MK_STDID0(0x520u) /* ID: 0x00000520, Handle: 36, ESR_Track33 [BC] */, 
  MK_STDID0(0x51Fu) /* ID: 0x0000051f, Handle: 37, ESR_Track32 [BC] */, 
  MK_STDID0(0x51Eu) /* ID: 0x0000051e, Handle: 38, ESR_Track31 [BC] */, 
  MK_STDID0(0x51Du) /* ID: 0x0000051d, Handle: 39, ESR_Track30 [BC] */, 
  MK_STDID0(0x51Cu) /* ID: 0x0000051c, Handle: 40, ESR_Track29 [BC] */, 
  MK_STDID0(0x51Bu) /* ID: 0x0000051b, Handle: 41, ESR_Track28 [BC] */, 
  MK_STDID0(0x51Au) /* ID: 0x0000051a, Handle: 42, ESR_Track27 [BC] */, 
  MK_STDID0(0x519u) /* ID: 0x00000519, Handle: 43, ESR_Track26 [BC] */, 
  MK_STDID0(0x518u) /* ID: 0x00000518, Handle: 44, ESR_Track25 [BC] */, 
  MK_STDID0(0x517u) /* ID: 0x00000517, Handle: 45, ESR_Track24 [BC] */, 
  MK_STDID0(0x516u) /* ID: 0x00000516, Handle: 46, ESR_Track23 [BC] */, 
  MK_STDID0(0x515u) /* ID: 0x00000515, Handle: 47, ESR_Track22 [BC] */, 
  MK_STDID0(0x514u) /* ID: 0x00000514, Handle: 48, ESR_Track21 [BC] */, 
  MK_STDID0(0x513u) /* ID: 0x00000513, Handle: 49, ESR_Track20 [BC] */, 
  MK_STDID0(0x512u) /* ID: 0x00000512, Handle: 50, ESR_Track19 [BC] */, 
  MK_STDID0(0x511u) /* ID: 0x00000511, Handle: 51, ESR_Track18 [BC] */, 
  MK_STDID0(0x510u) /* ID: 0x00000510, Handle: 52, ESR_Track17 [BC] */, 
  MK_STDID0(0x50Fu) /* ID: 0x0000050f, Handle: 53, ESR_Track16 [BC] */, 
  MK_STDID0(0x50Eu) /* ID: 0x0000050e, Handle: 54, ESR_Track15 [BC] */, 
  MK_STDID0(0x50Du) /* ID: 0x0000050d, Handle: 55, ESR_Track14 [BC] */, 
  MK_STDID0(0x50Cu) /* ID: 0x0000050c, Handle: 56, ESR_Track13 [BC] */, 
  MK_STDID0(0x50Bu) /* ID: 0x0000050b, Handle: 57, ESR_Track12 [BC] */, 
  MK_STDID0(0x50Au) /* ID: 0x0000050a, Handle: 58, ESR_Track11 [BC] */, 
  MK_STDID0(0x509u) /* ID: 0x00000509, Handle: 59, ESR_Track10 [BC] */, 
  MK_STDID0(0x508u) /* ID: 0x00000508, Handle: 60, ESR_Track09 [BC] */, 
  MK_STDID0(0x507u) /* ID: 0x00000507, Handle: 61, ESR_Track08 [BC] */, 
  MK_STDID0(0x506u) /* ID: 0x00000506, Handle: 62, ESR_Track07 [BC] */, 
  MK_STDID0(0x505u) /* ID: 0x00000505, Handle: 63, ESR_Track06 [BC] */, 
  MK_STDID0(0x504u) /* ID: 0x00000504, Handle: 64, ESR_Track05 [BC] */, 
  MK_STDID0(0x503u) /* ID: 0x00000503, Handle: 65, ESR_Track04 [BC] */, 
  MK_STDID0(0x502u) /* ID: 0x00000502, Handle: 66, ESR_Track03 [BC] */, 
  MK_STDID0(0x501u) /* ID: 0x00000501, Handle: 67, ESR_Track02 [BC] */, 
  MK_STDID0(0x500u) /* ID: 0x00000500, Handle: 68, ESR_Track01 [BC] */, 
  MK_STDID0(0x4E3u) /* ID: 0x000004e3, Handle: 69, ESR_Status4 [BC] */, 
  MK_STDID0(0x4E2u) /* ID: 0x000004e2, Handle: 70, ESR_Status3 [BC] */, 
  MK_STDID0(0x4E1u) /* ID: 0x000004e1, Handle: 71, ESR_Status2 [BC] */, 
  MK_STDID0(0x4E0u) /* ID: 0x000004e0, Handle: 72, ESR_Status1 [BC] */
};
/* ROM CATEGORY 1 END */



/* ROM CATEGORY 1 START */
V_MEMROM0 V_MEMROM1 vuint8 V_MEMROM2 CanRxDataLen[kCanNumberOfRxObjects] = 
{
  8 /* ID: 0x000005e8, Handle: 0, ESR_Status9 [BC] */, 
  8 /* ID: 0x000005e7, Handle: 1, ESR_Status8 [BC] */, 
  8 /* ID: 0x000005e6, Handle: 2, ESR_Status7 [BC] */, 
  8 /* ID: 0x000005e5, Handle: 3, ESR_Status6 [BC] */, 
  8 /* ID: 0x000005e4, Handle: 4, ESR_Status5 [BC] */, 
  8 /* ID: 0x0000053f, Handle: 5, ESR_Track64 [BC] */, 
  8 /* ID: 0x0000053e, Handle: 6, ESR_Track63 [BC] */, 
  8 /* ID: 0x0000053d, Handle: 7, ESR_Track62 [BC] */, 
  8 /* ID: 0x0000053c, Handle: 8, ESR_Track61 [BC] */, 
  8 /* ID: 0x0000053b, Handle: 9, ESR_Track60 [BC] */, 
  8 /* ID: 0x0000053a, Handle: 10, ESR_Track59 [BC] */, 
  8 /* ID: 0x00000539, Handle: 11, ESR_Track58 [BC] */, 
  8 /* ID: 0x00000538, Handle: 12, ESR_Track57 [BC] */, 
  8 /* ID: 0x00000537, Handle: 13, ESR_Track56 [BC] */, 
  8 /* ID: 0x00000536, Handle: 14, ESR_Track55 [BC] */, 
  8 /* ID: 0x00000535, Handle: 15, ESR_Track54 [BC] */, 
  8 /* ID: 0x00000534, Handle: 16, ESR_Track53 [BC] */, 
  8 /* ID: 0x00000533, Handle: 17, ESR_Track52 [BC] */, 
  8 /* ID: 0x00000532, Handle: 18, ESR_Track51 [BC] */, 
  8 /* ID: 0x00000531, Handle: 19, ESR_Track50 [BC] */, 
  8 /* ID: 0x00000530, Handle: 20, ESR_Track49 [BC] */, 
  8 /* ID: 0x0000052f, Handle: 21, ESR_Track48 [BC] */, 
  8 /* ID: 0x0000052e, Handle: 22, ESR_Track47 [BC] */, 
  8 /* ID: 0x0000052d, Handle: 23, ESR_Track46 [BC] */, 
  8 /* ID: 0x0000052c, Handle: 24, ESR_Track45 [BC] */, 
  8 /* ID: 0x0000052b, Handle: 25, ESR_Track44 [BC] */, 
  8 /* ID: 0x0000052a, Handle: 26, ESR_Track43 [BC] */, 
  8 /* ID: 0x00000529, Handle: 27, ESR_Track42 [BC] */, 
  8 /* ID: 0x00000528, Handle: 28, ESR_Track41 [BC] */, 
  8 /* ID: 0x00000527, Handle: 29, ESR_Track40 [BC] */, 
  8 /* ID: 0x00000526, Handle: 30, ESR_Track39 [BC] */, 
  8 /* ID: 0x00000525, Handle: 31, ESR_Track38 [BC] */, 
  8 /* ID: 0x00000524, Handle: 32, ESR_Track37 [BC] */, 
  8 /* ID: 0x00000523, Handle: 33, ESR_Track36 [BC] */, 
  8 /* ID: 0x00000522, Handle: 34, ESR_Track35 [BC] */, 
  8 /* ID: 0x00000521, Handle: 35, ESR_Track34 [BC] */, 
  8 /* ID: 0x00000520, Handle: 36, ESR_Track33 [BC] */, 
  8 /* ID: 0x0000051f, Handle: 37, ESR_Track32 [BC] */, 
  8 /* ID: 0x0000051e, Handle: 38, ESR_Track31 [BC] */, 
  8 /* ID: 0x0000051d, Handle: 39, ESR_Track30 [BC] */, 
  8 /* ID: 0x0000051c, Handle: 40, ESR_Track29 [BC] */, 
  8 /* ID: 0x0000051b, Handle: 41, ESR_Track28 [BC] */, 
  8 /* ID: 0x0000051a, Handle: 42, ESR_Track27 [BC] */, 
  8 /* ID: 0x00000519, Handle: 43, ESR_Track26 [BC] */, 
  8 /* ID: 0x00000518, Handle: 44, ESR_Track25 [BC] */, 
  8 /* ID: 0x00000517, Handle: 45, ESR_Track24 [BC] */, 
  8 /* ID: 0x00000516, Handle: 46, ESR_Track23 [BC] */, 
  8 /* ID: 0x00000515, Handle: 47, ESR_Track22 [BC] */, 
  8 /* ID: 0x00000514, Handle: 48, ESR_Track21 [BC] */, 
  8 /* ID: 0x00000513, Handle: 49, ESR_Track20 [BC] */, 
  8 /* ID: 0x00000512, Handle: 50, ESR_Track19 [BC] */, 
  8 /* ID: 0x00000511, Handle: 51, ESR_Track18 [BC] */, 
  8 /* ID: 0x00000510, Handle: 52, ESR_Track17 [BC] */, 
  8 /* ID: 0x0000050f, Handle: 53, ESR_Track16 [BC] */, 
  8 /* ID: 0x0000050e, Handle: 54, ESR_Track15 [BC] */, 
  8 /* ID: 0x0000050d, Handle: 55, ESR_Track14 [BC] */, 
  8 /* ID: 0x0000050c, Handle: 56, ESR_Track13 [BC] */, 
  8 /* ID: 0x0000050b, Handle: 57, ESR_Track12 [BC] */, 
  8 /* ID: 0x0000050a, Handle: 58, ESR_Track11 [BC] */, 
  8 /* ID: 0x00000509, Handle: 59, ESR_Track10 [BC] */, 
  8 /* ID: 0x00000508, Handle: 60, ESR_Track09 [BC] */, 
  8 /* ID: 0x00000507, Handle: 61, ESR_Track08 [BC] */, 
  8 /* ID: 0x00000506, Handle: 62, ESR_Track07 [BC] */, 
  8 /* ID: 0x00000505, Handle: 63, ESR_Track06 [BC] */, 
  8 /* ID: 0x00000504, Handle: 64, ESR_Track05 [BC] */, 
  8 /* ID: 0x00000503, Handle: 65, ESR_Track04 [BC] */, 
  8 /* ID: 0x00000502, Handle: 66, ESR_Track03 [BC] */, 
  8 /* ID: 0x00000501, Handle: 67, ESR_Track02 [BC] */, 
  8 /* ID: 0x00000500, Handle: 68, ESR_Track01 [BC] */, 
  8 /* ID: 0x000004e3, Handle: 69, ESR_Status4 [BC] */, 
  8 /* ID: 0x000004e2, Handle: 70, ESR_Status3 [BC] */, 
  8 /* ID: 0x000004e1, Handle: 71, ESR_Status2 [BC] */, 
  8 /* ID: 0x000004e0, Handle: 72, ESR_Status1 [BC] */
};
/* ROM CATEGORY 1 END */


#ifdef C_ENABLE_COPY_RX_DATA
/* ROM CATEGORY 1 START */
V_MEMROM0 V_MEMROM1 RxDataPtr V_MEMROM2 CanRxDataPtr[kCanNumberOfRxObjects] = 
{
  (RxDataPtr) ESR_Status9._c /* ID: 0x000005e8, Handle: 0, ESR_Status9 [BC] */, 
  (RxDataPtr) ESR_Status8._c /* ID: 0x000005e7, Handle: 1, ESR_Status8 [BC] */, 
  (RxDataPtr) ESR_Status7._c /* ID: 0x000005e6, Handle: 2, ESR_Status7 [BC] */, 
  (RxDataPtr) ESR_Status6._c /* ID: 0x000005e5, Handle: 3, ESR_Status6 [BC] */, 
  (RxDataPtr) ESR_Status5._c /* ID: 0x000005e4, Handle: 4, ESR_Status5 [BC] */, 
  (RxDataPtr) ESR_Track64._c /* ID: 0x0000053f, Handle: 5, ESR_Track64 [BC] */, 
  (RxDataPtr) ESR_Track63._c /* ID: 0x0000053e, Handle: 6, ESR_Track63 [BC] */, 
  (RxDataPtr) ESR_Track62._c /* ID: 0x0000053d, Handle: 7, ESR_Track62 [BC] */, 
  (RxDataPtr) ESR_Track61._c /* ID: 0x0000053c, Handle: 8, ESR_Track61 [BC] */, 
  (RxDataPtr) ESR_Track60._c /* ID: 0x0000053b, Handle: 9, ESR_Track60 [BC] */, 
  (RxDataPtr) ESR_Track59._c /* ID: 0x0000053a, Handle: 10, ESR_Track59 [BC] */, 
  (RxDataPtr) ESR_Track58._c /* ID: 0x00000539, Handle: 11, ESR_Track58 [BC] */, 
  (RxDataPtr) ESR_Track57._c /* ID: 0x00000538, Handle: 12, ESR_Track57 [BC] */, 
  (RxDataPtr) ESR_Track56._c /* ID: 0x00000537, Handle: 13, ESR_Track56 [BC] */, 
  (RxDataPtr) ESR_Track55._c /* ID: 0x00000536, Handle: 14, ESR_Track55 [BC] */, 
  (RxDataPtr) ESR_Track54._c /* ID: 0x00000535, Handle: 15, ESR_Track54 [BC] */, 
  (RxDataPtr) ESR_Track53._c /* ID: 0x00000534, Handle: 16, ESR_Track53 [BC] */, 
  (RxDataPtr) ESR_Track52._c /* ID: 0x00000533, Handle: 17, ESR_Track52 [BC] */, 
  (RxDataPtr) ESR_Track51._c /* ID: 0x00000532, Handle: 18, ESR_Track51 [BC] */, 
  (RxDataPtr) ESR_Track50._c /* ID: 0x00000531, Handle: 19, ESR_Track50 [BC] */, 
  (RxDataPtr) ESR_Track49._c /* ID: 0x00000530, Handle: 20, ESR_Track49 [BC] */, 
  (RxDataPtr) ESR_Track48._c /* ID: 0x0000052f, Handle: 21, ESR_Track48 [BC] */, 
  (RxDataPtr) ESR_Track47._c /* ID: 0x0000052e, Handle: 22, ESR_Track47 [BC] */, 
  (RxDataPtr) ESR_Track46._c /* ID: 0x0000052d, Handle: 23, ESR_Track46 [BC] */, 
  (RxDataPtr) ESR_Track45._c /* ID: 0x0000052c, Handle: 24, ESR_Track45 [BC] */, 
  (RxDataPtr) ESR_Track44._c /* ID: 0x0000052b, Handle: 25, ESR_Track44 [BC] */, 
  (RxDataPtr) ESR_Track43._c /* ID: 0x0000052a, Handle: 26, ESR_Track43 [BC] */, 
  (RxDataPtr) ESR_Track42._c /* ID: 0x00000529, Handle: 27, ESR_Track42 [BC] */, 
  (RxDataPtr) ESR_Track41._c /* ID: 0x00000528, Handle: 28, ESR_Track41 [BC] */, 
  (RxDataPtr) ESR_Track40._c /* ID: 0x00000527, Handle: 29, ESR_Track40 [BC] */, 
  (RxDataPtr) ESR_Track39._c /* ID: 0x00000526, Handle: 30, ESR_Track39 [BC] */, 
  (RxDataPtr) ESR_Track38._c /* ID: 0x00000525, Handle: 31, ESR_Track38 [BC] */, 
  (RxDataPtr) ESR_Track37._c /* ID: 0x00000524, Handle: 32, ESR_Track37 [BC] */, 
  (RxDataPtr) ESR_Track36._c /* ID: 0x00000523, Handle: 33, ESR_Track36 [BC] */, 
  (RxDataPtr) ESR_Track35._c /* ID: 0x00000522, Handle: 34, ESR_Track35 [BC] */, 
  (RxDataPtr) ESR_Track34._c /* ID: 0x00000521, Handle: 35, ESR_Track34 [BC] */, 
  (RxDataPtr) ESR_Track33._c /* ID: 0x00000520, Handle: 36, ESR_Track33 [BC] */, 
  (RxDataPtr) ESR_Track32._c /* ID: 0x0000051f, Handle: 37, ESR_Track32 [BC] */, 
  (RxDataPtr) ESR_Track31._c /* ID: 0x0000051e, Handle: 38, ESR_Track31 [BC] */, 
  (RxDataPtr) ESR_Track30._c /* ID: 0x0000051d, Handle: 39, ESR_Track30 [BC] */, 
  (RxDataPtr) ESR_Track29._c /* ID: 0x0000051c, Handle: 40, ESR_Track29 [BC] */, 
  (RxDataPtr) ESR_Track28._c /* ID: 0x0000051b, Handle: 41, ESR_Track28 [BC] */, 
  (RxDataPtr) ESR_Track27._c /* ID: 0x0000051a, Handle: 42, ESR_Track27 [BC] */, 
  (RxDataPtr) ESR_Track26._c /* ID: 0x00000519, Handle: 43, ESR_Track26 [BC] */, 
  (RxDataPtr) ESR_Track25._c /* ID: 0x00000518, Handle: 44, ESR_Track25 [BC] */, 
  (RxDataPtr) ESR_Track24._c /* ID: 0x00000517, Handle: 45, ESR_Track24 [BC] */, 
  (RxDataPtr) ESR_Track23._c /* ID: 0x00000516, Handle: 46, ESR_Track23 [BC] */, 
  (RxDataPtr) ESR_Track22._c /* ID: 0x00000515, Handle: 47, ESR_Track22 [BC] */, 
  (RxDataPtr) ESR_Track21._c /* ID: 0x00000514, Handle: 48, ESR_Track21 [BC] */, 
  (RxDataPtr) ESR_Track20._c /* ID: 0x00000513, Handle: 49, ESR_Track20 [BC] */, 
  (RxDataPtr) ESR_Track19._c /* ID: 0x00000512, Handle: 50, ESR_Track19 [BC] */, 
  (RxDataPtr) ESR_Track18._c /* ID: 0x00000511, Handle: 51, ESR_Track18 [BC] */, 
  (RxDataPtr) ESR_Track17._c /* ID: 0x00000510, Handle: 52, ESR_Track17 [BC] */, 
  (RxDataPtr) ESR_Track16._c /* ID: 0x0000050f, Handle: 53, ESR_Track16 [BC] */, 
  (RxDataPtr) ESR_Track15._c /* ID: 0x0000050e, Handle: 54, ESR_Track15 [BC] */, 
  (RxDataPtr) ESR_Track14._c /* ID: 0x0000050d, Handle: 55, ESR_Track14 [BC] */, 
  (RxDataPtr) ESR_Track13._c /* ID: 0x0000050c, Handle: 56, ESR_Track13 [BC] */, 
  (RxDataPtr) ESR_Track12._c /* ID: 0x0000050b, Handle: 57, ESR_Track12 [BC] */, 
  (RxDataPtr) ESR_Track11._c /* ID: 0x0000050a, Handle: 58, ESR_Track11 [BC] */, 
  (RxDataPtr) ESR_Track10._c /* ID: 0x00000509, Handle: 59, ESR_Track10 [BC] */, 
  (RxDataPtr) ESR_Track09._c /* ID: 0x00000508, Handle: 60, ESR_Track09 [BC] */, 
  (RxDataPtr) ESR_Track08._c /* ID: 0x00000507, Handle: 61, ESR_Track08 [BC] */, 
  (RxDataPtr) ESR_Track07._c /* ID: 0x00000506, Handle: 62, ESR_Track07 [BC] */, 
  (RxDataPtr) ESR_Track06._c /* ID: 0x00000505, Handle: 63, ESR_Track06 [BC] */, 
  (RxDataPtr) ESR_Track05._c /* ID: 0x00000504, Handle: 64, ESR_Track05 [BC] */, 
  (RxDataPtr) ESR_Track04._c /* ID: 0x00000503, Handle: 65, ESR_Track04 [BC] */, 
  (RxDataPtr) ESR_Track03._c /* ID: 0x00000502, Handle: 66, ESR_Track03 [BC] */, 
  (RxDataPtr) ESR_Track02._c /* ID: 0x00000501, Handle: 67, ESR_Track02 [BC] */, 
  (RxDataPtr) ESR_Track01._c /* ID: 0x00000500, Handle: 68, ESR_Track01 [BC] */, 
  (RxDataPtr) ESR_Status4._c /* ID: 0x000004e3, Handle: 69, ESR_Status4 [BC] */, 
  (RxDataPtr) ESR_Status3._c /* ID: 0x000004e2, Handle: 70, ESR_Status3 [BC] */, 
  (RxDataPtr) ESR_Status2._c /* ID: 0x000004e1, Handle: 71, ESR_Status2 [BC] */, 
  (RxDataPtr) ESR_Status1._c /* ID: 0x000004e0, Handle: 72, ESR_Status1 [BC] */
};
/* ROM CATEGORY 1 END */

#endif


#ifdef C_ENABLE_PRECOPY_FCT
/* CODE CATEGORY 1 START */
/* CODE CATEGORY 1 END */

/* ROM CATEGORY 1 START */
V_MEMROM0 V_MEMROM1 ApplPrecopyFct V_MEMROM2 CanRxApplPrecopyPtr[kCanNumberOfRxObjects] = 
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
/* ROM CATEGORY 1 END */

#endif


#ifdef C_ENABLE_INDICATION_FCT
/* ROM CATEGORY 1 START */
/* PRQA  S 1334 QAC_Can_1334 */ /* MD_Can_1334 */
V_MEMROM0 V_MEMROM1 ApplIndicationFct V_MEMROM2 CanRxApplIndicationPtr[kCanNumberOfRxObjects] = 
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
/* PRQA  L:QAC_Can_1334 */

/* ROM CATEGORY 1 END */

#endif


#ifdef C_ENABLE_INDICATION_FLAG
/* ROM CATEGORY 1 START */
V_MEMROM0 V_MEMROM1 vuint8 V_MEMROM2 CanIndicationOffset[kCanNumberOfRxObjects] = 
{
  0 /* ID: 0x000005e8, Handle: 0, ESR_Status9 [BC] */, 
  0 /* ID: 0x000005e7, Handle: 1, ESR_Status8 [BC] */, 
  0 /* ID: 0x000005e6, Handle: 2, ESR_Status7 [BC] */, 
  0 /* ID: 0x000005e5, Handle: 3, ESR_Status6 [BC] */, 
  0 /* ID: 0x000005e4, Handle: 4, ESR_Status5 [BC] */, 
  0 /* ID: 0x0000053f, Handle: 5, ESR_Track64 [BC] */, 
  0 /* ID: 0x0000053e, Handle: 6, ESR_Track63 [BC] */, 
  0 /* ID: 0x0000053d, Handle: 7, ESR_Track62 [BC] */, 
  0 /* ID: 0x0000053c, Handle: 8, ESR_Track61 [BC] */, 
  0 /* ID: 0x0000053b, Handle: 9, ESR_Track60 [BC] */, 
  0 /* ID: 0x0000053a, Handle: 10, ESR_Track59 [BC] */, 
  0 /* ID: 0x00000539, Handle: 11, ESR_Track58 [BC] */, 
  0 /* ID: 0x00000538, Handle: 12, ESR_Track57 [BC] */, 
  0 /* ID: 0x00000537, Handle: 13, ESR_Track56 [BC] */, 
  0 /* ID: 0x00000536, Handle: 14, ESR_Track55 [BC] */, 
  0 /* ID: 0x00000535, Handle: 15, ESR_Track54 [BC] */, 
  0 /* ID: 0x00000534, Handle: 16, ESR_Track53 [BC] */, 
  0 /* ID: 0x00000533, Handle: 17, ESR_Track52 [BC] */, 
  0 /* ID: 0x00000532, Handle: 18, ESR_Track51 [BC] */, 
  0 /* ID: 0x00000531, Handle: 19, ESR_Track50 [BC] */, 
  0 /* ID: 0x00000530, Handle: 20, ESR_Track49 [BC] */, 
  0 /* ID: 0x0000052f, Handle: 21, ESR_Track48 [BC] */, 
  0 /* ID: 0x0000052e, Handle: 22, ESR_Track47 [BC] */, 
  0 /* ID: 0x0000052d, Handle: 23, ESR_Track46 [BC] */, 
  0 /* ID: 0x0000052c, Handle: 24, ESR_Track45 [BC] */, 
  0 /* ID: 0x0000052b, Handle: 25, ESR_Track44 [BC] */, 
  0 /* ID: 0x0000052a, Handle: 26, ESR_Track43 [BC] */, 
  0 /* ID: 0x00000529, Handle: 27, ESR_Track42 [BC] */, 
  0 /* ID: 0x00000528, Handle: 28, ESR_Track41 [BC] */, 
  0 /* ID: 0x00000527, Handle: 29, ESR_Track40 [BC] */, 
  0 /* ID: 0x00000526, Handle: 30, ESR_Track39 [BC] */, 
  0 /* ID: 0x00000525, Handle: 31, ESR_Track38 [BC] */, 
  0 /* ID: 0x00000524, Handle: 32, ESR_Track37 [BC] */, 
  0 /* ID: 0x00000523, Handle: 33, ESR_Track36 [BC] */, 
  0 /* ID: 0x00000522, Handle: 34, ESR_Track35 [BC] */, 
  0 /* ID: 0x00000521, Handle: 35, ESR_Track34 [BC] */, 
  0 /* ID: 0x00000520, Handle: 36, ESR_Track33 [BC] */, 
  0 /* ID: 0x0000051f, Handle: 37, ESR_Track32 [BC] */, 
  0 /* ID: 0x0000051e, Handle: 38, ESR_Track31 [BC] */, 
  0 /* ID: 0x0000051d, Handle: 39, ESR_Track30 [BC] */, 
  0 /* ID: 0x0000051c, Handle: 40, ESR_Track29 [BC] */, 
  0 /* ID: 0x0000051b, Handle: 41, ESR_Track28 [BC] */, 
  0 /* ID: 0x0000051a, Handle: 42, ESR_Track27 [BC] */, 
  0 /* ID: 0x00000519, Handle: 43, ESR_Track26 [BC] */, 
  0 /* ID: 0x00000518, Handle: 44, ESR_Track25 [BC] */, 
  0 /* ID: 0x00000517, Handle: 45, ESR_Track24 [BC] */, 
  0 /* ID: 0x00000516, Handle: 46, ESR_Track23 [BC] */, 
  0 /* ID: 0x00000515, Handle: 47, ESR_Track22 [BC] */, 
  0 /* ID: 0x00000514, Handle: 48, ESR_Track21 [BC] */, 
  0 /* ID: 0x00000513, Handle: 49, ESR_Track20 [BC] */, 
  0 /* ID: 0x00000512, Handle: 50, ESR_Track19 [BC] */, 
  0 /* ID: 0x00000511, Handle: 51, ESR_Track18 [BC] */, 
  0 /* ID: 0x00000510, Handle: 52, ESR_Track17 [BC] */, 
  0 /* ID: 0x0000050f, Handle: 53, ESR_Track16 [BC] */, 
  0 /* ID: 0x0000050e, Handle: 54, ESR_Track15 [BC] */, 
  0 /* ID: 0x0000050d, Handle: 55, ESR_Track14 [BC] */, 
  0 /* ID: 0x0000050c, Handle: 56, ESR_Track13 [BC] */, 
  0 /* ID: 0x0000050b, Handle: 57, ESR_Track12 [BC] */, 
  0 /* ID: 0x0000050a, Handle: 58, ESR_Track11 [BC] */, 
  0 /* ID: 0x00000509, Handle: 59, ESR_Track10 [BC] */, 
  0 /* ID: 0x00000508, Handle: 60, ESR_Track09 [BC] */, 
  0 /* ID: 0x00000507, Handle: 61, ESR_Track08 [BC] */, 
  0 /* ID: 0x00000506, Handle: 62, ESR_Track07 [BC] */, 
  0 /* ID: 0x00000505, Handle: 63, ESR_Track06 [BC] */, 
  0 /* ID: 0x00000504, Handle: 64, ESR_Track05 [BC] */, 
  0 /* ID: 0x00000503, Handle: 65, ESR_Track04 [BC] */, 
  0 /* ID: 0x00000502, Handle: 66, ESR_Track03 [BC] */, 
  0 /* ID: 0x00000501, Handle: 67, ESR_Track02 [BC] */, 
  0 /* ID: 0x00000500, Handle: 68, ESR_Track01 [BC] */, 
  0 /* ID: 0x000004e3, Handle: 69, ESR_Status4 [BC] */, 
  0 /* ID: 0x000004e2, Handle: 70, ESR_Status3 [BC] */, 
  0 /* ID: 0x000004e1, Handle: 71, ESR_Status2 [BC] */, 
  0 /* ID: 0x000004e0, Handle: 72, ESR_Status1 [BC] */
};
/* ROM CATEGORY 1 END */


/* ROM CATEGORY 1 START */
V_MEMROM0 V_MEMROM1 vuint8 V_MEMROM2 CanIndicationMask[kCanNumberOfRxObjects] = 
{
  0x00u /* ID: 0x000005e8, Handle: 0, ESR_Status9 [BC] */, 
  0x00u /* ID: 0x000005e7, Handle: 1, ESR_Status8 [BC] */, 
  0x00u /* ID: 0x000005e6, Handle: 2, ESR_Status7 [BC] */, 
  0x00u /* ID: 0x000005e5, Handle: 3, ESR_Status6 [BC] */, 
  0x00u /* ID: 0x000005e4, Handle: 4, ESR_Status5 [BC] */, 
  0x00u /* ID: 0x0000053f, Handle: 5, ESR_Track64 [BC] */, 
  0x00u /* ID: 0x0000053e, Handle: 6, ESR_Track63 [BC] */, 
  0x00u /* ID: 0x0000053d, Handle: 7, ESR_Track62 [BC] */, 
  0x00u /* ID: 0x0000053c, Handle: 8, ESR_Track61 [BC] */, 
  0x00u /* ID: 0x0000053b, Handle: 9, ESR_Track60 [BC] */, 
  0x00u /* ID: 0x0000053a, Handle: 10, ESR_Track59 [BC] */, 
  0x00u /* ID: 0x00000539, Handle: 11, ESR_Track58 [BC] */, 
  0x00u /* ID: 0x00000538, Handle: 12, ESR_Track57 [BC] */, 
  0x00u /* ID: 0x00000537, Handle: 13, ESR_Track56 [BC] */, 
  0x00u /* ID: 0x00000536, Handle: 14, ESR_Track55 [BC] */, 
  0x00u /* ID: 0x00000535, Handle: 15, ESR_Track54 [BC] */, 
  0x00u /* ID: 0x00000534, Handle: 16, ESR_Track53 [BC] */, 
  0x00u /* ID: 0x00000533, Handle: 17, ESR_Track52 [BC] */, 
  0x00u /* ID: 0x00000532, Handle: 18, ESR_Track51 [BC] */, 
  0x00u /* ID: 0x00000531, Handle: 19, ESR_Track50 [BC] */, 
  0x00u /* ID: 0x00000530, Handle: 20, ESR_Track49 [BC] */, 
  0x00u /* ID: 0x0000052f, Handle: 21, ESR_Track48 [BC] */, 
  0x00u /* ID: 0x0000052e, Handle: 22, ESR_Track47 [BC] */, 
  0x00u /* ID: 0x0000052d, Handle: 23, ESR_Track46 [BC] */, 
  0x00u /* ID: 0x0000052c, Handle: 24, ESR_Track45 [BC] */, 
  0x00u /* ID: 0x0000052b, Handle: 25, ESR_Track44 [BC] */, 
  0x00u /* ID: 0x0000052a, Handle: 26, ESR_Track43 [BC] */, 
  0x00u /* ID: 0x00000529, Handle: 27, ESR_Track42 [BC] */, 
  0x00u /* ID: 0x00000528, Handle: 28, ESR_Track41 [BC] */, 
  0x00u /* ID: 0x00000527, Handle: 29, ESR_Track40 [BC] */, 
  0x00u /* ID: 0x00000526, Handle: 30, ESR_Track39 [BC] */, 
  0x00u /* ID: 0x00000525, Handle: 31, ESR_Track38 [BC] */, 
  0x00u /* ID: 0x00000524, Handle: 32, ESR_Track37 [BC] */, 
  0x00u /* ID: 0x00000523, Handle: 33, ESR_Track36 [BC] */, 
  0x00u /* ID: 0x00000522, Handle: 34, ESR_Track35 [BC] */, 
  0x00u /* ID: 0x00000521, Handle: 35, ESR_Track34 [BC] */, 
  0x00u /* ID: 0x00000520, Handle: 36, ESR_Track33 [BC] */, 
  0x00u /* ID: 0x0000051f, Handle: 37, ESR_Track32 [BC] */, 
  0x00u /* ID: 0x0000051e, Handle: 38, ESR_Track31 [BC] */, 
  0x00u /* ID: 0x0000051d, Handle: 39, ESR_Track30 [BC] */, 
  0x00u /* ID: 0x0000051c, Handle: 40, ESR_Track29 [BC] */, 
  0x00u /* ID: 0x0000051b, Handle: 41, ESR_Track28 [BC] */, 
  0x00u /* ID: 0x0000051a, Handle: 42, ESR_Track27 [BC] */, 
  0x00u /* ID: 0x00000519, Handle: 43, ESR_Track26 [BC] */, 
  0x00u /* ID: 0x00000518, Handle: 44, ESR_Track25 [BC] */, 
  0x00u /* ID: 0x00000517, Handle: 45, ESR_Track24 [BC] */, 
  0x00u /* ID: 0x00000516, Handle: 46, ESR_Track23 [BC] */, 
  0x00u /* ID: 0x00000515, Handle: 47, ESR_Track22 [BC] */, 
  0x00u /* ID: 0x00000514, Handle: 48, ESR_Track21 [BC] */, 
  0x00u /* ID: 0x00000513, Handle: 49, ESR_Track20 [BC] */, 
  0x00u /* ID: 0x00000512, Handle: 50, ESR_Track19 [BC] */, 
  0x00u /* ID: 0x00000511, Handle: 51, ESR_Track18 [BC] */, 
  0x00u /* ID: 0x00000510, Handle: 52, ESR_Track17 [BC] */, 
  0x00u /* ID: 0x0000050f, Handle: 53, ESR_Track16 [BC] */, 
  0x00u /* ID: 0x0000050e, Handle: 54, ESR_Track15 [BC] */, 
  0x00u /* ID: 0x0000050d, Handle: 55, ESR_Track14 [BC] */, 
  0x00u /* ID: 0x0000050c, Handle: 56, ESR_Track13 [BC] */, 
  0x00u /* ID: 0x0000050b, Handle: 57, ESR_Track12 [BC] */, 
  0x00u /* ID: 0x0000050a, Handle: 58, ESR_Track11 [BC] */, 
  0x00u /* ID: 0x00000509, Handle: 59, ESR_Track10 [BC] */, 
  0x00u /* ID: 0x00000508, Handle: 60, ESR_Track09 [BC] */, 
  0x00u /* ID: 0x00000507, Handle: 61, ESR_Track08 [BC] */, 
  0x00u /* ID: 0x00000506, Handle: 62, ESR_Track07 [BC] */, 
  0x00u /* ID: 0x00000505, Handle: 63, ESR_Track06 [BC] */, 
  0x00u /* ID: 0x00000504, Handle: 64, ESR_Track05 [BC] */, 
  0x00u /* ID: 0x00000503, Handle: 65, ESR_Track04 [BC] */, 
  0x00u /* ID: 0x00000502, Handle: 66, ESR_Track03 [BC] */, 
  0x00u /* ID: 0x00000501, Handle: 67, ESR_Track02 [BC] */, 
  0x00u /* ID: 0x00000500, Handle: 68, ESR_Track01 [BC] */, 
  0x00u /* ID: 0x000004e3, Handle: 69, ESR_Status4 [BC] */, 
  0x00u /* ID: 0x000004e2, Handle: 70, ESR_Status3 [BC] */, 
  0x00u /* ID: 0x000004e1, Handle: 71, ESR_Status2 [BC] */, 
  0x00u /* ID: 0x000004e0, Handle: 72, ESR_Status1 [BC] */
};
/* ROM CATEGORY 1 END */


#endif




/* -----------------------------------------------------------------------------
    &&&~ Init structures
 ----------------------------------------------------------------------------- */

/* ROM CATEGORY 4 START */
/* PRQA S 3408 1 */ /* MD_Can_3408_extLinkage */
V_MEMROM0 V_MEMROM1 vuint8 V_MEMROM2 CanInitObjectStartIndex[2] = 
{
  0, 
  1
};

/* ROM CATEGORY 4 END */

/* ROM CATEGORY 4 START */
V_MEMROM0 V_MEMROM1 vuint32 V_MEMROM2 CanInitBitTiming[1] = 
{
  0x00004D01u
};
V_MEMROM0 V_MEMROM1 vuint32 V_MEMROM2 CanInitBasicMsk[1][1] = 
{
  
  {
    0xF8000000u
  }
};
V_MEMROM0 V_MEMROM1 vuint32 V_MEMROM2 CanInitBasicCode[1][1] = 
{
  
  {
    0x10000000u
  }
};
/* ROM CATEGORY 4 END */



#if defined(C_ENABLE_MULTI_ECU_CONFIG)
/* ROM CATEGORY 1 START */
V_MEMROM0 V_MEMROM1 vuint8 V_MEMROM2 CanPhysToLogChannel[kVNumberOfIdentities][kCanNumberOfPhysChannels] = 
{
  
  {
    0
  }
};
/* ROM CATEGORY 1 END */

#endif

#if defined(C_ENABLE_MULTI_ECU_CONFIG)
/* ROM CATEGORY 2 START */

V_MEMROM0 V_MEMROM1 tVIdentityMsk V_MEMROM2 CanChannelIdentityAssignment[kCanNumberOfChannels] = 
{
  0x01u
};

/* ROM CATEGORY 2 END */

#endif

#if defined(C_ENABLE_MULTI_ECU_PHYS)
/* ROM CATEGORY 1 START */
V_MEMROM0 V_MEMROM1 tVIdentityMsk V_MEMROM2 CanRxIdentityAssignment[kCanNumberOfRxObjects] = 
{
  0x01u /* ID: 0x000005e8, Handle: 0, ESR_Status9 [BC] */, 
  0x01u /* ID: 0x000005e7, Handle: 1, ESR_Status8 [BC] */, 
  0x01u /* ID: 0x000005e6, Handle: 2, ESR_Status7 [BC] */, 
  0x01u /* ID: 0x000005e5, Handle: 3, ESR_Status6 [BC] */, 
  0x01u /* ID: 0x000005e4, Handle: 4, ESR_Status5 [BC] */, 
  0x01u /* ID: 0x0000053f, Handle: 5, ESR_Track64 [BC] */, 
  0x01u /* ID: 0x0000053e, Handle: 6, ESR_Track63 [BC] */, 
  0x01u /* ID: 0x0000053d, Handle: 7, ESR_Track62 [BC] */, 
  0x01u /* ID: 0x0000053c, Handle: 8, ESR_Track61 [BC] */, 
  0x01u /* ID: 0x0000053b, Handle: 9, ESR_Track60 [BC] */, 
  0x01u /* ID: 0x0000053a, Handle: 10, ESR_Track59 [BC] */, 
  0x01u /* ID: 0x00000539, Handle: 11, ESR_Track58 [BC] */, 
  0x01u /* ID: 0x00000538, Handle: 12, ESR_Track57 [BC] */, 
  0x01u /* ID: 0x00000537, Handle: 13, ESR_Track56 [BC] */, 
  0x01u /* ID: 0x00000536, Handle: 14, ESR_Track55 [BC] */, 
  0x01u /* ID: 0x00000535, Handle: 15, ESR_Track54 [BC] */, 
  0x01u /* ID: 0x00000534, Handle: 16, ESR_Track53 [BC] */, 
  0x01u /* ID: 0x00000533, Handle: 17, ESR_Track52 [BC] */, 
  0x01u /* ID: 0x00000532, Handle: 18, ESR_Track51 [BC] */, 
  0x01u /* ID: 0x00000531, Handle: 19, ESR_Track50 [BC] */, 
  0x01u /* ID: 0x00000530, Handle: 20, ESR_Track49 [BC] */, 
  0x01u /* ID: 0x0000052f, Handle: 21, ESR_Track48 [BC] */, 
  0x01u /* ID: 0x0000052e, Handle: 22, ESR_Track47 [BC] */, 
  0x01u /* ID: 0x0000052d, Handle: 23, ESR_Track46 [BC] */, 
  0x01u /* ID: 0x0000052c, Handle: 24, ESR_Track45 [BC] */, 
  0x01u /* ID: 0x0000052b, Handle: 25, ESR_Track44 [BC] */, 
  0x01u /* ID: 0x0000052a, Handle: 26, ESR_Track43 [BC] */, 
  0x01u /* ID: 0x00000529, Handle: 27, ESR_Track42 [BC] */, 
  0x01u /* ID: 0x00000528, Handle: 28, ESR_Track41 [BC] */, 
  0x01u /* ID: 0x00000527, Handle: 29, ESR_Track40 [BC] */, 
  0x01u /* ID: 0x00000526, Handle: 30, ESR_Track39 [BC] */, 
  0x01u /* ID: 0x00000525, Handle: 31, ESR_Track38 [BC] */, 
  0x01u /* ID: 0x00000524, Handle: 32, ESR_Track37 [BC] */, 
  0x01u /* ID: 0x00000523, Handle: 33, ESR_Track36 [BC] */, 
  0x01u /* ID: 0x00000522, Handle: 34, ESR_Track35 [BC] */, 
  0x01u /* ID: 0x00000521, Handle: 35, ESR_Track34 [BC] */, 
  0x01u /* ID: 0x00000520, Handle: 36, ESR_Track33 [BC] */, 
  0x01u /* ID: 0x0000051f, Handle: 37, ESR_Track32 [BC] */, 
  0x01u /* ID: 0x0000051e, Handle: 38, ESR_Track31 [BC] */, 
  0x01u /* ID: 0x0000051d, Handle: 39, ESR_Track30 [BC] */, 
  0x01u /* ID: 0x0000051c, Handle: 40, ESR_Track29 [BC] */, 
  0x01u /* ID: 0x0000051b, Handle: 41, ESR_Track28 [BC] */, 
  0x01u /* ID: 0x0000051a, Handle: 42, ESR_Track27 [BC] */, 
  0x01u /* ID: 0x00000519, Handle: 43, ESR_Track26 [BC] */, 
  0x01u /* ID: 0x00000518, Handle: 44, ESR_Track25 [BC] */, 
  0x01u /* ID: 0x00000517, Handle: 45, ESR_Track24 [BC] */, 
  0x01u /* ID: 0x00000516, Handle: 46, ESR_Track23 [BC] */, 
  0x01u /* ID: 0x00000515, Handle: 47, ESR_Track22 [BC] */, 
  0x01u /* ID: 0x00000514, Handle: 48, ESR_Track21 [BC] */, 
  0x01u /* ID: 0x00000513, Handle: 49, ESR_Track20 [BC] */, 
  0x01u /* ID: 0x00000512, Handle: 50, ESR_Track19 [BC] */, 
  0x01u /* ID: 0x00000511, Handle: 51, ESR_Track18 [BC] */, 
  0x01u /* ID: 0x00000510, Handle: 52, ESR_Track17 [BC] */, 
  0x01u /* ID: 0x0000050f, Handle: 53, ESR_Track16 [BC] */, 
  0x01u /* ID: 0x0000050e, Handle: 54, ESR_Track15 [BC] */, 
  0x01u /* ID: 0x0000050d, Handle: 55, ESR_Track14 [BC] */, 
  0x01u /* ID: 0x0000050c, Handle: 56, ESR_Track13 [BC] */, 
  0x01u /* ID: 0x0000050b, Handle: 57, ESR_Track12 [BC] */, 
  0x01u /* ID: 0x0000050a, Handle: 58, ESR_Track11 [BC] */, 
  0x01u /* ID: 0x00000509, Handle: 59, ESR_Track10 [BC] */, 
  0x01u /* ID: 0x00000508, Handle: 60, ESR_Track09 [BC] */, 
  0x01u /* ID: 0x00000507, Handle: 61, ESR_Track08 [BC] */, 
  0x01u /* ID: 0x00000506, Handle: 62, ESR_Track07 [BC] */, 
  0x01u /* ID: 0x00000505, Handle: 63, ESR_Track06 [BC] */, 
  0x01u /* ID: 0x00000504, Handle: 64, ESR_Track05 [BC] */, 
  0x01u /* ID: 0x00000503, Handle: 65, ESR_Track04 [BC] */, 
  0x01u /* ID: 0x00000502, Handle: 66, ESR_Track03 [BC] */, 
  0x01u /* ID: 0x00000501, Handle: 67, ESR_Track02 [BC] */, 
  0x01u /* ID: 0x00000500, Handle: 68, ESR_Track01 [BC] */, 
  0x01u /* ID: 0x000004e3, Handle: 69, ESR_Status4 [BC] */, 
  0x01u /* ID: 0x000004e2, Handle: 70, ESR_Status3 [BC] */, 
  0x01u /* ID: 0x000004e1, Handle: 71, ESR_Status2 [BC] */, 
  0x01u /* ID: 0x000004e0, Handle: 72, ESR_Status1 [BC] */
};
/* ROM CATEGORY 1 END */

/* ROM CATEGORY 4 START */
V_MEMROM0 V_MEMROM1 tVIdentityMsk V_MEMROM2 CanTxIdentityAssignment[kCanNumberOfTxObjects] = 
{
  0x01u /* ID: 0x00000726, Handle: 0, TSR_message_G [BC] */, 
  0x01u /* ID: 0x0000077b, Handle: 1, Next_lane_Right_P [FC] */, 
  0x01u /* ID: 0x0000077a, Handle: 2, Next_lane_Right_O [FC] */, 
  0x01u /* ID: 0x00000779, Handle: 3, Next_lane_Left_N [FC] */, 
  0x01u /* ID: 0x00000778, Handle: 4, Next_lane_Left_M [FC] */, 
  0x01u /* ID: 0x00000777, Handle: 5, Next_lane_Right_L [FC] */, 
  0x01u /* ID: 0x00000776, Handle: 6, Next_lane_Right_K [FC] */, 
  0x01u /* ID: 0x00000775, Handle: 7, Next_lane_Left_J [FC] */, 
  0x01u /* ID: 0x00000774, Handle: 8, Next_lane_Left_I [FC] */, 
  0x01u /* ID: 0x00000773, Handle: 9, Next_lane_Right_H [FC] */, 
  0x01u /* ID: 0x00000772, Handle: 10, Next_lane_Right_G [FC] */, 
  0x01u /* ID: 0x00000771, Handle: 11, Next_lane_Left_F [FC] */, 
  0x01u /* ID: 0x00000770, Handle: 12, Next_lane_Left_E [FC] */, 
  0x01u /* ID: 0x0000076f, Handle: 13, Next_lane_Right_D [FC] */, 
  0x01u /* ID: 0x0000076e, Handle: 14, Next_lane_Right_C [FC] */, 
  0x01u /* ID: 0x0000076d, Handle: 15, Next_lane_Left_B [FC] */, 
  0x01u /* ID: 0x0000076c, Handle: 16, Next_lane_Left_A [FC] */, 
  0x01u /* ID: 0x0000076b, Handle: 17, Numebr_of_next_lane [FC] */, 
  0x01u /* ID: 0x0000076a, Handle: 18, Reference_points [FC] */, 
  0x01u /* ID: 0x00000769, Handle: 19, LKA_right_lane_B [FC] */, 
  0x01u /* ID: 0x00000768, Handle: 20, LKA_right_lane_A [FC] */, 
  0x01u /* ID: 0x00000767, Handle: 21, LKA_left_lane_B [FC] */, 
  0x01u /* ID: 0x00000766, Handle: 22, LKA_left_lane_A [FC] */, 
  0x01u /* ID: 0x00000760, Handle: 23, Car_Info [FC] */, 
  0x01u /* ID: 0x00000750, Handle: 24, Obstacle_Data_X [FC] */, 
  0x01u /* ID: 0x0000074f, Handle: 25, Obstacle_Data_W [FC] */, 
  0x01u /* ID: 0x0000074e, Handle: 26, Obstacle_Data_V [FC] */, 
  0x01u /* ID: 0x0000074d, Handle: 27, Obstacle_Data_U [FC] */, 
  0x01u /* ID: 0x0000074c, Handle: 28, Obstacle_Data_T [FC] */, 
  0x01u /* ID: 0x0000074b, Handle: 29, Obstacle_Data_S [FC] */, 
  0x01u /* ID: 0x0000074a, Handle: 30, Obstacle_Data_R [FC] */, 
  0x01u /* ID: 0x00000749, Handle: 31, Obstacle_Data_Q [FC] */, 
  0x01u /* ID: 0x00000748, Handle: 32, Obstacle_Data_P [FC] */, 
  0x01u /* ID: 0x00000747, Handle: 33, Obstacle_Data_O [FC] */, 
  0x01u /* ID: 0x00000746, Handle: 34, Obstacle_Data_N [FC] */, 
  0x01u /* ID: 0x00000745, Handle: 35, Obstacle_Data_M [FC] */, 
  0x01u /* ID: 0x00000744, Handle: 36, Obstacle_Data_L [FC] */, 
  0x01u /* ID: 0x00000743, Handle: 37, Obstacle_Data_K [FC] */, 
  0x01u /* ID: 0x00000742, Handle: 38, Obstacle_Data_J [FC] */, 
  0x01u /* ID: 0x00000741, Handle: 39, Obstacle_Data_I [FC] */, 
  0x01u /* ID: 0x00000740, Handle: 40, Obstacle_Data_H [FC] */, 
  0x01u /* ID: 0x0000073f, Handle: 41, Obstacle_Data_G [FC] */, 
  0x01u /* ID: 0x0000073e, Handle: 42, Obstacle_Data_F [FC] */, 
  0x01u /* ID: 0x0000073d, Handle: 43, Obstacle_Data_E [FC] */, 
  0x01u /* ID: 0x0000073c, Handle: 44, Obstacle_Data_D [FC] */, 
  0x01u /* ID: 0x0000073b, Handle: 45, Obstacle_Data_C [FC] */, 
  0x01u /* ID: 0x0000073a, Handle: 46, Obstacle_Data_B [FC] */, 
  0x01u /* ID: 0x00000739, Handle: 47, Obstacle_Data_A [FC] */, 
  0x01u /* ID: 0x00000738, Handle: 48, Obstacle_Status [FC] */, 
  0x01u /* ID: 0x00000737, Handle: 49, Lane [FC] */, 
  0x01u /* ID: 0x00000729, Handle: 50, AHBC_Gradual [FC] */, 
  0x01u /* ID: 0x00000728, Handle: 51, AHBC_high_low_beam [FC] */, 
  0x01u /* ID: 0x00000727, Handle: 52, Sign_Type [FC] */, 
  0x01u /* ID: 0x00000725, Handle: 53, TSR_message_F [FC] */, 
  0x01u /* ID: 0x00000724, Handle: 54, TSR_message_E [FC] */, 
  0x01u /* ID: 0x00000723, Handle: 55, TSR_message_D [FC] */, 
  0x01u /* ID: 0x00000722, Handle: 56, TSR_message_C [FC] */, 
  0x01u /* ID: 0x00000721, Handle: 57, TSR_message_B [FC] */, 
  0x01u /* ID: 0x00000720, Handle: 58, TSR_message_A [FC] */, 
  0x01u /* ID: 0x00000700, Handle: 59, C2_Display_and_warning [FC] */, 
  0x01u /* ID: 0x00000669, Handle: 60, Detils_Lane [FC] */, 
  0x01u /* ID: 0x00000650, Handle: 61, Fixed_FOE [FC] */
};
/* ROM CATEGORY 4 END */

#endif


#ifdef C_ENABLE_TX_FULLCAN_OBJECTS
/* ROM CATEGORY 2 START */
#ifdef C_ENABLE_HW_OBJ_EXCEED_255_DRV
V_MEMROM0 V_MEMROM1 CanObjectHandle V_MEMROM2 CanTxHwObj[kCanNumberOfTxObjects] = 
{
  0x3Du /* ID: 0x00000726, Handle: 0, TSR_message_G [BC] */, 
  0x3Cu /* ID: 0x0000077b, Handle: 1, Next_lane_Right_P [FC] */, 
  0x3Bu /* ID: 0x0000077a, Handle: 2, Next_lane_Right_O [FC] */, 
  0x3Au /* ID: 0x00000779, Handle: 3, Next_lane_Left_N [FC] */, 
  0x39u /* ID: 0x00000778, Handle: 4, Next_lane_Left_M [FC] */, 
  0x38u /* ID: 0x00000777, Handle: 5, Next_lane_Right_L [FC] */, 
  0x37u /* ID: 0x00000776, Handle: 6, Next_lane_Right_K [FC] */, 
  0x36u /* ID: 0x00000775, Handle: 7, Next_lane_Left_J [FC] */, 
  0x35u /* ID: 0x00000774, Handle: 8, Next_lane_Left_I [FC] */, 
  0x34u /* ID: 0x00000773, Handle: 9, Next_lane_Right_H [FC] */, 
  0x33u /* ID: 0x00000772, Handle: 10, Next_lane_Right_G [FC] */, 
  0x32u /* ID: 0x00000771, Handle: 11, Next_lane_Left_F [FC] */, 
  0x31u /* ID: 0x00000770, Handle: 12, Next_lane_Left_E [FC] */, 
  0x30u /* ID: 0x0000076f, Handle: 13, Next_lane_Right_D [FC] */, 
  0x2Fu /* ID: 0x0000076e, Handle: 14, Next_lane_Right_C [FC] */, 
  0x2Eu /* ID: 0x0000076d, Handle: 15, Next_lane_Left_B [FC] */, 
  0x2Du /* ID: 0x0000076c, Handle: 16, Next_lane_Left_A [FC] */, 
  0x2Cu /* ID: 0x0000076b, Handle: 17, Numebr_of_next_lane [FC] */, 
  0x2Bu /* ID: 0x0000076a, Handle: 18, Reference_points [FC] */, 
  0x2Au /* ID: 0x00000769, Handle: 19, LKA_right_lane_B [FC] */, 
  0x29u /* ID: 0x00000768, Handle: 20, LKA_right_lane_A [FC] */, 
  0x28u /* ID: 0x00000767, Handle: 21, LKA_left_lane_B [FC] */, 
  0x27u /* ID: 0x00000766, Handle: 22, LKA_left_lane_A [FC] */, 
  0x26u /* ID: 0x00000760, Handle: 23, Car_Info [FC] */, 
  0x25u /* ID: 0x00000750, Handle: 24, Obstacle_Data_X [FC] */, 
  0x24u /* ID: 0x0000074f, Handle: 25, Obstacle_Data_W [FC] */, 
  0x23u /* ID: 0x0000074e, Handle: 26, Obstacle_Data_V [FC] */, 
  0x22u /* ID: 0x0000074d, Handle: 27, Obstacle_Data_U [FC] */, 
  0x21u /* ID: 0x0000074c, Handle: 28, Obstacle_Data_T [FC] */, 
  0x20u /* ID: 0x0000074b, Handle: 29, Obstacle_Data_S [FC] */, 
  0x1Fu /* ID: 0x0000074a, Handle: 30, Obstacle_Data_R [FC] */, 
  0x1Eu /* ID: 0x00000749, Handle: 31, Obstacle_Data_Q [FC] */, 
  0x1Du /* ID: 0x00000748, Handle: 32, Obstacle_Data_P [FC] */, 
  0x1Cu /* ID: 0x00000747, Handle: 33, Obstacle_Data_O [FC] */, 
  0x1Bu /* ID: 0x00000746, Handle: 34, Obstacle_Data_N [FC] */, 
  0x1Au /* ID: 0x00000745, Handle: 35, Obstacle_Data_M [FC] */, 
  0x19u /* ID: 0x00000744, Handle: 36, Obstacle_Data_L [FC] */, 
  0x18u /* ID: 0x00000743, Handle: 37, Obstacle_Data_K [FC] */, 
  0x17u /* ID: 0x00000742, Handle: 38, Obstacle_Data_J [FC] */, 
  0x16u /* ID: 0x00000741, Handle: 39, Obstacle_Data_I [FC] */, 
  0x15u /* ID: 0x00000740, Handle: 40, Obstacle_Data_H [FC] */, 
  0x14u /* ID: 0x0000073f, Handle: 41, Obstacle_Data_G [FC] */, 
  0x13u /* ID: 0x0000073e, Handle: 42, Obstacle_Data_F [FC] */, 
  0x12u /* ID: 0x0000073d, Handle: 43, Obstacle_Data_E [FC] */, 
  0x11u /* ID: 0x0000073c, Handle: 44, Obstacle_Data_D [FC] */, 
  0x10u /* ID: 0x0000073b, Handle: 45, Obstacle_Data_C [FC] */, 
  0x0Fu /* ID: 0x0000073a, Handle: 46, Obstacle_Data_B [FC] */, 
  0x0Eu /* ID: 0x00000739, Handle: 47, Obstacle_Data_A [FC] */, 
  0x0Du /* ID: 0x00000738, Handle: 48, Obstacle_Status [FC] */, 
  0x0Cu /* ID: 0x00000737, Handle: 49, Lane [FC] */, 
  0x0Bu /* ID: 0x00000729, Handle: 50, AHBC_Gradual [FC] */, 
  0x0Au /* ID: 0x00000728, Handle: 51, AHBC_high_low_beam [FC] */, 
  0x09u /* ID: 0x00000727, Handle: 52, Sign_Type [FC] */, 
  0x08u /* ID: 0x00000725, Handle: 53, TSR_message_F [FC] */, 
  0x07u /* ID: 0x00000724, Handle: 54, TSR_message_E [FC] */, 
  0x06u /* ID: 0x00000723, Handle: 55, TSR_message_D [FC] */, 
  0x05u /* ID: 0x00000722, Handle: 56, TSR_message_C [FC] */, 
  0x04u /* ID: 0x00000721, Handle: 57, TSR_message_B [FC] */, 
  0x03u /* ID: 0x00000720, Handle: 58, TSR_message_A [FC] */, 
  0x02u /* ID: 0x00000700, Handle: 59, C2_Display_and_warning [FC] */, 
  0x01u /* ID: 0x00000669, Handle: 60, Detils_Lane [FC] */, 
  0x00u /* ID: 0x00000650, Handle: 61, Fixed_FOE [FC] */
};
#else
V_MEMROM0 V_MEMROM1 vuint8 V_MEMROM2 CanTxHwObj[kCanNumberOfTxObjects] = 
{
  0x3Du /* ID: 0x00000726, Handle: 0, TSR_message_G [BC] */, 
  0x3Cu /* ID: 0x0000077b, Handle: 1, Next_lane_Right_P [FC] */, 
  0x3Bu /* ID: 0x0000077a, Handle: 2, Next_lane_Right_O [FC] */, 
  0x3Au /* ID: 0x00000779, Handle: 3, Next_lane_Left_N [FC] */, 
  0x39u /* ID: 0x00000778, Handle: 4, Next_lane_Left_M [FC] */, 
  0x38u /* ID: 0x00000777, Handle: 5, Next_lane_Right_L [FC] */, 
  0x37u /* ID: 0x00000776, Handle: 6, Next_lane_Right_K [FC] */, 
  0x36u /* ID: 0x00000775, Handle: 7, Next_lane_Left_J [FC] */, 
  0x35u /* ID: 0x00000774, Handle: 8, Next_lane_Left_I [FC] */, 
  0x34u /* ID: 0x00000773, Handle: 9, Next_lane_Right_H [FC] */, 
  0x33u /* ID: 0x00000772, Handle: 10, Next_lane_Right_G [FC] */, 
  0x32u /* ID: 0x00000771, Handle: 11, Next_lane_Left_F [FC] */, 
  0x31u /* ID: 0x00000770, Handle: 12, Next_lane_Left_E [FC] */, 
  0x30u /* ID: 0x0000076f, Handle: 13, Next_lane_Right_D [FC] */, 
  0x2Fu /* ID: 0x0000076e, Handle: 14, Next_lane_Right_C [FC] */, 
  0x2Eu /* ID: 0x0000076d, Handle: 15, Next_lane_Left_B [FC] */, 
  0x2Du /* ID: 0x0000076c, Handle: 16, Next_lane_Left_A [FC] */, 
  0x2Cu /* ID: 0x0000076b, Handle: 17, Numebr_of_next_lane [FC] */, 
  0x2Bu /* ID: 0x0000076a, Handle: 18, Reference_points [FC] */, 
  0x2Au /* ID: 0x00000769, Handle: 19, LKA_right_lane_B [FC] */, 
  0x29u /* ID: 0x00000768, Handle: 20, LKA_right_lane_A [FC] */, 
  0x28u /* ID: 0x00000767, Handle: 21, LKA_left_lane_B [FC] */, 
  0x27u /* ID: 0x00000766, Handle: 22, LKA_left_lane_A [FC] */, 
  0x26u /* ID: 0x00000760, Handle: 23, Car_Info [FC] */, 
  0x25u /* ID: 0x00000750, Handle: 24, Obstacle_Data_X [FC] */, 
  0x24u /* ID: 0x0000074f, Handle: 25, Obstacle_Data_W [FC] */, 
  0x23u /* ID: 0x0000074e, Handle: 26, Obstacle_Data_V [FC] */, 
  0x22u /* ID: 0x0000074d, Handle: 27, Obstacle_Data_U [FC] */, 
  0x21u /* ID: 0x0000074c, Handle: 28, Obstacle_Data_T [FC] */, 
  0x20u /* ID: 0x0000074b, Handle: 29, Obstacle_Data_S [FC] */, 
  0x1Fu /* ID: 0x0000074a, Handle: 30, Obstacle_Data_R [FC] */, 
  0x1Eu /* ID: 0x00000749, Handle: 31, Obstacle_Data_Q [FC] */, 
  0x1Du /* ID: 0x00000748, Handle: 32, Obstacle_Data_P [FC] */, 
  0x1Cu /* ID: 0x00000747, Handle: 33, Obstacle_Data_O [FC] */, 
  0x1Bu /* ID: 0x00000746, Handle: 34, Obstacle_Data_N [FC] */, 
  0x1Au /* ID: 0x00000745, Handle: 35, Obstacle_Data_M [FC] */, 
  0x19u /* ID: 0x00000744, Handle: 36, Obstacle_Data_L [FC] */, 
  0x18u /* ID: 0x00000743, Handle: 37, Obstacle_Data_K [FC] */, 
  0x17u /* ID: 0x00000742, Handle: 38, Obstacle_Data_J [FC] */, 
  0x16u /* ID: 0x00000741, Handle: 39, Obstacle_Data_I [FC] */, 
  0x15u /* ID: 0x00000740, Handle: 40, Obstacle_Data_H [FC] */, 
  0x14u /* ID: 0x0000073f, Handle: 41, Obstacle_Data_G [FC] */, 
  0x13u /* ID: 0x0000073e, Handle: 42, Obstacle_Data_F [FC] */, 
  0x12u /* ID: 0x0000073d, Handle: 43, Obstacle_Data_E [FC] */, 
  0x11u /* ID: 0x0000073c, Handle: 44, Obstacle_Data_D [FC] */, 
  0x10u /* ID: 0x0000073b, Handle: 45, Obstacle_Data_C [FC] */, 
  0x0Fu /* ID: 0x0000073a, Handle: 46, Obstacle_Data_B [FC] */, 
  0x0Eu /* ID: 0x00000739, Handle: 47, Obstacle_Data_A [FC] */, 
  0x0Du /* ID: 0x00000738, Handle: 48, Obstacle_Status [FC] */, 
  0x0Cu /* ID: 0x00000737, Handle: 49, Lane [FC] */, 
  0x0Bu /* ID: 0x00000729, Handle: 50, AHBC_Gradual [FC] */, 
  0x0Au /* ID: 0x00000728, Handle: 51, AHBC_high_low_beam [FC] */, 
  0x09u /* ID: 0x00000727, Handle: 52, Sign_Type [FC] */, 
  0x08u /* ID: 0x00000725, Handle: 53, TSR_message_F [FC] */, 
  0x07u /* ID: 0x00000724, Handle: 54, TSR_message_E [FC] */, 
  0x06u /* ID: 0x00000723, Handle: 55, TSR_message_D [FC] */, 
  0x05u /* ID: 0x00000722, Handle: 56, TSR_message_C [FC] */, 
  0x04u /* ID: 0x00000721, Handle: 57, TSR_message_B [FC] */, 
  0x03u /* ID: 0x00000720, Handle: 58, TSR_message_A [FC] */, 
  0x02u /* ID: 0x00000700, Handle: 59, C2_Display_and_warning [FC] */, 
  0x01u /* ID: 0x00000669, Handle: 60, Detils_Lane [FC] */, 
  0x00u /* ID: 0x00000650, Handle: 61, Fixed_FOE [FC] */
};
#endif

/* ROM CATEGORY 2 END */

#endif





/* begin Fileversion check */
#ifndef SKIP_MAGIC_NUMBER
#ifdef MAGIC_NUMBER
  #if MAGIC_NUMBER != 297367898
      #error "The magic number of the generated file <D:\code\McuCode\GENy-IL-interfaceGenerator\tools\Geny\can_par.c> is different. Please check time and date of generated files!"
  #endif
#else
  #error "The magic number is not defined in the generated file <D:\code\McuCode\GENy-IL-interfaceGenerator\tools\Geny\can_par.c> "

#endif  /* MAGIC_NUMBER */
#endif  /* SKIP_MAGIC_NUMBER */

/* end Fileversion check */

