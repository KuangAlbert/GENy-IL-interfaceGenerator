/* -----------------------------------------------------------------------------
  Filename:    drv_par.h
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

#if !defined(__DRV_PAR_H__)
#define __DRV_PAR_H__

/* -----------------------------------------------------------------------------
    &&&~ Signal Structures
 ----------------------------------------------------------------------------- */

typedef struct _c_ESR_Status1_msgTypeTag
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
} _c_ESR_Status1_msgType;
typedef struct _c_Car_Info_msgTypeTag
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
} _c_Car_Info_msgType;
typedef struct _c_Detils_Lane_msgTypeTag
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
} _c_Detils_Lane_msgType;
typedef struct _c_Next_lane_Right_P_msgTypeTag
{
  vbittype Heading_angle_Parameter_C1_0x77B_0 : 8;
  vbittype Heading_angle_Parameter_C1_0x77B_1 : 8;
  vbittype View_range_0x77B_0 : 8;
  vbittype View_range_0x77B_1 : 7;
  vbittype View_range_availability_0x77B : 1;
} _c_Next_lane_Right_P_msgType;
typedef struct _c_Next_lane_Right_O_msgTypeTag
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
} _c_Next_lane_Right_O_msgType;
typedef struct _c_Next_lane_Left_N_msgTypeTag
{
  vbittype Heading_angle_Parameter_C1_0x779_0 : 8;
  vbittype Heading_angle_Parameter_C1_0x779_1 : 8;
  vbittype View_range_0x779_0 : 8;
  vbittype View_range_0x779_1 : 7;
  vbittype View_range_availability_0x779 : 1;
} _c_Next_lane_Left_N_msgType;
typedef struct _c_Next_lane_Left_M_msgTypeTag
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
} _c_Next_lane_Left_M_msgType;
typedef struct _c_Next_lane_Left_J_msgTypeTag
{
  vbittype Heading_angle_Parameter_C1_0x775_0 : 8;
  vbittype Heading_angle_Parameter_C1_0x775_1 : 8;
  vbittype View_range_0x775_0 : 8;
  vbittype View_range_0x775_1 : 7;
  vbittype View_range_availability_0x775 : 1;
} _c_Next_lane_Left_J_msgType;
typedef struct _c_Next_lane_Left_I_msgTypeTag
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
} _c_Next_lane_Left_I_msgType;
typedef struct _c_Next_lane_Right_L_msgTypeTag
{
  vbittype Heading_angle_Parameter_C1_0x777_0 : 8;
  vbittype Heading_angle_Parameter_C1_0x777_1 : 8;
  vbittype View_range_0x777_0 : 8;
  vbittype View_range_0x777_1 : 7;
  vbittype View_range_availability_0x777 : 1;
} _c_Next_lane_Right_L_msgType;
typedef struct _c_Next_lane_Right_K_msgTypeTag
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
} _c_Next_lane_Right_K_msgType;
typedef struct _c_Next_lane_Right_H_msgTypeTag
{
  vbittype Heading_angle_Parameter_C1_0x773_0 : 8;
  vbittype Heading_angle_Parameter_C1_0x773_1 : 8;
  vbittype View_range_0x773_0 : 8;
  vbittype View_range_0x773_1 : 7;
  vbittype View_range_availability_0x773 : 1;
} _c_Next_lane_Right_H_msgType;
typedef struct _c_Next_lane_Right_G_msgTypeTag
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
} _c_Next_lane_Right_G_msgType;
typedef struct _c_Next_lane_Left_F_msgTypeTag
{
  vbittype Heading_angle_Parameter_C1_0x771_0 : 8;
  vbittype Heading_angle_Parameter_C1_0x771_1 : 8;
  vbittype View_range_0x771_0 : 8;
  vbittype View_range_0x771_1 : 7;
  vbittype View_range_availability_0x771 : 1;
} _c_Next_lane_Left_F_msgType;
typedef struct _c_Next_lane_Left_E_msgTypeTag
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
} _c_Next_lane_Left_E_msgType;
typedef struct _c_Next_lane_Right_D_msgTypeTag
{
  vbittype Heading_angle_Parameter_C1_0x76F_0 : 8;
  vbittype Heading_angle_Parameter_C1_0x76F_1 : 8;
  vbittype View_range_0x76F_0 : 8;
  vbittype View_range_0x76F_1 : 7;
  vbittype View_range_availability_0x76F : 1;
} _c_Next_lane_Right_D_msgType;
typedef struct _c_Next_lane_Right_C_msgTypeTag
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
} _c_Next_lane_Right_C_msgType;
typedef struct _c_Obstacle_Data_X_msgTypeTag
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
} _c_Obstacle_Data_X_msgType;
typedef struct _c_Obstacle_Data_U_msgTypeTag
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
} _c_Obstacle_Data_U_msgType;
typedef struct _c_Obstacle_Data_R_msgTypeTag
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
} _c_Obstacle_Data_R_msgType;
typedef struct _c_Obstacle_Data_O_msgTypeTag
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
} _c_Obstacle_Data_O_msgType;
typedef struct _c_Obstacle_Data_L_msgTypeTag
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
} _c_Obstacle_Data_L_msgType;
typedef struct _c_Obstacle_Data_I_msgTypeTag
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
} _c_Obstacle_Data_I_msgType;
typedef struct _c_Obstacle_Data_F_msgTypeTag
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
} _c_Obstacle_Data_F_msgType;
typedef struct _c_Obstacle_Data_W_msgTypeTag
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
} _c_Obstacle_Data_W_msgType;
typedef struct _c_Obstacle_Data_T_msgTypeTag
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
} _c_Obstacle_Data_T_msgType;
typedef struct _c_Obstacle_Data_Q_msgTypeTag
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
} _c_Obstacle_Data_Q_msgType;
typedef struct _c_Obstacle_Data_N_msgTypeTag
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
} _c_Obstacle_Data_N_msgType;
typedef struct _c_Obstacle_Data_K_msgTypeTag
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
} _c_Obstacle_Data_K_msgType;
typedef struct _c_Obstacle_Data_H_msgTypeTag
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
} _c_Obstacle_Data_H_msgType;
typedef struct _c_Obstacle_Data_E_msgTypeTag
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
} _c_Obstacle_Data_E_msgType;
typedef struct _c_Obstacle_Data_V_msgTypeTag
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
} _c_Obstacle_Data_V_msgType;
typedef struct _c_Obstacle_Data_S_msgTypeTag
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
} _c_Obstacle_Data_S_msgType;
typedef struct _c_Obstacle_Data_P_msgTypeTag
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
} _c_Obstacle_Data_P_msgType;
typedef struct _c_Obstacle_Data_M_msgTypeTag
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
} _c_Obstacle_Data_M_msgType;
typedef struct _c_Obstacle_Data_J_msgTypeTag
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
} _c_Obstacle_Data_J_msgType;
typedef struct _c_Obstacle_Data_G_msgTypeTag
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
} _c_Obstacle_Data_G_msgType;
typedef struct _c_Obstacle_Data_D_msgTypeTag
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
} _c_Obstacle_Data_D_msgType;
typedef struct _c_TSR_message_G_msgTypeTag
{
  vbittype Vision_only_Sign_Type_0x726 : 8;
  vbittype Supplementary_Sign_Type_0x726 : 8;
  vbittype Sign_Position_X_0x726 : 8;
  vbittype Sign_Position_Y_0x726 : 8;
  vbittype Sign_Position_Z_0x726 : 8;
  vbittype Filter_Type_0x726 : 8;
} _c_TSR_message_G_msgType;
typedef struct _c_TSR_message_F_msgTypeTag
{
  vbittype Vision_only_Sign_Type_0x725 : 8;
  vbittype Supplementary_Sign_Type_0x725 : 8;
  vbittype Sign_Position_X_0x725 : 8;
  vbittype Sign_Position_Y_0x725 : 8;
  vbittype Sign_Position_Z_0x725 : 8;
  vbittype Filter_Type_0x725 : 8;
} _c_TSR_message_F_msgType;
typedef struct _c_TSR_message_E_msgTypeTag
{
  vbittype Vision_only_Sign_Type_0x724 : 8;
  vbittype Supplementary_Sign_Type_0x724 : 8;
  vbittype Sign_Position_X_0x724 : 8;
  vbittype Sign_Position_Y_0x724 : 8;
  vbittype Sign_Position_Z_0x724 : 8;
  vbittype Filter_Type_0x724 : 8;
} _c_TSR_message_E_msgType;
typedef struct _c_TSR_message_D_msgTypeTag
{
  vbittype Vision_only_Sign_Type_0x723 : 8;
  vbittype Supplementary_Sign_Type_0x723 : 8;
  vbittype Sign_Position_X_0x723 : 8;
  vbittype Sign_Position_Y_0x723 : 8;
  vbittype Sign_Position_Z_0x723 : 8;
  vbittype Filter_Type_0x723 : 8;
} _c_TSR_message_D_msgType;
typedef struct _c_TSR_message_C_msgTypeTag
{
  vbittype Vision_only_Sign_Type_0x722 : 8;
  vbittype Supplementary_Sign_Type_0x722 : 8;
  vbittype Sign_Position_X_0x722 : 8;
  vbittype Sign_Position_Y_0x722 : 8;
  vbittype Sign_Position_Z_0x722 : 8;
  vbittype Filter_Type_0x722 : 8;
} _c_TSR_message_C_msgType;
typedef struct _c_TSR_message_B_msgTypeTag
{
  vbittype Vision_only_Sign_Type_0x721 : 8;
  vbittype Supplementary_Sign_Type_0x721 : 8;
  vbittype Sign_Position_X_0x721 : 8;
  vbittype Sign_Position_Y_0x721 : 8;
  vbittype Sign_Position_Z_0x721 : 8;
  vbittype Filter_Type_0x721 : 8;
} _c_TSR_message_B_msgType;
typedef struct _c_Reference_points_msgTypeTag
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
} _c_Reference_points_msgType;
typedef struct _c_Numebr_of_next_lane_msgTypeTag
{
  vbittype Number_lane_markers_reported0x76B : 8;
} _c_Numebr_of_next_lane_msgType;
typedef struct _c_Next_lane_Left_B_msgTypeTag
{
  vbittype Heading_angle_Parameter_C1_0x76D_0 : 8;
  vbittype Heading_angle_Parameter_C1_0x76D_1 : 8;
  vbittype View_range_0x76D_0 : 8;
  vbittype View_range_0x76D_1 : 7;
  vbittype View_range_availability_0x76D : 1;
} _c_Next_lane_Left_B_msgType;
typedef struct _c_Next_lane_Left_A_msgTypeTag
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
} _c_Next_lane_Left_A_msgType;
typedef struct _c_LKA_right_lane_B_msgTypeTag
{
  vbittype Heading_angle_Parameter_C1_0x769_0 : 8;
  vbittype Heading_angle_Parameter_C1_0x769_1 : 8;
  vbittype View_range_0x769_0 : 8;
  vbittype View_range_0x769_1 : 7;
  vbittype View_range_availability_0x769 : 1;
} _c_LKA_right_lane_B_msgType;
typedef struct _c_LKA_right_lane_A_msgTypeTag
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
} _c_LKA_right_lane_A_msgType;
typedef struct _c_LKA_left_lane_B_msgTypeTag
{
  vbittype Heading_angle_Parameter_C1_0x767_0 : 8;
  vbittype Heading_angle_Parameter_C1_0x767_1 : 8;
  vbittype View_range_0x767_0 : 8;
  vbittype View_range_0x767_1 : 7;
  vbittype View_range_availability_0x767 : 1;
} _c_LKA_left_lane_B_msgType;
typedef struct _c_LKA_left_lane_A_msgTypeTag
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
} _c_LKA_left_lane_A_msgType;
typedef struct _c_Obstacle_Data_C_msgTypeTag
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
} _c_Obstacle_Data_C_msgType;
typedef struct _c_Obstacle_Data_B_msgTypeTag
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
} _c_Obstacle_Data_B_msgType;
typedef struct _c_Obstacle_Data_A_msgTypeTag
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
} _c_Obstacle_Data_A_msgType;
typedef struct _c_Obstacle_Status_msgTypeTag
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
} _c_Obstacle_Status_msgType;
typedef struct _c_Lane_msgTypeTag
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
} _c_Lane_msgType;
typedef struct _c_AHBC_high_low_beam_msgTypeTag
{
  vbittype Binary_high_low_beam_decision_0x728 : 2;
  vbittype unused0 : 6;
  vbittype Reasons_for_switch_to_low_beam_0x728_0 : 8;
  vbittype Reasons_for_switch_to_low_beam_0x728_1 : 1;
  vbittype unused1 : 7;
} _c_AHBC_high_low_beam_msgType;
typedef struct _c_TSR_message_A_msgTypeTag
{
  vbittype Vision_only_Sign_Type_0x720 : 8;
  vbittype Supplementary_Sign_Type_0x720 : 8;
  vbittype Sign_Position_X_0x720 : 8;
  vbittype Sign_Position_Y_0x720 : 8;
  vbittype Sign_Position_Z_0x720 : 8;
  vbittype Filter_Type_0x720 : 8;
} _c_TSR_message_A_msgType;
typedef struct _c_Sign_Type_msgTypeTag
{
  vbittype Vision_only_Sign_Type_Display1_0x727 : 8;
  vbittype Supplementary_Sign_Type_Display1_0x727 : 8;
  vbittype Vision_only_Sign_Type_Display2_0x727 : 8;
  vbittype Supplementary_Sign_Type_Display2_0x727 : 8;
  vbittype Vision_only_Sign_Type_Display3_0x727 : 8;
  vbittype Supplementary_Sign_Type_Display3_0x727 : 8;
  vbittype Vision_only_Sign_Type_Display4_0x727 : 8;
  vbittype Supplementary_Sign_Type_Display4_0x727 : 8;
} _c_Sign_Type_msgType;
typedef struct _c_Fixed_FOE_msgTypeTag
{
  vbittype Fixed_Yaw_0x650_0 : 8;
  vbittype Fixed_Yaw_0x650_1 : 8;
  vbittype Fixed_Yaw_0x650_2 : 8;
  vbittype Fixed_Yaw_0x650_3 : 8;
  vbittype Fixed_Horizon_0x650_0 : 8;
  vbittype Fixed_Horizon_0x650_1 : 8;
  vbittype Fixed_Horizon_0x650_2 : 8;
  vbittype Fixed_Horizon_0x650_3 : 8;
} _c_Fixed_FOE_msgType;
typedef struct _c_C2_Display_and_warning_msgTypeTag
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
} _c_C2_Display_and_warning_msgType;
typedef struct _c_AHBC_Gradual_msgTypeTag
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
} _c_AHBC_Gradual_msgType;
typedef struct _c_ESR_Status9_msgTypeTag
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
} _c_ESR_Status9_msgType;
typedef struct _c_ESR_Status8_msgTypeTag
{
  vbittype CAN_TX_HISTORY_FAULT_0 : 8;
  vbittype CAN_TX_HISTORY_FAULT_1 : 8;
  vbittype CAN_TX_HISTORY_FAULT_2 : 8;
  vbittype CAN_TX_HISTORY_FAULT_3 : 8;
  vbittype CAN_TX_HISTORY_FAULT_4 : 8;
  vbittype CAN_TX_HISTORY_FAULT_5 : 8;
  vbittype CAN_TX_HISTORY_FAULT_6 : 8;
  vbittype CAN_TX_HISTORY_FAULT_7 : 8;
} _c_ESR_Status8_msgType;
typedef struct _c_ESR_Status7_msgTypeTag
{
  vbittype CAN_TX_ACTIVE_FAULT_0 : 8;
  vbittype CAN_TX_ACTIVE_FAULT_1 : 8;
  vbittype CAN_TX_ACTIVE_FAULT_2 : 8;
  vbittype CAN_TX_ACTIVE_FAULT_3 : 8;
  vbittype CAN_TX_ACTIVE_FAULT_4 : 8;
  vbittype CAN_TX_ACTIVE_FAULT_5 : 8;
  vbittype CAN_TX_ACTIVE_FAULT_6 : 8;
  vbittype CAN_TX_ACTIVE_FAULT_7 : 8;
} _c_ESR_Status7_msgType;
typedef struct _c_ESR_Status6_msgTypeTag
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
} _c_ESR_Status6_msgType;
typedef struct _c_ESR_Status5_msgTypeTag
{
  vbittype CAN_TX_SWBATT_A2D : 8;
  vbittype CAN_TX_IGNP_A2D : 8;
  vbittype CAN_TX_TEMP1_A2D : 8;
  vbittype CAN_TX_TEMP2_A2D : 8;
  vbittype CAN_TX_SUPPLY_5VA_A2D : 8;
  vbittype CAN_TX_SUPPLY_5VDX_A2D : 8;
  vbittype CAN_TX_SUPPLY_3P3V_A2D : 8;
  vbittype CAN_TX_SUPPLY_10V_A2D : 8;
} _c_ESR_Status5_msgType;
typedef struct _c_ESR_Track64_msgTypeTag
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
} _c_ESR_Track64_msgType;
typedef struct _c_ESR_Track63_msgTypeTag
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
} _c_ESR_Track63_msgType;
typedef struct _c_ESR_Track62_msgTypeTag
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
} _c_ESR_Track62_msgType;
typedef struct _c_ESR_Track61_msgTypeTag
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
} _c_ESR_Track61_msgType;
typedef struct _c_ESR_Track60_msgTypeTag
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
} _c_ESR_Track60_msgType;
typedef struct _c_ESR_Track59_msgTypeTag
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
} _c_ESR_Track59_msgType;
typedef struct _c_ESR_Track58_msgTypeTag
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
} _c_ESR_Track58_msgType;
typedef struct _c_ESR_Track57_msgTypeTag
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
} _c_ESR_Track57_msgType;
typedef struct _c_ESR_Track56_msgTypeTag
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
} _c_ESR_Track56_msgType;
typedef struct _c_ESR_Track55_msgTypeTag
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
} _c_ESR_Track55_msgType;
typedef struct _c_ESR_Track54_msgTypeTag
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
} _c_ESR_Track54_msgType;
typedef struct _c_ESR_Track53_msgTypeTag
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
} _c_ESR_Track53_msgType;
typedef struct _c_ESR_Track52_msgTypeTag
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
} _c_ESR_Track52_msgType;
typedef struct _c_ESR_Track51_msgTypeTag
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
} _c_ESR_Track51_msgType;
typedef struct _c_ESR_Track50_msgTypeTag
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
} _c_ESR_Track50_msgType;
typedef struct _c_ESR_Track49_msgTypeTag
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
} _c_ESR_Track49_msgType;
typedef struct _c_ESR_Track48_msgTypeTag
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
} _c_ESR_Track48_msgType;
typedef struct _c_ESR_Track47_msgTypeTag
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
} _c_ESR_Track47_msgType;
typedef struct _c_ESR_Track46_msgTypeTag
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
} _c_ESR_Track46_msgType;
typedef struct _c_ESR_Track45_msgTypeTag
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
} _c_ESR_Track45_msgType;
typedef struct _c_ESR_Track44_msgTypeTag
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
} _c_ESR_Track44_msgType;
typedef struct _c_ESR_Track43_msgTypeTag
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
} _c_ESR_Track43_msgType;
typedef struct _c_ESR_Track42_msgTypeTag
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
} _c_ESR_Track42_msgType;
typedef struct _c_ESR_Track41_msgTypeTag
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
} _c_ESR_Track41_msgType;
typedef struct _c_ESR_Track40_msgTypeTag
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
} _c_ESR_Track40_msgType;
typedef struct _c_ESR_Track39_msgTypeTag
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
} _c_ESR_Track39_msgType;
typedef struct _c_ESR_Track38_msgTypeTag
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
} _c_ESR_Track38_msgType;
typedef struct _c_ESR_Track37_msgTypeTag
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
} _c_ESR_Track37_msgType;
typedef struct _c_ESR_Track36_msgTypeTag
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
} _c_ESR_Track36_msgType;
typedef struct _c_ESR_Track35_msgTypeTag
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
} _c_ESR_Track35_msgType;
typedef struct _c_ESR_Track34_msgTypeTag
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
} _c_ESR_Track34_msgType;
typedef struct _c_ESR_Track33_msgTypeTag
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
} _c_ESR_Track33_msgType;
typedef struct _c_ESR_Track32_msgTypeTag
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
} _c_ESR_Track32_msgType;
typedef struct _c_ESR_Track31_msgTypeTag
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
} _c_ESR_Track31_msgType;
typedef struct _c_ESR_Track30_msgTypeTag
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
} _c_ESR_Track30_msgType;
typedef struct _c_ESR_Track29_msgTypeTag
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
} _c_ESR_Track29_msgType;
typedef struct _c_ESR_Track28_msgTypeTag
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
} _c_ESR_Track28_msgType;
typedef struct _c_ESR_Track27_msgTypeTag
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
} _c_ESR_Track27_msgType;
typedef struct _c_ESR_Track26_msgTypeTag
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
} _c_ESR_Track26_msgType;
typedef struct _c_ESR_Track25_msgTypeTag
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
} _c_ESR_Track25_msgType;
typedef struct _c_ESR_Track24_msgTypeTag
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
} _c_ESR_Track24_msgType;
typedef struct _c_ESR_Track23_msgTypeTag
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
} _c_ESR_Track23_msgType;
typedef struct _c_ESR_Track22_msgTypeTag
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
} _c_ESR_Track22_msgType;
typedef struct _c_ESR_Track21_msgTypeTag
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
} _c_ESR_Track21_msgType;
typedef struct _c_ESR_Track20_msgTypeTag
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
} _c_ESR_Track20_msgType;
typedef struct _c_ESR_Track19_msgTypeTag
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
} _c_ESR_Track19_msgType;
typedef struct _c_ESR_Track18_msgTypeTag
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
} _c_ESR_Track18_msgType;
typedef struct _c_ESR_Track17_msgTypeTag
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
} _c_ESR_Track17_msgType;
typedef struct _c_ESR_Track16_msgTypeTag
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
} _c_ESR_Track16_msgType;
typedef struct _c_ESR_Track15_msgTypeTag
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
} _c_ESR_Track15_msgType;
typedef struct _c_ESR_Track14_msgTypeTag
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
} _c_ESR_Track14_msgType;
typedef struct _c_ESR_Track13_msgTypeTag
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
} _c_ESR_Track13_msgType;
typedef struct _c_ESR_Track12_msgTypeTag
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
} _c_ESR_Track12_msgType;
typedef struct _c_ESR_Track11_msgTypeTag
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
} _c_ESR_Track11_msgType;
typedef struct _c_ESR_Track10_msgTypeTag
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
} _c_ESR_Track10_msgType;
typedef struct _c_ESR_Track09_msgTypeTag
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
} _c_ESR_Track09_msgType;
typedef struct _c_ESR_Track08_msgTypeTag
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
} _c_ESR_Track08_msgType;
typedef struct _c_ESR_Track07_msgTypeTag
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
} _c_ESR_Track07_msgType;
typedef struct _c_ESR_Track06_msgTypeTag
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
} _c_ESR_Track06_msgType;
typedef struct _c_ESR_Track05_msgTypeTag
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
} _c_ESR_Track05_msgType;
typedef struct _c_ESR_Track04_msgTypeTag
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
} _c_ESR_Track04_msgType;
typedef struct _c_ESR_Track03_msgTypeTag
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
} _c_ESR_Track03_msgType;
typedef struct _c_ESR_Track02_msgTypeTag
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
} _c_ESR_Track02_msgType;
typedef struct _c_ESR_Track01_msgTypeTag
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
} _c_ESR_Track01_msgType;
typedef struct _c_ESR_Status4_msgTypeTag
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
} _c_ESR_Status4_msgType;
typedef struct _c_ESR_Status3_msgTypeTag
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
} _c_ESR_Status3_msgType;
typedef struct _c_ESR_Status2_msgTypeTag
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
} _c_ESR_Status2_msgType;


