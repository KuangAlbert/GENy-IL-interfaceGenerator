/******************************************************************************************************
This C file is modified according to DBC and is generally not allowed to be changed.
Code generator version: V1.1
Author: KuangBaoFengLei
Date: 2018/09/24
Gen time: 2018-09-24 16:00:03 
======================================================================================================*/
#ifndef DCANTX_GEN_H_
#define DCANTX_GEN_H_


typedef struct
{
    float Boundary_bottom_HLB;
    float Boundary_left_hand_HLB;
    float Boundary_right_hand_HLB;
    float Busy_Scene;
    float Left_Target_Change;
    float Object_Distance_HLB;
    float Right_Target_Change;
    float Status_Bottom_HLB;
    float Status_Left_Hand_HLB;
    float Status_Object_Distance_HLB;
    float Status_Right_Hand_HLB;
    float Too_Many_Cars;
}_AHBC_Gradual;

typedef struct
{
    float Binary_high_low_beam_decision;
    float Reasons_for_switch_to_low_beam;
}_AHBC_high_low_beam;

typedef struct
{
    float Dusk_Time_Indicator;
    float Failsafe;
    float FCW_on;
    float Headway_measurement;
    float Headway_valid;
    float Headway_Warning_Level;
    float Lanes_On;
    float Left_Crossing;
    float Left_LDW_ON;
    float Maintenanc;
    float Night_Time_Indicator;
    float Peds_FCW;
    float Peds_in_DZ;
    float Right_Crossing;
    float Right_LDW_ON;
    float Sound_type;
    float Suppress;
}_C2_Display_and_warning;

typedef struct
{
    float Brakes;
    float High_Beam;
    float High_Beam_Available;
    float Left_Signal;
    float Low_Beam;
    float Low_Beam_available;
    float Right_Signal;
    float Speed;
    float Speed_Available;
    float Wipers;
    float Wipers_available;
}_Car_Info;

typedef struct
{
    float Distance_To_Left_Lane;
    float Distance_To_Right_Lane;
    float Lane_Confidence_Left;
    float Lane_Confidence_Right;
    float Lane_Type_Left;
    float Lane_Type_Right;
    float LDW_Availability_Left;
    float LDW_Availability_Right;
    float Undocumented1;
    float Undocumented2;
}_Detils_Lane;

typedef struct
{
    float Fixed_Horizon;
    float Fixed_Yaw;
}_Fixed_FOE;

typedef struct
{
    float CA;
    float Lane_Curvature;
    float Lane_Heading;
    float Left_LDW_Availability;
    float Pitch_Angle;
    float Right_LDW_Availability;
    float Yaw_Angle;
}_Lane;

typedef struct
{
    float Curvature_derivative_C3;
    float Curvature_Parameter_C2;
    float Lane_type;
    float Model_degree;
    float Position_Parameter_C0;
    float Quality;
    float Width_left_marking;
}_LKA_left_lane_A;

typedef struct
{
    float Heading_angle_Parameter_C1;
    float View_range;
    float View_range_availability;
}_LKA_left_lane_B;

typedef struct
{
    float Curvature_derivative_C3;
    float Curvature_Parameter_C2;
    float Lane_type;
    float Model_degree;
    float Position_Parameter_C0;
    float Quality;
    float Width_right_marking;
}_LKA_right_lane_A;

typedef struct
{
    float Heading_angle_Parameter_C1;
    float View_range;
    float View_range_availability;
}_LKA_right_lane_B;

typedef struct
{
    float Curvature_derivative_C3;
    float Curvature_Parameter_C2;
    float Lane_mark_width;
    float Lane_type;
    float Model_degree;
    float Position_Parameter_C0;
    float Quality;
}_Next_lane_Left_A;

typedef struct
{
    float Heading_angle_Parameter_C1;
    float View_range;
    float View_range_availability;
}_Next_lane_Left_B;

typedef struct
{
    float Curvature_derivative_C3;
    float Curvature_Parameter_C2;
    float Lane_mark_width;
    float Lane_type;
    float Model_degree;
    float Position_Parameter_C0;
    float Quality;
}_Next_lane_Left_E;

typedef struct
{
    float Heading_angle_Parameter_C1;
    float View_range;
    float View_range_availability;
}_Next_lane_Left_F;

