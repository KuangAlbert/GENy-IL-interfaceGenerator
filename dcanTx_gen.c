/******************************************************************************************************
This C file is modified according to DBC and is generally not allowed to be changed.
Code generator version: V1.1
Author: KuangBaoFengLei
Date: 2018/09/24
Gen time: 2018-09-24 16:00:03 
======================================================================================================*/
#include "dcanTxLink_priv.h"

sig_attribute attr;

void Send_signal_IL(_DcanTxDataPacket* pk)
{
    attr.data_type  = Unsigned;
    attr.factor     = 0.1;
    attr.offset     = -10;
    attr.max        = 10;
    attr.min        = -10;
    attr.nbits      = 8;
    attr.value      = pk->AHBC_Gradual.Boundary_bottom_HLB;
    can_send_sig(Boundary_bottom_HLB_0x729, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.1;
    attr.offset     = -20;
    attr.max        = 20;
    attr.min        = -20;
    attr.nbits      = 12;
    attr.value      = pk->AHBC_Gradual.Boundary_left_hand_HLB;
    can_send_sig(Boundary_left_hand_HLB_0x729, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.1;
    attr.offset     = -20;
    attr.max        = 20;
    attr.min        = -20;
    attr.nbits      = 12;
    attr.value      = pk->AHBC_Gradual.Boundary_right_hand_HLB;
    can_send_sig(Boundary_right_hand_HLB_0x729, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 1;
    attr.value      = pk->AHBC_Gradual.Busy_Scene;
    can_send_sig(Busy_Scene_0x729, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 1;
    attr.value      = pk->AHBC_Gradual.Left_Target_Change;
    can_send_sig(Left_Target_Change_0x729, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 2;
    attr.offset     = 0;
    attr.max        = 400;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->AHBC_Gradual.Object_Distance_HLB;
    can_send_sig(Object_Distance_HLB_0x729, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 1;
    attr.value      = pk->AHBC_Gradual.Right_Target_Change;
    can_send_sig(Right_Target_Change_0x729, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 3;
    attr.min        = 0;
    attr.nbits      = 2;
    attr.value      = pk->AHBC_Gradual.Status_Bottom_HLB;
    can_send_sig(Status_Bottom_HLB_0x729, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 3;
    attr.min        = 0;
    attr.nbits      = 2;
    attr.value      = pk->AHBC_Gradual.Status_Left_Hand_HLB;
    can_send_sig(Status_Left_Hand_HLB_0x729, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 3;
    attr.min        = 0;
    attr.nbits      = 2;
    attr.value      = pk->AHBC_Gradual.Status_Object_Distance_HLB;
    can_send_sig(Status_Object_Distance_HLB_0x729, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 3;
    attr.min        = 0;
    attr.nbits      = 2;
    attr.value      = pk->AHBC_Gradual.Status_Right_Hand_HLB;
    can_send_sig(Status_Right_Hand_HLB_0x729, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 1;
    attr.value      = pk->AHBC_Gradual.Too_Many_Cars;
    can_send_sig(Too_Many_Cars_0x729, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 3;
    attr.min        = 0;
    attr.nbits      = 2;
    attr.value      = pk->AHBC_high_low_beam.Binary_high_low_beam_decision;
    can_send_sig(Binary_high_low_beam_decision_0x728, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 511;
    attr.min        = 0;
    attr.nbits      = 9;
    attr.value      = pk->AHBC_high_low_beam.Reasons_for_switch_to_low_beam;
    can_send_sig(Reasons_for_switch_to_low_beam_0x728, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 1;
    attr.value      = pk->C2_Display_and_warning.Dusk_Time_Indicator;
    can_send_sig(Dusk_Time_Indicator_0x700, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 1;
    attr.value      = pk->C2_Display_and_warning.Failsafe;
    can_send_sig(Failsafe_0x700, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 1;
    attr.value      = pk->C2_Display_and_warning.FCW_on;
    can_send_sig(FCW_on_0x700, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.1;
    attr.offset     = 0;
    attr.max        = 9.9;
    attr.min        = 0;
    attr.nbits      = 7;
    attr.value      = pk->C2_Display_and_warning.Headway_measurement;
    can_send_sig(Headway_measurement_0x700, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 1;
    attr.value      = pk->C2_Display_and_warning.Headway_valid;
    can_send_sig(Headway_valid_0x700, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 3;
    attr.min        = 0;
    attr.nbits      = 2;
    attr.value      = pk->C2_Display_and_warning.Headway_Warning_Level;
    can_send_sig(Headway_Warning_Level_0x700, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 1;
    attr.value      = pk->C2_Display_and_warning.Lanes_On;
    can_send_sig(Lanes_On_0x700, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 1;
    attr.value      = pk->C2_Display_and_warning.Left_Crossing;
    can_send_sig(Left_Crossing_0x700, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 1;
    attr.value      = pk->C2_Display_and_warning.Left_LDW_ON;
    can_send_sig(Left_LDW_ON_0x700, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 1;
    attr.value      = pk->C2_Display_and_warning.Maintenanc;
    can_send_sig(Maintenanc_0x700, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 1;
    attr.value      = pk->C2_Display_and_warning.Night_Time_Indicator;
    can_send_sig(Night_Time_Indicator_0x700, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 1;
    attr.value      = pk->C2_Display_and_warning.Peds_FCW;
    can_send_sig(Peds_FCW_0x700, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 1;
    attr.value      = pk->C2_Display_and_warning.Peds_in_DZ;
    can_send_sig(Peds_in_DZ_0x700, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 1;
    attr.value      = pk->C2_Display_and_warning.Right_Crossing;
    can_send_sig(Right_Crossing_0x700, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 1;
    attr.value      = pk->C2_Display_and_warning.Right_LDW_ON;
    can_send_sig(Right_LDW_ON_0x700, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 3;
    attr.value      = pk->C2_Display_and_warning.Sound_type;
    can_send_sig(Sound_type_0x700, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 1;
    attr.value      = pk->C2_Display_and_warning.Suppress;
    can_send_sig(Suppress_0x700, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 1;
    attr.value      = pk->Car_Info.Brakes;
    can_send_sig(Brakes_0x760, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 1;
    attr.value      = pk->Car_Info.High_Beam;
    can_send_sig(High_Beam_0x760, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 1;
    attr.value      = pk->Car_Info.High_Beam_Available;
    can_send_sig(High_Beam_Available_0x760, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 1;
    attr.value      = pk->Car_Info.Left_Signal;
    can_send_sig(Left_Signal_0x760, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 1;
    attr.value      = pk->Car_Info.Low_Beam;
    can_send_sig(Low_Beam_0x760, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 1;
    attr.value      = pk->Car_Info.Low_Beam_available;
    can_send_sig(Low_Beam_available_0x760, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 1;
    attr.value      = pk->Car_Info.Right_Signal;
    can_send_sig(Right_Signal_0x760, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 255;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->Car_Info.Speed;
    can_send_sig(Speed_0x760, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 1;
    attr.value      = pk->Car_Info.Speed_Available;
    can_send_sig(Speed_Available_0x760, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 1;
    attr.value      = pk->Car_Info.Wipers;
    can_send_sig(Wipers_0x760, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 1;
    attr.value      = pk->Car_Info.Wipers_available;
    can_send_sig(Wipers_available_0x760, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.02;
    attr.offset     = 0;
    attr.max        = 40;
    attr.min        = -40;
    attr.nbits      = 12;
    attr.value      = pk->Detils_Lane.Distance_To_Left_Lane;
    can_send_sig(Distance_To_Left_Lane_0x669, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.02;
    attr.offset     = 0;
    attr.max        = 40;
    attr.min        = -40;
    attr.nbits      = 12;
    attr.value      = pk->Detils_Lane.Distance_To_Right_Lane;
    can_send_sig(Distance_To_Right_Lane_0x669, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 3;
    attr.min        = 0;
    attr.nbits      = 2;
    attr.value      = pk->Detils_Lane.Lane_Confidence_Left;
    can_send_sig(Lane_Confidence_Left_0x669, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 3;
    attr.min        = 0;
    attr.nbits      = 2;
    attr.value      = pk->Detils_Lane.Lane_Confidence_Right;
    can_send_sig(Lane_Confidence_Right_0x669, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 15;
    attr.min        = 0;
    attr.nbits      = 4;
    attr.value      = pk->Detils_Lane.Lane_Type_Left;
    can_send_sig(Lane_Type_Left_0x669, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 15;
    attr.min        = 0;
    attr.nbits      = 4;
    attr.value      = pk->Detils_Lane.Lane_Type_Right;
    can_send_sig(Lane_Type_Right_0x669, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 1;
    attr.value      = pk->Detils_Lane.LDW_Availability_Left;
    can_send_sig(LDW_Availability_Left_0x669, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 1;
    attr.value      = pk->Detils_Lane.LDW_Availability_Right;
    can_send_sig(LDW_Availability_Right_0x669, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 1;
    attr.value      = pk->Detils_Lane.Undocumented1;
    can_send_sig(Undocumented1_0x669, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 1;
    attr.value      = pk->Detils_Lane.Undocumented2;
    can_send_sig(Undocumented2_0x669, data_conv(&attr));


    attr.data_type  = IEEE_Float;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 3.4e+038;
    attr.min        = -3.4e+038;
    attr.nbits      = 32;
    attr.value      = pk->Fixed_FOE.Fixed_Horizon;
    can_send_sig(Fixed_Horizon_0x650, data_conv(&attr));


    attr.data_type  = IEEE_Float;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 3.4e+038;
    attr.min        = -3.4e+038;
    attr.nbits      = 32;
    attr.value      = pk->Fixed_FOE.Fixed_Yaw;
    can_send_sig(Fixed_Yaw_0x650, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 1;
    attr.value      = pk->Lane.CA;
    can_send_sig(CA_0x737, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 3.81e-006;
    attr.offset     = 0;
    attr.max        = 0.12;
    attr.min        = -0.12;
    attr.nbits      = 16;
    attr.value      = pk->Lane.Lane_Curvature;
    can_send_sig(Lane_Curvature_0x737, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.0005;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = -1;
    attr.nbits      = 12;
    attr.value      = pk->Lane.Lane_Heading;
    can_send_sig(Lane_Heading_0x737, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 1;
    attr.value      = pk->Lane.Left_LDW_Availability;
    can_send_sig(Left_LDW_Availability_0x737, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1.91e-006;
    attr.offset     = -0.0624981;
    attr.max        = 0.05;
    attr.min        = -0.05;
    attr.nbits      = 16;
    attr.value      = pk->Lane.Pitch_Angle;
    can_send_sig(Pitch_Angle_0x737, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 1;
    attr.value      = pk->Lane.Right_LDW_Availability;
    can_send_sig(Right_LDW_Availability_0x737, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.00097656;
    attr.offset     = -31.999;
    attr.max        = 31.9999;
    attr.min        = -31.999;
    attr.nbits      = 16;
    attr.value      = pk->Lane.Yaw_Angle;
    can_send_sig(Yaw_Angle_0x737, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 3.72e-009;
    attr.offset     = -0.000122067;
    attr.max        = 0.00012;
    attr.min        = -0.00012;
    attr.nbits      = 16;
    attr.value      = pk->LKA_left_lane_A.Curvature_derivative_C3;
    can_send_sig(Curvature_derivative_C3_0x766, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 9.76563e-007;
    attr.offset     = -0.031999;
    attr.max        = 0.02;
    attr.min        = -0.02;
    attr.nbits      = 16;
    attr.value      = pk->LKA_left_lane_A.Curvature_Parameter_C2;
    can_send_sig(Curvature_Parameter_C2_0x766, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 15;
    attr.min        = 0;
    attr.nbits      = 4;
    attr.value      = pk->LKA_left_lane_A.Lane_type;
    can_send_sig(Lane_type_0x766, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 3;
    attr.min        = 0;
    attr.nbits      = 2;
    attr.value      = pk->LKA_left_lane_A.Model_degree;
    can_send_sig(Model_degree_0x766, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.00390625;
    attr.offset     = 0;
    attr.max        = 128;
    attr.min        = -127;
    attr.nbits      = 16;
    attr.value      = pk->LKA_left_lane_A.Position_Parameter_C0;
    can_send_sig(Position_Parameter_C0_0x766, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 3;
    attr.min        = 0;
    attr.nbits      = 2;
    attr.value      = pk->LKA_left_lane_A.Quality;
    can_send_sig(Quality_0x766, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.01;
    attr.offset     = 0;
    attr.max        = 2.5;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->LKA_left_lane_A.Width_left_marking;
    can_send_sig(Width_left_marking_0x766, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.000976563;
    attr.offset     = -31.999;
    attr.max        = 0.357;
    attr.min        = -0.357;
    attr.nbits      = 16;
    attr.value      = pk->LKA_left_lane_B.Heading_angle_Parameter_C1;
    can_send_sig(Heading_angle_Parameter_C1_0x767, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.0030625;
    attr.offset     = 0;
    attr.max        = 127.996;
    attr.min        = 0;
    attr.nbits      = 15;
    attr.value      = pk->LKA_left_lane_B.View_range;
    can_send_sig(View_range_0x767, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 1;
    attr.value      = pk->LKA_left_lane_B.View_range_availability;
    can_send_sig(View_range_availability_0x767, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 3.72e-009;
    attr.offset     = -0.000122067;
    attr.max        = 0.00012;
    attr.min        = -0.00012;
    attr.nbits      = 16;
    attr.value      = pk->LKA_right_lane_A.Curvature_derivative_C3;
    can_send_sig(Curvature_derivative_C3_0x768, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 9.76563e-007;
    attr.offset     = -0.031999;
    attr.max        = 0.02;
    attr.min        = -0.02;
    attr.nbits      = 16;
    attr.value      = pk->LKA_right_lane_A.Curvature_Parameter_C2;
    can_send_sig(Curvature_Parameter_C2_0x768, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 15;
    attr.min        = 0;
    attr.nbits      = 4;
    attr.value      = pk->LKA_right_lane_A.Lane_type;
    can_send_sig(Lane_type_0x768, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 3;
    attr.min        = 0;
    attr.nbits      = 2;
    attr.value      = pk->LKA_right_lane_A.Model_degree;
    can_send_sig(Model_degree_0x768, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.00390625;
    attr.offset     = 0;
    attr.max        = 128;
    attr.min        = -127;
    attr.nbits      = 16;
    attr.value      = pk->LKA_right_lane_A.Position_Parameter_C0;
    can_send_sig(Position_Parameter_C0_0x768, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 3;
    attr.min        = 0;
    attr.nbits      = 2;
    attr.value      = pk->LKA_right_lane_A.Quality;
    can_send_sig(Quality_0x768, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.01;
    attr.offset     = 0;
    attr.max        = 2.5;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->LKA_right_lane_A.Width_right_marking;
    can_send_sig(Width_right_marking_0x768, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.000976563;
    attr.offset     = -31.999;
    attr.max        = 0.357;
    attr.min        = -0.357;
    attr.nbits      = 16;
    attr.value      = pk->LKA_right_lane_B.Heading_angle_Parameter_C1;
    can_send_sig(Heading_angle_Parameter_C1_0x769, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.0030625;
    attr.offset     = 0;
    attr.max        = 127.996;
    attr.min        = 0;
    attr.nbits      = 15;
    attr.value      = pk->LKA_right_lane_B.View_range;
    can_send_sig(View_range_0x769, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 1;
    attr.value      = pk->LKA_right_lane_B.View_range_availability;
    can_send_sig(View_range_availability_0x769, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 3.72e-009;
    attr.offset     = -0.000122067;
    attr.max        = 0.00012;
    attr.min        = -0.00012;
    attr.nbits      = 16;
    attr.value      = pk->Next_lane_Left_A.Curvature_derivative_C3;
    can_send_sig(Curvature_derivative_C3_0x76C, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 9.76563e-007;
    attr.offset     = -0.031999;
    attr.max        = 0.02;
    attr.min        = -0.02;
    attr.nbits      = 16;
    attr.value      = pk->Next_lane_Left_A.Curvature_Parameter_C2;
    can_send_sig(Curvature_Parameter_C2_0x76C, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.01;
    attr.offset     = 0;
    attr.max        = 2.5;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->Next_lane_Left_A.Lane_mark_width;
    can_send_sig(Lane_mark_width_0x76C, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 15;
    attr.min        = 0;
    attr.nbits      = 4;
    attr.value      = pk->Next_lane_Left_A.Lane_type;
    can_send_sig(Lane_type_0x76C, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 3;
    attr.min        = 0;
    attr.nbits      = 2;
    attr.value      = pk->Next_lane_Left_A.Model_degree;
    can_send_sig(Model_degree_0x76C, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.00390625;
    attr.offset     = 0;
    attr.max        = 128;
    attr.min        = -127;
    attr.nbits      = 16;
    attr.value      = pk->Next_lane_Left_A.Position_Parameter_C0;
    can_send_sig(Position_Parameter_C0_0x76C, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 3;
    attr.min        = 0;
    attr.nbits      = 2;
    attr.value      = pk->Next_lane_Left_A.Quality;
    can_send_sig(Quality_0x76C, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.000976563;
    attr.offset     = -31.999;
    attr.max        = 0.357;
    attr.min        = -0.357;
    attr.nbits      = 16;
    attr.value      = pk->Next_lane_Left_B.Heading_angle_Parameter_C1;
    can_send_sig(Heading_angle_Parameter_C1_0x76D, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.0030625;
    attr.offset     = 0;
    attr.max        = 127.996;
    attr.min        = 0;
    attr.nbits      = 15;
    attr.value      = pk->Next_lane_Left_B.View_range;
    can_send_sig(View_range_0x76D, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 1;
    attr.value      = pk->Next_lane_Left_B.View_range_availability;
    can_send_sig(View_range_availability_0x76D, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 3.72e-009;
    attr.offset     = -0.000122067;
    attr.max        = 0.00012;
    attr.min        = -0.00012;
    attr.nbits      = 16;
    attr.value      = pk->Next_lane_Left_E.Curvature_derivative_C3;
    can_send_sig(Curvature_derivative_C3_0x770, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 9.76563e-007;
    attr.offset     = -0.031999;
    attr.max        = 0.02;
    attr.min        = -0.02;
    attr.nbits      = 16;
    attr.value      = pk->Next_lane_Left_E.Curvature_Parameter_C2;
    can_send_sig(Curvature_Parameter_C2_0x770, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.01;
    attr.offset     = 0;
    attr.max        = 2.5;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->Next_lane_Left_E.Lane_mark_width;
    can_send_sig(Lane_mark_width_0x770, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 15;
    attr.min        = 0;
    attr.nbits      = 4;
    attr.value      = pk->Next_lane_Left_E.Lane_type;
    can_send_sig(Lane_type_0x770, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 3;
    attr.min        = 0;
    attr.nbits      = 2;
    attr.value      = pk->Next_lane_Left_E.Model_degree;
    can_send_sig(Model_degree_0x770, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.00390625;
    attr.offset     = 0;
    attr.max        = 128;
    attr.min        = -127;
    attr.nbits      = 16;
    attr.value      = pk->Next_lane_Left_E.Position_Parameter_C0;
    can_send_sig(Position_Parameter_C0_0x770, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 3;
    attr.min        = 0;
    attr.nbits      = 2;
    attr.value      = pk->Next_lane_Left_E.Quality;
    can_send_sig(Quality_0x770, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.000976563;
    attr.offset     = -31.999;
    attr.max        = 0.357;
    attr.min        = -0.357;
    attr.nbits      = 16;
    attr.value      = pk->Next_lane_Left_F.Heading_angle_Parameter_C1;
    can_send_sig(Heading_angle_Parameter_C1_0x771, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.0030625;
    attr.offset     = 0;
    attr.max        = 127.996;
    attr.min        = 0;
    attr.nbits      = 15;
    attr.value      = pk->Next_lane_Left_F.View_range;
    can_send_sig(View_range_0x771, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 1;
    attr.value      = pk->Next_lane_Left_F.View_range_availability;
    can_send_sig(View_range_availability_0x771, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 3.72e-009;
    attr.offset     = -0.000122067;
    attr.max        = 0.00012;
    attr.min        = -0.00012;
    attr.nbits      = 16;
    attr.value      = pk->Next_lane_Left_I.Curvature_derivative_C3;
    can_send_sig(Curvature_derivative_C3_0x774, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 9.76563e-007;
    attr.offset     = -0.031999;
    attr.max        = 0.02;
    attr.min        = -0.02;
    attr.nbits      = 16;
    attr.value      = pk->Next_lane_Left_I.Curvature_Parameter_C2;
    can_send_sig(Curvature_Parameter_C2_0x774, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.01;
    attr.offset     = 0;
    attr.max        = 2.5;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->Next_lane_Left_I.Lane_mark_width;
    can_send_sig(Lane_mark_width_0x774, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 15;
    attr.min        = 0;
    attr.nbits      = 4;
    attr.value      = pk->Next_lane_Left_I.Lane_type;
    can_send_sig(Lane_type_0x774, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 3;
    attr.min        = 0;
    attr.nbits      = 2;
    attr.value      = pk->Next_lane_Left_I.Model_degree;
    can_send_sig(Model_degree_0x774, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.00390625;
    attr.offset     = 0;
    attr.max        = 128;
    attr.min        = -127;
    attr.nbits      = 16;
    attr.value      = pk->Next_lane_Left_I.Position_Parameter_C0;
    can_send_sig(Position_Parameter_C0_0x774, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 3;
    attr.min        = 0;
    attr.nbits      = 2;
    attr.value      = pk->Next_lane_Left_I.Quality;
    can_send_sig(Quality_0x774, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.000976563;
    attr.offset     = -31.999;
    attr.max        = 0.357;
    attr.min        = -0.357;
    attr.nbits      = 16;
    attr.value      = pk->Next_lane_Left_J.Heading_angle_Parameter_C1;
    can_send_sig(Heading_angle_Parameter_C1_0x775, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.0030625;
    attr.offset     = 0;
    attr.max        = 127.996;
    attr.min        = 0;
    attr.nbits      = 15;
    attr.value      = pk->Next_lane_Left_J.View_range;
    can_send_sig(View_range_0x775, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 1;
    attr.value      = pk->Next_lane_Left_J.View_range_availability;
    can_send_sig(View_range_availability_0x775, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 3.72e-009;
    attr.offset     = -0.000122067;
    attr.max        = 0.00012;
    attr.min        = -0.00012;
    attr.nbits      = 16;
    attr.value      = pk->Next_lane_Left_M.Curvature_derivative_C3;
    can_send_sig(Curvature_derivative_C3_0x778, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 9.76563e-007;
    attr.offset     = -0.031999;
    attr.max        = 0.02;
    attr.min        = -0.02;
    attr.nbits      = 16;
    attr.value      = pk->Next_lane_Left_M.Curvature_Parameter_C2;
    can_send_sig(Curvature_Parameter_C2_0x778, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.01;
    attr.offset     = 0;
    attr.max        = 2.5;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->Next_lane_Left_M.Lane_mark_width;
    can_send_sig(Lane_mark_width_0x778, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 15;
    attr.min        = 0;
    attr.nbits      = 4;
    attr.value      = pk->Next_lane_Left_M.Lane_type;
    can_send_sig(Lane_type_0x778, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 3;
    attr.min        = 0;
    attr.nbits      = 2;
    attr.value      = pk->Next_lane_Left_M.Model_degree;
    can_send_sig(Model_degree_0x778, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.00390625;
    attr.offset     = 0;
    attr.max        = 128;
    attr.min        = -127;
    attr.nbits      = 16;
    attr.value      = pk->Next_lane_Left_M.Position_Parameter_C0;
    can_send_sig(Position_Parameter_C0_0x778, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 3;
    attr.min        = 0;
    attr.nbits      = 2;
    attr.value      = pk->Next_lane_Left_M.Quality;
    can_send_sig(Quality_0x778, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.000976563;
    attr.offset     = -31.999;
    attr.max        = 0.357;
    attr.min        = -0.357;
    attr.nbits      = 16;
    attr.value      = pk->Next_lane_Left_N.Heading_angle_Parameter_C1;
    can_send_sig(Heading_angle_Parameter_C1_0x779, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.0030625;
    attr.offset     = 0;
    attr.max        = 127.996;
    attr.min        = 0;
    attr.nbits      = 15;
    attr.value      = pk->Next_lane_Left_N.View_range;
    can_send_sig(View_range_0x779, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 1;
    attr.value      = pk->Next_lane_Left_N.View_range_availability;
    can_send_sig(View_range_availability_0x779, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 3.72e-009;
    attr.offset     = -0.000122067;
    attr.max        = 0.00012;
    attr.min        = -0.00012;
    attr.nbits      = 16;
    attr.value      = pk->Next_lane_Right_C.Curvature_derivative_C3;
    can_send_sig(Curvature_derivative_C3_0x76E, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 9.76563e-007;
    attr.offset     = -0.031999;
    attr.max        = 0.02;
    attr.min        = -0.02;
    attr.nbits      = 16;
    attr.value      = pk->Next_lane_Right_C.Curvature_Parameter_C2;
    can_send_sig(Curvature_Parameter_C2_0x76E, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.01;
    attr.offset     = 0;
    attr.max        = 2.5;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->Next_lane_Right_C.Lane_mark_width;
    can_send_sig(Lane_mark_width_0x76E, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 15;
    attr.min        = 0;
    attr.nbits      = 4;
    attr.value      = pk->Next_lane_Right_C.Lane_type;
    can_send_sig(Lane_type_0x76E, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 3;
    attr.min        = 0;
    attr.nbits      = 2;
    attr.value      = pk->Next_lane_Right_C.Model_degree;
    can_send_sig(Model_degree_0x76E, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.00390625;
    attr.offset     = 0;
    attr.max        = 128;
    attr.min        = -127;
    attr.nbits      = 16;
    attr.value      = pk->Next_lane_Right_C.Position_Parameter_C0;
    can_send_sig(Position_Parameter_C0_0x76E, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 3;
    attr.min        = 0;
    attr.nbits      = 2;
    attr.value      = pk->Next_lane_Right_C.Quality;
    can_send_sig(Quality_0x76E, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.000976563;
    attr.offset     = -31.999;
    attr.max        = 0.357;
    attr.min        = -0.357;
    attr.nbits      = 16;
    attr.value      = pk->Next_lane_Right_D.Heading_angle_Parameter_C1;
    can_send_sig(Heading_angle_Parameter_C1_0x76F, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.0030625;
    attr.offset     = 0;
    attr.max        = 127.996;
    attr.min        = 0;
    attr.nbits      = 15;
    attr.value      = pk->Next_lane_Right_D.View_range;
    can_send_sig(View_range_0x76F, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 1;
    attr.value      = pk->Next_lane_Right_D.View_range_availability;
    can_send_sig(View_range_availability_0x76F, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 3.72e-009;
    attr.offset     = -0.000122067;
    attr.max        = 0.00012;
    attr.min        = -0.00012;
    attr.nbits      = 16;
    attr.value      = pk->Next_lane_Right_G.Curvature_derivative_C3;
    can_send_sig(Curvature_derivative_C3_0x772, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 9.76563e-007;
    attr.offset     = -0.031999;
    attr.max        = 0.02;
    attr.min        = -0.02;
    attr.nbits      = 16;
    attr.value      = pk->Next_lane_Right_G.Curvature_Parameter_C2;
    can_send_sig(Curvature_Parameter_C2_0x772, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.01;
    attr.offset     = 0;
    attr.max        = 2.5;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->Next_lane_Right_G.Lane_mark_width;
    can_send_sig(Lane_mark_width_0x772, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 15;
    attr.min        = 0;
    attr.nbits      = 4;
    attr.value      = pk->Next_lane_Right_G.Lane_type;
    can_send_sig(Lane_type_0x772, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 3;
    attr.min        = 0;
    attr.nbits      = 2;
    attr.value      = pk->Next_lane_Right_G.Model_degree;
    can_send_sig(Model_degree_0x772, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.00390625;
    attr.offset     = 0;
    attr.max        = 128;
    attr.min        = -127;
    attr.nbits      = 16;
    attr.value      = pk->Next_lane_Right_G.Position_Parameter_C0;
    can_send_sig(Position_Parameter_C0_0x772, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 3;
    attr.min        = 0;
    attr.nbits      = 2;
    attr.value      = pk->Next_lane_Right_G.Quality;
    can_send_sig(Quality_0x772, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.000976563;
    attr.offset     = -31.999;
    attr.max        = 0.357;
    attr.min        = -0.357;
    attr.nbits      = 16;
    attr.value      = pk->Next_lane_Right_H.Heading_angle_Parameter_C1;
    can_send_sig(Heading_angle_Parameter_C1_0x773, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.0030625;
    attr.offset     = 0;
    attr.max        = 127.996;
    attr.min        = 0;
    attr.nbits      = 15;
    attr.value      = pk->Next_lane_Right_H.View_range;
    can_send_sig(View_range_0x773, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 1;
    attr.value      = pk->Next_lane_Right_H.View_range_availability;
    can_send_sig(View_range_availability_0x773, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 3.72e-009;
    attr.offset     = -0.000122067;
    attr.max        = 0.00012;
    attr.min        = -0.00012;
    attr.nbits      = 16;
    attr.value      = pk->Next_lane_Right_K.Curvature_derivative_C3;
    can_send_sig(Curvature_derivative_C3_0x776, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 9.76563e-007;
    attr.offset     = -0.031999;
    attr.max        = 0.02;
    attr.min        = -0.02;
    attr.nbits      = 16;
    attr.value      = pk->Next_lane_Right_K.Curvature_Parameter_C2;
    can_send_sig(Curvature_Parameter_C2_0x776, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.01;
    attr.offset     = 0;
    attr.max        = 2.5;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->Next_lane_Right_K.Lane_mark_width;
    can_send_sig(Lane_mark_width_0x776, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 15;
    attr.min        = 0;
    attr.nbits      = 4;
    attr.value      = pk->Next_lane_Right_K.Lane_type;
    can_send_sig(Lane_type_0x776, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 3;
    attr.min        = 0;
    attr.nbits      = 2;
    attr.value      = pk->Next_lane_Right_K.Model_degree;
    can_send_sig(Model_degree_0x776, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.00390625;
    attr.offset     = 0;
    attr.max        = 128;
    attr.min        = -127;
    attr.nbits      = 16;
    attr.value      = pk->Next_lane_Right_K.Position_Parameter_C0;
    can_send_sig(Position_Parameter_C0_0x776, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 3;
    attr.min        = 0;
    attr.nbits      = 2;
    attr.value      = pk->Next_lane_Right_K.Quality;
    can_send_sig(Quality_0x776, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.000976563;
    attr.offset     = -31.999;
    attr.max        = 0.357;
    attr.min        = -0.357;
    attr.nbits      = 16;
    attr.value      = pk->Next_lane_Right_L.Heading_angle_Parameter_C1;
    can_send_sig(Heading_angle_Parameter_C1_0x777, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.0030625;
    attr.offset     = 0;
    attr.max        = 127.996;
    attr.min        = 0;
    attr.nbits      = 15;
    attr.value      = pk->Next_lane_Right_L.View_range;
    can_send_sig(View_range_0x777, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 1;
    attr.value      = pk->Next_lane_Right_L.View_range_availability;
    can_send_sig(View_range_availability_0x777, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 3.72e-009;
    attr.offset     = -0.000122067;
    attr.max        = 0.00012;
    attr.min        = -0.00012;
    attr.nbits      = 16;
    attr.value      = pk->Next_lane_Right_O.Curvature_derivative_C3;
    can_send_sig(Curvature_derivative_C3_0x77A, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 9.76563e-007;
    attr.offset     = -0.031999;
    attr.max        = 0.02;
    attr.min        = -0.02;
    attr.nbits      = 16;
    attr.value      = pk->Next_lane_Right_O.Curvature_Parameter_C2;
    can_send_sig(Curvature_Parameter_C2_0x77A, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.01;
    attr.offset     = 0;
    attr.max        = 2.5;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->Next_lane_Right_O.Lane_mark_width;
    can_send_sig(Lane_mark_width_0x77A, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 15;
    attr.min        = 0;
    attr.nbits      = 4;
    attr.value      = pk->Next_lane_Right_O.Lane_type;
    can_send_sig(Lane_type_0x77A, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 3;
    attr.min        = 0;
    attr.nbits      = 2;
    attr.value      = pk->Next_lane_Right_O.Model_degree;
    can_send_sig(Model_degree_0x77A, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.00390625;
    attr.offset     = 0;
    attr.max        = 128;
    attr.min        = -127;
    attr.nbits      = 16;
    attr.value      = pk->Next_lane_Right_O.Position_Parameter_C0;
    can_send_sig(Position_Parameter_C0_0x77A, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 3;
    attr.min        = 0;
    attr.nbits      = 2;
    attr.value      = pk->Next_lane_Right_O.Quality;
    can_send_sig(Quality_0x77A, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.000976563;
    attr.offset     = -31.999;
    attr.max        = 0.357;
    attr.min        = -0.357;
    attr.nbits      = 16;
    attr.value      = pk->Next_lane_Right_P.Heading_angle_Parameter_C1;
    can_send_sig(Heading_angle_Parameter_C1_0x77B, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.0030625;
    attr.offset     = 0;
    attr.max        = 127.996;
    attr.min        = 0;
    attr.nbits      = 15;
    attr.value      = pk->Next_lane_Right_P.View_range;
    can_send_sig(View_range_0x77B, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 1;
    attr.value      = pk->Next_lane_Right_P.View_range_availability;
    can_send_sig(View_range_availability_0x77B, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 7;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->Numebr_of_next_lane.Number_lane_markers_reported;
    can_send_sig(Number_lane_markers_reported_0x76B, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 7;
    attr.min        = 0;
    attr.nbits      = 3;
    attr.value      = pk->Obstacle_Data_A.Blinker_Info;
    can_send_sig(Blinker_Info_0x739, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 7;
    attr.min        = 0;
    attr.nbits      = 3;
    attr.value      = pk->Obstacle_Data_A.Cut_in_and_out;
    can_send_sig(Cut_in_and_out_0x739, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 1;
    attr.value      = pk->Obstacle_Data_A.Obstacle_Brake_Light;
    can_send_sig(Obstacle_Brake_Light_0x739, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 63;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->Obstacle_Data_A.Obstacle_ID;
    can_send_sig(Obstacle_ID_0x739, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.0625;
    attr.offset     = 0;
    attr.max        = 250;
    attr.min        = 0;
    attr.nbits      = 12;
    attr.value      = pk->Obstacle_Data_A.Obstacle_Pos_X;
    can_send_sig(Obstacle_Pos_X_0x739, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.0625;
    attr.offset     = 0;
    attr.max        = 31.93;
    attr.min        = -31.93;
    attr.nbits      = 10;
    attr.value      = pk->Obstacle_Data_A.Obstacle_Pos_Y;
    can_send_sig(Obstacle_Pos_Y_0x739, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.0625;
    attr.offset     = 0;
    attr.max        = 127.93;
    attr.min        = -127.93;
    attr.nbits      = 12;
    attr.value      = pk->Obstacle_Data_A.Obstacle_Rel_Vel_X;
    can_send_sig(Obstacle_Rel_Vel_X_0x739, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 7;
    attr.min        = 0;
    attr.nbits      = 3;
    attr.value      = pk->Obstacle_Data_A.Obstacle_Status;
    can_send_sig(Obstacle_Status_0x739, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 7;
    attr.min        = 0;
    attr.nbits      = 3;
    attr.value      = pk->Obstacle_Data_A.Obstacle_Type;
    can_send_sig(Obstacle_Type_0x739, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 3;
    attr.min        = 0;
    attr.nbits      = 2;
    attr.value      = pk->Obstacle_Data_A.Obstacle_Valid;
    can_send_sig(Obstacle_Valid_0x739, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 1;
    attr.value      = pk->Obstacle_Data_B.CIPV_Flag;
    can_send_sig(CIPV_Flag_0x73A, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 127;
    attr.min        = 0;
    attr.nbits      = 7;
    attr.value      = pk->Obstacle_Data_B.Matched_Radar_ID;
    can_send_sig(Matched_Radar_ID_0x73A, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 255;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->Obstacle_Data_B.Obstacle_Age;
    can_send_sig(Obstacle_Age_0x73A, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 3;
    attr.min        = 0;
    attr.nbits      = 2;
    attr.value      = pk->Obstacle_Data_B.Obstacle_Lane;
    can_send_sig(Obstacle_Lane_0x73A, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.5;
    attr.offset     = 0;
    attr.max        = 31;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->Obstacle_Data_B.Obstacle_Legnth;
    can_send_sig(Obstacle_Legnth_0x73A, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.05;
    attr.offset     = 0;
    attr.max        = 12.5;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->Obstacle_Data_B.Obstacle_Width;
    can_send_sig(Obstacle_Width_0x73A, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 5;
    attr.min        = 0.5;
    attr.nbits      = 3;
    attr.value      = pk->Obstacle_Data_B.Radar_Match_Confidence;
    can_send_sig(Radar_Match_Confidence_0x73A, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.0625;
    attr.offset     = 0;
    attr.max        = 250;
    attr.min        = 0;
    attr.nbits      = 12;
    attr.value      = pk->Obstacle_Data_B.Radar_Pos_X;
    can_send_sig(Radar_Pos_X_0x73A, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.0625;
    attr.offset     = 0;
    attr.max        = 127.93;
    attr.min        = -127.93;
    attr.nbits      = 12;
    attr.value      = pk->Obstacle_Data_B.Radar_Vel_X;
    can_send_sig(Radar_Vel_X_0x73A, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.03;
    attr.offset     = 0;
    attr.max        = 14.97;
    attr.min        = -14.97;
    attr.nbits      = 10;
    attr.value      = pk->Obstacle_Data_C.Object_Accel_X;
    can_send_sig(Object_Accel_X_0x73B, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.01;
    attr.offset     = 0;
    attr.max        = 327.68;
    attr.min        = -327.68;
    attr.nbits      = 16;
    attr.value      = pk->Obstacle_Data_C.Obstacle_Angle;
    can_send_sig(Obstacle_Angle_0x73B, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.01;
    attr.offset     = 0;
    attr.max        = 327.68;
    attr.min        = -327.68;
    attr.nbits      = 16;
    attr.value      = pk->Obstacle_Data_C.Obstacle_Angle_Rate;
    can_send_sig(Obstacle_Angle_Rate_0x73B, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 1;
    attr.value      = pk->Obstacle_Data_C.Obstacle_Replaced;
    can_send_sig(Obstacle_Replaced_0x73B, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.0002;
    attr.offset     = 0;
    attr.max        = 6.5532;
    attr.min        = -6.5532;
    attr.nbits      = 16;
    attr.value      = pk->Obstacle_Data_C.Obstacle_Scale_Change;
    can_send_sig(Obstacle_Scale_Change_0x73B, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 7;
    attr.min        = 0;
    attr.nbits      = 3;
    attr.value      = pk->Obstacle_Data_D.Blinker_Info;
    can_send_sig(Blinker_Info_0x73C, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 7;
    attr.min        = 0;
    attr.nbits      = 3;
    attr.value      = pk->Obstacle_Data_D.Cut_in_and_out;
    can_send_sig(Cut_in_and_out_0x73C, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 1;
    attr.value      = pk->Obstacle_Data_D.Obstacle_Brake_Light;
    can_send_sig(Obstacle_Brake_Light_0x73C, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 63;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->Obstacle_Data_D.Obstacle_ID;
    can_send_sig(Obstacle_ID_0x73C, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.0625;
    attr.offset     = 0;
    attr.max        = 250;
    attr.min        = 0;
    attr.nbits      = 12;
    attr.value      = pk->Obstacle_Data_D.Obstacle_Pos_X;
    can_send_sig(Obstacle_Pos_X_0x73C, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.0625;
    attr.offset     = 0;
    attr.max        = 31.93;
    attr.min        = -31.93;
    attr.nbits      = 10;
    attr.value      = pk->Obstacle_Data_D.Obstacle_Pos_Y;
    can_send_sig(Obstacle_Pos_Y_0x73C, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.0625;
    attr.offset     = 0;
    attr.max        = 127.93;
    attr.min        = -127.93;
    attr.nbits      = 12;
    attr.value      = pk->Obstacle_Data_D.Obstacle_Rel_Vel_X;
    can_send_sig(Obstacle_Rel_Vel_X_0x73C, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 7;
    attr.min        = 0;
    attr.nbits      = 3;
    attr.value      = pk->Obstacle_Data_D.Obstacle_Status;
    can_send_sig(Obstacle_Status_0x73C, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 7;
    attr.min        = 0;
    attr.nbits      = 3;
    attr.value      = pk->Obstacle_Data_D.Obstacle_Type;
    can_send_sig(Obstacle_Type_0x73C, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 3;
    attr.min        = 0;
    attr.nbits      = 2;
    attr.value      = pk->Obstacle_Data_D.Obstacle_Valid;
    can_send_sig(Obstacle_Valid_0x73C, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 1;
    attr.value      = pk->Obstacle_Data_E.CIPV_Flag;
    can_send_sig(CIPV_Flag_0x73D, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 127;
    attr.min        = 0;
    attr.nbits      = 7;
    attr.value      = pk->Obstacle_Data_E.Matched_Radar_ID;
    can_send_sig(Matched_Radar_ID_0x73D, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 255;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->Obstacle_Data_E.Obstacle_Age;
    can_send_sig(Obstacle_Age_0x73D, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 3;
    attr.min        = 0;
    attr.nbits      = 2;
    attr.value      = pk->Obstacle_Data_E.Obstacle_Lane;
    can_send_sig(Obstacle_Lane_0x73D, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.5;
    attr.offset     = 0;
    attr.max        = 31;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->Obstacle_Data_E.Obstacle_Legnth;
    can_send_sig(Obstacle_Legnth_0x73D, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.05;
    attr.offset     = 0;
    attr.max        = 12.5;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->Obstacle_Data_E.Obstacle_Width;
    can_send_sig(Obstacle_Width_0x73D, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 5;
    attr.min        = 0.5;
    attr.nbits      = 3;
    attr.value      = pk->Obstacle_Data_E.Radar_Match_Confidence;
    can_send_sig(Radar_Match_Confidence_0x73D, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.0625;
    attr.offset     = 0;
    attr.max        = 250;
    attr.min        = 0;
    attr.nbits      = 12;
    attr.value      = pk->Obstacle_Data_E.Radar_Pos_X;
    can_send_sig(Radar_Pos_X_0x73D, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.0625;
    attr.offset     = 0;
    attr.max        = 127.93;
    attr.min        = -127.93;
    attr.nbits      = 12;
    attr.value      = pk->Obstacle_Data_E.Radar_Vel_X;
    can_send_sig(Radar_Vel_X_0x73D, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.03;
    attr.offset     = 0;
    attr.max        = 14.97;
    attr.min        = -14.97;
    attr.nbits      = 10;
    attr.value      = pk->Obstacle_Data_F.Object_Accel_X;
    can_send_sig(Object_Accel_X_0x73E, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.01;
    attr.offset     = 0;
    attr.max        = 327.68;
    attr.min        = -327.68;
    attr.nbits      = 16;
    attr.value      = pk->Obstacle_Data_F.Obstacle_Angle;
    can_send_sig(Obstacle_Angle_0x73E, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.01;
    attr.offset     = 0;
    attr.max        = 327.68;
    attr.min        = -327.68;
    attr.nbits      = 16;
    attr.value      = pk->Obstacle_Data_F.Obstacle_Angle_Rate;
    can_send_sig(Obstacle_Angle_Rate_0x73E, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 1;
    attr.value      = pk->Obstacle_Data_F.Obstacle_Replaced;
    can_send_sig(Obstacle_Replaced_0x73E, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.0002;
    attr.offset     = 0;
    attr.max        = 6.5532;
    attr.min        = -6.5532;
    attr.nbits      = 16;
    attr.value      = pk->Obstacle_Data_F.Obstacle_Scale_Change;
    can_send_sig(Obstacle_Scale_Change_0x73E, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 7;
    attr.min        = 0;
    attr.nbits      = 3;
    attr.value      = pk->Obstacle_Data_G.Blinker_Info;
    can_send_sig(Blinker_Info_0x73F, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 7;
    attr.min        = 0;
    attr.nbits      = 3;
    attr.value      = pk->Obstacle_Data_G.Cut_in_and_out;
    can_send_sig(Cut_in_and_out_0x73F, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 1;
    attr.value      = pk->Obstacle_Data_G.Obstacle_Brake_Light;
    can_send_sig(Obstacle_Brake_Light_0x73F, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 63;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->Obstacle_Data_G.Obstacle_ID;
    can_send_sig(Obstacle_ID_0x73F, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.0625;
    attr.offset     = 0;
    attr.max        = 250;
    attr.min        = 0;
    attr.nbits      = 12;
    attr.value      = pk->Obstacle_Data_G.Obstacle_Pos_X;
    can_send_sig(Obstacle_Pos_X_0x73F, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.0625;
    attr.offset     = 0;
    attr.max        = 31.93;
    attr.min        = -31.93;
    attr.nbits      = 10;
    attr.value      = pk->Obstacle_Data_G.Obstacle_Pos_Y;
    can_send_sig(Obstacle_Pos_Y_0x73F, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.0625;
    attr.offset     = 0;
    attr.max        = 127.93;
    attr.min        = -127.93;
    attr.nbits      = 12;
    attr.value      = pk->Obstacle_Data_G.Obstacle_Rel_Vel_X;
    can_send_sig(Obstacle_Rel_Vel_X_0x73F, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 7;
    attr.min        = 0;
    attr.nbits      = 3;
    attr.value      = pk->Obstacle_Data_G.Obstacle_Status;
    can_send_sig(Obstacle_Status_0x73F, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 7;
    attr.min        = 0;
    attr.nbits      = 3;
    attr.value      = pk->Obstacle_Data_G.Obstacle_Type;
    can_send_sig(Obstacle_Type_0x73F, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 3;
    attr.min        = 0;
    attr.nbits      = 2;
    attr.value      = pk->Obstacle_Data_G.Obstacle_Valid;
    can_send_sig(Obstacle_Valid_0x73F, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 1;
    attr.value      = pk->Obstacle_Data_H.CIPV_Flag;
    can_send_sig(CIPV_Flag_0x740, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 127;
    attr.min        = 0;
    attr.nbits      = 7;
    attr.value      = pk->Obstacle_Data_H.Matched_Radar_ID;
    can_send_sig(Matched_Radar_ID_0x740, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 255;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->Obstacle_Data_H.Obstacle_Age;
    can_send_sig(Obstacle_Age_0x740, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 3;
    attr.min        = 0;
    attr.nbits      = 2;
    attr.value      = pk->Obstacle_Data_H.Obstacle_Lane;
    can_send_sig(Obstacle_Lane_0x740, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.5;
    attr.offset     = 0;
    attr.max        = 31;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->Obstacle_Data_H.Obstacle_Legnth;
    can_send_sig(Obstacle_Legnth_0x740, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.05;
    attr.offset     = 0;
    attr.max        = 12.5;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->Obstacle_Data_H.Obstacle_Width;
    can_send_sig(Obstacle_Width_0x740, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 5;
    attr.min        = 0.5;
    attr.nbits      = 3;
    attr.value      = pk->Obstacle_Data_H.Radar_Match_Confidence;
    can_send_sig(Radar_Match_Confidence_0x740, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.0625;
    attr.offset     = 0;
    attr.max        = 250;
    attr.min        = 0;
    attr.nbits      = 12;
    attr.value      = pk->Obstacle_Data_H.Radar_Pos_X;
    can_send_sig(Radar_Pos_X_0x740, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.0625;
    attr.offset     = 0;
    attr.max        = 127.93;
    attr.min        = -127.93;
    attr.nbits      = 12;
    attr.value      = pk->Obstacle_Data_H.Radar_Vel_X;
    can_send_sig(Radar_Vel_X_0x740, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.03;
    attr.offset     = 0;
    attr.max        = 14.97;
    attr.min        = -14.97;
    attr.nbits      = 10;
    attr.value      = pk->Obstacle_Data_I.Object_Accel_X;
    can_send_sig(Object_Accel_X_0x741, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.01;
    attr.offset     = 0;
    attr.max        = 327.68;
    attr.min        = -327.68;
    attr.nbits      = 16;
    attr.value      = pk->Obstacle_Data_I.Obstacle_Angle;
    can_send_sig(Obstacle_Angle_0x741, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.01;
    attr.offset     = 0;
    attr.max        = 327.68;
    attr.min        = -327.68;
    attr.nbits      = 16;
    attr.value      = pk->Obstacle_Data_I.Obstacle_Angle_Rate;
    can_send_sig(Obstacle_Angle_Rate_0x741, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 1;
    attr.value      = pk->Obstacle_Data_I.Obstacle_Replaced;
    can_send_sig(Obstacle_Replaced_0x741, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.0002;
    attr.offset     = 0;
    attr.max        = 6.5532;
    attr.min        = -6.5532;
    attr.nbits      = 16;
    attr.value      = pk->Obstacle_Data_I.Obstacle_Scale_Change;
    can_send_sig(Obstacle_Scale_Change_0x741, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 7;
    attr.min        = 0;
    attr.nbits      = 3;
    attr.value      = pk->Obstacle_Data_J.Blinker_Info;
    can_send_sig(Blinker_Info_0x742, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 7;
    attr.min        = 0;
    attr.nbits      = 3;
    attr.value      = pk->Obstacle_Data_J.Cut_in_and_out;
    can_send_sig(Cut_in_and_out_0x742, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 1;
    attr.value      = pk->Obstacle_Data_J.Obstacle_Brake_Light;
    can_send_sig(Obstacle_Brake_Light_0x742, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 63;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->Obstacle_Data_J.Obstacle_ID;
    can_send_sig(Obstacle_ID_0x742, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.0625;
    attr.offset     = 0;
    attr.max        = 250;
    attr.min        = 0;
    attr.nbits      = 12;
    attr.value      = pk->Obstacle_Data_J.Obstacle_Pos_X;
    can_send_sig(Obstacle_Pos_X_0x742, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.0625;
    attr.offset     = 0;
    attr.max        = 31.93;
    attr.min        = -31.93;
    attr.nbits      = 10;
    attr.value      = pk->Obstacle_Data_J.Obstacle_Pos_Y;
    can_send_sig(Obstacle_Pos_Y_0x742, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.0625;
    attr.offset     = 0;
    attr.max        = 127.93;
    attr.min        = -127.93;
    attr.nbits      = 12;
    attr.value      = pk->Obstacle_Data_J.Obstacle_Rel_Vel_X;
    can_send_sig(Obstacle_Rel_Vel_X_0x742, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 7;
    attr.min        = 0;
    attr.nbits      = 3;
    attr.value      = pk->Obstacle_Data_J.Obstacle_Status;
    can_send_sig(Obstacle_Status_0x742, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 7;
    attr.min        = 0;
    attr.nbits      = 3;
    attr.value      = pk->Obstacle_Data_J.Obstacle_Type;
    can_send_sig(Obstacle_Type_0x742, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 3;
    attr.min        = 0;
    attr.nbits      = 2;
    attr.value      = pk->Obstacle_Data_J.Obstacle_Valid;
    can_send_sig(Obstacle_Valid_0x742, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 1;
    attr.value      = pk->Obstacle_Data_K.CIPV_Flag;
    can_send_sig(CIPV_Flag_0x743, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 127;
    attr.min        = 0;
    attr.nbits      = 7;
    attr.value      = pk->Obstacle_Data_K.Matched_Radar_ID;
    can_send_sig(Matched_Radar_ID_0x743, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 255;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->Obstacle_Data_K.Obstacle_Age;
    can_send_sig(Obstacle_Age_0x743, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 3;
    attr.min        = 0;
    attr.nbits      = 2;
    attr.value      = pk->Obstacle_Data_K.Obstacle_Lane;
    can_send_sig(Obstacle_Lane_0x743, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.5;
    attr.offset     = 0;
    attr.max        = 31;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->Obstacle_Data_K.Obstacle_Legnth;
    can_send_sig(Obstacle_Legnth_0x743, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.05;
    attr.offset     = 0;
    attr.max        = 12.5;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->Obstacle_Data_K.Obstacle_Width;
    can_send_sig(Obstacle_Width_0x743, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 5;
    attr.min        = 0.5;
    attr.nbits      = 3;
    attr.value      = pk->Obstacle_Data_K.Radar_Match_Confidence;
    can_send_sig(Radar_Match_Confidence_0x743, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.0625;
    attr.offset     = 0;
    attr.max        = 250;
    attr.min        = 0;
    attr.nbits      = 12;
    attr.value      = pk->Obstacle_Data_K.Radar_Pos_X;
    can_send_sig(Radar_Pos_X_0x743, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.0625;
    attr.offset     = 0;
    attr.max        = 127.93;
    attr.min        = -127.93;
    attr.nbits      = 12;
    attr.value      = pk->Obstacle_Data_K.Radar_Vel_X;
    can_send_sig(Radar_Vel_X_0x743, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.03;
    attr.offset     = 0;
    attr.max        = 14.97;
    attr.min        = -14.97;
    attr.nbits      = 10;
    attr.value      = pk->Obstacle_Data_L.Object_Accel_X;
    can_send_sig(Object_Accel_X_0x744, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.01;
    attr.offset     = 0;
    attr.max        = 327.68;
    attr.min        = -327.68;
    attr.nbits      = 16;
    attr.value      = pk->Obstacle_Data_L.Obstacle_Angle;
    can_send_sig(Obstacle_Angle_0x744, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.01;
    attr.offset     = 0;
    attr.max        = 327.68;
    attr.min        = -327.68;
    attr.nbits      = 16;
    attr.value      = pk->Obstacle_Data_L.Obstacle_Angle_Rate;
    can_send_sig(Obstacle_Angle_Rate_0x744, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 1;
    attr.value      = pk->Obstacle_Data_L.Obstacle_Replaced;
    can_send_sig(Obstacle_Replaced_0x744, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.0002;
    attr.offset     = 0;
    attr.max        = 6.5532;
    attr.min        = -6.5532;
    attr.nbits      = 16;
    attr.value      = pk->Obstacle_Data_L.Obstacle_Scale_Change;
    can_send_sig(Obstacle_Scale_Change_0x744, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 7;
    attr.min        = 0;
    attr.nbits      = 3;
    attr.value      = pk->Obstacle_Data_M.Blinker_Info;
    can_send_sig(Blinker_Info_0x745, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 7;
    attr.min        = 0;
    attr.nbits      = 3;
    attr.value      = pk->Obstacle_Data_M.Cut_in_and_out;
    can_send_sig(Cut_in_and_out_0x745, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 1;
    attr.value      = pk->Obstacle_Data_M.Obstacle_Brake_Light;
    can_send_sig(Obstacle_Brake_Light_0x745, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 63;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->Obstacle_Data_M.Obstacle_ID;
    can_send_sig(Obstacle_ID_0x745, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.0625;
    attr.offset     = 0;
    attr.max        = 250;
    attr.min        = 0;
    attr.nbits      = 12;
    attr.value      = pk->Obstacle_Data_M.Obstacle_Pos_X;
    can_send_sig(Obstacle_Pos_X_0x745, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.0625;
    attr.offset     = 0;
    attr.max        = 31.93;
    attr.min        = -31.93;
    attr.nbits      = 10;
    attr.value      = pk->Obstacle_Data_M.Obstacle_Pos_Y;
    can_send_sig(Obstacle_Pos_Y_0x745, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.0625;
    attr.offset     = 0;
    attr.max        = 127.93;
    attr.min        = -127.93;
    attr.nbits      = 12;
    attr.value      = pk->Obstacle_Data_M.Obstacle_Rel_Vel_X;
    can_send_sig(Obstacle_Rel_Vel_X_0x745, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 7;
    attr.min        = 0;
    attr.nbits      = 3;
    attr.value      = pk->Obstacle_Data_M.Obstacle_Status;
    can_send_sig(Obstacle_Status_0x745, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 7;
    attr.min        = 0;
    attr.nbits      = 3;
    attr.value      = pk->Obstacle_Data_M.Obstacle_Type;
    can_send_sig(Obstacle_Type_0x745, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 3;
    attr.min        = 0;
    attr.nbits      = 2;
    attr.value      = pk->Obstacle_Data_M.Obstacle_Valid;
    can_send_sig(Obstacle_Valid_0x745, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 1;
    attr.value      = pk->Obstacle_Data_N.CIPV_Flag;
    can_send_sig(CIPV_Flag_0x746, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 127;
    attr.min        = 0;
    attr.nbits      = 7;
    attr.value      = pk->Obstacle_Data_N.Matched_Radar_ID;
    can_send_sig(Matched_Radar_ID_0x746, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 255;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->Obstacle_Data_N.Obstacle_Age;
    can_send_sig(Obstacle_Age_0x746, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 3;
    attr.min        = 0;
    attr.nbits      = 2;
    attr.value      = pk->Obstacle_Data_N.Obstacle_Lane;
    can_send_sig(Obstacle_Lane_0x746, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.5;
    attr.offset     = 0;
    attr.max        = 31;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->Obstacle_Data_N.Obstacle_Legnth;
    can_send_sig(Obstacle_Legnth_0x746, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.05;
    attr.offset     = 0;
    attr.max        = 12.5;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->Obstacle_Data_N.Obstacle_Width;
    can_send_sig(Obstacle_Width_0x746, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 5;
    attr.min        = 0.5;
    attr.nbits      = 3;
    attr.value      = pk->Obstacle_Data_N.Radar_Match_Confidence;
    can_send_sig(Radar_Match_Confidence_0x746, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.0625;
    attr.offset     = 0;
    attr.max        = 250;
    attr.min        = 0;
    attr.nbits      = 12;
    attr.value      = pk->Obstacle_Data_N.Radar_Pos_X;
    can_send_sig(Radar_Pos_X_0x746, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.0625;
    attr.offset     = 0;
    attr.max        = 127.93;
    attr.min        = -127.93;
    attr.nbits      = 12;
    attr.value      = pk->Obstacle_Data_N.Radar_Vel_X;
    can_send_sig(Radar_Vel_X_0x746, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.03;
    attr.offset     = 0;
    attr.max        = 14.97;
    attr.min        = -14.97;
    attr.nbits      = 10;
    attr.value      = pk->Obstacle_Data_O.Object_Accel_X;
    can_send_sig(Object_Accel_X_0x747, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.01;
    attr.offset     = 0;
    attr.max        = 327.68;
    attr.min        = -327.68;
    attr.nbits      = 16;
    attr.value      = pk->Obstacle_Data_O.Obstacle_Angle;
    can_send_sig(Obstacle_Angle_0x747, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.01;
    attr.offset     = 0;
    attr.max        = 327.68;
    attr.min        = -327.68;
    attr.nbits      = 16;
    attr.value      = pk->Obstacle_Data_O.Obstacle_Angle_Rate;
    can_send_sig(Obstacle_Angle_Rate_0x747, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 1;
    attr.value      = pk->Obstacle_Data_O.Obstacle_Replaced;
    can_send_sig(Obstacle_Replaced_0x747, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.0002;
    attr.offset     = 0;
    attr.max        = 6.5532;
    attr.min        = -6.5532;
    attr.nbits      = 16;
    attr.value      = pk->Obstacle_Data_O.Obstacle_Scale_Change;
    can_send_sig(Obstacle_Scale_Change_0x747, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 7;
    attr.min        = 0;
    attr.nbits      = 3;
    attr.value      = pk->Obstacle_Data_P.Blinker_Info;
    can_send_sig(Blinker_Info_0x748, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 7;
    attr.min        = 0;
    attr.nbits      = 3;
    attr.value      = pk->Obstacle_Data_P.Cut_in_and_out;
    can_send_sig(Cut_in_and_out_0x748, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 1;
    attr.value      = pk->Obstacle_Data_P.Obstacle_Brake_Light;
    can_send_sig(Obstacle_Brake_Light_0x748, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 63;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->Obstacle_Data_P.Obstacle_ID;
    can_send_sig(Obstacle_ID_0x748, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.0625;
    attr.offset     = 0;
    attr.max        = 250;
    attr.min        = 0;
    attr.nbits      = 12;
    attr.value      = pk->Obstacle_Data_P.Obstacle_Pos_X;
    can_send_sig(Obstacle_Pos_X_0x748, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.0625;
    attr.offset     = 0;
    attr.max        = 31.93;
    attr.min        = -31.93;
    attr.nbits      = 10;
    attr.value      = pk->Obstacle_Data_P.Obstacle_Pos_Y;
    can_send_sig(Obstacle_Pos_Y_0x748, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.0625;
    attr.offset     = 0;
    attr.max        = 127.93;
    attr.min        = -127.93;
    attr.nbits      = 12;
    attr.value      = pk->Obstacle_Data_P.Obstacle_Rel_Vel_X;
    can_send_sig(Obstacle_Rel_Vel_X_0x748, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 7;
    attr.min        = 0;
    attr.nbits      = 3;
    attr.value      = pk->Obstacle_Data_P.Obstacle_Status;
    can_send_sig(Obstacle_Status_0x748, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 7;
    attr.min        = 0;
    attr.nbits      = 3;
    attr.value      = pk->Obstacle_Data_P.Obstacle_Type;
    can_send_sig(Obstacle_Type_0x748, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 3;
    attr.min        = 0;
    attr.nbits      = 2;
    attr.value      = pk->Obstacle_Data_P.Obstacle_Valid;
    can_send_sig(Obstacle_Valid_0x748, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 1;
    attr.value      = pk->Obstacle_Data_Q.CIPV_Flag;
    can_send_sig(CIPV_Flag_0x749, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 127;
    attr.min        = 0;
    attr.nbits      = 7;
    attr.value      = pk->Obstacle_Data_Q.Matched_Radar_ID;
    can_send_sig(Matched_Radar_ID_0x749, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 255;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->Obstacle_Data_Q.Obstacle_Age;
    can_send_sig(Obstacle_Age_0x749, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 3;
    attr.min        = 0;
    attr.nbits      = 2;
    attr.value      = pk->Obstacle_Data_Q.Obstacle_Lane;
    can_send_sig(Obstacle_Lane_0x749, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.5;
    attr.offset     = 0;
    attr.max        = 31;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->Obstacle_Data_Q.Obstacle_Legnth;
    can_send_sig(Obstacle_Legnth_0x749, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.05;
    attr.offset     = 0;
    attr.max        = 12.5;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->Obstacle_Data_Q.Obstacle_Width;
    can_send_sig(Obstacle_Width_0x749, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 5;
    attr.min        = 0.5;
    attr.nbits      = 3;
    attr.value      = pk->Obstacle_Data_Q.Radar_Match_Confidence;
    can_send_sig(Radar_Match_Confidence_0x749, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.0625;
    attr.offset     = 0;
    attr.max        = 250;
    attr.min        = 0;
    attr.nbits      = 12;
    attr.value      = pk->Obstacle_Data_Q.Radar_Pos_X;
    can_send_sig(Radar_Pos_X_0x749, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.0625;
    attr.offset     = 0;
    attr.max        = 127.93;
    attr.min        = -127.93;
    attr.nbits      = 12;
    attr.value      = pk->Obstacle_Data_Q.Radar_Vel_X;
    can_send_sig(Radar_Vel_X_0x749, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.03;
    attr.offset     = 0;
    attr.max        = 14.97;
    attr.min        = -14.97;
    attr.nbits      = 10;
    attr.value      = pk->Obstacle_Data_R.Object_Accel_X;
    can_send_sig(Object_Accel_X_0x74A, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.01;
    attr.offset     = 0;
    attr.max        = 327.68;
    attr.min        = -327.68;
    attr.nbits      = 16;
    attr.value      = pk->Obstacle_Data_R.Obstacle_Angle;
    can_send_sig(Obstacle_Angle_0x74A, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.01;
    attr.offset     = 0;
    attr.max        = 327.68;
    attr.min        = -327.68;
    attr.nbits      = 16;
    attr.value      = pk->Obstacle_Data_R.Obstacle_Angle_Rate;
    can_send_sig(Obstacle_Angle_Rate_0x74A, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 1;
    attr.value      = pk->Obstacle_Data_R.Obstacle_Replaced;
    can_send_sig(Obstacle_Replaced_0x74A, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.0002;
    attr.offset     = 0;
    attr.max        = 6.5532;
    attr.min        = -6.5532;
    attr.nbits      = 16;
    attr.value      = pk->Obstacle_Data_R.Obstacle_Scale_Change;
    can_send_sig(Obstacle_Scale_Change_0x74A, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 7;
    attr.min        = 0;
    attr.nbits      = 3;
    attr.value      = pk->Obstacle_Data_S.Blinker_Info;
    can_send_sig(Blinker_Info_0x74B, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 7;
    attr.min        = 0;
    attr.nbits      = 3;
    attr.value      = pk->Obstacle_Data_S.Cut_in_and_out;
    can_send_sig(Cut_in_and_out_0x74B, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 1;
    attr.value      = pk->Obstacle_Data_S.Obstacle_Brake_Light;
    can_send_sig(Obstacle_Brake_Light_0x74B, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 63;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->Obstacle_Data_S.Obstacle_ID;
    can_send_sig(Obstacle_ID_0x74B, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.0625;
    attr.offset     = 0;
    attr.max        = 250;
    attr.min        = 0;
    attr.nbits      = 12;
    attr.value      = pk->Obstacle_Data_S.Obstacle_Pos_X;
    can_send_sig(Obstacle_Pos_X_0x74B, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.0625;
    attr.offset     = 0;
    attr.max        = 31.93;
    attr.min        = -31.93;
    attr.nbits      = 10;
    attr.value      = pk->Obstacle_Data_S.Obstacle_Pos_Y;
    can_send_sig(Obstacle_Pos_Y_0x74B, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.0625;
    attr.offset     = 0;
    attr.max        = 127.93;
    attr.min        = -127.93;
    attr.nbits      = 12;
    attr.value      = pk->Obstacle_Data_S.Obstacle_Rel_Vel_X;
    can_send_sig(Obstacle_Rel_Vel_X_0x74B, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 7;
    attr.min        = 0;
    attr.nbits      = 3;
    attr.value      = pk->Obstacle_Data_S.Obstacle_Status;
    can_send_sig(Obstacle_Status_0x74B, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 7;
    attr.min        = 0;
    attr.nbits      = 3;
    attr.value      = pk->Obstacle_Data_S.Obstacle_Type;
    can_send_sig(Obstacle_Type_0x74B, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 3;
    attr.min        = 0;
    attr.nbits      = 2;
    attr.value      = pk->Obstacle_Data_S.Obstacle_Valid;
    can_send_sig(Obstacle_Valid_0x74B, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 1;
    attr.value      = pk->Obstacle_Data_T.CIPV_Flag;
    can_send_sig(CIPV_Flag_0x74C, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 127;
    attr.min        = 0;
    attr.nbits      = 7;
    attr.value      = pk->Obstacle_Data_T.Matched_Radar_ID;
    can_send_sig(Matched_Radar_ID_0x74C, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 255;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->Obstacle_Data_T.Obstacle_Age;
    can_send_sig(Obstacle_Age_0x74C, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 3;
    attr.min        = 0;
    attr.nbits      = 2;
    attr.value      = pk->Obstacle_Data_T.Obstacle_Lane;
    can_send_sig(Obstacle_Lane_0x74C, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.5;
    attr.offset     = 0;
    attr.max        = 31;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->Obstacle_Data_T.Obstacle_Legnth;
    can_send_sig(Obstacle_Legnth_0x74C, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.05;
    attr.offset     = 0;
    attr.max        = 12.5;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->Obstacle_Data_T.Obstacle_Width;
    can_send_sig(Obstacle_Width_0x74C, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 5;
    attr.min        = 0.5;
    attr.nbits      = 3;
    attr.value      = pk->Obstacle_Data_T.Radar_Match_Confidence;
    can_send_sig(Radar_Match_Confidence_0x74C, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.0625;
    attr.offset     = 0;
    attr.max        = 250;
    attr.min        = 0;
    attr.nbits      = 12;
    attr.value      = pk->Obstacle_Data_T.Radar_Pos_X;
    can_send_sig(Radar_Pos_X_0x74C, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.0625;
    attr.offset     = 0;
    attr.max        = 127.93;
    attr.min        = -127.93;
    attr.nbits      = 12;
    attr.value      = pk->Obstacle_Data_T.Radar_Vel_X;
    can_send_sig(Radar_Vel_X_0x74C, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.03;
    attr.offset     = 0;
    attr.max        = 14.97;
    attr.min        = -14.97;
    attr.nbits      = 10;
    attr.value      = pk->Obstacle_Data_U.Object_Accel_X;
    can_send_sig(Object_Accel_X_0x74D, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.01;
    attr.offset     = 0;
    attr.max        = 327.68;
    attr.min        = -327.68;
    attr.nbits      = 16;
    attr.value      = pk->Obstacle_Data_U.Obstacle_Angle;
    can_send_sig(Obstacle_Angle_0x74D, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.01;
    attr.offset     = 0;
    attr.max        = 327.68;
    attr.min        = -327.68;
    attr.nbits      = 16;
    attr.value      = pk->Obstacle_Data_U.Obstacle_Angle_Rate;
    can_send_sig(Obstacle_Angle_Rate_0x74D, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 1;
    attr.value      = pk->Obstacle_Data_U.Obstacle_Replaced;
    can_send_sig(Obstacle_Replaced_0x74D, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.0002;
    attr.offset     = 0;
    attr.max        = 6.5532;
    attr.min        = -6.5532;
    attr.nbits      = 16;
    attr.value      = pk->Obstacle_Data_U.Obstacle_Scale_Change;
    can_send_sig(Obstacle_Scale_Change_0x74D, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 7;
    attr.min        = 0;
    attr.nbits      = 3;
    attr.value      = pk->Obstacle_Data_V.Blinker_Info;
    can_send_sig(Blinker_Info_0x74E, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 7;
    attr.min        = 0;
    attr.nbits      = 3;
    attr.value      = pk->Obstacle_Data_V.Cut_in_and_out;
    can_send_sig(Cut_in_and_out_0x74E, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 1;
    attr.value      = pk->Obstacle_Data_V.Obstacle_Brake_Light;
    can_send_sig(Obstacle_Brake_Light_0x74E, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 63;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->Obstacle_Data_V.Obstacle_ID;
    can_send_sig(Obstacle_ID_0x74E, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.0625;
    attr.offset     = 0;
    attr.max        = 250;
    attr.min        = 0;
    attr.nbits      = 12;
    attr.value      = pk->Obstacle_Data_V.Obstacle_Pos_X;
    can_send_sig(Obstacle_Pos_X_0x74E, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.0625;
    attr.offset     = 0;
    attr.max        = 31.93;
    attr.min        = -31.93;
    attr.nbits      = 10;
    attr.value      = pk->Obstacle_Data_V.Obstacle_Pos_Y;
    can_send_sig(Obstacle_Pos_Y_0x74E, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.0625;
    attr.offset     = 0;
    attr.max        = 127.93;
    attr.min        = -127.93;
    attr.nbits      = 12;
    attr.value      = pk->Obstacle_Data_V.Obstacle_Rel_Vel_X;
    can_send_sig(Obstacle_Rel_Vel_X_0x74E, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 7;
    attr.min        = 0;
    attr.nbits      = 3;
    attr.value      = pk->Obstacle_Data_V.Obstacle_Status;
    can_send_sig(Obstacle_Status_0x74E, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 7;
    attr.min        = 0;
    attr.nbits      = 3;
    attr.value      = pk->Obstacle_Data_V.Obstacle_Type;
    can_send_sig(Obstacle_Type_0x74E, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 3;
    attr.min        = 0;
    attr.nbits      = 2;
    attr.value      = pk->Obstacle_Data_V.Obstacle_Valid;
    can_send_sig(Obstacle_Valid_0x74E, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 1;
    attr.value      = pk->Obstacle_Data_W.CIPV_Flag;
    can_send_sig(CIPV_Flag_0x74F, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 127;
    attr.min        = 0;
    attr.nbits      = 7;
    attr.value      = pk->Obstacle_Data_W.Matched_Radar_ID;
    can_send_sig(Matched_Radar_ID_0x74F, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 255;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->Obstacle_Data_W.Obstacle_Age;
    can_send_sig(Obstacle_Age_0x74F, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 3;
    attr.min        = 0;
    attr.nbits      = 2;
    attr.value      = pk->Obstacle_Data_W.Obstacle_Lane;
    can_send_sig(Obstacle_Lane_0x74F, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.5;
    attr.offset     = 0;
    attr.max        = 31;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->Obstacle_Data_W.Obstacle_Legnth;
    can_send_sig(Obstacle_Legnth_0x74F, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.05;
    attr.offset     = 0;
    attr.max        = 12.5;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->Obstacle_Data_W.Obstacle_Width;
    can_send_sig(Obstacle_Width_0x74F, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 5;
    attr.min        = 0.5;
    attr.nbits      = 3;
    attr.value      = pk->Obstacle_Data_W.Radar_Match_Confidence;
    can_send_sig(Radar_Match_Confidence_0x74F, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.0625;
    attr.offset     = 0;
    attr.max        = 250;
    attr.min        = 0;
    attr.nbits      = 12;
    attr.value      = pk->Obstacle_Data_W.Radar_Pos_X;
    can_send_sig(Radar_Pos_X_0x74F, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.0625;
    attr.offset     = 0;
    attr.max        = 127.93;
    attr.min        = -127.93;
    attr.nbits      = 12;
    attr.value      = pk->Obstacle_Data_W.Radar_Vel_X;
    can_send_sig(Radar_Vel_X_0x74F, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.03;
    attr.offset     = 0;
    attr.max        = 14.97;
    attr.min        = -14.97;
    attr.nbits      = 10;
    attr.value      = pk->Obstacle_Data_X.Object_Accel_X;
    can_send_sig(Object_Accel_X_0x750, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.01;
    attr.offset     = 0;
    attr.max        = 327.68;
    attr.min        = -327.68;
    attr.nbits      = 16;
    attr.value      = pk->Obstacle_Data_X.Obstacle_Angle;
    can_send_sig(Obstacle_Angle_0x750, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.01;
    attr.offset     = 0;
    attr.max        = 327.68;
    attr.min        = -327.68;
    attr.nbits      = 16;
    attr.value      = pk->Obstacle_Data_X.Obstacle_Angle_Rate;
    can_send_sig(Obstacle_Angle_Rate_0x750, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 1;
    attr.value      = pk->Obstacle_Data_X.Obstacle_Replaced;
    can_send_sig(Obstacle_Replaced_0x750, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.0002;
    attr.offset     = 0;
    attr.max        = 6.5532;
    attr.min        = -6.5532;
    attr.nbits      = 16;
    attr.value      = pk->Obstacle_Data_X.Obstacle_Scale_Change;
    can_send_sig(Obstacle_Scale_Change_0x750, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 3;
    attr.min        = 0;
    attr.nbits      = 2;
    attr.value      = pk->Obstacle_Status.Active_Version_Number_Section;
    can_send_sig(Active_Version_Number_Section_0x738, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 255;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->Obstacle_Status.Application_Version;
    can_send_sig(Application_Version_0x738, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 1;
    attr.value      = pk->Obstacle_Status.Close_Car;
    can_send_sig(Close_Car_0x738, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 7;
    attr.min        = 0;
    attr.nbits      = 4;
    attr.value      = pk->Obstacle_Status.Failsafe;
    can_send_sig(Failsafe_0x738, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 15;
    attr.min        = 0;
    attr.nbits      = 4;
    attr.value      = pk->Obstacle_Status.Go;
    can_send_sig(Go_0x738, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 1;
    attr.value      = pk->Obstacle_Status.Left_close_rang_cut_in;
    can_send_sig(Left_close_rang_cut_in_0x738, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 255;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->Obstacle_Status.Num_Obstacles;
    can_send_sig(Num_Obstacles_0x738, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 255;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->Obstacle_Status.Protocol_Version;
    can_send_sig(Protocol_Version_0x738, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 1;
    attr.value      = pk->Obstacle_Status.Right_close_rang_cut_in;
    can_send_sig(Right_close_rang_cut_in_0x738, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 255;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->Obstacle_Status.Timestamp;
    can_send_sig(Timestamp_0x738, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.00390625;
    attr.offset     = 0;
    attr.max        = 127.996;
    attr.min        = 0;
    attr.nbits      = 15;
    attr.value      = pk->Reference_points.Ref_point_1_Distance;
    can_send_sig(Ref_point_1_Distance_0x76A, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.00390625;
    attr.offset     = -127.996;
    attr.max        = 127.996;
    attr.min        = -127.996;
    attr.nbits      = 16;
    attr.value      = pk->Reference_points.Ref_point_1_Position;
    can_send_sig(Ref_point_1_Position_0x76A, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 1;
    attr.value      = pk->Reference_points.Ref_point_1_validity;
    can_send_sig(Ref_point_1_validity_0x76A, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.00390625;
    attr.offset     = 0;
    attr.max        = 127.996;
    attr.min        = 0;
    attr.nbits      = 15;
    attr.value      = pk->Reference_points.Ref_point_2_Distance;
    can_send_sig(Ref_point_2_Distance_0x76A, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.00390625;
    attr.offset     = -127.996;
    attr.max        = 127.996;
    attr.min        = -127.996;
    attr.nbits      = 16;
    attr.value      = pk->Reference_points.Ref_point_2_Position;
    can_send_sig(Ref_point_2_Position_0x76A, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 1;
    attr.min        = 0;
    attr.nbits      = 1;
    attr.value      = pk->Reference_points.Ref_point_2_validity;
    can_send_sig(Ref_point_2_validity_0x76A, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 255;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->Sign_Type.Supplementary_Sign_Type_Display1;
    can_send_sig(Supplementary_Sign_Type_Display1_0x727, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 255;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->Sign_Type.Supplementary_Sign_Type_Display2;
    can_send_sig(Supplementary_Sign_Type_Display2_0x727, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 255;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->Sign_Type.Supplementary_Sign_Type_Display3;
    can_send_sig(Supplementary_Sign_Type_Display3_0x727, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 255;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->Sign_Type.Supplementary_Sign_Type_Display4;
    can_send_sig(Supplementary_Sign_Type_Display4_0x727, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 255;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->Sign_Type.Vision_only_Sign_Type_Display1;
    can_send_sig(Vision_only_Sign_Type_Display1_0x727, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 255;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->Sign_Type.Vision_only_Sign_Type_Display2;
    can_send_sig(Vision_only_Sign_Type_Display2_0x727, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 255;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->Sign_Type.Vision_only_Sign_Type_Display3;
    can_send_sig(Vision_only_Sign_Type_Display3_0x727, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 255;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->Sign_Type.Vision_only_Sign_Type_Display4;
    can_send_sig(Vision_only_Sign_Type_Display4_0x727, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 255;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->TSR_message_A.Filter_Type;
    can_send_sig(Filter_Type_0x720, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.5;
    attr.offset     = 0;
    attr.max        = 122;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->TSR_message_A.Sign_Position_X;
    can_send_sig(Sign_Position_X_0x720, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.5;
    attr.offset     = 0;
    attr.max        = 31;
    attr.min        = -32;
    attr.nbits      = 8;
    attr.value      = pk->TSR_message_A.Sign_Position_Y;
    can_send_sig(Sign_Position_Y_0x720, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.5;
    attr.offset     = 0;
    attr.max        = 16;
    attr.min        = -16;
    attr.nbits      = 8;
    attr.value      = pk->TSR_message_A.Sign_Position_Z;
    can_send_sig(Sign_Position_Z_0x720, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 255;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->TSR_message_A.Supplementary_Sign_Type;
    can_send_sig(Supplementary_Sign_Type_0x720, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 255;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->TSR_message_A.Vision_only_Sign_Type;
    can_send_sig(Vision_only_Sign_Type_0x720, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 255;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->TSR_message_B.Filter_Type;
    can_send_sig(Filter_Type_0x721, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.5;
    attr.offset     = 0;
    attr.max        = 122;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->TSR_message_B.Sign_Position_X;
    can_send_sig(Sign_Position_X_0x721, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.5;
    attr.offset     = 0;
    attr.max        = 31;
    attr.min        = -32;
    attr.nbits      = 8;
    attr.value      = pk->TSR_message_B.Sign_Position_Y;
    can_send_sig(Sign_Position_Y_0x721, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.5;
    attr.offset     = 0;
    attr.max        = 16;
    attr.min        = -16;
    attr.nbits      = 8;
    attr.value      = pk->TSR_message_B.Sign_Position_Z;
    can_send_sig(Sign_Position_Z_0x721, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 255;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->TSR_message_B.Supplementary_Sign_Type;
    can_send_sig(Supplementary_Sign_Type_0x721, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 255;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->TSR_message_B.Vision_only_Sign_Type;
    can_send_sig(Vision_only_Sign_Type_0x721, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 255;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->TSR_message_C.Filter_Type;
    can_send_sig(Filter_Type_0x722, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.5;
    attr.offset     = 0;
    attr.max        = 122;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->TSR_message_C.Sign_Position_X;
    can_send_sig(Sign_Position_X_0x722, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.5;
    attr.offset     = 0;
    attr.max        = 31;
    attr.min        = -32;
    attr.nbits      = 8;
    attr.value      = pk->TSR_message_C.Sign_Position_Y;
    can_send_sig(Sign_Position_Y_0x722, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.5;
    attr.offset     = 0;
    attr.max        = 16;
    attr.min        = -16;
    attr.nbits      = 8;
    attr.value      = pk->TSR_message_C.Sign_Position_Z;
    can_send_sig(Sign_Position_Z_0x722, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 255;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->TSR_message_C.Supplementary_Sign_Type;
    can_send_sig(Supplementary_Sign_Type_0x722, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 255;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->TSR_message_C.Vision_only_Sign_Type;
    can_send_sig(Vision_only_Sign_Type_0x722, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 255;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->TSR_message_D.Filter_Type;
    can_send_sig(Filter_Type_0x723, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.5;
    attr.offset     = 0;
    attr.max        = 122;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->TSR_message_D.Sign_Position_X;
    can_send_sig(Sign_Position_X_0x723, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.5;
    attr.offset     = 0;
    attr.max        = 31;
    attr.min        = -32;
    attr.nbits      = 8;
    attr.value      = pk->TSR_message_D.Sign_Position_Y;
    can_send_sig(Sign_Position_Y_0x723, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.5;
    attr.offset     = 0;
    attr.max        = 16;
    attr.min        = -16;
    attr.nbits      = 8;
    attr.value      = pk->TSR_message_D.Sign_Position_Z;
    can_send_sig(Sign_Position_Z_0x723, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 255;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->TSR_message_D.Supplementary_Sign_Type;
    can_send_sig(Supplementary_Sign_Type_0x723, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 255;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->TSR_message_D.Vision_only_Sign_Type;
    can_send_sig(Vision_only_Sign_Type_0x723, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 255;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->TSR_message_E.Filter_Type;
    can_send_sig(Filter_Type_0x724, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.5;
    attr.offset     = 0;
    attr.max        = 122;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->TSR_message_E.Sign_Position_X;
    can_send_sig(Sign_Position_X_0x724, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.5;
    attr.offset     = 0;
    attr.max        = 31;
    attr.min        = -32;
    attr.nbits      = 8;
    attr.value      = pk->TSR_message_E.Sign_Position_Y;
    can_send_sig(Sign_Position_Y_0x724, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.5;
    attr.offset     = 0;
    attr.max        = 16;
    attr.min        = -16;
    attr.nbits      = 8;
    attr.value      = pk->TSR_message_E.Sign_Position_Z;
    can_send_sig(Sign_Position_Z_0x724, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 255;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->TSR_message_E.Supplementary_Sign_Type;
    can_send_sig(Supplementary_Sign_Type_0x724, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 255;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->TSR_message_E.Vision_only_Sign_Type;
    can_send_sig(Vision_only_Sign_Type_0x724, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 255;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->TSR_message_F.Filter_Type;
    can_send_sig(Filter_Type_0x725, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.5;
    attr.offset     = 0;
    attr.max        = 122;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->TSR_message_F.Sign_Position_X;
    can_send_sig(Sign_Position_X_0x725, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.5;
    attr.offset     = 0;
    attr.max        = 31;
    attr.min        = -32;
    attr.nbits      = 8;
    attr.value      = pk->TSR_message_F.Sign_Position_Y;
    can_send_sig(Sign_Position_Y_0x725, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.5;
    attr.offset     = 0;
    attr.max        = 16;
    attr.min        = -16;
    attr.nbits      = 8;
    attr.value      = pk->TSR_message_F.Sign_Position_Z;
    can_send_sig(Sign_Position_Z_0x725, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 255;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->TSR_message_F.Supplementary_Sign_Type;
    can_send_sig(Supplementary_Sign_Type_0x725, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 255;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->TSR_message_F.Vision_only_Sign_Type;
    can_send_sig(Vision_only_Sign_Type_0x725, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 255;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->TSR_message_G.Filter_Type;
    can_send_sig(Filter_Type_0x726, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 0.5;
    attr.offset     = 0;
    attr.max        = 122;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->TSR_message_G.Sign_Position_X;
    can_send_sig(Sign_Position_X_0x726, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.5;
    attr.offset     = 0;
    attr.max        = 31;
    attr.min        = -32;
    attr.nbits      = 8;
    attr.value      = pk->TSR_message_G.Sign_Position_Y;
    can_send_sig(Sign_Position_Y_0x726, data_conv(&attr));


    attr.data_type  = Signed;
    attr.factor     = 0.5;
    attr.offset     = 0;
    attr.max        = 16;
    attr.min        = -16;
    attr.nbits      = 8;
    attr.value      = pk->TSR_message_G.Sign_Position_Z;
    can_send_sig(Sign_Position_Z_0x726, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 255;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->TSR_message_G.Supplementary_Sign_Type;
    can_send_sig(Supplementary_Sign_Type_0x726, data_conv(&attr));


    attr.data_type  = Unsigned;
    attr.factor     = 1;
    attr.offset     = 0;
    attr.max        = 255;
    attr.min        = 0;
    attr.nbits      = 8;
    attr.value      = pk->TSR_message_G.Vision_only_Sign_Type;
    can_send_sig(Vision_only_Sign_Type_0x726, data_conv(&attr));


}