/* -----------------------------------------------------------------------------
    &&&~ Signal value names
 ----------------------------------------------------------------------------- */



/* -----------------------------------------------------------------------------
    &&&~ Message Unions
 ----------------------------------------------------------------------------- */

typedef union _c_ESR_Status1_bufTag
{
  vuint8 _c[8];
  _c_ESR_Status1_msgType ESR_Status1;
} _c_ESR_Status1_buf;
typedef union _c_Car_Info_bufTag
{
  vuint8 _c[8];
  _c_Car_Info_msgType Car_Info;
} _c_Car_Info_buf;
typedef union _c_Detils_Lane_bufTag
{
  vuint8 _c[8];
  _c_Detils_Lane_msgType Detils_Lane;
} _c_Detils_Lane_buf;
typedef union _c_Next_lane_Right_P_bufTag
{
  vuint8 _c[4];
  _c_Next_lane_Right_P_msgType Next_lane_Right_P;
} _c_Next_lane_Right_P_buf;
typedef union _c_Next_lane_Right_O_bufTag
{
  vuint8 _c[8];
  _c_Next_lane_Right_O_msgType Next_lane_Right_O;
} _c_Next_lane_Right_O_buf;
typedef union _c_Next_lane_Left_N_bufTag
{
  vuint8 _c[4];
  _c_Next_lane_Left_N_msgType Next_lane_Left_N;
} _c_Next_lane_Left_N_buf;
typedef union _c_Next_lane_Left_M_bufTag
{
  vuint8 _c[8];
  _c_Next_lane_Left_M_msgType Next_lane_Left_M;
} _c_Next_lane_Left_M_buf;
typedef union _c_Next_lane_Left_J_bufTag
{
  vuint8 _c[4];
  _c_Next_lane_Left_J_msgType Next_lane_Left_J;
} _c_Next_lane_Left_J_buf;
typedef union _c_Next_lane_Left_I_bufTag
{
  vuint8 _c[8];
  _c_Next_lane_Left_I_msgType Next_lane_Left_I;
} _c_Next_lane_Left_I_buf;
typedef union _c_Next_lane_Right_L_bufTag
{
  vuint8 _c[4];
  _c_Next_lane_Right_L_msgType Next_lane_Right_L;
} _c_Next_lane_Right_L_buf;
typedef union _c_Next_lane_Right_K_bufTag
{
  vuint8 _c[8];
  _c_Next_lane_Right_K_msgType Next_lane_Right_K;
} _c_Next_lane_Right_K_buf;
typedef union _c_Next_lane_Right_H_bufTag
{
  vuint8 _c[4];
  _c_Next_lane_Right_H_msgType Next_lane_Right_H;
} _c_Next_lane_Right_H_buf;
typedef union _c_Next_lane_Right_G_bufTag
{
  vuint8 _c[8];
  _c_Next_lane_Right_G_msgType Next_lane_Right_G;
} _c_Next_lane_Right_G_buf;
typedef union _c_Next_lane_Left_F_bufTag
{
  vuint8 _c[4];
  _c_Next_lane_Left_F_msgType Next_lane_Left_F;
} _c_Next_lane_Left_F_buf;
typedef union _c_Next_lane_Left_E_bufTag
{
  vuint8 _c[8];
  _c_Next_lane_Left_E_msgType Next_lane_Left_E;
} _c_Next_lane_Left_E_buf;
typedef union _c_Next_lane_Right_D_bufTag
{
  vuint8 _c[4];
  _c_Next_lane_Right_D_msgType Next_lane_Right_D;
} _c_Next_lane_Right_D_buf;
typedef union _c_Next_lane_Right_C_bufTag
{
  vuint8 _c[8];
  _c_Next_lane_Right_C_msgType Next_lane_Right_C;
} _c_Next_lane_Right_C_buf;
typedef union _c_Obstacle_Data_X_bufTag
{
  vuint8 _c[8];
  _c_Obstacle_Data_X_msgType Obstacle_Data_X;
} _c_Obstacle_Data_X_buf;
typedef union _c_Obstacle_Data_U_bufTag
{
  vuint8 _c[8];
  _c_Obstacle_Data_U_msgType Obstacle_Data_U;
} _c_Obstacle_Data_U_buf;
typedef union _c_Obstacle_Data_R_bufTag
{
  vuint8 _c[8];
  _c_Obstacle_Data_R_msgType Obstacle_Data_R;
} _c_Obstacle_Data_R_buf;
typedef union _c_Obstacle_Data_O_bufTag
{
  vuint8 _c[8];
  _c_Obstacle_Data_O_msgType Obstacle_Data_O;
} _c_Obstacle_Data_O_buf;
typedef union _c_Obstacle_Data_L_bufTag
{
  vuint8 _c[8];
  _c_Obstacle_Data_L_msgType Obstacle_Data_L;
} _c_Obstacle_Data_L_buf;
typedef union _c_Obstacle_Data_I_bufTag
{
  vuint8 _c[8];
  _c_Obstacle_Data_I_msgType Obstacle_Data_I;
} _c_Obstacle_Data_I_buf;
typedef union _c_Obstacle_Data_F_bufTag
{
  vuint8 _c[8];
  _c_Obstacle_Data_F_msgType Obstacle_Data_F;
} _c_Obstacle_Data_F_buf;
typedef union _c_Obstacle_Data_W_bufTag
{
  vuint8 _c[8];
  _c_Obstacle_Data_W_msgType Obstacle_Data_W;
} _c_Obstacle_Data_W_buf;
typedef union _c_Obstacle_Data_T_bufTag
{
  vuint8 _c[8];
  _c_Obstacle_Data_T_msgType Obstacle_Data_T;
} _c_Obstacle_Data_T_buf;
typedef union _c_Obstacle_Data_Q_bufTag
{
  vuint8 _c[8];
  _c_Obstacle_Data_Q_msgType Obstacle_Data_Q;
} _c_Obstacle_Data_Q_buf;
typedef union _c_Obstacle_Data_N_bufTag
{
  vuint8 _c[8];
  _c_Obstacle_Data_N_msgType Obstacle_Data_N;
} _c_Obstacle_Data_N_buf;
typedef union _c_Obstacle_Data_K_bufTag
{
  vuint8 _c[8];
  _c_Obstacle_Data_K_msgType Obstacle_Data_K;
} _c_Obstacle_Data_K_buf;
typedef union _c_Obstacle_Data_H_bufTag
{
  vuint8 _c[8];
  _c_Obstacle_Data_H_msgType Obstacle_Data_H;
} _c_Obstacle_Data_H_buf;
typedef union _c_Obstacle_Data_E_bufTag
{
  vuint8 _c[8];
  _c_Obstacle_Data_E_msgType Obstacle_Data_E;
} _c_Obstacle_Data_E_buf;
typedef union _c_Obstacle_Data_V_bufTag
{
  vuint8 _c[8];
  _c_Obstacle_Data_V_msgType Obstacle_Data_V;
} _c_Obstacle_Data_V_buf;
typedef union _c_Obstacle_Data_S_bufTag
{
  vuint8 _c[8];
  _c_Obstacle_Data_S_msgType Obstacle_Data_S;
} _c_Obstacle_Data_S_buf;
typedef union _c_Obstacle_Data_P_bufTag
{
  vuint8 _c[8];
  _c_Obstacle_Data_P_msgType Obstacle_Data_P;
} _c_Obstacle_Data_P_buf;
typedef union _c_Obstacle_Data_M_bufTag
{
  vuint8 _c[8];
  _c_Obstacle_Data_M_msgType Obstacle_Data_M;
} _c_Obstacle_Data_M_buf;
typedef union _c_Obstacle_Data_J_bufTag
{
  vuint8 _c[8];
  _c_Obstacle_Data_J_msgType Obstacle_Data_J;
} _c_Obstacle_Data_J_buf;
typedef union _c_Obstacle_Data_G_bufTag
{
  vuint8 _c[8];
  _c_Obstacle_Data_G_msgType Obstacle_Data_G;
} _c_Obstacle_Data_G_buf;
typedef union _c_Obstacle_Data_D_bufTag
{
  vuint8 _c[8];
  _c_Obstacle_Data_D_msgType Obstacle_Data_D;
} _c_Obstacle_Data_D_buf;
typedef union _c_TSR_message_G_bufTag
{
  vuint8 _c[6];
  _c_TSR_message_G_msgType TSR_message_G;
} _c_TSR_message_G_buf;
typedef union _c_TSR_message_F_bufTag
{
  vuint8 _c[6];
  _c_TSR_message_F_msgType TSR_message_F;
} _c_TSR_message_F_buf;
typedef union _c_TSR_message_E_bufTag
{
  vuint8 _c[6];
  _c_TSR_message_E_msgType TSR_message_E;
} _c_TSR_message_E_buf;
typedef union _c_TSR_message_D_bufTag
{
  vuint8 _c[6];
  _c_TSR_message_D_msgType TSR_message_D;
} _c_TSR_message_D_buf;
typedef union _c_TSR_message_C_bufTag
{
  vuint8 _c[6];
  _c_TSR_message_C_msgType TSR_message_C;
} _c_TSR_message_C_buf;
typedef union _c_TSR_message_B_bufTag
{
  vuint8 _c[6];
  _c_TSR_message_B_msgType TSR_message_B;
} _c_TSR_message_B_buf;
typedef union _c_Reference_points_bufTag
{
  vuint8 _c[8];
  _c_Reference_points_msgType Reference_points;
} _c_Reference_points_buf;
typedef union _c_Numebr_of_next_lane_bufTag
{
  vuint8 _c[1];
  _c_Numebr_of_next_lane_msgType Numebr_of_next_lane;
} _c_Numebr_of_next_lane_buf;
typedef union _c_Next_lane_Left_B_bufTag
{
  vuint8 _c[4];
  _c_Next_lane_Left_B_msgType Next_lane_Left_B;
} _c_Next_lane_Left_B_buf;
typedef union _c_Next_lane_Left_A_bufTag
{
  vuint8 _c[8];
  _c_Next_lane_Left_A_msgType Next_lane_Left_A;
} _c_Next_lane_Left_A_buf;
typedef union _c_LKA_right_lane_B_bufTag
{
  vuint8 _c[4];
  _c_LKA_right_lane_B_msgType LKA_right_lane_B;
} _c_LKA_right_lane_B_buf;
typedef union _c_LKA_right_lane_A_bufTag
{
  vuint8 _c[8];
  _c_LKA_right_lane_A_msgType LKA_right_lane_A;
} _c_LKA_right_lane_A_buf;
typedef union _c_LKA_left_lane_B_bufTag
{
  vuint8 _c[4];
  _c_LKA_left_lane_B_msgType LKA_left_lane_B;
} _c_LKA_left_lane_B_buf;
typedef union _c_LKA_left_lane_A_bufTag
{
  vuint8 _c[8];
  _c_LKA_left_lane_A_msgType LKA_left_lane_A;
} _c_LKA_left_lane_A_buf;
typedef union _c_Obstacle_Data_C_bufTag
{
  vuint8 _c[8];
  _c_Obstacle_Data_C_msgType Obstacle_Data_C;
} _c_Obstacle_Data_C_buf;
typedef union _c_Obstacle_Data_B_bufTag
{
  vuint8 _c[8];
  _c_Obstacle_Data_B_msgType Obstacle_Data_B;
} _c_Obstacle_Data_B_buf;
typedef union _c_Obstacle_Data_A_bufTag
{
  vuint8 _c[8];
  _c_Obstacle_Data_A_msgType Obstacle_Data_A;
} _c_Obstacle_Data_A_buf;
typedef union _c_Obstacle_Status_bufTag
{
  vuint8 _c[6];
  _c_Obstacle_Status_msgType Obstacle_Status;
} _c_Obstacle_Status_buf;
typedef union _c_Lane_bufTag
{
  vuint8 _c[8];
  _c_Lane_msgType Lane;
} _c_Lane_buf;
typedef union _c_AHBC_high_low_beam_bufTag
{
  vuint8 _c[3];
  _c_AHBC_high_low_beam_msgType AHBC_high_low_beam;
} _c_AHBC_high_low_beam_buf;
typedef union _c_TSR_message_A_bufTag
{
  vuint8 _c[6];
  _c_TSR_message_A_msgType TSR_message_A;
} _c_TSR_message_A_buf;
typedef union _c_Sign_Type_bufTag
{
  vuint8 _c[8];
  _c_Sign_Type_msgType Sign_Type;
} _c_Sign_Type_buf;
typedef union _c_Fixed_FOE_bufTag
{
  vuint8 _c[8];
  _c_Fixed_FOE_msgType Fixed_FOE;
} _c_Fixed_FOE_buf;
typedef union _c_C2_Display_and_warning_bufTag
{
  vuint8 _c[8];
  _c_C2_Display_and_warning_msgType C2_Display_and_warning;
} _c_C2_Display_and_warning_buf;
typedef union _c_AHBC_Gradual_bufTag
{
  vuint8 _c[7];
  _c_AHBC_Gradual_msgType AHBC_Gradual;
} _c_AHBC_Gradual_buf;
typedef union _c_ESR_Status9_bufTag
{
  vuint8 _c[8];
  _c_ESR_Status9_msgType ESR_Status9;
} _c_ESR_Status9_buf;
typedef union _c_ESR_Status8_bufTag
{
  vuint8 _c[8];
  _c_ESR_Status8_msgType ESR_Status8;
} _c_ESR_Status8_buf;
typedef union _c_ESR_Status7_bufTag
{
  vuint8 _c[8];
  _c_ESR_Status7_msgType ESR_Status7;
} _c_ESR_Status7_buf;
typedef union _c_ESR_Status6_bufTag
{
  vuint8 _c[8];
  _c_ESR_Status6_msgType ESR_Status6;
} _c_ESR_Status6_buf;
typedef union _c_ESR_Status5_bufTag
{
  vuint8 _c[8];
  _c_ESR_Status5_msgType ESR_Status5;
} _c_ESR_Status5_buf;
typedef union _c_ESR_Track64_bufTag
{
  vuint8 _c[8];
  _c_ESR_Track64_msgType ESR_Track64;
} _c_ESR_Track64_buf;
typedef union _c_ESR_Track63_bufTag
{
  vuint8 _c[8];
  _c_ESR_Track63_msgType ESR_Track63;
} _c_ESR_Track63_buf;
typedef union _c_ESR_Track62_bufTag
{
  vuint8 _c[8];
  _c_ESR_Track62_msgType ESR_Track62;
} _c_ESR_Track62_buf;
typedef union _c_ESR_Track61_bufTag
{
  vuint8 _c[8];
  _c_ESR_Track61_msgType ESR_Track61;
} _c_ESR_Track61_buf;
typedef union _c_ESR_Track60_bufTag
{
  vuint8 _c[8];
  _c_ESR_Track60_msgType ESR_Track60;
} _c_ESR_Track60_buf;
typedef union _c_ESR_Track59_bufTag
{
  vuint8 _c[8];
  _c_ESR_Track59_msgType ESR_Track59;
} _c_ESR_Track59_buf;
typedef union _c_ESR_Track58_bufTag
{
  vuint8 _c[8];
  _c_ESR_Track58_msgType ESR_Track58;
} _c_ESR_Track58_buf;
typedef union _c_ESR_Track57_bufTag
{
  vuint8 _c[8];
  _c_ESR_Track57_msgType ESR_Track57;
} _c_ESR_Track57_buf;
typedef union _c_ESR_Track56_bufTag
{
  vuint8 _c[8];
  _c_ESR_Track56_msgType ESR_Track56;
} _c_ESR_Track56_buf;
typedef union _c_ESR_Track55_bufTag
{
  vuint8 _c[8];
  _c_ESR_Track55_msgType ESR_Track55;
} _c_ESR_Track55_buf;
typedef union _c_ESR_Track54_bufTag
{
  vuint8 _c[8];
  _c_ESR_Track54_msgType ESR_Track54;
} _c_ESR_Track54_buf;
typedef union _c_ESR_Track53_bufTag
{
  vuint8 _c[8];
  _c_ESR_Track53_msgType ESR_Track53;
} _c_ESR_Track53_buf;
typedef union _c_ESR_Track52_bufTag
{
  vuint8 _c[8];
  _c_ESR_Track52_msgType ESR_Track52;
} _c_ESR_Track52_buf;
typedef union _c_ESR_Track51_bufTag
{
  vuint8 _c[8];
  _c_ESR_Track51_msgType ESR_Track51;
} _c_ESR_Track51_buf;
typedef union _c_ESR_Track50_bufTag
{
  vuint8 _c[8];
  _c_ESR_Track50_msgType ESR_Track50;
} _c_ESR_Track50_buf;
typedef union _c_ESR_Track49_bufTag
{
  vuint8 _c[8];
  _c_ESR_Track49_msgType ESR_Track49;
} _c_ESR_Track49_buf;
typedef union _c_ESR_Track48_bufTag
{
  vuint8 _c[8];
  _c_ESR_Track48_msgType ESR_Track48;
} _c_ESR_Track48_buf;
typedef union _c_ESR_Track47_bufTag
{
  vuint8 _c[8];
  _c_ESR_Track47_msgType ESR_Track47;
} _c_ESR_Track47_buf;
typedef union _c_ESR_Track46_bufTag
{
  vuint8 _c[8];
  _c_ESR_Track46_msgType ESR_Track46;
} _c_ESR_Track46_buf;
typedef union _c_ESR_Track45_bufTag
{
  vuint8 _c[8];
  _c_ESR_Track45_msgType ESR_Track45;
} _c_ESR_Track45_buf;
typedef union _c_ESR_Track44_bufTag
{
  vuint8 _c[8];
  _c_ESR_Track44_msgType ESR_Track44;
} _c_ESR_Track44_buf;
typedef union _c_ESR_Track43_bufTag
{
  vuint8 _c[8];
  _c_ESR_Track43_msgType ESR_Track43;
} _c_ESR_Track43_buf;
typedef union _c_ESR_Track42_bufTag
{
  vuint8 _c[8];
  _c_ESR_Track42_msgType ESR_Track42;
} _c_ESR_Track42_buf;
typedef union _c_ESR_Track41_bufTag
{
  vuint8 _c[8];
  _c_ESR_Track41_msgType ESR_Track41;
} _c_ESR_Track41_buf;
typedef union _c_ESR_Track40_bufTag
{
  vuint8 _c[8];
  _c_ESR_Track40_msgType ESR_Track40;
} _c_ESR_Track40_buf;
typedef union _c_ESR_Track39_bufTag
{
  vuint8 _c[8];
  _c_ESR_Track39_msgType ESR_Track39;
} _c_ESR_Track39_buf;
typedef union _c_ESR_Track38_bufTag
{
  vuint8 _c[8];
  _c_ESR_Track38_msgType ESR_Track38;
} _c_ESR_Track38_buf;
typedef union _c_ESR_Track37_bufTag
{
  vuint8 _c[8];
  _c_ESR_Track37_msgType ESR_Track37;
} _c_ESR_Track37_buf;
typedef union _c_ESR_Track36_bufTag
{
  vuint8 _c[8];
  _c_ESR_Track36_msgType ESR_Track36;
} _c_ESR_Track36_buf;
typedef union _c_ESR_Track35_bufTag
{
  vuint8 _c[8];
  _c_ESR_Track35_msgType ESR_Track35;
} _c_ESR_Track35_buf;
typedef union _c_ESR_Track34_bufTag
{
  vuint8 _c[8];
  _c_ESR_Track34_msgType ESR_Track34;
} _c_ESR_Track34_buf;
typedef union _c_ESR_Track33_bufTag
{
  vuint8 _c[8];
  _c_ESR_Track33_msgType ESR_Track33;
} _c_ESR_Track33_buf;
typedef union _c_ESR_Track32_bufTag
{
  vuint8 _c[8];
  _c_ESR_Track32_msgType ESR_Track32;
} _c_ESR_Track32_buf;
typedef union _c_ESR_Track31_bufTag
{
  vuint8 _c[8];
  _c_ESR_Track31_msgType ESR_Track31;
} _c_ESR_Track31_buf;
typedef union _c_ESR_Track30_bufTag
{
  vuint8 _c[8];
  _c_ESR_Track30_msgType ESR_Track30;
} _c_ESR_Track30_buf;
typedef union _c_ESR_Track29_bufTag
{
  vuint8 _c[8];
  _c_ESR_Track29_msgType ESR_Track29;
} _c_ESR_Track29_buf;
typedef union _c_ESR_Track28_bufTag
{
  vuint8 _c[8];
  _c_ESR_Track28_msgType ESR_Track28;
} _c_ESR_Track28_buf;
typedef union _c_ESR_Track27_bufTag
{
  vuint8 _c[8];
  _c_ESR_Track27_msgType ESR_Track27;
} _c_ESR_Track27_buf;
typedef union _c_ESR_Track26_bufTag
{
  vuint8 _c[8];
  _c_ESR_Track26_msgType ESR_Track26;
} _c_ESR_Track26_buf;
typedef union _c_ESR_Track25_bufTag
{
  vuint8 _c[8];
  _c_ESR_Track25_msgType ESR_Track25;
} _c_ESR_Track25_buf;
typedef union _c_ESR_Track24_bufTag
{
  vuint8 _c[8];
  _c_ESR_Track24_msgType ESR_Track24;
} _c_ESR_Track24_buf;
typedef union _c_ESR_Track23_bufTag
{
  vuint8 _c[8];
  _c_ESR_Track23_msgType ESR_Track23;
} _c_ESR_Track23_buf;
typedef union _c_ESR_Track22_bufTag
{
  vuint8 _c[8];
  _c_ESR_Track22_msgType ESR_Track22;
} _c_ESR_Track22_buf;
typedef union _c_ESR_Track21_bufTag
{
  vuint8 _c[8];
  _c_ESR_Track21_msgType ESR_Track21;
} _c_ESR_Track21_buf;
typedef union _c_ESR_Track20_bufTag
{
  vuint8 _c[8];
  _c_ESR_Track20_msgType ESR_Track20;
} _c_ESR_Track20_buf;
typedef union _c_ESR_Track19_bufTag
{
  vuint8 _c[8];
  _c_ESR_Track19_msgType ESR_Track19;
} _c_ESR_Track19_buf;
typedef union _c_ESR_Track18_bufTag
{
  vuint8 _c[8];
  _c_ESR_Track18_msgType ESR_Track18;
} _c_ESR_Track18_buf;
typedef union _c_ESR_Track17_bufTag
{
  vuint8 _c[8];
  _c_ESR_Track17_msgType ESR_Track17;
} _c_ESR_Track17_buf;
typedef union _c_ESR_Track16_bufTag
{
  vuint8 _c[8];
  _c_ESR_Track16_msgType ESR_Track16;
} _c_ESR_Track16_buf;
typedef union _c_ESR_Track15_bufTag
{
  vuint8 _c[8];
  _c_ESR_Track15_msgType ESR_Track15;
} _c_ESR_Track15_buf;
typedef union _c_ESR_Track14_bufTag
{
  vuint8 _c[8];
  _c_ESR_Track14_msgType ESR_Track14;
} _c_ESR_Track14_buf;
typedef union _c_ESR_Track13_bufTag
{
  vuint8 _c[8];
  _c_ESR_Track13_msgType ESR_Track13;
} _c_ESR_Track13_buf;
typedef union _c_ESR_Track12_bufTag
{
  vuint8 _c[8];
  _c_ESR_Track12_msgType ESR_Track12;
} _c_ESR_Track12_buf;
typedef union _c_ESR_Track11_bufTag
{
  vuint8 _c[8];
  _c_ESR_Track11_msgType ESR_Track11;
} _c_ESR_Track11_buf;
typedef union _c_ESR_Track10_bufTag
{
  vuint8 _c[8];
  _c_ESR_Track10_msgType ESR_Track10;
} _c_ESR_Track10_buf;
typedef union _c_ESR_Track09_bufTag
{
  vuint8 _c[8];
  _c_ESR_Track09_msgType ESR_Track09;
} _c_ESR_Track09_buf;
typedef union _c_ESR_Track08_bufTag
{
  vuint8 _c[8];
  _c_ESR_Track08_msgType ESR_Track08;
} _c_ESR_Track08_buf;
typedef union _c_ESR_Track07_bufTag
{
  vuint8 _c[8];
  _c_ESR_Track07_msgType ESR_Track07;
} _c_ESR_Track07_buf;
typedef union _c_ESR_Track06_bufTag
{
  vuint8 _c[8];
  _c_ESR_Track06_msgType ESR_Track06;
} _c_ESR_Track06_buf;
typedef union _c_ESR_Track05_bufTag
{
  vuint8 _c[8];
  _c_ESR_Track05_msgType ESR_Track05;
} _c_ESR_Track05_buf;
typedef union _c_ESR_Track04_bufTag
{
  vuint8 _c[8];
  _c_ESR_Track04_msgType ESR_Track04;
} _c_ESR_Track04_buf;
typedef union _c_ESR_Track03_bufTag
{
  vuint8 _c[8];
  _c_ESR_Track03_msgType ESR_Track03;
} _c_ESR_Track03_buf;
typedef union _c_ESR_Track02_bufTag
{
  vuint8 _c[8];
  _c_ESR_Track02_msgType ESR_Track02;
} _c_ESR_Track02_buf;
typedef union _c_ESR_Track01_bufTag
{
  vuint8 _c[8];
  _c_ESR_Track01_msgType ESR_Track01;
} _c_ESR_Track01_buf;
typedef union _c_ESR_Status4_bufTag
{
  vuint8 _c[8];
  _c_ESR_Status4_msgType ESR_Status4;
} _c_ESR_Status4_buf;
typedef union _c_ESR_Status3_bufTag
{
  vuint8 _c[8];
  _c_ESR_Status3_msgType ESR_Status3;
} _c_ESR_Status3_buf;
typedef union _c_ESR_Status2_bufTag
{
  vuint8 _c[8];
  _c_ESR_Status2_msgType ESR_Status2;
} _c_ESR_Status2_buf;