typedef struct
{
    float Curvature_derivative_C3;
    float Curvature_Parameter_C2;
    float Lane_mark_width;
    float Lane_type;
    float Model_degree;
    float Position_Parameter_C0;
    float Quality;
}_Next_lane_Left_I;

typedef struct
{
    float Heading_angle_Parameter_C1;
    float View_range;
    float View_range_availability;
}_Next_lane_Left_J;

typedef struct
{
    float Curvature_derivative_C3;
    float Curvature_Parameter_C2;
    float Lane_mark_width;
    float Lane_type;
    float Model_degree;
    float Position_Parameter_C0;
    float Quality;
}_Next_lane_Left_M;

typedef struct
{
    float Heading_angle_Parameter_C1;
    float View_range;
    float View_range_availability;
}_Next_lane_Left_N;

typedef struct
{
    float Curvature_derivative_C3;
    float Curvature_Parameter_C2;
    float Lane_mark_width;
    float Lane_type;
    float Model_degree;
    float Position_Parameter_C0;
    float Quality;
}_Next_lane_Right_C;

typedef struct
{
    float Heading_angle_Parameter_C1;
    float View_range;
    float View_range_availability;
}_Next_lane_Right_D;

typedef struct
{
    float Curvature_derivative_C3;
    float Curvature_Parameter_C2;
    float Lane_mark_width;
    float Lane_type;
    float Model_degree;
    float Position_Parameter_C0;
    float Quality;
}_Next_lane_Right_G;

typedef struct
{
    float Heading_angle_Parameter_C1;
    float View_range;
    float View_range_availability;
}_Next_lane_Right_H;

typedef struct
{
    float Curvature_derivative_C3;
    float Curvature_Parameter_C2;
    float Lane_mark_width;
    float Lane_type;
    float Model_degree;
    float Position_Parameter_C0;
    float Quality;
}_Next_lane_Right_K;

typedef struct
{
    float Heading_angle_Parameter_C1;
    float View_range;
    float View_range_availability;
}_Next_lane_Right_L;

typedef struct
{
    float Curvature_derivative_C3;
    float Curvature_Parameter_C2;
    float Lane_mark_width;
    float Lane_type;
    float Model_degree;
    float Position_Parameter_C0;
    float Quality;
}_Next_lane_Right_O;

typedef struct
{
    float Heading_angle_Parameter_C1;
    float View_range;
    float View_range_availability;
}_Next_lane_Right_P;

typedef struct
{
    float Number_lane_markers_reported;
}_Numebr_of_next_lane;

typedef struct
{
    float Blinker_Info;
    float Cut_in_and_out;
    float Obstacle_Brake_Light;
    float Obstacle_ID;
    float Obstacle_Pos_X;
    float Obstacle_Pos_Y;
    float Obstacle_Rel_Vel_X;
    float Obstacle_Status;
    float Obstacle_Type;
    float Obstacle_Valid;
}_Obstacle_Data_A;

typedef struct
{
    float CIPV_Flag;
    float Matched_Radar_ID;
    float Obstacle_Age;
    float Obstacle_Lane;
    float Obstacle_Legnth;
    float Obstacle_Width;
    float Radar_Match_Confidence;
    float Radar_Pos_X;
    float Radar_Vel_X;
}_Obstacle_Data_B;

typedef struct
{
    float Object_Accel_X;
    float Obstacle_Angle;
    float Obstacle_Angle_Rate;
    float Obstacle_Replaced;
    float Obstacle_Scale_Change;
}_Obstacle_Data_C;

typedef struct
{
    float Blinker_Info;
    float Cut_in_and_out;
    float Obstacle_Brake_Light;
    float Obstacle_ID;
    float Obstacle_Pos_X;
    float Obstacle_Pos_Y;
    float Obstacle_Rel_Vel_X;
    float Obstacle_Status;
    float Obstacle_Type;
    float Obstacle_Valid;
}_Obstacle_Data_D;

typedef struct
{
    float CIPV_Flag;
    float Matched_Radar_ID;
    float Obstacle_Age;
    float Obstacle_Lane;
    float Obstacle_Legnth;
    float Obstacle_Width;
    float Radar_Match_Confidence;
    float Radar_Pos_X;
    float Radar_Vel_X;
}_Obstacle_Data_E;

typedef struct
{
    float Object_Accel_X;
    float Obstacle_Angle;
    float Obstacle_Angle_Rate;
    float Obstacle_Replaced;
    float Obstacle_Scale_Change;
}_Obstacle_Data_F;

typedef struct
{
    float Blinker_Info;
    float Cut_in_and_out;
    float Obstacle_Brake_Light;
    float Obstacle_ID;
    float Obstacle_Pos_X;
    float Obstacle_Pos_Y;
    float Obstacle_Rel_Vel_X;
    float Obstacle_Status;
    float Obstacle_Type;
    float Obstacle_Valid;
}_Obstacle_Data_G;

typedef struct
{
    float CIPV_Flag;
    float Matched_Radar_ID;
    float Obstacle_Age;
    float Obstacle_Lane;
    float Obstacle_Legnth;
    float Obstacle_Width;
    float Radar_Match_Confidence;
    float Radar_Pos_X;
    float Radar_Vel_X;
}_Obstacle_Data_H;

typedef struct
{
    float Object_Accel_X;
    float Obstacle_Angle;
    float Obstacle_Angle_Rate;
    float Obstacle_Replaced;
    float Obstacle_Scale_Change;
}_Obstacle_Data_I;

typedef struct
{
    float Blinker_Info;
    float Cut_in_and_out;
    float Obstacle_Brake_Light;
    float Obstacle_ID;
    float Obstacle_Pos_X;
    float Obstacle_Pos_Y;
    float Obstacle_Rel_Vel_X;
    float Obstacle_Status;
    float Obstacle_Type;
    float Obstacle_Valid;
}_Obstacle_Data_J;

typedef struct
{
    float CIPV_Flag;
    float Matched_Radar_ID;
    float Obstacle_Age;
    float Obstacle_Lane;
    float Obstacle_Legnth;
    float Obstacle_Width;
    float Radar_Match_Confidence;
    float Radar_Pos_X;
    float Radar_Vel_X;
}_Obstacle_Data_K;

typedef struct
{
    float Object_Accel_X;
    float Obstacle_Angle;
    float Obstacle_Angle_Rate;
    float Obstacle_Replaced;
    float Obstacle_Scale_Change;
}_Obstacle_Data_L;

typedef struct
{
    float Blinker_Info;
    float Cut_in_and_out;
    float Obstacle_Brake_Light;
    float Obstacle_ID;
    float Obstacle_Pos_X;
    float Obstacle_Pos_Y;
    float Obstacle_Rel_Vel_X;
    float Obstacle_Status;
    float Obstacle_Type;
    float Obstacle_Valid;
}_Obstacle_Data_M;

typedef struct
{
    float CIPV_Flag;
    float Matched_Radar_ID;
    float Obstacle_Age;
    float Obstacle_Lane;
    float Obstacle_Legnth;
    float Obstacle_Width;
    float Radar_Match_Confidence;
    float Radar_Pos_X;
    float Radar_Vel_X;
}_Obstacle_Data_N;

typedef struct
{
    float Object_Accel_X;
    float Obstacle_Angle;
    float Obstacle_Angle_Rate;
    float Obstacle_Replaced;
    float Obstacle_Scale_Change;
}_Obstacle_Data_O;

typedef struct
{
    float Blinker_Info;
    float Cut_in_and_out;
    float Obstacle_Brake_Light;
    float Obstacle_ID;
    float Obstacle_Pos_X;
    float Obstacle_Pos_Y;
    float Obstacle_Rel_Vel_X;
    float Obstacle_Status;
    float Obstacle_Type;
    float Obstacle_Valid;
}_Obstacle_Data_P;

typedef struct
{
    float CIPV_Flag;
    float Matched_Radar_ID;
    float Obstacle_Age;
    float Obstacle_Lane;
    float Obstacle_Legnth;
    float Obstacle_Width;
    float Radar_Match_Confidence;
    float Radar_Pos_X;
    float Radar_Vel_X;
}_Obstacle_Data_Q;

typedef struct
{
    float Object_Accel_X;
    float Obstacle_Angle;
    float Obstacle_Angle_Rate;
    float Obstacle_Replaced;
    float Obstacle_Scale_Change;
}_Obstacle_Data_R;