/* -----------------------------------------------------------------------------
    &&&~ Message Buffers
 ----------------------------------------------------------------------------- */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_ESR_Status1_buf V_MEMRAM2 ESR_Status1;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_Car_Info_buf V_MEMRAM2 Car_Info;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_Detils_Lane_buf V_MEMRAM2 Detils_Lane;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_Next_lane_Right_P_buf V_MEMRAM2 Next_lane_Right_P;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_Next_lane_Right_O_buf V_MEMRAM2 Next_lane_Right_O;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_Next_lane_Left_N_buf V_MEMRAM2 Next_lane_Left_N;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_Next_lane_Left_M_buf V_MEMRAM2 Next_lane_Left_M;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_Next_lane_Left_J_buf V_MEMRAM2 Next_lane_Left_J;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_Next_lane_Left_I_buf V_MEMRAM2 Next_lane_Left_I;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_Next_lane_Right_L_buf V_MEMRAM2 Next_lane_Right_L;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_Next_lane_Right_K_buf V_MEMRAM2 Next_lane_Right_K;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_Next_lane_Right_H_buf V_MEMRAM2 Next_lane_Right_H;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_Next_lane_Right_G_buf V_MEMRAM2 Next_lane_Right_G;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_Next_lane_Left_F_buf V_MEMRAM2 Next_lane_Left_F;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_Next_lane_Left_E_buf V_MEMRAM2 Next_lane_Left_E;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_Next_lane_Right_D_buf V_MEMRAM2 Next_lane_Right_D;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_Next_lane_Right_C_buf V_MEMRAM2 Next_lane_Right_C;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_Obstacle_Data_X_buf V_MEMRAM2 Obstacle_Data_X;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_Obstacle_Data_U_buf V_MEMRAM2 Obstacle_Data_U;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_Obstacle_Data_R_buf V_MEMRAM2 Obstacle_Data_R;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_Obstacle_Data_O_buf V_MEMRAM2 Obstacle_Data_O;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_Obstacle_Data_L_buf V_MEMRAM2 Obstacle_Data_L;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_Obstacle_Data_I_buf V_MEMRAM2 Obstacle_Data_I;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_Obstacle_Data_F_buf V_MEMRAM2 Obstacle_Data_F;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_Obstacle_Data_W_buf V_MEMRAM2 Obstacle_Data_W;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_Obstacle_Data_T_buf V_MEMRAM2 Obstacle_Data_T;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_Obstacle_Data_Q_buf V_MEMRAM2 Obstacle_Data_Q;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_Obstacle_Data_N_buf V_MEMRAM2 Obstacle_Data_N;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_Obstacle_Data_K_buf V_MEMRAM2 Obstacle_Data_K;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_Obstacle_Data_H_buf V_MEMRAM2 Obstacle_Data_H;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_Obstacle_Data_E_buf V_MEMRAM2 Obstacle_Data_E;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_Obstacle_Data_V_buf V_MEMRAM2 Obstacle_Data_V;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_Obstacle_Data_S_buf V_MEMRAM2 Obstacle_Data_S;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_Obstacle_Data_P_buf V_MEMRAM2 Obstacle_Data_P;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_Obstacle_Data_M_buf V_MEMRAM2 Obstacle_Data_M;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_Obstacle_Data_J_buf V_MEMRAM2 Obstacle_Data_J;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_Obstacle_Data_G_buf V_MEMRAM2 Obstacle_Data_G;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_Obstacle_Data_D_buf V_MEMRAM2 Obstacle_Data_D;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_TSR_message_G_buf V_MEMRAM2 TSR_message_G;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_TSR_message_F_buf V_MEMRAM2 TSR_message_F;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_TSR_message_E_buf V_MEMRAM2 TSR_message_E;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_TSR_message_D_buf V_MEMRAM2 TSR_message_D;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_TSR_message_C_buf V_MEMRAM2 TSR_message_C;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_TSR_message_B_buf V_MEMRAM2 TSR_message_B;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_Reference_points_buf V_MEMRAM2 Reference_points;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_Numebr_of_next_lane_buf V_MEMRAM2 Numebr_of_next_lane;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_Next_lane_Left_B_buf V_MEMRAM2 Next_lane_Left_B;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_Next_lane_Left_A_buf V_MEMRAM2 Next_lane_Left_A;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_LKA_right_lane_B_buf V_MEMRAM2 LKA_right_lane_B;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_LKA_right_lane_A_buf V_MEMRAM2 LKA_right_lane_A;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_LKA_left_lane_B_buf V_MEMRAM2 LKA_left_lane_B;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_LKA_left_lane_A_buf V_MEMRAM2 LKA_left_lane_A;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_Obstacle_Data_C_buf V_MEMRAM2 Obstacle_Data_C;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_Obstacle_Data_B_buf V_MEMRAM2 Obstacle_Data_B;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_Obstacle_Data_A_buf V_MEMRAM2 Obstacle_Data_A;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_Obstacle_Status_buf V_MEMRAM2 Obstacle_Status;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_Lane_buf V_MEMRAM2 Lane;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_AHBC_high_low_beam_buf V_MEMRAM2 AHBC_high_low_beam;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_TSR_message_A_buf V_MEMRAM2 TSR_message_A;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_Sign_Type_buf V_MEMRAM2 Sign_Type;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_Fixed_FOE_buf V_MEMRAM2 Fixed_FOE;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_C2_Display_and_warning_buf V_MEMRAM2 C2_Display_and_warning;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_AHBC_Gradual_buf V_MEMRAM2 AHBC_Gradual;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_ESR_Status9_buf V_MEMRAM2 ESR_Status9;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_ESR_Status8_buf V_MEMRAM2 ESR_Status8;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_ESR_Status7_buf V_MEMRAM2 ESR_Status7;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_ESR_Status6_buf V_MEMRAM2 ESR_Status6;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_ESR_Status5_buf V_MEMRAM2 ESR_Status5;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_ESR_Track64_buf V_MEMRAM2 ESR_Track64;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_ESR_Track63_buf V_MEMRAM2 ESR_Track63;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_ESR_Track62_buf V_MEMRAM2 ESR_Track62;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_ESR_Track61_buf V_MEMRAM2 ESR_Track61;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_ESR_Track60_buf V_MEMRAM2 ESR_Track60;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_ESR_Track59_buf V_MEMRAM2 ESR_Track59;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_ESR_Track58_buf V_MEMRAM2 ESR_Track58;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_ESR_Track57_buf V_MEMRAM2 ESR_Track57;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_ESR_Track56_buf V_MEMRAM2 ESR_Track56;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_ESR_Track55_buf V_MEMRAM2 ESR_Track55;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_ESR_Track54_buf V_MEMRAM2 ESR_Track54;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_ESR_Track53_buf V_MEMRAM2 ESR_Track53;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_ESR_Track52_buf V_MEMRAM2 ESR_Track52;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_ESR_Track51_buf V_MEMRAM2 ESR_Track51;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_ESR_Track50_buf V_MEMRAM2 ESR_Track50;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_ESR_Track49_buf V_MEMRAM2 ESR_Track49;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_ESR_Track48_buf V_MEMRAM2 ESR_Track48;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_ESR_Track47_buf V_MEMRAM2 ESR_Track47;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_ESR_Track46_buf V_MEMRAM2 ESR_Track46;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_ESR_Track45_buf V_MEMRAM2 ESR_Track45;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_ESR_Track44_buf V_MEMRAM2 ESR_Track44;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_ESR_Track43_buf V_MEMRAM2 ESR_Track43;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_ESR_Track42_buf V_MEMRAM2 ESR_Track42;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_ESR_Track41_buf V_MEMRAM2 ESR_Track41;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_ESR_Track40_buf V_MEMRAM2 ESR_Track40;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_ESR_Track39_buf V_MEMRAM2 ESR_Track39;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_ESR_Track38_buf V_MEMRAM2 ESR_Track38;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_ESR_Track37_buf V_MEMRAM2 ESR_Track37;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_ESR_Track36_buf V_MEMRAM2 ESR_Track36;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_ESR_Track35_buf V_MEMRAM2 ESR_Track35;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_ESR_Track34_buf V_MEMRAM2 ESR_Track34;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_ESR_Track33_buf V_MEMRAM2 ESR_Track33;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_ESR_Track32_buf V_MEMRAM2 ESR_Track32;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_ESR_Track31_buf V_MEMRAM2 ESR_Track31;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_ESR_Track30_buf V_MEMRAM2 ESR_Track30;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_ESR_Track29_buf V_MEMRAM2 ESR_Track29;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_ESR_Track28_buf V_MEMRAM2 ESR_Track28;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_ESR_Track27_buf V_MEMRAM2 ESR_Track27;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_ESR_Track26_buf V_MEMRAM2 ESR_Track26;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_ESR_Track25_buf V_MEMRAM2 ESR_Track25;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_ESR_Track24_buf V_MEMRAM2 ESR_Track24;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_ESR_Track23_buf V_MEMRAM2 ESR_Track23;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_ESR_Track22_buf V_MEMRAM2 ESR_Track22;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_ESR_Track21_buf V_MEMRAM2 ESR_Track21;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_ESR_Track20_buf V_MEMRAM2 ESR_Track20;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_ESR_Track19_buf V_MEMRAM2 ESR_Track19;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_ESR_Track18_buf V_MEMRAM2 ESR_Track18;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_ESR_Track17_buf V_MEMRAM2 ESR_Track17;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_ESR_Track16_buf V_MEMRAM2 ESR_Track16;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_ESR_Track15_buf V_MEMRAM2 ESR_Track15;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_ESR_Track14_buf V_MEMRAM2 ESR_Track14;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_ESR_Track13_buf V_MEMRAM2 ESR_Track13;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_ESR_Track12_buf V_MEMRAM2 ESR_Track12;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_ESR_Track11_buf V_MEMRAM2 ESR_Track11;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_ESR_Track10_buf V_MEMRAM2 ESR_Track10;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_ESR_Track09_buf V_MEMRAM2 ESR_Track09;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_ESR_Track08_buf V_MEMRAM2 ESR_Track08;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_ESR_Track07_buf V_MEMRAM2 ESR_Track07;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_ESR_Track06_buf V_MEMRAM2 ESR_Track06;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_ESR_Track05_buf V_MEMRAM2 ESR_Track05;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_ESR_Track04_buf V_MEMRAM2 ESR_Track04;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_ESR_Track03_buf V_MEMRAM2 ESR_Track03;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_ESR_Track02_buf V_MEMRAM2 ESR_Track02;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_ESR_Track01_buf V_MEMRAM2 ESR_Track01;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_ESR_Status4_buf V_MEMRAM2 ESR_Status4;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_ESR_Status3_buf V_MEMRAM2 ESR_Status3;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_ESR_Status2_buf V_MEMRAM2 ESR_Status2;
/* RAM CATEGORY 2 END */






/* begin Fileversion check */
#ifndef SKIP_MAGIC_NUMBER
#ifdef MAGIC_NUMBER
  #if MAGIC_NUMBER != 297263386
      #error "The magic number of the generated file <D:\code\McuCode\GENy-IL-interfaceGenerator\tools\Geny\drv_par.h> is different. Please check time and date of generated files!"
  #endif
#else
  #define MAGIC_NUMBER 297263386
#endif  /* MAGIC_NUMBER */
#endif  /* SKIP_MAGIC_NUMBER */

/* end Fileversion check */

#endif /* __DRV_PAR_H__ */