typedef struct
{
    float Blinker_Info;
    float Cut_in_and_out;
    float Obstacle_Brake_Light;
    float Obstacle_ID;
    float Obstacle_Pos_X;
    float Obstacle_Pos_Y;
    float Obstacle_Rel_Vel_X;
    float Obstacle_Status;
    float Obstacle_Type;
    float Obstacle_Valid;
}_Obstacle_Data_S;

typedef struct
{
    float CIPV_Flag;
    float Matched_Radar_ID;
    float Obstacle_Age;
    float Obstacle_Lane;
    float Obstacle_Legnth;
    float Obstacle_Width;
    float Radar_Match_Confidence;
    float Radar_Pos_X;
    float Radar_Vel_X;
}_Obstacle_Data_T;

typedef struct
{
    float Object_Accel_X;
    float Obstacle_Angle;
    float Obstacle_Angle_Rate;
    float Obstacle_Replaced;
    float Obstacle_Scale_Change;
}_Obstacle_Data_U;

typedef struct
{
    float Blinker_Info;
    float Cut_in_and_out;
    float Obstacle_Brake_Light;
    float Obstacle_ID;
    float Obstacle_Pos_X;
    float Obstacle_Pos_Y;
    float Obstacle_Rel_Vel_X;
    float Obstacle_Status;
    float Obstacle_Type;
    float Obstacle_Valid;
}_Obstacle_Data_V;

typedef struct
{
    float CIPV_Flag;
    float Matched_Radar_ID;
    float Obstacle_Age;
    float Obstacle_Lane;
    float Obstacle_Legnth;
    float Obstacle_Width;
    float Radar_Match_Confidence;
    float Radar_Pos_X;
    float Radar_Vel_X;
}_Obstacle_Data_W;

typedef struct
{
    float Object_Accel_X;
    float Obstacle_Angle;
    float Obstacle_Angle_Rate;
    float Obstacle_Replaced;
    float Obstacle_Scale_Change;
}_Obstacle_Data_X;

typedef struct
{
    float Active_Version_Number_Section;
    float Application_Version;
    float Close_Car;
    float Failsafe;
    float Go;
    float Left_close_rang_cut_in;
    float Num_Obstacles;
    float Protocol_Version;
    float Right_close_rang_cut_in;
    float Timestamp;
}_Obstacle_Status;

typedef struct
{
    float Ref_point_1_Distance;
    float Ref_point_1_Position;
    float Ref_point_1_validity;
    float Ref_point_2_Distance;
    float Ref_point_2_Position;
    float Ref_point_2_validity;
}_Reference_points;

typedef struct
{
    float Supplementary_Sign_Type_Display1;
    float Supplementary_Sign_Type_Display2;
    float Supplementary_Sign_Type_Display3;
    float Supplementary_Sign_Type_Display4;
    float Vision_only_Sign_Type_Display1;
    float Vision_only_Sign_Type_Display2;
    float Vision_only_Sign_Type_Display3;
    float Vision_only_Sign_Type_Display4;
}_Sign_Type;

typedef struct
{
    float Filter_Type;
    float Sign_Position_X;
    float Sign_Position_Y;
    float Sign_Position_Z;
    float Supplementary_Sign_Type;
    float Vision_only_Sign_Type;
}_TSR_message_A;

typedef struct
{
    float Filter_Type;
    float Sign_Position_X;
    float Sign_Position_Y;
    float Sign_Position_Z;
    float Supplementary_Sign_Type;
    float Vision_only_Sign_Type;
}_TSR_message_B;

typedef struct
{
    float Filter_Type;
    float Sign_Position_X;
    float Sign_Position_Y;
    float Sign_Position_Z;
    float Supplementary_Sign_Type;
    float Vision_only_Sign_Type;
}_TSR_message_C;

typedef struct
{
    float Filter_Type;
    float Sign_Position_X;
    float Sign_Position_Y;
    float Sign_Position_Z;
    float Supplementary_Sign_Type;
    float Vision_only_Sign_Type;
}_TSR_message_D;

typedef struct
{
    float Filter_Type;
    float Sign_Position_X;
    float Sign_Position_Y;
    float Sign_Position_Z;
    float Supplementary_Sign_Type;
    float Vision_only_Sign_Type;
}_TSR_message_E;

typedef struct
{
    float Filter_Type;
    float Sign_Position_X;
    float Sign_Position_Y;
    float Sign_Position_Z;
    float Supplementary_Sign_Type;
    float Vision_only_Sign_Type;
}_TSR_message_F;

typedef struct
{
    float Filter_Type;
    float Sign_Position_X;
    float Sign_Position_Y;
    float Sign_Position_Z;
    float Supplementary_Sign_Type;
    float Vision_only_Sign_Type;
}_TSR_message_G;

typedef struct __dcanTxDataPacket
{
    _AHBC_Gradual  AHBC_Gradual;
    _AHBC_high_low_beam  AHBC_high_low_beam;
    _C2_Display_and_warning  C2_Display_and_warning;
    _Car_Info  Car_Info;
    _Detils_Lane  Detils_Lane;
    _Fixed_FOE  Fixed_FOE;
    _Lane  Lane;
    _LKA_left_lane_A  LKA_left_lane_A;
    _LKA_left_lane_B  LKA_left_lane_B;
    _LKA_right_lane_A  LKA_right_lane_A;
    _LKA_right_lane_B  LKA_right_lane_B;
    _Next_lane_Left_A  Next_lane_Left_A;
    _Next_lane_Left_B  Next_lane_Left_B;
    _Next_lane_Left_E  Next_lane_Left_E;
    _Next_lane_Left_F  Next_lane_Left_F;
    _Next_lane_Left_I  Next_lane_Left_I;
    _Next_lane_Left_J  Next_lane_Left_J;
    _Next_lane_Left_M  Next_lane_Left_M;
    _Next_lane_Left_N  Next_lane_Left_N;
    _Next_lane_Right_C  Next_lane_Right_C;
    _Next_lane_Right_D  Next_lane_Right_D;
    _Next_lane_Right_G  Next_lane_Right_G;
    _Next_lane_Right_H  Next_lane_Right_H;
    _Next_lane_Right_K  Next_lane_Right_K;
    _Next_lane_Right_L  Next_lane_Right_L;
    _Next_lane_Right_O  Next_lane_Right_O;
    _Next_lane_Right_P  Next_lane_Right_P;
    _Numebr_of_next_lane  Numebr_of_next_lane;
    _Obstacle_Data_A  Obstacle_Data_A;
    _Obstacle_Data_B  Obstacle_Data_B;
    _Obstacle_Data_C  Obstacle_Data_C;
    _Obstacle_Data_D  Obstacle_Data_D;
    _Obstacle_Data_E  Obstacle_Data_E;
    _Obstacle_Data_F  Obstacle_Data_F;
    _Obstacle_Data_G  Obstacle_Data_G;
    _Obstacle_Data_H  Obstacle_Data_H;
    _Obstacle_Data_I  Obstacle_Data_I;
    _Obstacle_Data_J  Obstacle_Data_J;
    _Obstacle_Data_K  Obstacle_Data_K;
    _Obstacle_Data_L  Obstacle_Data_L;
    _Obstacle_Data_M  Obstacle_Data_M;
    _Obstacle_Data_N  Obstacle_Data_N;
    _Obstacle_Data_O  Obstacle_Data_O;
    _Obstacle_Data_P  Obstacle_Data_P;
    _Obstacle_Data_Q  Obstacle_Data_Q;
    _Obstacle_Data_R  Obstacle_Data_R;
    _Obstacle_Data_S  Obstacle_Data_S;
    _Obstacle_Data_T  Obstacle_Data_T;
    _Obstacle_Data_U  Obstacle_Data_U;
    _Obstacle_Data_V  Obstacle_Data_V;
    _Obstacle_Data_W  Obstacle_Data_W;
    _Obstacle_Data_X  Obstacle_Data_X;
    _Obstacle_Status  Obstacle_Status;
    _Reference_points  Reference_points;
    _Sign_Type  Sign_Type;
    _TSR_message_A  TSR_message_A;
    _TSR_message_B  TSR_message_B;
    _TSR_message_C  TSR_message_C;
    _TSR_message_D  TSR_message_D;
    _TSR_message_E  TSR_message_E;
    _TSR_message_F  TSR_message_F;
    _TSR_message_G  TSR_message_G;
} _DcanTxDataPacket;

#endif /* DCANTX_GEN_H_ */
