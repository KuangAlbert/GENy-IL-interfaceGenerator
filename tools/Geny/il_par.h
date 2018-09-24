/* -----------------------------------------------------------------------------
  Filename:    il_par.h
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

#if !defined(__IL_PAR_H__)
#define __IL_PAR_H__

/* -----------------------------------------------------------------------------
    &&&~ Typedefs
 ----------------------------------------------------------------------------- */

#if defined(IL_ENABLE_TX)
typedef vuint8 IltTxCounter;
#endif

#if defined(IL_ENABLE_TX)
typedef vuint8 IltTxUpdateCounter;
#endif

#if defined(IL_ENABLE_TX) && defined(IL_ENABLE_TX_TIMEOUT)
typedef vuint8 IltTxTimeoutCounter;
#endif

#if defined(IL_ENABLE_RX) && defined(IL_ENABLE_RX_TIMEOUT)
typedef vuint8 IltRxTimeoutCounter;
#endif

#if defined(IL_ENABLE_TX) && defined(IL_ENABLE_TX_SECURE_EVENT)
typedef vuint8 IltTxRepetitionCounter;
#endif



/* -----------------------------------------------------------------------------
    &&&~ Message Handles
 ----------------------------------------------------------------------------- */

#define IlRxMsgHndESR_Status9                0
#define IlRxMsgHndESR_Status8                1
#define IlRxMsgHndESR_Status7                2
#define IlRxMsgHndESR_Status6                3
#define IlRxMsgHndESR_Status5                4
#define IlRxMsgHndESR_Track64                5
#define IlRxMsgHndESR_Track63                6
#define IlRxMsgHndESR_Track62                7
#define IlRxMsgHndESR_Track61                8
#define IlRxMsgHndESR_Track60                9
#define IlRxMsgHndESR_Track59                10
#define IlRxMsgHndESR_Track58                11
#define IlRxMsgHndESR_Track57                12
#define IlRxMsgHndESR_Track56                13
#define IlRxMsgHndESR_Track55                14
#define IlRxMsgHndESR_Track54                15
#define IlRxMsgHndESR_Track53                16
#define IlRxMsgHndESR_Track52                17
#define IlRxMsgHndESR_Track51                18
#define IlRxMsgHndESR_Track50                19
#define IlRxMsgHndESR_Track49                20
#define IlRxMsgHndESR_Track48                21
#define IlRxMsgHndESR_Track47                22
#define IlRxMsgHndESR_Track46                23
#define IlRxMsgHndESR_Track45                24
#define IlRxMsgHndESR_Track44                25
#define IlRxMsgHndESR_Track43                26
#define IlRxMsgHndESR_Track42                27
#define IlRxMsgHndESR_Track41                28
#define IlRxMsgHndESR_Track40                29
#define IlRxMsgHndESR_Track39                30
#define IlRxMsgHndESR_Track38                31
#define IlRxMsgHndESR_Track37                32
#define IlRxMsgHndESR_Track36                33
#define IlRxMsgHndESR_Track35                34
#define IlRxMsgHndESR_Track34                35
#define IlRxMsgHndESR_Track33                36
#define IlRxMsgHndESR_Track32                37
#define IlRxMsgHndESR_Track31                38
#define IlRxMsgHndESR_Track30                39
#define IlRxMsgHndESR_Track29                40
#define IlRxMsgHndESR_Track28                41
#define IlRxMsgHndESR_Track27                42
#define IlRxMsgHndESR_Track26                43
#define IlRxMsgHndESR_Track25                44
#define IlRxMsgHndESR_Track24                45
#define IlRxMsgHndESR_Track23                46
#define IlRxMsgHndESR_Track22                47
#define IlRxMsgHndESR_Track21                48
#define IlRxMsgHndESR_Track20                49
#define IlRxMsgHndESR_Track19                50
#define IlRxMsgHndESR_Track18                51
#define IlRxMsgHndESR_Track17                52
#define IlRxMsgHndESR_Track16                53
#define IlRxMsgHndESR_Track15                54
#define IlRxMsgHndESR_Track14                55
#define IlRxMsgHndESR_Track13                56
#define IlRxMsgHndESR_Track12                57
#define IlRxMsgHndESR_Track11                58
#define IlRxMsgHndESR_Track10                59
#define IlRxMsgHndESR_Track09                60
#define IlRxMsgHndESR_Track08                61
#define IlRxMsgHndESR_Track07                62
#define IlRxMsgHndESR_Track06                63
#define IlRxMsgHndESR_Track05                64
#define IlRxMsgHndESR_Track04                65
#define IlRxMsgHndESR_Track03                66
#define IlRxMsgHndESR_Track02                67
#define IlRxMsgHndESR_Track01                68
#define IlRxMsgHndESR_Status4                69
#define IlRxMsgHndESR_Status3                70
#define IlRxMsgHndESR_Status2                71
#define IlRxMsgHndESR_Status1                72
#define IlTxMsgHndTSR_message_G              0
#define IlTxMsgHndNext_lane_Right_P          1
#define IlTxMsgHndNext_lane_Right_O          2
#define IlTxMsgHndNext_lane_Left_N           3
#define IlTxMsgHndNext_lane_Left_M           4
#define IlTxMsgHndNext_lane_Right_L          5
#define IlTxMsgHndNext_lane_Right_K          6
#define IlTxMsgHndNext_lane_Left_J           7
#define IlTxMsgHndNext_lane_Left_I           8
#define IlTxMsgHndNext_lane_Right_H          9
#define IlTxMsgHndNext_lane_Right_G          10
#define IlTxMsgHndNext_lane_Left_F           11
#define IlTxMsgHndNext_lane_Left_E           12
#define IlTxMsgHndNext_lane_Right_D          13
#define IlTxMsgHndNext_lane_Right_C          14
#define IlTxMsgHndNext_lane_Left_B           15
#define IlTxMsgHndNext_lane_Left_A           16
#define IlTxMsgHndNumebr_of_next_lane        17
#define IlTxMsgHndReference_points           18
#define IlTxMsgHndLKA_right_lane_B           19
#define IlTxMsgHndLKA_right_lane_A           20
#define IlTxMsgHndLKA_left_lane_B            21
#define IlTxMsgHndLKA_left_lane_A            22
#define IlTxMsgHndCar_Info                   23
#define IlTxMsgHndObstacle_Data_X            24
#define IlTxMsgHndObstacle_Data_W            25
#define IlTxMsgHndObstacle_Data_V            26
#define IlTxMsgHndObstacle_Data_U            27
#define IlTxMsgHndObstacle_Data_T            28
#define IlTxMsgHndObstacle_Data_S            29
#define IlTxMsgHndObstacle_Data_R            30
#define IlTxMsgHndObstacle_Data_Q            31
#define IlTxMsgHndObstacle_Data_P            32
#define IlTxMsgHndObstacle_Data_O            33
#define IlTxMsgHndObstacle_Data_N            34
#define IlTxMsgHndObstacle_Data_M            35
#define IlTxMsgHndObstacle_Data_L            36
#define IlTxMsgHndObstacle_Data_K            37
#define IlTxMsgHndObstacle_Data_J            38
#define IlTxMsgHndObstacle_Data_I            39
#define IlTxMsgHndObstacle_Data_H            40
#define IlTxMsgHndObstacle_Data_G            41
#define IlTxMsgHndObstacle_Data_F            42
#define IlTxMsgHndObstacle_Data_E            43
#define IlTxMsgHndObstacle_Data_D            44
#define IlTxMsgHndObstacle_Data_C            45
#define IlTxMsgHndObstacle_Data_B            46
#define IlTxMsgHndObstacle_Data_A            47
#define IlTxMsgHndObstacle_Status            48
#define IlTxMsgHndLane                       49
#define IlTxMsgHndAHBC_Gradual               50
#define IlTxMsgHndAHBC_high_low_beam         51
#define IlTxMsgHndSign_Type                  52
#define IlTxMsgHndTSR_message_F              53
#define IlTxMsgHndTSR_message_E              54
#define IlTxMsgHndTSR_message_D              55
#define IlTxMsgHndTSR_message_C              56
#define IlTxMsgHndTSR_message_B              57
#define IlTxMsgHndTSR_message_A              58
#define IlTxMsgHndC2_Display_and_warning     59
#define IlTxMsgHndDetils_Lane                60
#define IlTxMsgHndFixed_FOE                  61


/* -----------------------------------------------------------------------------
    &&&~ Signal Handles
 ----------------------------------------------------------------------------- */

#define IlRxSigHndCAN_TX_AVG_PWR_CWBLKG      IlRxMsgHndESR_Status9
#define IlRxSigHndCAN_TX_SIDESLIP_ANGLE      IlRxMsgHndESR_Status9
#define IlRxSigHndCAN_TX_SERIAL_NUM_3RD_BYTE IlRxMsgHndESR_Status9
#define IlRxSigHndCAN_TX_FILTERED_XOHP_ACC_CIPV IlRxMsgHndESR_Status9
#define IlRxSigHndCAN_TX_WATER_SPRAY_TARGET_ID IlRxMsgHndESR_Status9
#define IlRxSigHndCAN_TX_PATH_ID_ACC_2       IlRxMsgHndESR_Status9
#define IlRxSigHndCAN_TX_PATH_ID_ACC_3       IlRxMsgHndESR_Status9
#define IlRxSigHndCAN_TX_HISTORY_FAULT_0     IlRxMsgHndESR_Status8
#define IlRxSigHndCAN_TX_HISTORY_FAULT_1     IlRxMsgHndESR_Status8
#define IlRxSigHndCAN_TX_HISTORY_FAULT_2     IlRxMsgHndESR_Status8
#define IlRxSigHndCAN_TX_HISTORY_FAULT_3     IlRxMsgHndESR_Status8
#define IlRxSigHndCAN_TX_HISTORY_FAULT_4     IlRxMsgHndESR_Status8
#define IlRxSigHndCAN_TX_HISTORY_FAULT_5     IlRxMsgHndESR_Status8
#define IlRxSigHndCAN_TX_HISTORY_FAULT_6     IlRxMsgHndESR_Status8
#define IlRxSigHndCAN_TX_HISTORY_FAULT_7     IlRxMsgHndESR_Status8
#define IlRxSigHndCAN_TX_ACTIVE_FAULT_0      IlRxMsgHndESR_Status7
#define IlRxSigHndCAN_TX_ACTIVE_FAULT_1      IlRxMsgHndESR_Status7
#define IlRxSigHndCAN_TX_ACTIVE_FAULT_2      IlRxMsgHndESR_Status7
#define IlRxSigHndCAN_TX_ACTIVE_FAULT_3      IlRxMsgHndESR_Status7
#define IlRxSigHndCAN_TX_ACTIVE_FAULT_4      IlRxMsgHndESR_Status7
#define IlRxSigHndCAN_TX_ACTIVE_FAULT_5      IlRxMsgHndESR_Status7
#define IlRxSigHndCAN_TX_ACTIVE_FAULT_6      IlRxMsgHndESR_Status7
#define IlRxSigHndCAN_TX_ACTIVE_FAULT_7      IlRxMsgHndESR_Status7
#define IlRxSigHndCAN_TX_SUPPLY_1P8V_A2D     IlRxMsgHndESR_Status6
#define IlRxSigHndCAN_TX_SUPPLY_N5V_A2D      IlRxMsgHndESR_Status6
#define IlRxSigHndCAN_TX_WAVE_DIFF_A2D       IlRxMsgHndESR_Status6
#define IlRxSigHndCAN_TX_SYSTEM_POWER_MODE   IlRxMsgHndESR_Status6
#define IlRxSigHndCAN_TX_VERTICAL_ALIGN_UPDATED IlRxMsgHndESR_Status6
#define IlRxSigHndCAN_TX_SW_VERSION_DSP_3RD_BYTE IlRxMsgHndESR_Status6
#define IlRxSigHndCAN_TX_FACTORY_ALIGN_STATUS_2 IlRxMsgHndESR_Status6
#define IlRxSigHndCAN_TX_FACTORY_ALIGN_STATUS_1 IlRxMsgHndESR_Status6
#define IlRxSigHndCAN_TX_RECOMMEND_UNCONVERGE IlRxMsgHndESR_Status6
#define IlRxSigHndCAN_TX_FOUND_TARGET        IlRxMsgHndESR_Status6
#define IlRxSigHndCAN_TX_FACTORY_MISALIGNMENT IlRxMsgHndESR_Status6
#define IlRxSigHndCAN_TX_SERV_ALIGN_UPDATES_DONE IlRxMsgHndESR_Status6
#define IlRxSigHndCAN_TX_VERTICAL_MISALIGNMENT IlRxMsgHndESR_Status6
#define IlRxSigHndCAN_TX_SWBATT_A2D          IlRxMsgHndESR_Status5
#define IlRxSigHndCAN_TX_IGNP_A2D            IlRxMsgHndESR_Status5
#define IlRxSigHndCAN_TX_TEMP1_A2D           IlRxMsgHndESR_Status5
#define IlRxSigHndCAN_TX_TEMP2_A2D           IlRxMsgHndESR_Status5
#define IlRxSigHndCAN_TX_SUPPLY_5VA_A2D      IlRxMsgHndESR_Status5
#define IlRxSigHndCAN_TX_SUPPLY_5VDX_A2D     IlRxMsgHndESR_Status5
#define IlRxSigHndCAN_TX_SUPPLY_3P3V_A2D     IlRxMsgHndESR_Status5
#define IlRxSigHndCAN_TX_SUPPLY_10V_A2D      IlRxMsgHndESR_Status5
#define IlRxSigHndCAN_TX_TRACK_ONCOMING_64   IlRxMsgHndESR_Track64
#define IlRxSigHndCAN_TX_TRACK_GROUPING_CHANGED_64 IlRxMsgHndESR_Track64
#define IlRxSigHndCAN_TX_TRACK_LAT_RATE_64   IlRxMsgHndESR_Track64
#define IlRxSigHndCAN_TX_TRACK_ANGLE_64      IlRxMsgHndESR_Track64
#define IlRxSigHndCAN_TX_TRACK_STATUS_64     IlRxMsgHndESR_Track64
#define IlRxSigHndCAN_TX_TRACK_RANGE_64      IlRxMsgHndESR_Track64
#define IlRxSigHndCAN_TX_TRACK_RANGE_ACCEL_64 IlRxMsgHndESR_Track64
#define IlRxSigHndCAN_TX_TRACK_WIDTH_64      IlRxMsgHndESR_Track64
#define IlRxSigHndCAN_TX_TRACK_ROLLING_COUNT_64 IlRxMsgHndESR_Track64
#define IlRxSigHndCAN_TX_TRACK_BRIDGE_OBJECT_64 IlRxMsgHndESR_Track64
#define IlRxSigHndCAN_TX_TRACK_RANGE_RATE_64 IlRxMsgHndESR_Track64
#define IlRxSigHndCAN_TX_TRACK_MED_RANGE_MODE_64 IlRxMsgHndESR_Track64
#define IlRxSigHndCAN_TX_TRACK_ONCOMING_63   IlRxMsgHndESR_Track63
#define IlRxSigHndCAN_TX_TRACK_GROUPING_CHANGED_63 IlRxMsgHndESR_Track63
#define IlRxSigHndCAN_TX_TRACK_LAT_RATE_63   IlRxMsgHndESR_Track63
#define IlRxSigHndCAN_TX_TRACK_ANGLE_63      IlRxMsgHndESR_Track63
#define IlRxSigHndCAN_TX_TRACK_STATUS_63     IlRxMsgHndESR_Track63
#define IlRxSigHndCAN_TX_TRACK_RANGE_63      IlRxMsgHndESR_Track63
#define IlRxSigHndCAN_TX_TRACK_RANGE_ACCEL_63 IlRxMsgHndESR_Track63
#define IlRxSigHndCAN_TX_TRACK_WIDTH_63      IlRxMsgHndESR_Track63
#define IlRxSigHndCAN_TX_TRACK_ROLLING_COUNT_63 IlRxMsgHndESR_Track63
#define IlRxSigHndCAN_TX_TRACK_BRIDGE_OBJECT_63 IlRxMsgHndESR_Track63
#define IlRxSigHndCAN_TX_TRACK_RANGE_RATE_63 IlRxMsgHndESR_Track63
#define IlRxSigHndCAN_TX_TRACK_MED_RANGE_MODE_63 IlRxMsgHndESR_Track63
#define IlRxSigHndCAN_TX_TRACK_ONCOMING_62   IlRxMsgHndESR_Track62
#define IlRxSigHndCAN_TX_TRACK_GROUPING_CHANGED_62 IlRxMsgHndESR_Track62
#define IlRxSigHndCAN_TX_TRACK_LAT_RATE_62   IlRxMsgHndESR_Track62
#define IlRxSigHndCAN_TX_TRACK_ANGLE_62      IlRxMsgHndESR_Track62
#define IlRxSigHndCAN_TX_TRACK_STATUS_62     IlRxMsgHndESR_Track62
#define IlRxSigHndCAN_TX_TRACK_RANGE_62      IlRxMsgHndESR_Track62
#define IlRxSigHndCAN_TX_TRACK_RANGE_ACCEL_62 IlRxMsgHndESR_Track62
#define IlRxSigHndCAN_TX_TRACK_WIDTH_62      IlRxMsgHndESR_Track62
#define IlRxSigHndCAN_TX_TRACK_ROLLING_COUNT_62 IlRxMsgHndESR_Track62
#define IlRxSigHndCAN_TX_TRACK_BRIDGE_OBJECT_62 IlRxMsgHndESR_Track62
#define IlRxSigHndCAN_TX_TRACK_RANGE_RATE_62 IlRxMsgHndESR_Track62
#define IlRxSigHndCAN_TX_TRACK_MED_RANGE_MODE_62 IlRxMsgHndESR_Track62
#define IlRxSigHndCAN_TX_TRACK_ONCOMING_61   IlRxMsgHndESR_Track61
#define IlRxSigHndCAN_TX_TRACK_GROUPING_CHANGED_61 IlRxMsgHndESR_Track61
#define IlRxSigHndCAN_TX_TRACK_LAT_RATE_61   IlRxMsgHndESR_Track61
#define IlRxSigHndCAN_TX_TRACK_ANGLE_61      IlRxMsgHndESR_Track61
#define IlRxSigHndCAN_TX_TRACK_STATUS_61     IlRxMsgHndESR_Track61
#define IlRxSigHndCAN_TX_TRACK_RANGE_61      IlRxMsgHndESR_Track61
#define IlRxSigHndCAN_TX_TRACK_RANGE_ACCEL_61 IlRxMsgHndESR_Track61
#define IlRxSigHndCAN_TX_TRACK_WIDTH_61      IlRxMsgHndESR_Track61
#define IlRxSigHndCAN_TX_TRACK_ROLLING_COUNT_61 IlRxMsgHndESR_Track61
#define IlRxSigHndCAN_TX_TRACK_BRIDGE_OBJECT_61 IlRxMsgHndESR_Track61
#define IlRxSigHndCAN_TX_TRACK_RANGE_RATE_61 IlRxMsgHndESR_Track61
#define IlRxSigHndCAN_TX_TRACK_MED_RANGE_MODE_61 IlRxMsgHndESR_Track61
#define IlRxSigHndCAN_TX_TRACK_ONCOMING_60   IlRxMsgHndESR_Track60
#define IlRxSigHndCAN_TX_TRACK_GROUPING_CHANGED_60 IlRxMsgHndESR_Track60
#define IlRxSigHndCAN_TX_TRACK_LAT_RATE_60   IlRxMsgHndESR_Track60
#define IlRxSigHndCAN_TX_TRACK_ANGLE_60      IlRxMsgHndESR_Track60
#define IlRxSigHndCAN_TX_TRACK_STATUS_60     IlRxMsgHndESR_Track60
#define IlRxSigHndCAN_TX_TRACK_RANGE_60      IlRxMsgHndESR_Track60
#define IlRxSigHndCAN_TX_TRACK_RANGE_ACCEL_60 IlRxMsgHndESR_Track60
#define IlRxSigHndCAN_TX_TRACK_WIDTH_60      IlRxMsgHndESR_Track60
#define IlRxSigHndCAN_TX_TRACK_ROLLING_COUNT_60 IlRxMsgHndESR_Track60
#define IlRxSigHndCAN_TX_TRACK_BRIDGE_OBJECT_60 IlRxMsgHndESR_Track60
#define IlRxSigHndCAN_TX_TRACK_RANGE_RATE_60 IlRxMsgHndESR_Track60
#define IlRxSigHndCAN_TX_TRACK_MED_RANGE_MODE_60 IlRxMsgHndESR_Track60
#define IlRxSigHndCAN_TX_TRACK_ONCOMING_59   IlRxMsgHndESR_Track59
#define IlRxSigHndCAN_TX_TRACK_GROUPING_CHANGED_59 IlRxMsgHndESR_Track59
#define IlRxSigHndCAN_TX_TRACK_LAT_RATE_59   IlRxMsgHndESR_Track59
#define IlRxSigHndCAN_TX_TRACK_ANGLE_59      IlRxMsgHndESR_Track59
#define IlRxSigHndCAN_TX_TRACK_STATUS_59     IlRxMsgHndESR_Track59
#define IlRxSigHndCAN_TX_TRACK_RANGE_59      IlRxMsgHndESR_Track59
#define IlRxSigHndCAN_TX_TRACK_RANGE_ACCEL_59 IlRxMsgHndESR_Track59
#define IlRxSigHndCAN_TX_TRACK_WIDTH_59      IlRxMsgHndESR_Track59
#define IlRxSigHndCAN_TX_TRACK_ROLLING_COUNT_59 IlRxMsgHndESR_Track59
#define IlRxSigHndCAN_TX_TRACK_BRIDGE_OBJECT_59 IlRxMsgHndESR_Track59
#define IlRxSigHndCAN_TX_TRACK_RANGE_RATE_59 IlRxMsgHndESR_Track59
#define IlRxSigHndCAN_TX_TRACK_MED_RANGE_MODE_59 IlRxMsgHndESR_Track59
#define IlRxSigHndCAN_TX_TRACK_ONCOMING_58   IlRxMsgHndESR_Track58
#define IlRxSigHndCAN_TX_TRACK_GROUPING_CHANGED_58 IlRxMsgHndESR_Track58
#define IlRxSigHndCAN_TX_TRACK_LAT_RATE_58   IlRxMsgHndESR_Track58
#define IlRxSigHndCAN_TX_TRACK_ANGLE_58      IlRxMsgHndESR_Track58
#define IlRxSigHndCAN_TX_TRACK_STATUS_58     IlRxMsgHndESR_Track58
#define IlRxSigHndCAN_TX_TRACK_RANGE_58      IlRxMsgHndESR_Track58
#define IlRxSigHndCAN_TX_TRACK_RANGE_ACCEL_58 IlRxMsgHndESR_Track58
#define IlRxSigHndCAN_TX_TRACK_WIDTH_58      IlRxMsgHndESR_Track58
#define IlRxSigHndCAN_TX_TRACK_ROLLING_COUNT_58 IlRxMsgHndESR_Track58
#define IlRxSigHndCAN_TX_TRACK_BRIDGE_OBJECT_58 IlRxMsgHndESR_Track58
#define IlRxSigHndCAN_TX_TRACK_RANGE_RATE_58 IlRxMsgHndESR_Track58
#define IlRxSigHndCAN_TX_TRACK_MED_RANGE_MODE_58 IlRxMsgHndESR_Track58
#define IlRxSigHndCAN_TX_TRACK_ONCOMING_57   IlRxMsgHndESR_Track57
#define IlRxSigHndCAN_TX_TRACK_GROUPING_CHANGED_57 IlRxMsgHndESR_Track57
#define IlRxSigHndCAN_TX_TRACK_LAT_RATE_57   IlRxMsgHndESR_Track57
#define IlRxSigHndCAN_TX_TRACK_ANGLE_57      IlRxMsgHndESR_Track57
#define IlRxSigHndCAN_TX_TRACK_STATUS_57     IlRxMsgHndESR_Track57
#define IlRxSigHndCAN_TX_TRACK_RANGE_57      IlRxMsgHndESR_Track57
#define IlRxSigHndCAN_TX_TRACK_RANGE_ACCEL_57 IlRxMsgHndESR_Track57
#define IlRxSigHndCAN_TX_TRACK_WIDTH_57      IlRxMsgHndESR_Track57
#define IlRxSigHndCAN_TX_TRACK_ROLLING_COUNT_57 IlRxMsgHndESR_Track57
#define IlRxSigHndCAN_TX_TRACK_BRIDGE_OBJECT_57 IlRxMsgHndESR_Track57
#define IlRxSigHndCAN_TX_TRACK_RANGE_RATE_57 IlRxMsgHndESR_Track57
#define IlRxSigHndCAN_TX_TRACK_MED_RANGE_MODE_57 IlRxMsgHndESR_Track57
#define IlRxSigHndCAN_TX_TRACK_ONCOMING_56   IlRxMsgHndESR_Track56
#define IlRxSigHndCAN_TX_TRACK_GROUPING_CHANGED_56 IlRxMsgHndESR_Track56
#define IlRxSigHndCAN_TX_TRACK_LAT_RATE_56   IlRxMsgHndESR_Track56
#define IlRxSigHndCAN_TX_TRACK_ANGLE_56      IlRxMsgHndESR_Track56
#define IlRxSigHndCAN_TX_TRACK_STATUS_56     IlRxMsgHndESR_Track56
#define IlRxSigHndCAN_TX_TRACK_RANGE_56      IlRxMsgHndESR_Track56
#define IlRxSigHndCAN_TX_TRACK_RANGE_ACCEL_56 IlRxMsgHndESR_Track56
#define IlRxSigHndCAN_TX_TRACK_WIDTH_56      IlRxMsgHndESR_Track56
#define IlRxSigHndCAN_TX_TRACK_ROLLING_COUNT_56 IlRxMsgHndESR_Track56
#define IlRxSigHndCAN_TX_TRACK_BRIDGE_OBJECT_56 IlRxMsgHndESR_Track56
#define IlRxSigHndCAN_TX_TRACK_RANGE_RATE_56 IlRxMsgHndESR_Track56
#define IlRxSigHndCAN_TX_TRACK_MED_RANGE_MODE_56 IlRxMsgHndESR_Track56
#define IlRxSigHndCAN_TX_TRACK_ONCOMING_55   IlRxMsgHndESR_Track55
#define IlRxSigHndCAN_TX_TRACK_GROUPING_CHANGED_55 IlRxMsgHndESR_Track55
#define IlRxSigHndCAN_TX_TRACK_LAT_RATE_55   IlRxMsgHndESR_Track55
#define IlRxSigHndCAN_TX_TRACK_ANGLE_55      IlRxMsgHndESR_Track55
#define IlRxSigHndCAN_TX_TRACK_STATUS_55     IlRxMsgHndESR_Track55
#define IlRxSigHndCAN_TX_TRACK_RANGE_55      IlRxMsgHndESR_Track55
#define IlRxSigHndCAN_TX_TRACK_RANGE_ACCEL_55 IlRxMsgHndESR_Track55
#define IlRxSigHndCAN_TX_TRACK_WIDTH_55      IlRxMsgHndESR_Track55
#define IlRxSigHndCAN_TX_TRACK_ROLLING_COUNT_55 IlRxMsgHndESR_Track55
#define IlRxSigHndCAN_TX_TRACK_BRIDGE_OBJECT_55 IlRxMsgHndESR_Track55
#define IlRxSigHndCAN_TX_TRACK_RANGE_RATE_55 IlRxMsgHndESR_Track55
#define IlRxSigHndCAN_TX_TRACK_MED_RANGE_MODE_55 IlRxMsgHndESR_Track55
#define IlRxSigHndCAN_TX_TRACK_ONCOMING_54   IlRxMsgHndESR_Track54
#define IlRxSigHndCAN_TX_TRACK_GROUPING_CHANGED_54 IlRxMsgHndESR_Track54
#define IlRxSigHndCAN_TX_TRACK_LAT_RATE_54   IlRxMsgHndESR_Track54
#define IlRxSigHndCAN_TX_TRACK_ANGLE_54      IlRxMsgHndESR_Track54
#define IlRxSigHndCAN_TX_TRACK_STATUS_54     IlRxMsgHndESR_Track54
#define IlRxSigHndCAN_TX_TRACK_RANGE_54      IlRxMsgHndESR_Track54
#define IlRxSigHndCAN_TX_TRACK_RANGE_ACCEL_54 IlRxMsgHndESR_Track54
#define IlRxSigHndCAN_TX_TRACK_WIDTH_54      IlRxMsgHndESR_Track54
#define IlRxSigHndCAN_TX_TRACK_ROLLING_COUNT_54 IlRxMsgHndESR_Track54
#define IlRxSigHndCAN_TX_TRACK_BRIDGE_OBJECT_54 IlRxMsgHndESR_Track54
#define IlRxSigHndCAN_TX_TRACK_RANGE_RATE_54 IlRxMsgHndESR_Track54
#define IlRxSigHndCAN_TX_TRACK_MED_RANGE_MODE_54 IlRxMsgHndESR_Track54
#define IlRxSigHndCAN_TX_TRACK_ONCOMING_53   IlRxMsgHndESR_Track53
#define IlRxSigHndCAN_TX_TRACK_GROUPING_CHANGED_53 IlRxMsgHndESR_Track53
#define IlRxSigHndCAN_TX_TRACK_LAT_RATE_53   IlRxMsgHndESR_Track53
#define IlRxSigHndCAN_TX_TRACK_ANGLE_53      IlRxMsgHndESR_Track53
#define IlRxSigHndCAN_TX_TRACK_STATUS_53     IlRxMsgHndESR_Track53
#define IlRxSigHndCAN_TX_TRACK_RANGE_53      IlRxMsgHndESR_Track53
#define IlRxSigHndCAN_TX_TRACK_RANGE_ACCEL_53 IlRxMsgHndESR_Track53
#define IlRxSigHndCAN_TX_TRACK_WIDTH_53      IlRxMsgHndESR_Track53
#define IlRxSigHndCAN_TX_TRACK_ROLLING_COUNT_53 IlRxMsgHndESR_Track53
#define IlRxSigHndCAN_TX_TRACK_BRIDGE_OBJECT_53 IlRxMsgHndESR_Track53
#define IlRxSigHndCAN_TX_TRACK_RANGE_RATE_53 IlRxMsgHndESR_Track53
#define IlRxSigHndCAN_TX_TRACK_MED_RANGE_MODE_53 IlRxMsgHndESR_Track53
#define IlRxSigHndCAN_TX_TRACK_ONCOMING_52   IlRxMsgHndESR_Track52
#define IlRxSigHndCAN_TX_TRACK_GROUPING_CHANGED_52 IlRxMsgHndESR_Track52
#define IlRxSigHndCAN_TX_TRACK_LAT_RATE_52   IlRxMsgHndESR_Track52
#define IlRxSigHndCAN_TX_TRACK_ANGLE_52      IlRxMsgHndESR_Track52
#define IlRxSigHndCAN_TX_TRACK_STATUS_52     IlRxMsgHndESR_Track52
#define IlRxSigHndCAN_TX_TRACK_RANGE_52      IlRxMsgHndESR_Track52
#define IlRxSigHndCAN_TX_TRACK_RANGE_ACCEL_52 IlRxMsgHndESR_Track52
#define IlRxSigHndCAN_TX_TRACK_WIDTH_52      IlRxMsgHndESR_Track52
#define IlRxSigHndCAN_TX_TRACK_ROLLING_COUNT_52 IlRxMsgHndESR_Track52
#define IlRxSigHndCAN_TX_TRACK_BRIDGE_OBJECT_52 IlRxMsgHndESR_Track52
#define IlRxSigHndCAN_TX_TRACK_RANGE_RATE_52 IlRxMsgHndESR_Track52
#define IlRxSigHndCAN_TX_TRACK_MED_RANGE_MODE_52 IlRxMsgHndESR_Track52
#define IlRxSigHndCAN_TX_TRACK_ONCOMING_51   IlRxMsgHndESR_Track51
#define IlRxSigHndCAN_TX_TRACK_GROUPING_CHANGED_51 IlRxMsgHndESR_Track51
#define IlRxSigHndCAN_TX_TRACK_LAT_RATE_51   IlRxMsgHndESR_Track51
#define IlRxSigHndCAN_TX_TRACK_ANGLE_51      IlRxMsgHndESR_Track51
#define IlRxSigHndCAN_TX_TRACK_STATUS_51     IlRxMsgHndESR_Track51
#define IlRxSigHndCAN_TX_TRACK_RANGE_51      IlRxMsgHndESR_Track51
#define IlRxSigHndCAN_TX_TRACK_RANGE_ACCEL_51 IlRxMsgHndESR_Track51
#define IlRxSigHndCAN_TX_TRACK_WIDTH_51      IlRxMsgHndESR_Track51
#define IlRxSigHndCAN_TX_TRACK_ROLLING_COUNT_51 IlRxMsgHndESR_Track51
#define IlRxSigHndCAN_TX_TRACK_BRIDGE_OBJECT_51 IlRxMsgHndESR_Track51
#define IlRxSigHndCAN_TX_TRACK_RANGE_RATE_51 IlRxMsgHndESR_Track51
#define IlRxSigHndCAN_TX_TRACK_MED_RANGE_MODE_51 IlRxMsgHndESR_Track51
#define IlRxSigHndCAN_TX_TRACK_ONCOMING_50   IlRxMsgHndESR_Track50
#define IlRxSigHndCAN_TX_TRACK_GROUPING_CHANGED_50 IlRxMsgHndESR_Track50
#define IlRxSigHndCAN_TX_TRACK_LAT_RATE_50   IlRxMsgHndESR_Track50
#define IlRxSigHndCAN_TX_TRACK_ANGLE_50      IlRxMsgHndESR_Track50
#define IlRxSigHndCAN_TX_TRACK_STATUS_50     IlRxMsgHndESR_Track50
#define IlRxSigHndCAN_TX_TRACK_RANGE_50      IlRxMsgHndESR_Track50
#define IlRxSigHndCAN_TX_TRACK_RANGE_ACCEL_50 IlRxMsgHndESR_Track50
#define IlRxSigHndCAN_TX_TRACK_WIDTH_50      IlRxMsgHndESR_Track50
#define IlRxSigHndCAN_TX_TRACK_ROLLING_COUNT_50 IlRxMsgHndESR_Track50
#define IlRxSigHndCAN_TX_TRACK_BRIDGE_OBJECT_50 IlRxMsgHndESR_Track50
#define IlRxSigHndCAN_TX_TRACK_RANGE_RATE_50 IlRxMsgHndESR_Track50
#define IlRxSigHndCAN_TX_TRACK_MED_RANGE_MODE_50 IlRxMsgHndESR_Track50
#define IlRxSigHndCAN_TX_TRACK_ONCOMING_49   IlRxMsgHndESR_Track49
#define IlRxSigHndCAN_TX_TRACK_GROUPING_CHANGED_49 IlRxMsgHndESR_Track49
#define IlRxSigHndCAN_TX_TRACK_LAT_RATE_49   IlRxMsgHndESR_Track49
#define IlRxSigHndCAN_TX_TRACK_ANGLE_49      IlRxMsgHndESR_Track49
#define IlRxSigHndCAN_TX_TRACK_STATUS_49     IlRxMsgHndESR_Track49
#define IlRxSigHndCAN_TX_TRACK_RANGE_49      IlRxMsgHndESR_Track49
#define IlRxSigHndCAN_TX_TRACK_RANGE_ACCEL_49 IlRxMsgHndESR_Track49
#define IlRxSigHndCAN_TX_TRACK_WIDTH_49      IlRxMsgHndESR_Track49
#define IlRxSigHndCAN_TX_TRACK_ROLLING_COUNT_49 IlRxMsgHndESR_Track49
#define IlRxSigHndCAN_TX_TRACK_BRIDGE_OBJECT_49 IlRxMsgHndESR_Track49
#define IlRxSigHndCAN_TX_TRACK_RANGE_RATE_49 IlRxMsgHndESR_Track49
#define IlRxSigHndCAN_TX_TRACK_MED_RANGE_MODE_49 IlRxMsgHndESR_Track49
#define IlRxSigHndCAN_TX_TRACK_ONCOMING_48   IlRxMsgHndESR_Track48
#define IlRxSigHndCAN_TX_TRACK_GROUPING_CHANGED_48 IlRxMsgHndESR_Track48
#define IlRxSigHndCAN_TX_TRACK_LAT_RATE_48   IlRxMsgHndESR_Track48
#define IlRxSigHndCAN_TX_TRACK_ANGLE_48      IlRxMsgHndESR_Track48
#define IlRxSigHndCAN_TX_TRACK_STATUS_48     IlRxMsgHndESR_Track48
#define IlRxSigHndCAN_TX_TRACK_RANGE_48      IlRxMsgHndESR_Track48
#define IlRxSigHndCAN_TX_TRACK_RANGE_ACCEL_48 IlRxMsgHndESR_Track48
#define IlRxSigHndCAN_TX_TRACK_WIDTH_48      IlRxMsgHndESR_Track48
#define IlRxSigHndCAN_TX_TRACK_ROLLING_COUNT_48 IlRxMsgHndESR_Track48
#define IlRxSigHndCAN_TX_TRACK_BRIDGE_OBJECT_48 IlRxMsgHndESR_Track48
#define IlRxSigHndCAN_TX_TRACK_RANGE_RATE_48 IlRxMsgHndESR_Track48
#define IlRxSigHndCAN_TX_TRACK_MED_RANGE_MODE_48 IlRxMsgHndESR_Track48
#define IlRxSigHndCAN_TX_TRACK_ONCOMING_47   IlRxMsgHndESR_Track47
#define IlRxSigHndCAN_TX_TRACK_GROUPING_CHANGED_47 IlRxMsgHndESR_Track47
#define IlRxSigHndCAN_TX_TRACK_LAT_RATE_47   IlRxMsgHndESR_Track47
#define IlRxSigHndCAN_TX_TRACK_ANGLE_47      IlRxMsgHndESR_Track47
#define IlRxSigHndCAN_TX_TRACK_STATUS_47     IlRxMsgHndESR_Track47
#define IlRxSigHndCAN_TX_TRACK_RANGE_47      IlRxMsgHndESR_Track47
#define IlRxSigHndCAN_TX_TRACK_RANGE_ACCEL_47 IlRxMsgHndESR_Track47
#define IlRxSigHndCAN_TX_TRACK_WIDTH_47      IlRxMsgHndESR_Track47
#define IlRxSigHndCAN_TX_TRACK_ROLLING_COUNT_47 IlRxMsgHndESR_Track47
#define IlRxSigHndCAN_TX_TRACK_BRIDGE_OBJECT_47 IlRxMsgHndESR_Track47
#define IlRxSigHndCAN_TX_TRACK_RANGE_RATE_47 IlRxMsgHndESR_Track47
#define IlRxSigHndCAN_TX_TRACK_MED_RANGE_MODE_47 IlRxMsgHndESR_Track47
#define IlRxSigHndCAN_TX_TRACK_ONCOMING_46   IlRxMsgHndESR_Track46
#define IlRxSigHndCAN_TX_TRACK_GROUPING_CHANGED_46 IlRxMsgHndESR_Track46
#define IlRxSigHndCAN_TX_TRACK_LAT_RATE_46   IlRxMsgHndESR_Track46
#define IlRxSigHndCAN_TX_TRACK_ANGLE_46      IlRxMsgHndESR_Track46
#define IlRxSigHndCAN_TX_TRACK_STATUS_46     IlRxMsgHndESR_Track46
#define IlRxSigHndCAN_TX_TRACK_RANGE_46      IlRxMsgHndESR_Track46
#define IlRxSigHndCAN_TX_TRACK_RANGE_ACCEL_46 IlRxMsgHndESR_Track46
#define IlRxSigHndCAN_TX_TRACK_WIDTH_46      IlRxMsgHndESR_Track46
#define IlRxSigHndCAN_TX_TRACK_ROLLING_COUNT_46 IlRxMsgHndESR_Track46
#define IlRxSigHndCAN_TX_TRACK_BRIDGE_OBJECT_46 IlRxMsgHndESR_Track46
#define IlRxSigHndCAN_TX_TRACK_RANGE_RATE_46 IlRxMsgHndESR_Track46
#define IlRxSigHndCAN_TX_TRACK_MED_RANGE_MODE_46 IlRxMsgHndESR_Track46
#define IlRxSigHndCAN_TX_TRACK_ONCOMING_45   IlRxMsgHndESR_Track45
#define IlRxSigHndCAN_TX_TRACK_GROUPING_CHANGED_45 IlRxMsgHndESR_Track45
#define IlRxSigHndCAN_TX_TRACK_LAT_RATE_45   IlRxMsgHndESR_Track45
#define IlRxSigHndCAN_TX_TRACK_ANGLE_45      IlRxMsgHndESR_Track45
#define IlRxSigHndCAN_TX_TRACK_STATUS_45     IlRxMsgHndESR_Track45
#define IlRxSigHndCAN_TX_TRACK_RANGE_45      IlRxMsgHndESR_Track45
#define IlRxSigHndCAN_TX_TRACK_RANGE_ACCEL_45 IlRxMsgHndESR_Track45
#define IlRxSigHndCAN_TX_TRACK_WIDTH_45      IlRxMsgHndESR_Track45
#define IlRxSigHndCAN_TX_TRACK_ROLLING_COUNT_45 IlRxMsgHndESR_Track45
#define IlRxSigHndCAN_TX_TRACK_BRIDGE_OBJECT_45 IlRxMsgHndESR_Track45
#define IlRxSigHndCAN_TX_TRACK_RANGE_RATE_45 IlRxMsgHndESR_Track45
#define IlRxSigHndCAN_TX_TRACK_MED_RANGE_MODE_45 IlRxMsgHndESR_Track45
#define IlRxSigHndCAN_TX_TRACK_ONCOMING_44   IlRxMsgHndESR_Track44
#define IlRxSigHndCAN_TX_TRACK_GROUPING_CHANGED_44 IlRxMsgHndESR_Track44
#define IlRxSigHndCAN_TX_TRACK_LAT_RATE_44   IlRxMsgHndESR_Track44
#define IlRxSigHndCAN_TX_TRACK_ANGLE_44      IlRxMsgHndESR_Track44
#define IlRxSigHndCAN_TX_TRACK_STATUS_44     IlRxMsgHndESR_Track44
#define IlRxSigHndCAN_TX_TRACK_RANGE_44      IlRxMsgHndESR_Track44
#define IlRxSigHndCAN_TX_TRACK_RANGE_ACCEL_44 IlRxMsgHndESR_Track44
#define IlRxSigHndCAN_TX_TRACK_WIDTH_44      IlRxMsgHndESR_Track44
#define IlRxSigHndCAN_TX_TRACK_ROLLING_COUNT_44 IlRxMsgHndESR_Track44
#define IlRxSigHndCAN_TX_TRACK_BRIDGE_OBJECT_44 IlRxMsgHndESR_Track44
#define IlRxSigHndCAN_TX_TRACK_RANGE_RATE_44 IlRxMsgHndESR_Track44
#define IlRxSigHndCAN_TX_TRACK_MED_RANGE_MODE_44 IlRxMsgHndESR_Track44
#define IlRxSigHndCAN_TX_TRACK_ONCOMING_43   IlRxMsgHndESR_Track43
#define IlRxSigHndCAN_TX_TRACK_GROUPING_CHANGED_43 IlRxMsgHndESR_Track43
#define IlRxSigHndCAN_TX_TRACK_LAT_RATE_43   IlRxMsgHndESR_Track43
#define IlRxSigHndCAN_TX_TRACK_ANGLE_43      IlRxMsgHndESR_Track43
#define IlRxSigHndCAN_TX_TRACK_STATUS_43     IlRxMsgHndESR_Track43
#define IlRxSigHndCAN_TX_TRACK_RANGE_43      IlRxMsgHndESR_Track43
#define IlRxSigHndCAN_TX_TRACK_RANGE_ACCEL_43 IlRxMsgHndESR_Track43
#define IlRxSigHndCAN_TX_TRACK_WIDTH_43      IlRxMsgHndESR_Track43
#define IlRxSigHndCAN_TX_TRACK_ROLLING_COUNT_43 IlRxMsgHndESR_Track43
#define IlRxSigHndCAN_TX_TRACK_BRIDGE_OBJECT_43 IlRxMsgHndESR_Track43
#define IlRxSigHndCAN_TX_TRACK_RANGE_RATE_43 IlRxMsgHndESR_Track43
#define IlRxSigHndCAN_TX_TRACK_MED_RANGE_MODE_43 IlRxMsgHndESR_Track43
#define IlRxSigHndCAN_TX_TRACK_ONCOMING_42   IlRxMsgHndESR_Track42
#define IlRxSigHndCAN_TX_TRACK_GROUPING_CHANGED_42 IlRxMsgHndESR_Track42
#define IlRxSigHndCAN_TX_TRACK_LAT_RATE_42   IlRxMsgHndESR_Track42
#define IlRxSigHndCAN_TX_TRACK_ANGLE_42      IlRxMsgHndESR_Track42
#define IlRxSigHndCAN_TX_TRACK_STATUS_42     IlRxMsgHndESR_Track42
#define IlRxSigHndCAN_TX_TRACK_RANGE_42      IlRxMsgHndESR_Track42
#define IlRxSigHndCAN_TX_TRACK_RANGE_ACCEL_42 IlRxMsgHndESR_Track42
#define IlRxSigHndCAN_TX_TRACK_WIDTH_42      IlRxMsgHndESR_Track42
#define IlRxSigHndCAN_TX_TRACK_ROLLING_COUNT_42 IlRxMsgHndESR_Track42
#define IlRxSigHndCAN_TX_TRACK_BRIDGE_OBJECT_42 IlRxMsgHndESR_Track42
#define IlRxSigHndCAN_TX_TRACK_RANGE_RATE_42 IlRxMsgHndESR_Track42
#define IlRxSigHndCAN_TX_TRACK_MED_RANGE_MODE_42 IlRxMsgHndESR_Track42
#define IlRxSigHndCAN_TX_TRACK_ONCOMING_41   IlRxMsgHndESR_Track41
#define IlRxSigHndCAN_TX_TRACK_GROUPING_CHANGED_41 IlRxMsgHndESR_Track41
#define IlRxSigHndCAN_TX_TRACK_LAT_RATE_41   IlRxMsgHndESR_Track41
#define IlRxSigHndCAN_TX_TRACK_ANGLE_41      IlRxMsgHndESR_Track41
#define IlRxSigHndCAN_TX_TRACK_STATUS_41     IlRxMsgHndESR_Track41
#define IlRxSigHndCAN_TX_TRACK_RANGE_41      IlRxMsgHndESR_Track41
#define IlRxSigHndCAN_TX_TRACK_RANGE_ACCEL_41 IlRxMsgHndESR_Track41
#define IlRxSigHndCAN_TX_TRACK_WIDTH_41      IlRxMsgHndESR_Track41
#define IlRxSigHndCAN_TX_TRACK_ROLLING_COUNT_41 IlRxMsgHndESR_Track41
#define IlRxSigHndCAN_TX_TRACK_BRIDGE_OBJECT_41 IlRxMsgHndESR_Track41
#define IlRxSigHndCAN_TX_TRACK_RANGE_RATE_41 IlRxMsgHndESR_Track41
#define IlRxSigHndCAN_TX_TRACK_MED_RANGE_MODE_41 IlRxMsgHndESR_Track41
#define IlRxSigHndCAN_TX_TRACK_ONCOMING_40   IlRxMsgHndESR_Track40
#define IlRxSigHndCAN_TX_TRACK_GROUPING_CHANGED_40 IlRxMsgHndESR_Track40
#define IlRxSigHndCAN_TX_TRACK_LAT_RATE_40   IlRxMsgHndESR_Track40
#define IlRxSigHndCAN_TX_TRACK_ANGLE_40      IlRxMsgHndESR_Track40
#define IlRxSigHndCAN_TX_TRACK_STATUS_40     IlRxMsgHndESR_Track40
#define IlRxSigHndCAN_TX_TRACK_RANGE_40      IlRxMsgHndESR_Track40
#define IlRxSigHndCAN_TX_TRACK_RANGE_ACCEL_40 IlRxMsgHndESR_Track40
#define IlRxSigHndCAN_TX_TRACK_WIDTH_40      IlRxMsgHndESR_Track40
#define IlRxSigHndCAN_TX_TRACK_ROLLING_COUNT_40 IlRxMsgHndESR_Track40
#define IlRxSigHndCAN_TX_TRACK_BRIDGE_OBJECT_40 IlRxMsgHndESR_Track40
#define IlRxSigHndCAN_TX_TRACK_RANGE_RATE_40 IlRxMsgHndESR_Track40
#define IlRxSigHndCAN_TX_TRACK_MED_RANGE_MODE_40 IlRxMsgHndESR_Track40
#define IlRxSigHndCAN_TX_TRACK_ONCOMING_39   IlRxMsgHndESR_Track39
#define IlRxSigHndCAN_TX_TRACK_GROUPING_CHANGED_39 IlRxMsgHndESR_Track39
#define IlRxSigHndCAN_TX_TRACK_LAT_RATE_39   IlRxMsgHndESR_Track39
#define IlRxSigHndCAN_TX_TRACK_ANGLE_39      IlRxMsgHndESR_Track39
#define IlRxSigHndCAN_TX_TRACK_STATUS_39     IlRxMsgHndESR_Track39
#define IlRxSigHndCAN_TX_TRACK_RANGE_39      IlRxMsgHndESR_Track39
#define IlRxSigHndCAN_TX_TRACK_RANGE_ACCEL_39 IlRxMsgHndESR_Track39
#define IlRxSigHndCAN_TX_TRACK_WIDTH_39      IlRxMsgHndESR_Track39
#define IlRxSigHndCAN_TX_TRACK_ROLLING_COUNT_39 IlRxMsgHndESR_Track39
#define IlRxSigHndCAN_TX_TRACK_BRIDGE_OBJECT_39 IlRxMsgHndESR_Track39
#define IlRxSigHndCAN_TX_TRACK_RANGE_RATE_39 IlRxMsgHndESR_Track39
#define IlRxSigHndCAN_TX_TRACK_MED_RANGE_MODE_39 IlRxMsgHndESR_Track39
#define IlRxSigHndCAN_TX_TRACK_ONCOMING_38   IlRxMsgHndESR_Track38
#define IlRxSigHndCAN_TX_TRACK_GROUPING_CHANGED_38 IlRxMsgHndESR_Track38
#define IlRxSigHndCAN_TX_TRACK_LAT_RATE_38   IlRxMsgHndESR_Track38
#define IlRxSigHndCAN_TX_TRACK_ANGLE_38      IlRxMsgHndESR_Track38
#define IlRxSigHndCAN_TX_TRACK_STATUS_38     IlRxMsgHndESR_Track38
#define IlRxSigHndCAN_TX_TRACK_RANGE_38      IlRxMsgHndESR_Track38
#define IlRxSigHndCAN_TX_TRACK_RANGE_ACCEL_38 IlRxMsgHndESR_Track38
#define IlRxSigHndCAN_TX_TRACK_WIDTH_38      IlRxMsgHndESR_Track38
#define IlRxSigHndCAN_TX_TRACK_ROLLING_COUNT_38 IlRxMsgHndESR_Track38
#define IlRxSigHndCAN_TX_TRACK_BRIDGE_OBJECT_38 IlRxMsgHndESR_Track38
#define IlRxSigHndCAN_TX_TRACK_RANGE_RATE_38 IlRxMsgHndESR_Track38
#define IlRxSigHndCAN_TX_TRACK_MED_RANGE_MODE_38 IlRxMsgHndESR_Track38
#define IlRxSigHndCAN_TX_TRACK_ONCOMING_37   IlRxMsgHndESR_Track37
#define IlRxSigHndCAN_TX_TRACK_GROUPING_CHANGED_37 IlRxMsgHndESR_Track37
#define IlRxSigHndCAN_TX_TRACK_LAT_RATE_37   IlRxMsgHndESR_Track37
#define IlRxSigHndCAN_TX_TRACK_ANGLE_37      IlRxMsgHndESR_Track37
#define IlRxSigHndCAN_TX_TRACK_STATUS_37     IlRxMsgHndESR_Track37
#define IlRxSigHndCAN_TX_TRACK_RANGE_37      IlRxMsgHndESR_Track37
#define IlRxSigHndCAN_TX_TRACK_RANGE_ACCEL_37 IlRxMsgHndESR_Track37
#define IlRxSigHndCAN_TX_TRACK_WIDTH_37      IlRxMsgHndESR_Track37
#define IlRxSigHndCAN_TX_TRACK_ROLLING_COUNT_37 IlRxMsgHndESR_Track37
#define IlRxSigHndCAN_TX_TRACK_BRIDGE_OBJECT_37 IlRxMsgHndESR_Track37
#define IlRxSigHndCAN_TX_TRACK_RANGE_RATE_37 IlRxMsgHndESR_Track37
#define IlRxSigHndCAN_TX_TRACK_MED_RANGE_MODE_37 IlRxMsgHndESR_Track37
#define IlRxSigHndCAN_TX_TRACK_ONCOMING_36   IlRxMsgHndESR_Track36
#define IlRxSigHndCAN_TX_TRACK_GROUPING_CHANGED_36 IlRxMsgHndESR_Track36
#define IlRxSigHndCAN_TX_TRACK_LAT_RATE_36   IlRxMsgHndESR_Track36
#define IlRxSigHndCAN_TX_TRACK_ANGLE_36      IlRxMsgHndESR_Track36
#define IlRxSigHndCAN_TX_TRACK_STATUS_36     IlRxMsgHndESR_Track36
#define IlRxSigHndCAN_TX_TRACK_RANGE_36      IlRxMsgHndESR_Track36
#define IlRxSigHndCAN_TX_TRACK_RANGE_ACCEL_36 IlRxMsgHndESR_Track36
#define IlRxSigHndCAN_TX_TRACK_WIDTH_36      IlRxMsgHndESR_Track36
#define IlRxSigHndCAN_TX_TRACK_ROLLING_COUNT_36 IlRxMsgHndESR_Track36
#define IlRxSigHndCAN_TX_TRACK_BRIDGE_OBJECT_36 IlRxMsgHndESR_Track36
#define IlRxSigHndCAN_TX_TRACK_RANGE_RATE_36 IlRxMsgHndESR_Track36
#define IlRxSigHndCAN_TX_TRACK_MED_RANGE_MODE_36 IlRxMsgHndESR_Track36
#define IlRxSigHndCAN_TX_TRACK_ONCOMING_35   IlRxMsgHndESR_Track35
#define IlRxSigHndCAN_TX_TRACK_GROUPING_CHANGED_35 IlRxMsgHndESR_Track35
#define IlRxSigHndCAN_TX_TRACK_LAT_RATE_35   IlRxMsgHndESR_Track35
#define IlRxSigHndCAN_TX_TRACK_ANGLE_35      IlRxMsgHndESR_Track35
#define IlRxSigHndCAN_TX_TRACK_STATUS_35     IlRxMsgHndESR_Track35
#define IlRxSigHndCAN_TX_TRACK_RANGE_35      IlRxMsgHndESR_Track35
#define IlRxSigHndCAN_TX_TRACK_RANGE_ACCEL_35 IlRxMsgHndESR_Track35
#define IlRxSigHndCAN_TX_TRACK_WIDTH_35      IlRxMsgHndESR_Track35
#define IlRxSigHndCAN_TX_TRACK_ROLLING_COUNT_35 IlRxMsgHndESR_Track35
#define IlRxSigHndCAN_TX_TRACK_BRIDGE_OBJECT_35 IlRxMsgHndESR_Track35
#define IlRxSigHndCAN_TX_TRACK_RANGE_RATE_35 IlRxMsgHndESR_Track35
#define IlRxSigHndCAN_TX_TRACK_MED_RANGE_MODE_35 IlRxMsgHndESR_Track35
#define IlRxSigHndCAN_TX_TRACK_ONCOMING_34   IlRxMsgHndESR_Track34
#define IlRxSigHndCAN_TX_TRACK_GROUPING_CHANGED_34 IlRxMsgHndESR_Track34
#define IlRxSigHndCAN_TX_TRACK_LAT_RATE_34   IlRxMsgHndESR_Track34
#define IlRxSigHndCAN_TX_TRACK_ANGLE_34      IlRxMsgHndESR_Track34
#define IlRxSigHndCAN_TX_TRACK_STATUS_34     IlRxMsgHndESR_Track34
#define IlRxSigHndCAN_TX_TRACK_RANGE_34      IlRxMsgHndESR_Track34
#define IlRxSigHndCAN_TX_TRACK_RANGE_ACCEL_34 IlRxMsgHndESR_Track34
#define IlRxSigHndCAN_TX_TRACK_WIDTH_34      IlRxMsgHndESR_Track34
#define IlRxSigHndCAN_TX_TRACK_ROLLING_COUNT_34 IlRxMsgHndESR_Track34
#define IlRxSigHndCAN_TX_TRACK_BRIDGE_OBJECT_34 IlRxMsgHndESR_Track34
#define IlRxSigHndCAN_TX_TRACK_RANGE_RATE_34 IlRxMsgHndESR_Track34
#define IlRxSigHndCAN_TX_TRACK_MED_RANGE_MODE_34 IlRxMsgHndESR_Track34
#define IlRxSigHndCAN_TX_TRACK_ONCOMING_33   IlRxMsgHndESR_Track33
#define IlRxSigHndCAN_TX_TRACK_GROUPING_CHANGED_33 IlRxMsgHndESR_Track33
#define IlRxSigHndCAN_TX_TRACK_LAT_RATE_33   IlRxMsgHndESR_Track33
#define IlRxSigHndCAN_TX_TRACK_ANGLE_33      IlRxMsgHndESR_Track33
#define IlRxSigHndCAN_TX_TRACK_STATUS_33     IlRxMsgHndESR_Track33
#define IlRxSigHndCAN_TX_TRACK_RANGE_33      IlRxMsgHndESR_Track33
#define IlRxSigHndCAN_TX_TRACK_RANGE_ACCEL_33 IlRxMsgHndESR_Track33
#define IlRxSigHndCAN_TX_TRACK_WIDTH_33      IlRxMsgHndESR_Track33
#define IlRxSigHndCAN_TX_TRACK_ROLLING_COUNT_33 IlRxMsgHndESR_Track33
#define IlRxSigHndCAN_TX_TRACK_BRIDGE_OBJECT_33 IlRxMsgHndESR_Track33
#define IlRxSigHndCAN_TX_TRACK_RANGE_RATE_33 IlRxMsgHndESR_Track33
#define IlRxSigHndCAN_TX_TRACK_MED_RANGE_MODE_33 IlRxMsgHndESR_Track33
#define IlRxSigHndCAN_TX_TRACK_ONCOMING_32   IlRxMsgHndESR_Track32
#define IlRxSigHndCAN_TX_TRACK_GROUPING_CHANGED_32 IlRxMsgHndESR_Track32
#define IlRxSigHndCAN_TX_TRACK_LAT_RATE_32   IlRxMsgHndESR_Track32
#define IlRxSigHndCAN_TX_TRACK_ANGLE_32      IlRxMsgHndESR_Track32
#define IlRxSigHndCAN_TX_TRACK_STATUS_32     IlRxMsgHndESR_Track32
#define IlRxSigHndCAN_TX_TRACK_RANGE_32      IlRxMsgHndESR_Track32
#define IlRxSigHndCAN_TX_TRACK_RANGE_ACCEL_32 IlRxMsgHndESR_Track32
#define IlRxSigHndCAN_TX_TRACK_WIDTH_32      IlRxMsgHndESR_Track32
#define IlRxSigHndCAN_TX_TRACK_ROLLING_COUNT_32 IlRxMsgHndESR_Track32
#define IlRxSigHndCAN_TX_TRACK_BRIDGE_OBJECT_32 IlRxMsgHndESR_Track32
#define IlRxSigHndCAN_TX_TRACK_RANGE_RATE_32 IlRxMsgHndESR_Track32
#define IlRxSigHndCAN_TX_TRACK_MED_RANGE_MODE_32 IlRxMsgHndESR_Track32
#define IlRxSigHndCAN_TX_TRACK_ONCOMING_31   IlRxMsgHndESR_Track31
#define IlRxSigHndCAN_TX_TRACK_GROUPING_CHANGED_31 IlRxMsgHndESR_Track31
#define IlRxSigHndCAN_TX_TRACK_LAT_RATE_31   IlRxMsgHndESR_Track31
#define IlRxSigHndCAN_TX_TRACK_ANGLE_31      IlRxMsgHndESR_Track31
#define IlRxSigHndCAN_TX_TRACK_STATUS_31     IlRxMsgHndESR_Track31
#define IlRxSigHndCAN_TX_TRACK_RANGE_31      IlRxMsgHndESR_Track31
#define IlRxSigHndCAN_TX_TRACK_RANGE_ACCEL_31 IlRxMsgHndESR_Track31
#define IlRxSigHndCAN_TX_TRACK_WIDTH_31      IlRxMsgHndESR_Track31
#define IlRxSigHndCAN_TX_TRACK_ROLLING_COUNT_31 IlRxMsgHndESR_Track31
#define IlRxSigHndCAN_TX_TRACK_BRIDGE_OBJECT_31 IlRxMsgHndESR_Track31
#define IlRxSigHndCAN_TX_TRACK_RANGE_RATE_31 IlRxMsgHndESR_Track31
#define IlRxSigHndCAN_TX_TRACK_MED_RANGE_MODE_31 IlRxMsgHndESR_Track31
#define IlRxSigHndCAN_TX_TRACK_ONCOMING_30   IlRxMsgHndESR_Track30
#define IlRxSigHndCAN_TX_TRACK_GROUPING_CHANGED_30 IlRxMsgHndESR_Track30
#define IlRxSigHndCAN_TX_TRACK_LAT_RATE_30   IlRxMsgHndESR_Track30
#define IlRxSigHndCAN_TX_TRACK_ANGLE_30      IlRxMsgHndESR_Track30
#define IlRxSigHndCAN_TX_TRACK_STATUS_30     IlRxMsgHndESR_Track30
#define IlRxSigHndCAN_TX_TRACK_RANGE_30      IlRxMsgHndESR_Track30
#define IlRxSigHndCAN_TX_TRACK_RANGE_ACCEL_30 IlRxMsgHndESR_Track30
#define IlRxSigHndCAN_TX_TRACK_WIDTH_30      IlRxMsgHndESR_Track30
#define IlRxSigHndCAN_TX_TRACK_ROLLING_COUNT_30 IlRxMsgHndESR_Track30
#define IlRxSigHndCAN_TX_TRACK_BRIDGE_OBJECT_30 IlRxMsgHndESR_Track30
#define IlRxSigHndCAN_TX_TRACK_RANGE_RATE_30 IlRxMsgHndESR_Track30
#define IlRxSigHndCAN_TX_TRACK_MED_RANGE_MODE_30 IlRxMsgHndESR_Track30
#define IlRxSigHndCAN_TX_TRACK_ONCOMING_29   IlRxMsgHndESR_Track29
#define IlRxSigHndCAN_TX_TRACK_GROUPING_CHANGED_29 IlRxMsgHndESR_Track29
#define IlRxSigHndCAN_TX_TRACK_LAT_RATE_29   IlRxMsgHndESR_Track29
#define IlRxSigHndCAN_TX_TRACK_ANGLE_29      IlRxMsgHndESR_Track29
#define IlRxSigHndCAN_TX_TRACK_STATUS_29     IlRxMsgHndESR_Track29
#define IlRxSigHndCAN_TX_TRACK_RANGE_29      IlRxMsgHndESR_Track29
#define IlRxSigHndCAN_TX_TRACK_RANGE_ACCEL_29 IlRxMsgHndESR_Track29
#define IlRxSigHndCAN_TX_TRACK_WIDTH_29      IlRxMsgHndESR_Track29
#define IlRxSigHndCAN_TX_TRACK_ROLLING_COUNT_29 IlRxMsgHndESR_Track29
#define IlRxSigHndCAN_TX_TRACK_BRIDGE_OBJECT_29 IlRxMsgHndESR_Track29
#define IlRxSigHndCAN_TX_TRACK_RANGE_RATE_29 IlRxMsgHndESR_Track29
#define IlRxSigHndCAN_TX_TRACK_MED_RANGE_MODE_29 IlRxMsgHndESR_Track29
#define IlRxSigHndCAN_TX_TRACK_ONCOMING_28   IlRxMsgHndESR_Track28
#define IlRxSigHndCAN_TX_TRACK_GROUPING_CHANGED_28 IlRxMsgHndESR_Track28
#define IlRxSigHndCAN_TX_TRACK_LAT_RATE_28   IlRxMsgHndESR_Track28
#define IlRxSigHndCAN_TX_TRACK_ANGLE_28      IlRxMsgHndESR_Track28
#define IlRxSigHndCAN_TX_TRACK_STATUS_28     IlRxMsgHndESR_Track28
#define IlRxSigHndCAN_TX_TRACK_RANGE_28      IlRxMsgHndESR_Track28
#define IlRxSigHndCAN_TX_TRACK_RANGE_ACCEL_28 IlRxMsgHndESR_Track28
#define IlRxSigHndCAN_TX_TRACK_WIDTH_28      IlRxMsgHndESR_Track28
#define IlRxSigHndCAN_TX_TRACK_ROLLING_COUNT_28 IlRxMsgHndESR_Track28
#define IlRxSigHndCAN_TX_TRACK_BRIDGE_OBJECT_28 IlRxMsgHndESR_Track28
#define IlRxSigHndCAN_TX_TRACK_RANGE_RATE_28 IlRxMsgHndESR_Track28
#define IlRxSigHndCAN_TX_TRACK_MED_RANGE_MODE_28 IlRxMsgHndESR_Track28
#define IlRxSigHndCAN_TX_TRACK_ONCOMING_27   IlRxMsgHndESR_Track27
#define IlRxSigHndCAN_TX_TRACK_GROUPING_CHANGED_27 IlRxMsgHndESR_Track27
#define IlRxSigHndCAN_TX_TRACK_LAT_RATE_27   IlRxMsgHndESR_Track27
#define IlRxSigHndCAN_TX_TRACK_ANGLE_27      IlRxMsgHndESR_Track27
#define IlRxSigHndCAN_TX_TRACK_STATUS_27     IlRxMsgHndESR_Track27
#define IlRxSigHndCAN_TX_TRACK_RANGE_27      IlRxMsgHndESR_Track27
#define IlRxSigHndCAN_TX_TRACK_RANGE_ACCEL_27 IlRxMsgHndESR_Track27
#define IlRxSigHndCAN_TX_TRACK_WIDTH_27      IlRxMsgHndESR_Track27
#define IlRxSigHndCAN_TX_TRACK_ROLLING_COUNT_27 IlRxMsgHndESR_Track27
#define IlRxSigHndCAN_TX_TRACK_BRIDGE_OBJECT_27 IlRxMsgHndESR_Track27
#define IlRxSigHndCAN_TX_TRACK_RANGE_RATE_27 IlRxMsgHndESR_Track27
#define IlRxSigHndCAN_TX_TRACK_MED_RANGE_MODE_27 IlRxMsgHndESR_Track27
#define IlRxSigHndCAN_TX_TRACK_ONCOMING_26   IlRxMsgHndESR_Track26
#define IlRxSigHndCAN_TX_TRACK_GROUPING_CHANGED_26 IlRxMsgHndESR_Track26
#define IlRxSigHndCAN_TX_TRACK_LAT_RATE_26   IlRxMsgHndESR_Track26
#define IlRxSigHndCAN_TX_TRACK_ANGLE_26      IlRxMsgHndESR_Track26
#define IlRxSigHndCAN_TX_TRACK_STATUS_26     IlRxMsgHndESR_Track26
#define IlRxSigHndCAN_TX_TRACK_RANGE_26      IlRxMsgHndESR_Track26
#define IlRxSigHndCAN_TX_TRACK_RANGE_ACCEL_26 IlRxMsgHndESR_Track26
#define IlRxSigHndCAN_TX_TRACK_WIDTH_26      IlRxMsgHndESR_Track26
#define IlRxSigHndCAN_TX_TRACK_ROLLING_COUNT_26 IlRxMsgHndESR_Track26
#define IlRxSigHndCAN_TX_TRACK_BRIDGE_OBJECT_26 IlRxMsgHndESR_Track26
#define IlRxSigHndCAN_TX_TRACK_RANGE_RATE_26 IlRxMsgHndESR_Track26
#define IlRxSigHndCAN_TX_TRACK_MED_RANGE_MODE_26 IlRxMsgHndESR_Track26
#define IlRxSigHndCAN_TX_TRACK_ONCOMING_25   IlRxMsgHndESR_Track25
#define IlRxSigHndCAN_TX_TRACK_GROUPING_CHANGED_25 IlRxMsgHndESR_Track25
#define IlRxSigHndCAN_TX_TRACK_LAT_RATE_25   IlRxMsgHndESR_Track25
#define IlRxSigHndCAN_TX_TRACK_ANGLE_25      IlRxMsgHndESR_Track25
#define IlRxSigHndCAN_TX_TRACK_STATUS_25     IlRxMsgHndESR_Track25
#define IlRxSigHndCAN_TX_TRACK_RANGE_25      IlRxMsgHndESR_Track25
#define IlRxSigHndCAN_TX_TRACK_RANGE_ACCEL_25 IlRxMsgHndESR_Track25
#define IlRxSigHndCAN_TX_TRACK_WIDTH_25      IlRxMsgHndESR_Track25
#define IlRxSigHndCAN_TX_TRACK_ROLLING_COUNT_25 IlRxMsgHndESR_Track25
#define IlRxSigHndCAN_TX_TRACK_BRIDGE_OBJECT_25 IlRxMsgHndESR_Track25
#define IlRxSigHndCAN_TX_TRACK_RANGE_RATE_25 IlRxMsgHndESR_Track25
#define IlRxSigHndCAN_TX_TRACK_MED_RANGE_MODE_25 IlRxMsgHndESR_Track25
#define IlRxSigHndCAN_TX_TRACK_ONCOMING_24   IlRxMsgHndESR_Track24
#define IlRxSigHndCAN_TX_TRACK_GROUPING_CHANGED_24 IlRxMsgHndESR_Track24
#define IlRxSigHndCAN_TX_TRACK_LAT_RATE_24   IlRxMsgHndESR_Track24
#define IlRxSigHndCAN_TX_TRACK_ANGLE_24      IlRxMsgHndESR_Track24
#define IlRxSigHndCAN_TX_TRACK_STATUS_24     IlRxMsgHndESR_Track24
#define IlRxSigHndCAN_TX_TRACK_RANGE_24      IlRxMsgHndESR_Track24
#define IlRxSigHndCAN_TX_TRACK_RANGE_ACCEL_24 IlRxMsgHndESR_Track24
#define IlRxSigHndCAN_TX_TRACK_WIDTH_24      IlRxMsgHndESR_Track24
#define IlRxSigHndCAN_TX_TRACK_ROLLING_COUNT_24 IlRxMsgHndESR_Track24
#define IlRxSigHndCAN_TX_TRACK_BRIDGE_OBJECT_24 IlRxMsgHndESR_Track24
#define IlRxSigHndCAN_TX_TRACK_RANGE_RATE_24 IlRxMsgHndESR_Track24
#define IlRxSigHndCAN_TX_TRACK_MED_RANGE_MODE_24 IlRxMsgHndESR_Track24
#define IlRxSigHndCAN_TX_TRACK_ONCOMING_23   IlRxMsgHndESR_Track23
#define IlRxSigHndCAN_TX_TRACK_GROUPING_CHANGED_23 IlRxMsgHndESR_Track23
#define IlRxSigHndCAN_TX_TRACK_LAT_RATE_23   IlRxMsgHndESR_Track23
#define IlRxSigHndCAN_TX_TRACK_ANGLE_23      IlRxMsgHndESR_Track23
#define IlRxSigHndCAN_TX_TRACK_STATUS_23     IlRxMsgHndESR_Track23
#define IlRxSigHndCAN_TX_TRACK_RANGE_23      IlRxMsgHndESR_Track23
#define IlRxSigHndCAN_TX_TRACK_RANGE_ACCEL_23 IlRxMsgHndESR_Track23
#define IlRxSigHndCAN_TX_TRACK_WIDTH_23      IlRxMsgHndESR_Track23
#define IlRxSigHndCAN_TX_TRACK_ROLLING_COUNT_23 IlRxMsgHndESR_Track23
#define IlRxSigHndCAN_TX_TRACK_BRIDGE_OBJECT_23 IlRxMsgHndESR_Track23
#define IlRxSigHndCAN_TX_TRACK_RANGE_RATE_23 IlRxMsgHndESR_Track23
#define IlRxSigHndCAN_TX_TRACK_MED_RANGE_MODE_23 IlRxMsgHndESR_Track23
#define IlRxSigHndCAN_TX_TRACK_ONCOMING_22   IlRxMsgHndESR_Track22
#define IlRxSigHndCAN_TX_TRACK_GROUPING_CHANGED_22 IlRxMsgHndESR_Track22
#define IlRxSigHndCAN_TX_TRACK_LAT_RATE_22   IlRxMsgHndESR_Track22
#define IlRxSigHndCAN_TX_TRACK_ANGLE_22      IlRxMsgHndESR_Track22
#define IlRxSigHndCAN_TX_TRACK_STATUS_22     IlRxMsgHndESR_Track22
#define IlRxSigHndCAN_TX_TRACK_RANGE_22      IlRxMsgHndESR_Track22
#define IlRxSigHndCAN_TX_TRACK_RANGE_ACCEL_22 IlRxMsgHndESR_Track22
#define IlRxSigHndCAN_TX_TRACK_WIDTH_22      IlRxMsgHndESR_Track22
#define IlRxSigHndCAN_TX_TRACK_ROLLING_COUNT_22 IlRxMsgHndESR_Track22
#define IlRxSigHndCAN_TX_TRACK_BRIDGE_OBJECT_22 IlRxMsgHndESR_Track22
#define IlRxSigHndCAN_TX_TRACK_RANGE_RATE_22 IlRxMsgHndESR_Track22
#define IlRxSigHndCAN_TX_TRACK_MED_RANGE_MODE_22 IlRxMsgHndESR_Track22
#define IlRxSigHndCAN_TX_TRACK_ONCOMING_21   IlRxMsgHndESR_Track21
#define IlRxSigHndCAN_TX_TRACK_GROUPING_CHANGED_21 IlRxMsgHndESR_Track21
#define IlRxSigHndCAN_TX_TRACK_LAT_RATE_21   IlRxMsgHndESR_Track21
#define IlRxSigHndCAN_TX_TRACK_ANGLE_21      IlRxMsgHndESR_Track21
#define IlRxSigHndCAN_TX_TRACK_STATUS_21     IlRxMsgHndESR_Track21
#define IlRxSigHndCAN_TX_TRACK_RANGE_21      IlRxMsgHndESR_Track21
#define IlRxSigHndCAN_TX_TRACK_RANGE_ACCEL_21 IlRxMsgHndESR_Track21
#define IlRxSigHndCAN_TX_TRACK_WIDTH_21      IlRxMsgHndESR_Track21
#define IlRxSigHndCAN_TX_TRACK_ROLLING_COUNT_21 IlRxMsgHndESR_Track21
#define IlRxSigHndCAN_TX_TRACK_BRIDGE_OBJECT_21 IlRxMsgHndESR_Track21
#define IlRxSigHndCAN_TX_TRACK_RANGE_RATE_21 IlRxMsgHndESR_Track21
#define IlRxSigHndCAN_TX_TRACK_MED_RANGE_MODE_21 IlRxMsgHndESR_Track21
#define IlRxSigHndCAN_TX_TRACK_ONCOMING_20   IlRxMsgHndESR_Track20
#define IlRxSigHndCAN_TX_TRACK_GROUPING_CHANGED_20 IlRxMsgHndESR_Track20
#define IlRxSigHndCAN_TX_TRACK_LAT_RATE_20   IlRxMsgHndESR_Track20
#define IlRxSigHndCAN_TX_TRACK_ANGLE_20      IlRxMsgHndESR_Track20
#define IlRxSigHndCAN_TX_TRACK_STATUS_20     IlRxMsgHndESR_Track20
#define IlRxSigHndCAN_TX_TRACK_RANGE_20      IlRxMsgHndESR_Track20
#define IlRxSigHndCAN_TX_TRACK_RANGE_ACCEL_20 IlRxMsgHndESR_Track20
#define IlRxSigHndCAN_TX_TRACK_WIDTH_20      IlRxMsgHndESR_Track20
#define IlRxSigHndCAN_TX_TRACK_ROLLING_COUNT_20 IlRxMsgHndESR_Track20
#define IlRxSigHndCAN_TX_TRACK_BRIDGE_OBJECT_20 IlRxMsgHndESR_Track20
#define IlRxSigHndCAN_TX_TRACK_RANGE_RATE_20 IlRxMsgHndESR_Track20
#define IlRxSigHndCAN_TX_TRACK_MED_RANGE_MODE_20 IlRxMsgHndESR_Track20
#define IlRxSigHndCAN_TX_TRACK_ONCOMING_19   IlRxMsgHndESR_Track19
#define IlRxSigHndCAN_TX_TRACK_GROUPING_CHANGED_19 IlRxMsgHndESR_Track19
#define IlRxSigHndCAN_TX_TRACK_LAT_RATE_19   IlRxMsgHndESR_Track19
#define IlRxSigHndCAN_TX_TRACK_ANGLE_19      IlRxMsgHndESR_Track19
#define IlRxSigHndCAN_TX_TRACK_STATUS_19     IlRxMsgHndESR_Track19
#define IlRxSigHndCAN_TX_TRACK_RANGE_19      IlRxMsgHndESR_Track19
#define IlRxSigHndCAN_TX_TRACK_RANGE_ACCEL_19 IlRxMsgHndESR_Track19
#define IlRxSigHndCAN_TX_TRACK_WIDTH_19      IlRxMsgHndESR_Track19
#define IlRxSigHndCAN_TX_TRACK_ROLLING_COUNT_19 IlRxMsgHndESR_Track19
#define IlRxSigHndCAN_TX_TRACK_BRIDGE_OBJECT_19 IlRxMsgHndESR_Track19
#define IlRxSigHndCAN_TX_TRACK_RANGE_RATE_19 IlRxMsgHndESR_Track19
#define IlRxSigHndCAN_TX_TRACK_MED_RANGE_MODE_19 IlRxMsgHndESR_Track19
#define IlRxSigHndCAN_TX_TRACK_ONCOMING_18   IlRxMsgHndESR_Track18
#define IlRxSigHndCAN_TX_TRACK_GROUPING_CHANGED_18 IlRxMsgHndESR_Track18
#define IlRxSigHndCAN_TX_TRACK_LAT_RATE_18   IlRxMsgHndESR_Track18
#define IlRxSigHndCAN_TX_TRACK_ANGLE_18      IlRxMsgHndESR_Track18
#define IlRxSigHndCAN_TX_TRACK_STATUS_18     IlRxMsgHndESR_Track18
#define IlRxSigHndCAN_TX_TRACK_RANGE_18      IlRxMsgHndESR_Track18
#define IlRxSigHndCAN_TX_TRACK_RANGE_ACCEL_18 IlRxMsgHndESR_Track18
#define IlRxSigHndCAN_TX_TRACK_WIDTH_18      IlRxMsgHndESR_Track18
#define IlRxSigHndCAN_TX_TRACK_ROLLING_COUNT_18 IlRxMsgHndESR_Track18
#define IlRxSigHndCAN_TX_TRACK_BRIDGE_OBJECT_18 IlRxMsgHndESR_Track18
#define IlRxSigHndCAN_TX_TRACK_RANGE_RATE_18 IlRxMsgHndESR_Track18
#define IlRxSigHndCAN_TX_TRACK_MED_RANGE_MODE_18 IlRxMsgHndESR_Track18
#define IlRxSigHndCAN_TX_TRACK_ONCOMING_17   IlRxMsgHndESR_Track17
#define IlRxSigHndCAN_TX_TRACK_GROUPING_CHANGED_17 IlRxMsgHndESR_Track17
#define IlRxSigHndCAN_TX_TRACK_LAT_RATE_17   IlRxMsgHndESR_Track17
#define IlRxSigHndCAN_TX_TRACK_ANGLE_17      IlRxMsgHndESR_Track17
#define IlRxSigHndCAN_TX_TRACK_STATUS_17     IlRxMsgHndESR_Track17
#define IlRxSigHndCAN_TX_TRACK_RANGE_17      IlRxMsgHndESR_Track17
#define IlRxSigHndCAN_TX_TRACK_RANGE_ACCEL_17 IlRxMsgHndESR_Track17
#define IlRxSigHndCAN_TX_TRACK_WIDTH_17      IlRxMsgHndESR_Track17
#define IlRxSigHndCAN_TX_TRACK_ROLLING_COUNT_17 IlRxMsgHndESR_Track17
#define IlRxSigHndCAN_TX_TRACK_BRIDGE_OBJECT_17 IlRxMsgHndESR_Track17
#define IlRxSigHndCAN_TX_TRACK_RANGE_RATE_17 IlRxMsgHndESR_Track17
#define IlRxSigHndCAN_TX_TRACK_MED_RANGE_MODE_17 IlRxMsgHndESR_Track17
#define IlRxSigHndCAN_TX_TRACK_ONCOMING_16   IlRxMsgHndESR_Track16
#define IlRxSigHndCAN_TX_TRACK_GROUPING_CHANGED_16 IlRxMsgHndESR_Track16
#define IlRxSigHndCAN_TX_TRACK_LAT_RATE_16   IlRxMsgHndESR_Track16
#define IlRxSigHndCAN_TX_TRACK_ANGLE_16      IlRxMsgHndESR_Track16
#define IlRxSigHndCAN_TX_TRACK_STATUS_16     IlRxMsgHndESR_Track16
#define IlRxSigHndCAN_TX_TRACK_RANGE_16      IlRxMsgHndESR_Track16
#define IlRxSigHndCAN_TX_TRACK_RANGE_ACCEL_16 IlRxMsgHndESR_Track16
#define IlRxSigHndCAN_TX_TRACK_WIDTH_16      IlRxMsgHndESR_Track16
#define IlRxSigHndCAN_TX_TRACK_ROLLING_COUNT_16 IlRxMsgHndESR_Track16
#define IlRxSigHndCAN_TX_TRACK_BRIDGE_OBJECT_16 IlRxMsgHndESR_Track16
#define IlRxSigHndCAN_TX_TRACK_RANGE_RATE_16 IlRxMsgHndESR_Track16
#define IlRxSigHndCAN_TX_TRACK_MED_RANGE_MODE_16 IlRxMsgHndESR_Track16
#define IlRxSigHndCAN_TX_TRACK_ONCOMING_15   IlRxMsgHndESR_Track15
#define IlRxSigHndCAN_TX_TRACK_GROUPING_CHANGED_15 IlRxMsgHndESR_Track15
#define IlRxSigHndCAN_TX_TRACK_LAT_RATE_15   IlRxMsgHndESR_Track15
#define IlRxSigHndCAN_TX_TRACK_ANGLE_15      IlRxMsgHndESR_Track15
#define IlRxSigHndCAN_TX_TRACK_STATUS_15     IlRxMsgHndESR_Track15
#define IlRxSigHndCAN_TX_TRACK_RANGE_15      IlRxMsgHndESR_Track15
#define IlRxSigHndCAN_TX_TRACK_RANGE_ACCEL_15 IlRxMsgHndESR_Track15
#define IlRxSigHndCAN_TX_TRACK_WIDTH_15      IlRxMsgHndESR_Track15
#define IlRxSigHndCAN_TX_TRACK_ROLLING_COUNT_15 IlRxMsgHndESR_Track15
#define IlRxSigHndCAN_TX_TRACK_BRIDGE_OBJECT_15 IlRxMsgHndESR_Track15
#define IlRxSigHndCAN_TX_TRACK_RANGE_RATE_15 IlRxMsgHndESR_Track15
#define IlRxSigHndCAN_TX_TRACK_MED_RANGE_MODE_15 IlRxMsgHndESR_Track15
#define IlRxSigHndCAN_TX_TRACK_ONCOMING_14   IlRxMsgHndESR_Track14
#define IlRxSigHndCAN_TX_TRACK_GROUPING_CHANGED_14 IlRxMsgHndESR_Track14
#define IlRxSigHndCAN_TX_TRACK_LAT_RATE_14   IlRxMsgHndESR_Track14
#define IlRxSigHndCAN_TX_TRACK_ANGLE_14      IlRxMsgHndESR_Track14
#define IlRxSigHndCAN_TX_TRACK_STATUS_14     IlRxMsgHndESR_Track14
#define IlRxSigHndCAN_TX_TRACK_RANGE_14      IlRxMsgHndESR_Track14
#define IlRxSigHndCAN_TX_TRACK_RANGE_ACCEL_14 IlRxMsgHndESR_Track14
#define IlRxSigHndCAN_TX_TRACK_WIDTH_14      IlRxMsgHndESR_Track14
#define IlRxSigHndCAN_TX_TRACK_ROLLING_COUNT_14 IlRxMsgHndESR_Track14
#define IlRxSigHndCAN_TX_TRACK_BRIDGE_OBJECT_14 IlRxMsgHndESR_Track14
#define IlRxSigHndCAN_TX_TRACK_RANGE_RATE_14 IlRxMsgHndESR_Track14
#define IlRxSigHndCAN_TX_TRACK_MED_RANGE_MODE_14 IlRxMsgHndESR_Track14
#define IlRxSigHndCAN_TX_TRACK_ONCOMING_13   IlRxMsgHndESR_Track13
#define IlRxSigHndCAN_TX_TRACK_GROUPING_CHANGED_13 IlRxMsgHndESR_Track13
#define IlRxSigHndCAN_TX_TRACK_LAT_RATE_13   IlRxMsgHndESR_Track13
#define IlRxSigHndCAN_TX_TRACK_ANGLE_13      IlRxMsgHndESR_Track13
#define IlRxSigHndCAN_TX_TRACK_STATUS_13     IlRxMsgHndESR_Track13
#define IlRxSigHndCAN_TX_TRACK_RANGE_13      IlRxMsgHndESR_Track13
#define IlRxSigHndCAN_TX_TRACK_RANGE_ACCEL_13 IlRxMsgHndESR_Track13
#define IlRxSigHndCAN_TX_TRACK_WIDTH_13      IlRxMsgHndESR_Track13
#define IlRxSigHndCAN_TX_TRACK_ROLLING_COUNT_13 IlRxMsgHndESR_Track13
#define IlRxSigHndCAN_TX_TRACK_BRIDGE_OBJECT_13 IlRxMsgHndESR_Track13
#define IlRxSigHndCAN_TX_TRACK_RANGE_RATE_13 IlRxMsgHndESR_Track13
#define IlRxSigHndCAN_TX_TRACK_MED_RANGE_MODE_13 IlRxMsgHndESR_Track13
#define IlRxSigHndCAN_TX_TRACK_ONCOMING_12   IlRxMsgHndESR_Track12
#define IlRxSigHndCAN_TX_TRACK_GROUPING_CHANGED_12 IlRxMsgHndESR_Track12
#define IlRxSigHndCAN_TX_TRACK_LAT_RATE_12   IlRxMsgHndESR_Track12
#define IlRxSigHndCAN_TX_TRACK_ANGLE_12      IlRxMsgHndESR_Track12
#define IlRxSigHndCAN_TX_TRACK_STATUS_12     IlRxMsgHndESR_Track12
#define IlRxSigHndCAN_TX_TRACK_RANGE_12      IlRxMsgHndESR_Track12
#define IlRxSigHndCAN_TX_TRACK_RANGE_ACCEL_12 IlRxMsgHndESR_Track12
#define IlRxSigHndCAN_TX_TRACK_WIDTH_12      IlRxMsgHndESR_Track12
#define IlRxSigHndCAN_TX_TRACK_ROLLING_COUNT_12 IlRxMsgHndESR_Track12
#define IlRxSigHndCAN_TX_TRACK_BRIDGE_OBJECT_12 IlRxMsgHndESR_Track12
#define IlRxSigHndCAN_TX_TRACK_RANGE_RATE_12 IlRxMsgHndESR_Track12
#define IlRxSigHndCAN_TX_TRACK_MED_RANGE_MODE_12 IlRxMsgHndESR_Track12
#define IlRxSigHndCAN_TX_TRACK_ONCOMING_11   IlRxMsgHndESR_Track11
#define IlRxSigHndCAN_TX_TRACK_GROUPING_CHANGED_11 IlRxMsgHndESR_Track11
#define IlRxSigHndCAN_TX_TRACK_LAT_RATE_11   IlRxMsgHndESR_Track11
#define IlRxSigHndCAN_TX_TRACK_ANGLE_11      IlRxMsgHndESR_Track11
#define IlRxSigHndCAN_TX_TRACK_STATUS_11     IlRxMsgHndESR_Track11
#define IlRxSigHndCAN_TX_TRACK_RANGE_11      IlRxMsgHndESR_Track11
#define IlRxSigHndCAN_TX_TRACK_RANGE_ACCEL_11 IlRxMsgHndESR_Track11
#define IlRxSigHndCAN_TX_TRACK_WIDTH_11      IlRxMsgHndESR_Track11
#define IlRxSigHndCAN_TX_TRACK_ROLLING_COUNT_11 IlRxMsgHndESR_Track11
#define IlRxSigHndCAN_TX_TRACK_BRIDGE_OBJECT_11 IlRxMsgHndESR_Track11
#define IlRxSigHndCAN_TX_TRACK_RANGE_RATE_11 IlRxMsgHndESR_Track11
#define IlRxSigHndCAN_TX_TRACK_MED_RANGE_MODE_11 IlRxMsgHndESR_Track11
#define IlRxSigHndCAN_TX_TRACK_ONCOMING_10   IlRxMsgHndESR_Track10
#define IlRxSigHndCAN_TX_TRACK_GROUPING_CHANGED_10 IlRxMsgHndESR_Track10
#define IlRxSigHndCAN_TX_TRACK_LAT_RATE_10   IlRxMsgHndESR_Track10
#define IlRxSigHndCAN_TX_TRACK_ANGLE_10      IlRxMsgHndESR_Track10
#define IlRxSigHndCAN_TX_TRACK_STATUS_10     IlRxMsgHndESR_Track10
#define IlRxSigHndCAN_TX_TRACK_RANGE_10      IlRxMsgHndESR_Track10
#define IlRxSigHndCAN_TX_TRACK_RANGE_ACCEL_10 IlRxMsgHndESR_Track10
#define IlRxSigHndCAN_TX_TRACK_WIDTH_10      IlRxMsgHndESR_Track10
#define IlRxSigHndCAN_TX_TRACK_ROLLING_COUNT_10 IlRxMsgHndESR_Track10
#define IlRxSigHndCAN_TX_TRACK_BRIDGE_OBJECT_10 IlRxMsgHndESR_Track10
#define IlRxSigHndCAN_TX_TRACK_RANGE_RATE_10 IlRxMsgHndESR_Track10
#define IlRxSigHndCAN_TX_TRACK_MED_RANGE_MODE_10 IlRxMsgHndESR_Track10
#define IlRxSigHndCAN_TX_TRACK_ONCOMING_09   IlRxMsgHndESR_Track09
#define IlRxSigHndCAN_TX_TRACK_GROUPING_CHANGED_09 IlRxMsgHndESR_Track09
#define IlRxSigHndCAN_TX_TRACK_LAT_RATE_09   IlRxMsgHndESR_Track09
#define IlRxSigHndCAN_TX_TRACK_ANGLE_09      IlRxMsgHndESR_Track09
#define IlRxSigHndCAN_TX_TRACK_STATUS_09     IlRxMsgHndESR_Track09
#define IlRxSigHndCAN_TX_TRACK_RANGE_09      IlRxMsgHndESR_Track09
#define IlRxSigHndCAN_TX_TRACK_RANGE_ACCEL_09 IlRxMsgHndESR_Track09
#define IlRxSigHndCAN_TX_TRACK_WIDTH_09      IlRxMsgHndESR_Track09
#define IlRxSigHndCAN_TX_TRACK_ROLLING_COUNT_09 IlRxMsgHndESR_Track09
#define IlRxSigHndCAN_TX_TRACK_BRIDGE_OBJECT_09 IlRxMsgHndESR_Track09
#define IlRxSigHndCAN_TX_TRACK_RANGE_RATE_09 IlRxMsgHndESR_Track09
#define IlRxSigHndCAN_TX_TRACK_MED_RANGE_MODE_09 IlRxMsgHndESR_Track09
#define IlRxSigHndCAN_TX_TRACK_ONCOMING_08   IlRxMsgHndESR_Track08
#define IlRxSigHndCAN_TX_TRACK_GROUPING_CHANGED_08 IlRxMsgHndESR_Track08
#define IlRxSigHndCAN_TX_TRACK_LAT_RATE_08   IlRxMsgHndESR_Track08
#define IlRxSigHndCAN_TX_TRACK_ANGLE_08      IlRxMsgHndESR_Track08
#define IlRxSigHndCAN_TX_TRACK_STATUS_08     IlRxMsgHndESR_Track08
#define IlRxSigHndCAN_TX_TRACK_RANGE_08      IlRxMsgHndESR_Track08
#define IlRxSigHndCAN_TX_TRACK_RANGE_ACCEL_08 IlRxMsgHndESR_Track08
#define IlRxSigHndCAN_TX_TRACK_WIDTH_08      IlRxMsgHndESR_Track08
#define IlRxSigHndCAN_TX_TRACK_ROLLING_COUNT_08 IlRxMsgHndESR_Track08
#define IlRxSigHndCAN_TX_TRACK_BRIDGE_OBJECT_08 IlRxMsgHndESR_Track08
#define IlRxSigHndCAN_TX_TRACK_RANGE_RATE_08 IlRxMsgHndESR_Track08
#define IlRxSigHndCAN_TX_TRACK_MED_RANGE_MODE_08 IlRxMsgHndESR_Track08
#define IlRxSigHndCAN_TX_TRACK_ONCOMING_07   IlRxMsgHndESR_Track07
#define IlRxSigHndCAN_TX_TRACK_GROUPING_CHANGED_07 IlRxMsgHndESR_Track07
#define IlRxSigHndCAN_TX_TRACK_LAT_RATE_07   IlRxMsgHndESR_Track07
#define IlRxSigHndCAN_TX_TRACK_ANGLE_07      IlRxMsgHndESR_Track07
#define IlRxSigHndCAN_TX_TRACK_STATUS_07     IlRxMsgHndESR_Track07
#define IlRxSigHndCAN_TX_TRACK_RANGE_07      IlRxMsgHndESR_Track07
#define IlRxSigHndCAN_TX_TRACK_RANGE_ACCEL_07 IlRxMsgHndESR_Track07
#define IlRxSigHndCAN_TX_TRACK_WIDTH_07      IlRxMsgHndESR_Track07
#define IlRxSigHndCAN_TX_TRACK_ROLLING_COUNT_07 IlRxMsgHndESR_Track07
#define IlRxSigHndCAN_TX_TRACK_BRIDGE_OBJECT_07 IlRxMsgHndESR_Track07
#define IlRxSigHndCAN_TX_TRACK_RANGE_RATE_07 IlRxMsgHndESR_Track07
#define IlRxSigHndCAN_TX_TRACK_MED_RANGE_MODE_07 IlRxMsgHndESR_Track07
#define IlRxSigHndCAN_TX_TRACK_ONCOMING_06   IlRxMsgHndESR_Track06
#define IlRxSigHndCAN_TX_TRACK_GROUPING_CHANGED_06 IlRxMsgHndESR_Track06
#define IlRxSigHndCAN_TX_TRACK_LAT_RATE_06   IlRxMsgHndESR_Track06
#define IlRxSigHndCAN_TX_TRACK_ANGLE_06      IlRxMsgHndESR_Track06
#define IlRxSigHndCAN_TX_TRACK_STATUS_06     IlRxMsgHndESR_Track06
#define IlRxSigHndCAN_TX_TRACK_RANGE_06      IlRxMsgHndESR_Track06
#define IlRxSigHndCAN_TX_TRACK_RANGE_ACCEL_06 IlRxMsgHndESR_Track06
#define IlRxSigHndCAN_TX_TRACK_WIDTH_06      IlRxMsgHndESR_Track06
#define IlRxSigHndCAN_TX_TRACK_ROLLING_COUNT_06 IlRxMsgHndESR_Track06
#define IlRxSigHndCAN_TX_TRACK_BRIDGE_OBJECT_06 IlRxMsgHndESR_Track06
#define IlRxSigHndCAN_TX_TRACK_RANGE_RATE_06 IlRxMsgHndESR_Track06
#define IlRxSigHndCAN_TX_TRACK_MED_RANGE_MODE_06 IlRxMsgHndESR_Track06
#define IlRxSigHndCAN_TX_TRACK_ONCOMING_05   IlRxMsgHndESR_Track05
#define IlRxSigHndCAN_TX_TRACK_GROUPING_CHANGED_05 IlRxMsgHndESR_Track05
#define IlRxSigHndCAN_TX_TRACK_LAT_RATE_05   IlRxMsgHndESR_Track05
#define IlRxSigHndCAN_TX_TRACK_ANGLE_05      IlRxMsgHndESR_Track05
#define IlRxSigHndCAN_TX_TRACK_STATUS_05     IlRxMsgHndESR_Track05
#define IlRxSigHndCAN_TX_TRACK_RANGE_05      IlRxMsgHndESR_Track05
#define IlRxSigHndCAN_TX_TRACK_RANGE_ACCEL_05 IlRxMsgHndESR_Track05
#define IlRxSigHndCAN_TX_TRACK_WIDTH_05      IlRxMsgHndESR_Track05
#define IlRxSigHndCAN_TX_TRACK_ROLLING_COUNT_05 IlRxMsgHndESR_Track05
#define IlRxSigHndCAN_TX_TRACK_BRIDGE_OBJECT_05 IlRxMsgHndESR_Track05
#define IlRxSigHndCAN_TX_TRACK_RANGE_RATE_05 IlRxMsgHndESR_Track05
#define IlRxSigHndCAN_TX_TRACK_MED_RANGE_MODE_05 IlRxMsgHndESR_Track05
#define IlRxSigHndCAN_TX_TRACK_ONCOMING_04   IlRxMsgHndESR_Track04
#define IlRxSigHndCAN_TX_TRACK_GROUPING_CHANGED_04 IlRxMsgHndESR_Track04
#define IlRxSigHndCAN_TX_TRACK_LAT_RATE_04   IlRxMsgHndESR_Track04
#define IlRxSigHndCAN_TX_TRACK_ANGLE_04      IlRxMsgHndESR_Track04
#define IlRxSigHndCAN_TX_TRACK_STATUS_04     IlRxMsgHndESR_Track04
#define IlRxSigHndCAN_TX_TRACK_RANGE_04      IlRxMsgHndESR_Track04
#define IlRxSigHndCAN_TX_TRACK_RANGE_ACCEL_04 IlRxMsgHndESR_Track04
#define IlRxSigHndCAN_TX_TRACK_WIDTH_04      IlRxMsgHndESR_Track04
#define IlRxSigHndCAN_TX_TRACK_ROLLING_COUNT_04 IlRxMsgHndESR_Track04
#define IlRxSigHndCAN_TX_TRACK_BRIDGE_OBJECT_04 IlRxMsgHndESR_Track04
#define IlRxSigHndCAN_TX_TRACK_RANGE_RATE_04 IlRxMsgHndESR_Track04
#define IlRxSigHndCAN_TX_TRACK_MED_RANGE_MODE_04 IlRxMsgHndESR_Track04
#define IlRxSigHndCAN_TX_TRACK_ONCOMING_03   IlRxMsgHndESR_Track03
#define IlRxSigHndCAN_TX_TRACK_GROUPING_CHANGED_03 IlRxMsgHndESR_Track03
#define IlRxSigHndCAN_TX_TRACK_LAT_RATE_03   IlRxMsgHndESR_Track03
#define IlRxSigHndCAN_TX_TRACK_ANGLE_03      IlRxMsgHndESR_Track03
#define IlRxSigHndCAN_TX_TRACK_STATUS_03     IlRxMsgHndESR_Track03
#define IlRxSigHndCAN_TX_TRACK_RANGE_03      IlRxMsgHndESR_Track03
#define IlRxSigHndCAN_TX_TRACK_RANGE_ACCEL_03 IlRxMsgHndESR_Track03
#define IlRxSigHndCAN_TX_TRACK_WIDTH_03      IlRxMsgHndESR_Track03
#define IlRxSigHndCAN_TX_TRACK_ROLLING_COUNT_03 IlRxMsgHndESR_Track03
#define IlRxSigHndCAN_TX_TRACK_BRIDGE_OBJECT_03 IlRxMsgHndESR_Track03
#define IlRxSigHndCAN_TX_TRACK_RANGE_RATE_03 IlRxMsgHndESR_Track03
#define IlRxSigHndCAN_TX_TRACK_MED_RANGE_MODE_03 IlRxMsgHndESR_Track03
#define IlRxSigHndCAN_TX_TRACK_ONCOMING_02   IlRxMsgHndESR_Track02
#define IlRxSigHndCAN_TX_TRACK_GROUPING_CHANGED_02 IlRxMsgHndESR_Track02
#define IlRxSigHndCAN_TX_TRACK_LAT_RATE_02   IlRxMsgHndESR_Track02
#define IlRxSigHndCAN_TX_TRACK_ANGLE_02      IlRxMsgHndESR_Track02
#define IlRxSigHndCAN_TX_TRACK_STATUS_02     IlRxMsgHndESR_Track02
#define IlRxSigHndCAN_TX_TRACK_RANGE_02      IlRxMsgHndESR_Track02
#define IlRxSigHndCAN_TX_TRACK_RANGE_ACCEL_02 IlRxMsgHndESR_Track02
#define IlRxSigHndCAN_TX_TRACK_WIDTH_02      IlRxMsgHndESR_Track02
#define IlRxSigHndCAN_TX_TRACK_ROLLING_COUNT_02 IlRxMsgHndESR_Track02
#define IlRxSigHndCAN_TX_TRACK_BRIDGE_OBJECT_02 IlRxMsgHndESR_Track02
#define IlRxSigHndCAN_TX_TRACK_RANGE_RATE_02 IlRxMsgHndESR_Track02
#define IlRxSigHndCAN_TX_TRACK_MED_RANGE_MODE_02 IlRxMsgHndESR_Track02
#define IlRxSigHndCAN_TX_TRACK_ONCOMING_01   IlRxMsgHndESR_Track01
#define IlRxSigHndCAN_TX_TRACK_GROUPING_CHANGED_01 IlRxMsgHndESR_Track01
#define IlRxSigHndCAN_TX_TRACK_LAT_RATE_01   IlRxMsgHndESR_Track01
#define IlRxSigHndCAN_TX_TRACK_ANGLE_01      IlRxMsgHndESR_Track01
#define IlRxSigHndCAN_TX_TRACK_STATUS_01     IlRxMsgHndESR_Track01
#define IlRxSigHndCAN_TX_TRACK_RANGE_01      IlRxMsgHndESR_Track01
#define IlRxSigHndCAN_TX_TRACK_RANGE_ACCEL_01 IlRxMsgHndESR_Track01
#define IlRxSigHndCAN_TX_TRACK_WIDTH_01      IlRxMsgHndESR_Track01
#define IlRxSigHndCAN_TX_TRACK_ROLLING_COUNT_01 IlRxMsgHndESR_Track01
#define IlRxSigHndCAN_TX_TRACK_BRIDGE_OBJECT_01 IlRxMsgHndESR_Track01
#define IlRxSigHndCAN_TX_TRACK_RANGE_RATE_01 IlRxMsgHndESR_Track01
#define IlRxSigHndCAN_TX_TRACK_MED_RANGE_MODE_01 IlRxMsgHndESR_Track01
#define IlRxSigHndCAN_TX_ROLLING_COUNT_3     IlRxMsgHndESR_Status4
#define IlRxSigHndCAN_TX_MR_LR_MODE          IlRxMsgHndESR_Status4
#define IlRxSigHndCAN_TX_PARTIAL_BLOCKAGE    IlRxMsgHndESR_Status4
#define IlRxSigHndCAN_TX_SIDELOBE_BLOCKAGE   IlRxMsgHndESR_Status4
#define IlRxSigHndCAN_TX_LR_ONLY_GRATING_LOBE_DET IlRxMsgHndESR_Status4
#define IlRxSigHndCAN_TX_TRUCK_TARGET_DET    IlRxMsgHndESR_Status4
#define IlRxSigHndCAN_TX_PATH_ID_ACC         IlRxMsgHndESR_Status4
#define IlRxSigHndCAN_TX_PATH_ID_CMBB_MOVE   IlRxMsgHndESR_Status4
#define IlRxSigHndCAN_TX_PATH_ID_CMBB_STAT   IlRxMsgHndESR_Status4
#define IlRxSigHndCAN_TX_PATH_ID_FCW_MOVE    IlRxMsgHndESR_Status4
#define IlRxSigHndCAN_TX_PATH_ID_FCW_STAT    IlRxMsgHndESR_Status4
#define IlRxSigHndCAN_TX_AUTO_ALIGN_ANGLE    IlRxMsgHndESR_Status4
#define IlRxSigHndCAN_TX_PATH_ID_ACC_STAT    IlRxMsgHndESR_Status4
#define IlRxSigHndCAN_TX_HW_VERSION          IlRxMsgHndESR_Status3
#define IlRxSigHndCAN_TX_INTERFACE_VERSION   IlRxMsgHndESR_Status3
#define IlRxSigHndCAN_TX_SW_VERSION_HOST     IlRxMsgHndESR_Status3
#define IlRxSigHndCAN_TX_SERIAL_NUM          IlRxMsgHndESR_Status3
#define IlRxSigHndCAN_TX_SW_VERSION_PLD      IlRxMsgHndESR_Status3
#define IlRxSigHndCAN_TX_ROLLING_COUNT_2     IlRxMsgHndESR_Status2
#define IlRxSigHndCAN_TX_MAXIMUM_TRACKS_ACK  IlRxMsgHndESR_Status2
#define IlRxSigHndCAN_TX_STEERING_ANGLE_ACK  IlRxMsgHndESR_Status2
#define IlRxSigHndCAN_TX_RAW_DATA_MODE       IlRxMsgHndESR_Status2
#define IlRxSigHndCAN_TX_XCVR_OPERATIONAL    IlRxMsgHndESR_Status2
#define IlRxSigHndCAN_TX_INTERNAL_ERROR      IlRxMsgHndESR_Status2
#define IlRxSigHndCAN_TX_RANGE_PERF_ERROR    IlRxMsgHndESR_Status2
#define IlRxSigHndCAN_TX_OVERHEAT_ERROR      IlRxMsgHndESR_Status2
#define IlRxSigHndCAN_TX_TEMPERATURE         IlRxMsgHndESR_Status2
#define IlRxSigHndCAN_TX_GROUPING_MODE       IlRxMsgHndESR_Status2
#define IlRxSigHndCAN_TX_VEH_SPD_COMP_FACTOR IlRxMsgHndESR_Status2
#define IlRxSigHndCAN_TX_YAW_RATE_BIAS       IlRxMsgHndESR_Status2
#define IlRxSigHndCAN_TX_SW_VERSION_DSP      IlRxMsgHndESR_Status2
#define IlRxSigHndCAN_TX_DSP_TIMESTAMP       IlRxMsgHndESR_Status1
#define IlRxSigHndCAN_TX_ROLLING_COUNT_1     IlRxMsgHndESR_Status1
#define IlRxSigHndCAN_TX_RADIUS_CURVATURE_CALC IlRxMsgHndESR_Status1
#define IlRxSigHndCAN_TX_COMM_ERROR          IlRxMsgHndESR_Status1
#define IlRxSigHndCAN_TX_SCAN_INDEX          IlRxMsgHndESR_Status1
#define IlRxSigHndCAN_TX_YAW_RATE_CALC       IlRxMsgHndESR_Status1
#define IlRxSigHndCAN_TX_VEHICLE_SPEED_CALC  IlRxMsgHndESR_Status1
#define IlTxSigHndVision_only_Sign_Type_0x726 IlTxMsgHndTSR_message_G
#define IlTxSigHndSupplementary_Sign_Type_0x726 IlTxMsgHndTSR_message_G
#define IlTxSigHndSign_Position_X_0x726      IlTxMsgHndTSR_message_G
#define IlTxSigHndSign_Position_Y_0x726      IlTxMsgHndTSR_message_G
#define IlTxSigHndSign_Position_Z_0x726      IlTxMsgHndTSR_message_G
#define IlTxSigHndFilter_Type_0x726          IlTxMsgHndTSR_message_G
#define IlTxSigHndHeading_angle_Parameter_C1_0x77B IlTxMsgHndNext_lane_Right_P
#define IlTxSigHndView_range_0x77B           IlTxMsgHndNext_lane_Right_P
#define IlTxSigHndView_range_availability_0x77B IlTxMsgHndNext_lane_Right_P
#define IlTxSigHndLane_type_0x77A            IlTxMsgHndNext_lane_Right_O
#define IlTxSigHndQuality_0x77A              IlTxMsgHndNext_lane_Right_O
#define IlTxSigHndModel_degree_0x77A         IlTxMsgHndNext_lane_Right_O
#define IlTxSigHndPosition_Parameter_C0_0x77A IlTxMsgHndNext_lane_Right_O
#define IlTxSigHndCurvature_Parameter_C2_0x77A IlTxMsgHndNext_lane_Right_O
#define IlTxSigHndCurvature_derivative_C3_0x77A IlTxMsgHndNext_lane_Right_O
#define IlTxSigHndLane_mark_width_0x77A      IlTxMsgHndNext_lane_Right_O
#define IlTxSigHndHeading_angle_Parameter_C1_0x779 IlTxMsgHndNext_lane_Left_N
#define IlTxSigHndView_range_0x779           IlTxMsgHndNext_lane_Left_N
#define IlTxSigHndView_range_availability_0x779 IlTxMsgHndNext_lane_Left_N
#define IlTxSigHndLane_type_0x778            IlTxMsgHndNext_lane_Left_M
#define IlTxSigHndQuality_0x778              IlTxMsgHndNext_lane_Left_M
#define IlTxSigHndModel_degree_0x778         IlTxMsgHndNext_lane_Left_M
#define IlTxSigHndPosition_Parameter_C0_0x778 IlTxMsgHndNext_lane_Left_M
#define IlTxSigHndCurvature_Parameter_C2_0x778 IlTxMsgHndNext_lane_Left_M
#define IlTxSigHndCurvature_derivative_C3_0x778 IlTxMsgHndNext_lane_Left_M
#define IlTxSigHndLane_mark_width_0x778      IlTxMsgHndNext_lane_Left_M
#define IlTxSigHndHeading_angle_Parameter_C1_0x777 IlTxMsgHndNext_lane_Right_L
#define IlTxSigHndView_range_0x777           IlTxMsgHndNext_lane_Right_L
#define IlTxSigHndView_range_availability_0x777 IlTxMsgHndNext_lane_Right_L
#define IlTxSigHndLane_type_0x776            IlTxMsgHndNext_lane_Right_K
#define IlTxSigHndQuality_0x776              IlTxMsgHndNext_lane_Right_K
#define IlTxSigHndModel_degree_0x776         IlTxMsgHndNext_lane_Right_K
#define IlTxSigHndPosition_Parameter_C0_0x776 IlTxMsgHndNext_lane_Right_K
#define IlTxSigHndCurvature_Parameter_C2_0x776 IlTxMsgHndNext_lane_Right_K
#define IlTxSigHndCurvature_derivative_C3_0x776 IlTxMsgHndNext_lane_Right_K
#define IlTxSigHndLane_mark_width_0x776      IlTxMsgHndNext_lane_Right_K
#define IlTxSigHndHeading_angle_Parameter_C1_0x775 IlTxMsgHndNext_lane_Left_J
#define IlTxSigHndView_range_0x775           IlTxMsgHndNext_lane_Left_J
#define IlTxSigHndView_range_availability_0x775 IlTxMsgHndNext_lane_Left_J
#define IlTxSigHndLane_type_0x774            IlTxMsgHndNext_lane_Left_I
#define IlTxSigHndQuality_0x774              IlTxMsgHndNext_lane_Left_I
#define IlTxSigHndModel_degree_0x774         IlTxMsgHndNext_lane_Left_I
#define IlTxSigHndPosition_Parameter_C0_0x774 IlTxMsgHndNext_lane_Left_I
#define IlTxSigHndCurvature_Parameter_C2_0x774 IlTxMsgHndNext_lane_Left_I
#define IlTxSigHndCurvature_derivative_C3_0x774 IlTxMsgHndNext_lane_Left_I
#define IlTxSigHndLane_mark_width_0x774      IlTxMsgHndNext_lane_Left_I
#define IlTxSigHndHeading_angle_Parameter_C1_0x773 IlTxMsgHndNext_lane_Right_H
#define IlTxSigHndView_range_0x773           IlTxMsgHndNext_lane_Right_H
#define IlTxSigHndView_range_availability_0x773 IlTxMsgHndNext_lane_Right_H
#define IlTxSigHndLane_type_0x772            IlTxMsgHndNext_lane_Right_G
#define IlTxSigHndQuality_0x772              IlTxMsgHndNext_lane_Right_G
#define IlTxSigHndModel_degree_0x772         IlTxMsgHndNext_lane_Right_G
#define IlTxSigHndPosition_Parameter_C0_0x772 IlTxMsgHndNext_lane_Right_G
#define IlTxSigHndCurvature_Parameter_C2_0x772 IlTxMsgHndNext_lane_Right_G
#define IlTxSigHndCurvature_derivative_C3_0x772 IlTxMsgHndNext_lane_Right_G
#define IlTxSigHndLane_mark_width_0x772      IlTxMsgHndNext_lane_Right_G
#define IlTxSigHndHeading_angle_Parameter_C1_0x771 IlTxMsgHndNext_lane_Left_F
#define IlTxSigHndView_range_0x771           IlTxMsgHndNext_lane_Left_F
#define IlTxSigHndView_range_availability_0x771 IlTxMsgHndNext_lane_Left_F
#define IlTxSigHndLane_type_0x770            IlTxMsgHndNext_lane_Left_E
#define IlTxSigHndQuality_0x770              IlTxMsgHndNext_lane_Left_E
#define IlTxSigHndModel_degree_0x770         IlTxMsgHndNext_lane_Left_E
#define IlTxSigHndPosition_Parameter_C0_0x770 IlTxMsgHndNext_lane_Left_E
#define IlTxSigHndCurvature_Parameter_C2_0x770 IlTxMsgHndNext_lane_Left_E
#define IlTxSigHndCurvature_derivative_C3_0x770 IlTxMsgHndNext_lane_Left_E
#define IlTxSigHndLane_mark_width_0x770      IlTxMsgHndNext_lane_Left_E
#define IlTxSigHndHeading_angle_Parameter_C1_0x76F IlTxMsgHndNext_lane_Right_D
#define IlTxSigHndView_range_0x76F           IlTxMsgHndNext_lane_Right_D
#define IlTxSigHndView_range_availability_0x76F IlTxMsgHndNext_lane_Right_D
#define IlTxSigHndLane_type_0x76E            IlTxMsgHndNext_lane_Right_C
#define IlTxSigHndQuality_0x76E              IlTxMsgHndNext_lane_Right_C
#define IlTxSigHndModel_degree_0x76E         IlTxMsgHndNext_lane_Right_C
#define IlTxSigHndPosition_Parameter_C0_0x76E IlTxMsgHndNext_lane_Right_C
#define IlTxSigHndCurvature_Parameter_C2_0x76E IlTxMsgHndNext_lane_Right_C
#define IlTxSigHndCurvature_derivative_C3_0x76E IlTxMsgHndNext_lane_Right_C
#define IlTxSigHndLane_mark_width_0x76E      IlTxMsgHndNext_lane_Right_C
#define IlTxSigHndHeading_angle_Parameter_C1_0x76D IlTxMsgHndNext_lane_Left_B
#define IlTxSigHndView_range_0x76D           IlTxMsgHndNext_lane_Left_B
#define IlTxSigHndView_range_availability_0x76D IlTxMsgHndNext_lane_Left_B
#define IlTxSigHndLane_type_0x76C            IlTxMsgHndNext_lane_Left_A
#define IlTxSigHndQuality_0x76C              IlTxMsgHndNext_lane_Left_A
#define IlTxSigHndModel_degree_0x76C         IlTxMsgHndNext_lane_Left_A
#define IlTxSigHndPosition_Parameter_C0_0x76C IlTxMsgHndNext_lane_Left_A
#define IlTxSigHndCurvature_Parameter_C2_0x76C IlTxMsgHndNext_lane_Left_A
#define IlTxSigHndCurvature_derivative_C3_0x76C IlTxMsgHndNext_lane_Left_A
#define IlTxSigHndLane_mark_width_0x76C      IlTxMsgHndNext_lane_Left_A
#define IlTxSigHndNumber_lane_markers_reported_0x76B IlTxMsgHndNumebr_of_next_lane
#define IlTxSigHndRef_point_1_Position_0x76A IlTxMsgHndReference_points
#define IlTxSigHndRef_point_1_Distance_0x76A IlTxMsgHndReference_points
#define IlTxSigHndRef_point_1_validity_0x76A IlTxMsgHndReference_points
#define IlTxSigHndRef_point_2_Position_0x76A IlTxMsgHndReference_points
#define IlTxSigHndRef_point_2_Distance_0x76A IlTxMsgHndReference_points
#define IlTxSigHndRef_point_2_validity_0x76A IlTxMsgHndReference_points
#define IlTxSigHndHeading_angle_Parameter_C1_0x769 IlTxMsgHndLKA_right_lane_B
#define IlTxSigHndView_range_0x769           IlTxMsgHndLKA_right_lane_B
#define IlTxSigHndView_range_availability_0x769 IlTxMsgHndLKA_right_lane_B
#define IlTxSigHndLane_type_0x768            IlTxMsgHndLKA_right_lane_A
#define IlTxSigHndQuality_0x768              IlTxMsgHndLKA_right_lane_A
#define IlTxSigHndModel_degree_0x768         IlTxMsgHndLKA_right_lane_A
#define IlTxSigHndPosition_Parameter_C0_0x768 IlTxMsgHndLKA_right_lane_A
#define IlTxSigHndCurvature_Parameter_C2_0x768 IlTxMsgHndLKA_right_lane_A
#define IlTxSigHndCurvature_derivative_C3_0x768 IlTxMsgHndLKA_right_lane_A
#define IlTxSigHndWidth_right_marking_0x768  IlTxMsgHndLKA_right_lane_A
#define IlTxSigHndHeading_angle_Parameter_C1_0x767 IlTxMsgHndLKA_left_lane_B
#define IlTxSigHndView_range_0x767           IlTxMsgHndLKA_left_lane_B
#define IlTxSigHndView_range_availability_0x767 IlTxMsgHndLKA_left_lane_B
#define IlTxSigHndLane_type_0x766            IlTxMsgHndLKA_left_lane_A
#define IlTxSigHndQuality_0x766              IlTxMsgHndLKA_left_lane_A
#define IlTxSigHndModel_degree_0x766         IlTxMsgHndLKA_left_lane_A
#define IlTxSigHndPosition_Parameter_C0_0x766 IlTxMsgHndLKA_left_lane_A
#define IlTxSigHndCurvature_Parameter_C2_0x766 IlTxMsgHndLKA_left_lane_A
#define IlTxSigHndCurvature_derivative_C3_0x766 IlTxMsgHndLKA_left_lane_A
#define IlTxSigHndWidth_left_marking_0x766   IlTxMsgHndLKA_left_lane_A
#define IlTxSigHndBrakes_0x760               IlTxMsgHndCar_Info
#define IlTxSigHndLeft_Signal_0x760          IlTxMsgHndCar_Info
#define IlTxSigHndRight_Signal_0x760         IlTxMsgHndCar_Info
#define IlTxSigHndWipers_0x760               IlTxMsgHndCar_Info
#define IlTxSigHndLow_Beam_0x760             IlTxMsgHndCar_Info
#define IlTxSigHndHigh_Beam_0x760            IlTxMsgHndCar_Info
#define IlTxSigHndWipers_available_0x760     IlTxMsgHndCar_Info
#define IlTxSigHndLow_Beam_available_0x760   IlTxMsgHndCar_Info
#define IlTxSigHndHigh_Beam_Available_0x760  IlTxMsgHndCar_Info
#define IlTxSigHndSpeed_Available_0x760      IlTxMsgHndCar_Info
#define IlTxSigHndSpeed_0x760                IlTxMsgHndCar_Info
#define IlTxSigHndObstacle_Angle_Rate_0x750  IlTxMsgHndObstacle_Data_X
#define IlTxSigHndObstacle_Scale_Change_0x750 IlTxMsgHndObstacle_Data_X
#define IlTxSigHndObject_Accel_X_0x750       IlTxMsgHndObstacle_Data_X
#define IlTxSigHndObstacle_Replaced_0x750    IlTxMsgHndObstacle_Data_X
#define IlTxSigHndObstacle_Angle_0x750       IlTxMsgHndObstacle_Data_X
#define IlTxSigHndObstacle_Legnth_0x74F      IlTxMsgHndObstacle_Data_W
#define IlTxSigHndObstacle_Width_0x74F       IlTxMsgHndObstacle_Data_W
#define IlTxSigHndObstacle_Age_0x74F         IlTxMsgHndObstacle_Data_W
#define IlTxSigHndObstacle_Lane_0x74F        IlTxMsgHndObstacle_Data_W
#define IlTxSigHndCIPV_Flag_0x74F            IlTxMsgHndObstacle_Data_W
#define IlTxSigHndRadar_Pos_X_0x74F          IlTxMsgHndObstacle_Data_W
#define IlTxSigHndRadar_Vel_X_0x74F          IlTxMsgHndObstacle_Data_W
#define IlTxSigHndRadar_Match_Confidence_0x74F IlTxMsgHndObstacle_Data_W
#define IlTxSigHndMatched_Radar_ID_0x74F     IlTxMsgHndObstacle_Data_W
#define IlTxSigHndObstacle_ID_0x74E          IlTxMsgHndObstacle_Data_V
#define IlTxSigHndObstacle_Pos_X_0x74E       IlTxMsgHndObstacle_Data_V
#define IlTxSigHndObstacle_Pos_Y_0x74E       IlTxMsgHndObstacle_Data_V
#define IlTxSigHndBlinker_Info_0x74E         IlTxMsgHndObstacle_Data_V
#define IlTxSigHndCut_in_and_out_0x74E       IlTxMsgHndObstacle_Data_V
#define IlTxSigHndObstacle_Rel_Vel_X_0x74E   IlTxMsgHndObstacle_Data_V
#define IlTxSigHndObstacle_Type_0x74E        IlTxMsgHndObstacle_Data_V
#define IlTxSigHndObstacle_Status_0x74E      IlTxMsgHndObstacle_Data_V
#define IlTxSigHndObstacle_Brake_Light_0x74E IlTxMsgHndObstacle_Data_V
#define IlTxSigHndObstacle_Valid_0x74E       IlTxMsgHndObstacle_Data_V
#define IlTxSigHndObstacle_Angle_Rate_0x74D  IlTxMsgHndObstacle_Data_U
#define IlTxSigHndObstacle_Scale_Change_0x74D IlTxMsgHndObstacle_Data_U
#define IlTxSigHndObject_Accel_X_0x74D       IlTxMsgHndObstacle_Data_U
#define IlTxSigHndObstacle_Replaced_0x74D    IlTxMsgHndObstacle_Data_U
#define IlTxSigHndObstacle_Angle_0x74D       IlTxMsgHndObstacle_Data_U
#define IlTxSigHndObstacle_Legnth_0x74C      IlTxMsgHndObstacle_Data_T
#define IlTxSigHndObstacle_Width_0x74C       IlTxMsgHndObstacle_Data_T
#define IlTxSigHndObstacle_Age_0x74C         IlTxMsgHndObstacle_Data_T
#define IlTxSigHndObstacle_Lane_0x74C        IlTxMsgHndObstacle_Data_T
#define IlTxSigHndCIPV_Flag_0x74C            IlTxMsgHndObstacle_Data_T
#define IlTxSigHndRadar_Pos_X_0x74C          IlTxMsgHndObstacle_Data_T
#define IlTxSigHndRadar_Vel_X_0x74C          IlTxMsgHndObstacle_Data_T
#define IlTxSigHndRadar_Match_Confidence_0x74C IlTxMsgHndObstacle_Data_T
#define IlTxSigHndMatched_Radar_ID_0x74C     IlTxMsgHndObstacle_Data_T
#define IlTxSigHndObstacle_ID_0x74B          IlTxMsgHndObstacle_Data_S
#define IlTxSigHndObstacle_Pos_X_0x74B       IlTxMsgHndObstacle_Data_S
#define IlTxSigHndObstacle_Pos_Y_0x74B       IlTxMsgHndObstacle_Data_S
#define IlTxSigHndBlinker_Info_0x74B         IlTxMsgHndObstacle_Data_S
#define IlTxSigHndCut_in_and_out_0x74B       IlTxMsgHndObstacle_Data_S
#define IlTxSigHndObstacle_Rel_Vel_X_0x74B   IlTxMsgHndObstacle_Data_S
#define IlTxSigHndObstacle_Type_0x74B        IlTxMsgHndObstacle_Data_S
#define IlTxSigHndObstacle_Status_0x74B      IlTxMsgHndObstacle_Data_S
#define IlTxSigHndObstacle_Brake_Light_0x74B IlTxMsgHndObstacle_Data_S
#define IlTxSigHndObstacle_Valid_0x74B       IlTxMsgHndObstacle_Data_S
#define IlTxSigHndObstacle_Angle_Rate_0x74A  IlTxMsgHndObstacle_Data_R
#define IlTxSigHndObstacle_Scale_Change_0x74A IlTxMsgHndObstacle_Data_R
#define IlTxSigHndObject_Accel_X_0x74A       IlTxMsgHndObstacle_Data_R
#define IlTxSigHndObstacle_Replaced_0x74A    IlTxMsgHndObstacle_Data_R
#define IlTxSigHndObstacle_Angle_0x74A       IlTxMsgHndObstacle_Data_R
#define IlTxSigHndObstacle_Legnth_0x749      IlTxMsgHndObstacle_Data_Q
#define IlTxSigHndObstacle_Width_0x749       IlTxMsgHndObstacle_Data_Q
#define IlTxSigHndObstacle_Age_0x749         IlTxMsgHndObstacle_Data_Q
#define IlTxSigHndObstacle_Lane_0x749        IlTxMsgHndObstacle_Data_Q
#define IlTxSigHndCIPV_Flag_0x749            IlTxMsgHndObstacle_Data_Q
#define IlTxSigHndRadar_Pos_X_0x749          IlTxMsgHndObstacle_Data_Q
#define IlTxSigHndRadar_Vel_X_0x749          IlTxMsgHndObstacle_Data_Q
#define IlTxSigHndRadar_Match_Confidence_0x749 IlTxMsgHndObstacle_Data_Q
#define IlTxSigHndMatched_Radar_ID_0x749     IlTxMsgHndObstacle_Data_Q
#define IlTxSigHndObstacle_ID_0x748          IlTxMsgHndObstacle_Data_P
#define IlTxSigHndObstacle_Pos_X_0x748       IlTxMsgHndObstacle_Data_P
#define IlTxSigHndObstacle_Pos_Y_0x748       IlTxMsgHndObstacle_Data_P
#define IlTxSigHndBlinker_Info_0x748         IlTxMsgHndObstacle_Data_P
#define IlTxSigHndCut_in_and_out_0x748       IlTxMsgHndObstacle_Data_P
#define IlTxSigHndObstacle_Rel_Vel_X_0x748   IlTxMsgHndObstacle_Data_P
#define IlTxSigHndObstacle_Type_0x748        IlTxMsgHndObstacle_Data_P
#define IlTxSigHndObstacle_Status_0x748      IlTxMsgHndObstacle_Data_P
#define IlTxSigHndObstacle_Brake_Light_0x748 IlTxMsgHndObstacle_Data_P
#define IlTxSigHndObstacle_Valid_0x748       IlTxMsgHndObstacle_Data_P
#define IlTxSigHndObstacle_Angle_Rate_0x747  IlTxMsgHndObstacle_Data_O
#define IlTxSigHndObstacle_Scale_Change_0x747 IlTxMsgHndObstacle_Data_O
#define IlTxSigHndObject_Accel_X_0x747       IlTxMsgHndObstacle_Data_O
#define IlTxSigHndObstacle_Replaced_0x747    IlTxMsgHndObstacle_Data_O
#define IlTxSigHndObstacle_Angle_0x747       IlTxMsgHndObstacle_Data_O
#define IlTxSigHndObstacle_Legnth_0x746      IlTxMsgHndObstacle_Data_N
#define IlTxSigHndObstacle_Width_0x746       IlTxMsgHndObstacle_Data_N
#define IlTxSigHndObstacle_Age_0x746         IlTxMsgHndObstacle_Data_N
#define IlTxSigHndObstacle_Lane_0x746        IlTxMsgHndObstacle_Data_N
#define IlTxSigHndCIPV_Flag_0x746            IlTxMsgHndObstacle_Data_N
#define IlTxSigHndRadar_Pos_X_0x746          IlTxMsgHndObstacle_Data_N
#define IlTxSigHndRadar_Vel_X_0x746          IlTxMsgHndObstacle_Data_N
#define IlTxSigHndRadar_Match_Confidence_0x746 IlTxMsgHndObstacle_Data_N
#define IlTxSigHndMatched_Radar_ID_0x746     IlTxMsgHndObstacle_Data_N
#define IlTxSigHndObstacle_ID_0x745          IlTxMsgHndObstacle_Data_M
#define IlTxSigHndObstacle_Pos_X_0x745       IlTxMsgHndObstacle_Data_M
#define IlTxSigHndObstacle_Pos_Y_0x745       IlTxMsgHndObstacle_Data_M
#define IlTxSigHndBlinker_Info_0x745         IlTxMsgHndObstacle_Data_M
#define IlTxSigHndCut_in_and_out_0x745       IlTxMsgHndObstacle_Data_M
#define IlTxSigHndObstacle_Rel_Vel_X_0x745   IlTxMsgHndObstacle_Data_M
#define IlTxSigHndObstacle_Type_0x745        IlTxMsgHndObstacle_Data_M
#define IlTxSigHndObstacle_Status_0x745      IlTxMsgHndObstacle_Data_M
#define IlTxSigHndObstacle_Brake_Light_0x745 IlTxMsgHndObstacle_Data_M
#define IlTxSigHndObstacle_Valid_0x745       IlTxMsgHndObstacle_Data_M
#define IlTxSigHndObstacle_Angle_Rate_0x744  IlTxMsgHndObstacle_Data_L
#define IlTxSigHndObstacle_Scale_Change_0x744 IlTxMsgHndObstacle_Data_L
#define IlTxSigHndObject_Accel_X_0x744       IlTxMsgHndObstacle_Data_L
#define IlTxSigHndObstacle_Replaced_0x744    IlTxMsgHndObstacle_Data_L
#define IlTxSigHndObstacle_Angle_0x744       IlTxMsgHndObstacle_Data_L
#define IlTxSigHndObstacle_Legnth_0x743      IlTxMsgHndObstacle_Data_K
#define IlTxSigHndObstacle_Width_0x743       IlTxMsgHndObstacle_Data_K
#define IlTxSigHndObstacle_Age_0x743         IlTxMsgHndObstacle_Data_K
#define IlTxSigHndObstacle_Lane_0x743        IlTxMsgHndObstacle_Data_K
#define IlTxSigHndCIPV_Flag_0x743            IlTxMsgHndObstacle_Data_K
#define IlTxSigHndRadar_Pos_X_0x743          IlTxMsgHndObstacle_Data_K
#define IlTxSigHndRadar_Vel_X_0x743          IlTxMsgHndObstacle_Data_K
#define IlTxSigHndRadar_Match_Confidence_0x743 IlTxMsgHndObstacle_Data_K
#define IlTxSigHndMatched_Radar_ID_0x743     IlTxMsgHndObstacle_Data_K
#define IlTxSigHndObstacle_ID_0x742          IlTxMsgHndObstacle_Data_J
#define IlTxSigHndObstacle_Pos_X_0x742       IlTxMsgHndObstacle_Data_J
#define IlTxSigHndObstacle_Pos_Y_0x742       IlTxMsgHndObstacle_Data_J
#define IlTxSigHndBlinker_Info_0x742         IlTxMsgHndObstacle_Data_J
#define IlTxSigHndCut_in_and_out_0x742       IlTxMsgHndObstacle_Data_J
#define IlTxSigHndObstacle_Rel_Vel_X_0x742   IlTxMsgHndObstacle_Data_J
#define IlTxSigHndObstacle_Type_0x742        IlTxMsgHndObstacle_Data_J
#define IlTxSigHndObstacle_Status_0x742      IlTxMsgHndObstacle_Data_J
#define IlTxSigHndObstacle_Brake_Light_0x742 IlTxMsgHndObstacle_Data_J
#define IlTxSigHndObstacle_Valid_0x742       IlTxMsgHndObstacle_Data_J
#define IlTxSigHndObstacle_Angle_Rate_0x741  IlTxMsgHndObstacle_Data_I
#define IlTxSigHndObstacle_Scale_Change_0x741 IlTxMsgHndObstacle_Data_I
#define IlTxSigHndObject_Accel_X_0x741       IlTxMsgHndObstacle_Data_I
#define IlTxSigHndObstacle_Replaced_0x741    IlTxMsgHndObstacle_Data_I
#define IlTxSigHndObstacle_Angle_0x741       IlTxMsgHndObstacle_Data_I
#define IlTxSigHndObstacle_Legnth_0x740      IlTxMsgHndObstacle_Data_H
#define IlTxSigHndObstacle_Width_0x740       IlTxMsgHndObstacle_Data_H
#define IlTxSigHndObstacle_Age_0x740         IlTxMsgHndObstacle_Data_H
#define IlTxSigHndObstacle_Lane_0x740        IlTxMsgHndObstacle_Data_H
#define IlTxSigHndCIPV_Flag_0x740            IlTxMsgHndObstacle_Data_H
#define IlTxSigHndRadar_Pos_X_0x740          IlTxMsgHndObstacle_Data_H
#define IlTxSigHndRadar_Vel_X_0x740          IlTxMsgHndObstacle_Data_H
#define IlTxSigHndRadar_Match_Confidence_0x740 IlTxMsgHndObstacle_Data_H
#define IlTxSigHndMatched_Radar_ID_0x740     IlTxMsgHndObstacle_Data_H
#define IlTxSigHndObstacle_ID_0x73F          IlTxMsgHndObstacle_Data_G
#define IlTxSigHndObstacle_Pos_X_0x73F       IlTxMsgHndObstacle_Data_G
#define IlTxSigHndObstacle_Pos_Y_0x73F       IlTxMsgHndObstacle_Data_G
#define IlTxSigHndBlinker_Info_0x73F         IlTxMsgHndObstacle_Data_G
#define IlTxSigHndCut_in_and_out_0x73F       IlTxMsgHndObstacle_Data_G
#define IlTxSigHndObstacle_Rel_Vel_X_0x73F   IlTxMsgHndObstacle_Data_G
#define IlTxSigHndObstacle_Type_0x73F        IlTxMsgHndObstacle_Data_G
#define IlTxSigHndObstacle_Status_0x73F      IlTxMsgHndObstacle_Data_G
#define IlTxSigHndObstacle_Brake_Light_0x73F IlTxMsgHndObstacle_Data_G
#define IlTxSigHndObstacle_Valid_0x73F       IlTxMsgHndObstacle_Data_G
#define IlTxSigHndObstacle_Angle_Rate_0x73E  IlTxMsgHndObstacle_Data_F
#define IlTxSigHndObstacle_Scale_Change_0x73E IlTxMsgHndObstacle_Data_F
#define IlTxSigHndObject_Accel_X_0x73E       IlTxMsgHndObstacle_Data_F
#define IlTxSigHndObstacle_Replaced_0x73E    IlTxMsgHndObstacle_Data_F
#define IlTxSigHndObstacle_Angle_0x73E       IlTxMsgHndObstacle_Data_F
#define IlTxSigHndObstacle_Legnth_0x73D      IlTxMsgHndObstacle_Data_E
#define IlTxSigHndObstacle_Width_0x73D       IlTxMsgHndObstacle_Data_E
#define IlTxSigHndObstacle_Age_0x73D         IlTxMsgHndObstacle_Data_E
#define IlTxSigHndObstacle_Lane_0x73D        IlTxMsgHndObstacle_Data_E
#define IlTxSigHndCIPV_Flag_0x73D            IlTxMsgHndObstacle_Data_E
#define IlTxSigHndRadar_Pos_X_0x73D          IlTxMsgHndObstacle_Data_E
#define IlTxSigHndRadar_Vel_X_0x73D          IlTxMsgHndObstacle_Data_E
#define IlTxSigHndRadar_Match_Confidence_0x73D IlTxMsgHndObstacle_Data_E
#define IlTxSigHndMatched_Radar_ID_0x73D     IlTxMsgHndObstacle_Data_E
#define IlTxSigHndObstacle_ID_0x73C          IlTxMsgHndObstacle_Data_D
#define IlTxSigHndObstacle_Pos_X_0x73C       IlTxMsgHndObstacle_Data_D
#define IlTxSigHndObstacle_Pos_Y_0x73C       IlTxMsgHndObstacle_Data_D
#define IlTxSigHndBlinker_Info_0x73C         IlTxMsgHndObstacle_Data_D
#define IlTxSigHndCut_in_and_out_0x73C       IlTxMsgHndObstacle_Data_D
#define IlTxSigHndObstacle_Rel_Vel_X_0x73C   IlTxMsgHndObstacle_Data_D
#define IlTxSigHndObstacle_Type_0x73C        IlTxMsgHndObstacle_Data_D
#define IlTxSigHndObstacle_Status_0x73C      IlTxMsgHndObstacle_Data_D
#define IlTxSigHndObstacle_Brake_Light_0x73C IlTxMsgHndObstacle_Data_D
#define IlTxSigHndObstacle_Valid_0x73C       IlTxMsgHndObstacle_Data_D
#define IlTxSigHndObstacle_Angle_Rate_0x73B  IlTxMsgHndObstacle_Data_C
#define IlTxSigHndObstacle_Scale_Change_0x73B IlTxMsgHndObstacle_Data_C
#define IlTxSigHndObject_Accel_X_0x73B       IlTxMsgHndObstacle_Data_C
#define IlTxSigHndObstacle_Replaced_0x73B    IlTxMsgHndObstacle_Data_C
#define IlTxSigHndObstacle_Angle_0x73B       IlTxMsgHndObstacle_Data_C
#define IlTxSigHndObstacle_Legnth_0x73A      IlTxMsgHndObstacle_Data_B
#define IlTxSigHndObstacle_Width_0x73A       IlTxMsgHndObstacle_Data_B
#define IlTxSigHndObstacle_Age_0x73A         IlTxMsgHndObstacle_Data_B
#define IlTxSigHndObstacle_Lane_0x73A        IlTxMsgHndObstacle_Data_B
#define IlTxSigHndCIPV_Flag_0x73A            IlTxMsgHndObstacle_Data_B
#define IlTxSigHndRadar_Pos_X_0x73A          IlTxMsgHndObstacle_Data_B
#define IlTxSigHndRadar_Vel_X_0x73A          IlTxMsgHndObstacle_Data_B
#define IlTxSigHndRadar_Match_Confidence_0x73A IlTxMsgHndObstacle_Data_B
#define IlTxSigHndMatched_Radar_ID_0x73A     IlTxMsgHndObstacle_Data_B
#define IlTxSigHndObstacle_ID_0x739          IlTxMsgHndObstacle_Data_A
#define IlTxSigHndObstacle_Pos_X_0x739       IlTxMsgHndObstacle_Data_A
#define IlTxSigHndObstacle_Pos_Y_0x739       IlTxMsgHndObstacle_Data_A
#define IlTxSigHndBlinker_Info_0x739         IlTxMsgHndObstacle_Data_A
#define IlTxSigHndCut_in_and_out_0x739       IlTxMsgHndObstacle_Data_A
#define IlTxSigHndObstacle_Rel_Vel_X_0x739   IlTxMsgHndObstacle_Data_A
#define IlTxSigHndObstacle_Type_0x739        IlTxMsgHndObstacle_Data_A
#define IlTxSigHndObstacle_Status_0x739      IlTxMsgHndObstacle_Data_A
#define IlTxSigHndObstacle_Brake_Light_0x739 IlTxMsgHndObstacle_Data_A
#define IlTxSigHndObstacle_Valid_0x739       IlTxMsgHndObstacle_Data_A
#define IlTxSigHndNum_Obstacles_0x738        IlTxMsgHndObstacle_Status
#define IlTxSigHndTimestamp_0x738            IlTxMsgHndObstacle_Status
#define IlTxSigHndApplication_Version_0x738  IlTxMsgHndObstacle_Status
#define IlTxSigHndActive_Version_Number_Section_0x738 IlTxMsgHndObstacle_Status
#define IlTxSigHndLeft_close_rang_cut_in_0x738 IlTxMsgHndObstacle_Status
#define IlTxSigHndRight_close_rang_cut_in_0x738 IlTxMsgHndObstacle_Status
#define IlTxSigHndGo_0x738                   IlTxMsgHndObstacle_Status
#define IlTxSigHndProtocol_Version_0x738     IlTxMsgHndObstacle_Status
#define IlTxSigHndClose_Car_0x738            IlTxMsgHndObstacle_Status
#define IlTxSigHndFailsafe_0x738             IlTxMsgHndObstacle_Status
#define IlTxSigHndLane_Curvature_0x737       IlTxMsgHndLane
#define IlTxSigHndLane_Heading_0x737         IlTxMsgHndLane
#define IlTxSigHndCA_0x737                   IlTxMsgHndLane
#define IlTxSigHndRight_LDW_Availability_0x737 IlTxMsgHndLane
#define IlTxSigHndLeft_LDW_Availability_0x737 IlTxMsgHndLane
#define IlTxSigHndYaw_Angle_0x737            IlTxMsgHndLane
#define IlTxSigHndPitch_Angle_0x737          IlTxMsgHndLane
#define IlTxSigHndBoundary_bottom_HLB_0x729  IlTxMsgHndAHBC_Gradual
#define IlTxSigHndBoundary_left_hand_HLB_0x729 IlTxMsgHndAHBC_Gradual
#define IlTxSigHndBoundary_right_hand_HLB_0x729 IlTxMsgHndAHBC_Gradual
#define IlTxSigHndObject_Distance_HLB_0x729  IlTxMsgHndAHBC_Gradual
#define IlTxSigHndStatus_Bottom_HLB_0x729    IlTxMsgHndAHBC_Gradual
#define IlTxSigHndStatus_Left_Hand_HLB_0x729 IlTxMsgHndAHBC_Gradual
#define IlTxSigHndStatus_Right_Hand_HLB_0x729 IlTxMsgHndAHBC_Gradual
#define IlTxSigHndStatus_Object_Distance_HLB_0x729 IlTxMsgHndAHBC_Gradual
#define IlTxSigHndLeft_Target_Change_0x729   IlTxMsgHndAHBC_Gradual
#define IlTxSigHndRight_Target_Change_0x729  IlTxMsgHndAHBC_Gradual
#define IlTxSigHndToo_Many_Cars_0x729        IlTxMsgHndAHBC_Gradual
#define IlTxSigHndBusy_Scene_0x729           IlTxMsgHndAHBC_Gradual
#define IlTxSigHndBinary_high_low_beam_decision_0x728 IlTxMsgHndAHBC_high_low_beam
#define IlTxSigHndReasons_for_switch_to_low_beam_0x728 IlTxMsgHndAHBC_high_low_beam
#define IlTxSigHndVision_only_Sign_Type_Display1_0x727 IlTxMsgHndSign_Type
#define IlTxSigHndSupplementary_Sign_Type_Display1_0x727 IlTxMsgHndSign_Type
#define IlTxSigHndVision_only_Sign_Type_Display2_0x727 IlTxMsgHndSign_Type
#define IlTxSigHndSupplementary_Sign_Type_Display2_0x727 IlTxMsgHndSign_Type
#define IlTxSigHndVision_only_Sign_Type_Display3_0x727 IlTxMsgHndSign_Type
#define IlTxSigHndSupplementary_Sign_Type_Display3_0x727 IlTxMsgHndSign_Type
#define IlTxSigHndVision_only_Sign_Type_Display4_0x727 IlTxMsgHndSign_Type
#define IlTxSigHndSupplementary_Sign_Type_Display4_0x727 IlTxMsgHndSign_Type
#define IlTxSigHndVision_only_Sign_Type_0x725 IlTxMsgHndTSR_message_F
#define IlTxSigHndSupplementary_Sign_Type_0x725 IlTxMsgHndTSR_message_F
#define IlTxSigHndSign_Position_X_0x725      IlTxMsgHndTSR_message_F
#define IlTxSigHndSign_Position_Y_0x725      IlTxMsgHndTSR_message_F
#define IlTxSigHndSign_Position_Z_0x725      IlTxMsgHndTSR_message_F
#define IlTxSigHndFilter_Type_0x725          IlTxMsgHndTSR_message_F
#define IlTxSigHndVision_only_Sign_Type_0x724 IlTxMsgHndTSR_message_E
#define IlTxSigHndSupplementary_Sign_Type_0x724 IlTxMsgHndTSR_message_E
#define IlTxSigHndSign_Position_X_0x724      IlTxMsgHndTSR_message_E
#define IlTxSigHndSign_Position_Y_0x724      IlTxMsgHndTSR_message_E
#define IlTxSigHndSign_Position_Z_0x724      IlTxMsgHndTSR_message_E
#define IlTxSigHndFilter_Type_0x724          IlTxMsgHndTSR_message_E
#define IlTxSigHndVision_only_Sign_Type_0x723 IlTxMsgHndTSR_message_D
#define IlTxSigHndSupplementary_Sign_Type_0x723 IlTxMsgHndTSR_message_D
#define IlTxSigHndSign_Position_X_0x723      IlTxMsgHndTSR_message_D
#define IlTxSigHndSign_Position_Y_0x723      IlTxMsgHndTSR_message_D
#define IlTxSigHndSign_Position_Z_0x723      IlTxMsgHndTSR_message_D
#define IlTxSigHndFilter_Type_0x723          IlTxMsgHndTSR_message_D
#define IlTxSigHndVision_only_Sign_Type_0x722 IlTxMsgHndTSR_message_C
#define IlTxSigHndSupplementary_Sign_Type_0x722 IlTxMsgHndTSR_message_C
#define IlTxSigHndSign_Position_X_0x722      IlTxMsgHndTSR_message_C
#define IlTxSigHndSign_Position_Y_0x722      IlTxMsgHndTSR_message_C
#define IlTxSigHndSign_Position_Z_0x722      IlTxMsgHndTSR_message_C
#define IlTxSigHndFilter_Type_0x722          IlTxMsgHndTSR_message_C
#define IlTxSigHndVision_only_Sign_Type_0x721 IlTxMsgHndTSR_message_B
#define IlTxSigHndSupplementary_Sign_Type_0x721 IlTxMsgHndTSR_message_B
#define IlTxSigHndSign_Position_X_0x721      IlTxMsgHndTSR_message_B
#define IlTxSigHndSign_Position_Y_0x721      IlTxMsgHndTSR_message_B
#define IlTxSigHndSign_Position_Z_0x721      IlTxMsgHndTSR_message_B
#define IlTxSigHndFilter_Type_0x721          IlTxMsgHndTSR_message_B
#define IlTxSigHndVision_only_Sign_Type_0x720 IlTxMsgHndTSR_message_A
#define IlTxSigHndSupplementary_Sign_Type_0x720 IlTxMsgHndTSR_message_A
#define IlTxSigHndSign_Position_X_0x720      IlTxMsgHndTSR_message_A
#define IlTxSigHndSign_Position_Y_0x720      IlTxMsgHndTSR_message_A
#define IlTxSigHndSign_Position_Z_0x720      IlTxMsgHndTSR_message_A
#define IlTxSigHndFilter_Type_0x720          IlTxMsgHndTSR_message_A
#define IlTxSigHndSound_type_0x700           IlTxMsgHndC2_Display_and_warning
#define IlTxSigHndDusk_Time_Indicator_0x700  IlTxMsgHndC2_Display_and_warning
#define IlTxSigHndNight_Time_Indicator_0x700 IlTxMsgHndC2_Display_and_warning
#define IlTxSigHndSuppress_0x700             IlTxMsgHndC2_Display_and_warning
#define IlTxSigHndHeadway_valid_0x700        IlTxMsgHndC2_Display_and_warning
#define IlTxSigHndHeadway_measurement_0x700  IlTxMsgHndC2_Display_and_warning
#define IlTxSigHndLanes_On_0x700             IlTxMsgHndC2_Display_and_warning
#define IlTxSigHndLeft_LDW_ON_0x700          IlTxMsgHndC2_Display_and_warning
#define IlTxSigHndRight_LDW_ON_0x700         IlTxMsgHndC2_Display_and_warning
#define IlTxSigHndFCW_on_0x700               IlTxMsgHndC2_Display_and_warning
#define IlTxSigHndLeft_Crossing_0x700        IlTxMsgHndC2_Display_and_warning
#define IlTxSigHndRight_Crossing_0x700       IlTxMsgHndC2_Display_and_warning
#define IlTxSigHndMaintenanc_0x700           IlTxMsgHndC2_Display_and_warning
#define IlTxSigHndFailsafe_0x700             IlTxMsgHndC2_Display_and_warning
#define IlTxSigHndPeds_FCW_0x700             IlTxMsgHndC2_Display_and_warning
#define IlTxSigHndPeds_in_DZ_0x700           IlTxMsgHndC2_Display_and_warning
#define IlTxSigHndHeadway_Warning_Level_0x700 IlTxMsgHndC2_Display_and_warning
#define IlTxSigHndLane_Confidence_Left_0x669 IlTxMsgHndDetils_Lane
#define IlTxSigHndLDW_Availability_Left_0x669 IlTxMsgHndDetils_Lane
#define IlTxSigHndUndocumented1_0x669        IlTxMsgHndDetils_Lane
#define IlTxSigHndLane_Type_Left_0x669       IlTxMsgHndDetils_Lane
#define IlTxSigHndDistance_To_Left_Lane_0x669 IlTxMsgHndDetils_Lane
#define IlTxSigHndLane_Confidence_Right_0x669 IlTxMsgHndDetils_Lane
#define IlTxSigHndLDW_Availability_Right_0x669 IlTxMsgHndDetils_Lane
#define IlTxSigHndUndocumented2_0x669        IlTxMsgHndDetils_Lane
#define IlTxSigHndLane_Type_Right_0x669      IlTxMsgHndDetils_Lane
#define IlTxSigHndDistance_To_Right_Lane_0x669 IlTxMsgHndDetils_Lane
#define IlTxSigHndFixed_Yaw_0x650            IlTxMsgHndFixed_FOE
#define IlTxSigHndFixed_Horizon_0x650        IlTxMsgHndFixed_FOE


/* -----------------------------------------------------------------------------
    &&&~ Critical section macros for signals
 ----------------------------------------------------------------------------- */

#define IlEnterCriticalVision_only_Sign_Type_0x726() CanGlobalInterruptDisable()
#define IlLeaveCriticalVision_only_Sign_Type_0x726() CanGlobalInterruptRestore()
#define IlEnterCriticalSupplementary_Sign_Type_0x726() CanGlobalInterruptDisable()
#define IlLeaveCriticalSupplementary_Sign_Type_0x726() CanGlobalInterruptRestore()
#define IlEnterCriticalSign_Position_X_0x726() CanGlobalInterruptDisable()
#define IlLeaveCriticalSign_Position_X_0x726() CanGlobalInterruptRestore()
#define IlEnterCriticalSign_Position_Y_0x726() CanGlobalInterruptDisable()
#define IlLeaveCriticalSign_Position_Y_0x726() CanGlobalInterruptRestore()
#define IlEnterCriticalSign_Position_Z_0x726() CanGlobalInterruptDisable()
#define IlLeaveCriticalSign_Position_Z_0x726() CanGlobalInterruptRestore()
#define IlEnterCriticalFilter_Type_0x726()   CanGlobalInterruptDisable()
#define IlLeaveCriticalFilter_Type_0x726()   CanGlobalInterruptRestore()
#define IlEnterCriticalHeading_angle_Parameter_C1_0x77B() CanGlobalInterruptDisable()
#define IlLeaveCriticalHeading_angle_Parameter_C1_0x77B() CanGlobalInterruptRestore()
#define IlEnterCriticalView_range_0x77B()    CanGlobalInterruptDisable()
#define IlLeaveCriticalView_range_0x77B()    CanGlobalInterruptRestore()
#define IlEnterCriticalView_range_availability_0x77B() CanGlobalInterruptDisable()
#define IlLeaveCriticalView_range_availability_0x77B() CanGlobalInterruptRestore()
#define IlEnterCriticalLane_type_0x77A()     CanGlobalInterruptDisable()
#define IlLeaveCriticalLane_type_0x77A()     CanGlobalInterruptRestore()
#define IlEnterCriticalQuality_0x77A()       CanGlobalInterruptDisable()
#define IlLeaveCriticalQuality_0x77A()       CanGlobalInterruptRestore()
#define IlEnterCriticalModel_degree_0x77A()  CanGlobalInterruptDisable()
#define IlLeaveCriticalModel_degree_0x77A()  CanGlobalInterruptRestore()
#define IlEnterCriticalPosition_Parameter_C0_0x77A() CanGlobalInterruptDisable()
#define IlLeaveCriticalPosition_Parameter_C0_0x77A() CanGlobalInterruptRestore()
#define IlEnterCriticalCurvature_Parameter_C2_0x77A() CanGlobalInterruptDisable()
#define IlLeaveCriticalCurvature_Parameter_C2_0x77A() CanGlobalInterruptRestore()
#define IlEnterCriticalCurvature_derivative_C3_0x77A() CanGlobalInterruptDisable()
#define IlLeaveCriticalCurvature_derivative_C3_0x77A() CanGlobalInterruptRestore()
#define IlEnterCriticalLane_mark_width_0x77A() CanGlobalInterruptDisable()
#define IlLeaveCriticalLane_mark_width_0x77A() CanGlobalInterruptRestore()
#define IlEnterCriticalHeading_angle_Parameter_C1_0x779() CanGlobalInterruptDisable()
#define IlLeaveCriticalHeading_angle_Parameter_C1_0x779() CanGlobalInterruptRestore()
#define IlEnterCriticalView_range_0x779()    CanGlobalInterruptDisable()
#define IlLeaveCriticalView_range_0x779()    CanGlobalInterruptRestore()
#define IlEnterCriticalView_range_availability_0x779() CanGlobalInterruptDisable()
#define IlLeaveCriticalView_range_availability_0x779() CanGlobalInterruptRestore()
#define IlEnterCriticalLane_type_0x778()     CanGlobalInterruptDisable()
#define IlLeaveCriticalLane_type_0x778()     CanGlobalInterruptRestore()
#define IlEnterCriticalQuality_0x778()       CanGlobalInterruptDisable()
#define IlLeaveCriticalQuality_0x778()       CanGlobalInterruptRestore()
#define IlEnterCriticalModel_degree_0x778()  CanGlobalInterruptDisable()
#define IlLeaveCriticalModel_degree_0x778()  CanGlobalInterruptRestore()
#define IlEnterCriticalPosition_Parameter_C0_0x778() CanGlobalInterruptDisable()
#define IlLeaveCriticalPosition_Parameter_C0_0x778() CanGlobalInterruptRestore()
#define IlEnterCriticalCurvature_Parameter_C2_0x778() CanGlobalInterruptDisable()
#define IlLeaveCriticalCurvature_Parameter_C2_0x778() CanGlobalInterruptRestore()
#define IlEnterCriticalCurvature_derivative_C3_0x778() CanGlobalInterruptDisable()
#define IlLeaveCriticalCurvature_derivative_C3_0x778() CanGlobalInterruptRestore()
#define IlEnterCriticalLane_mark_width_0x778() CanGlobalInterruptDisable()
#define IlLeaveCriticalLane_mark_width_0x778() CanGlobalInterruptRestore()
#define IlEnterCriticalHeading_angle_Parameter_C1_0x777() CanGlobalInterruptDisable()
#define IlLeaveCriticalHeading_angle_Parameter_C1_0x777() CanGlobalInterruptRestore()
#define IlEnterCriticalView_range_0x777()    CanGlobalInterruptDisable()
#define IlLeaveCriticalView_range_0x777()    CanGlobalInterruptRestore()
#define IlEnterCriticalView_range_availability_0x777() CanGlobalInterruptDisable()
#define IlLeaveCriticalView_range_availability_0x777() CanGlobalInterruptRestore()
#define IlEnterCriticalLane_type_0x776()     CanGlobalInterruptDisable()
#define IlLeaveCriticalLane_type_0x776()     CanGlobalInterruptRestore()
#define IlEnterCriticalQuality_0x776()       CanGlobalInterruptDisable()
#define IlLeaveCriticalQuality_0x776()       CanGlobalInterruptRestore()
#define IlEnterCriticalModel_degree_0x776()  CanGlobalInterruptDisable()
#define IlLeaveCriticalModel_degree_0x776()  CanGlobalInterruptRestore()
#define IlEnterCriticalPosition_Parameter_C0_0x776() CanGlobalInterruptDisable()
#define IlLeaveCriticalPosition_Parameter_C0_0x776() CanGlobalInterruptRestore()
#define IlEnterCriticalCurvature_Parameter_C2_0x776() CanGlobalInterruptDisable()
#define IlLeaveCriticalCurvature_Parameter_C2_0x776() CanGlobalInterruptRestore()
#define IlEnterCriticalCurvature_derivative_C3_0x776() CanGlobalInterruptDisable()
#define IlLeaveCriticalCurvature_derivative_C3_0x776() CanGlobalInterruptRestore()
#define IlEnterCriticalLane_mark_width_0x776() CanGlobalInterruptDisable()
#define IlLeaveCriticalLane_mark_width_0x776() CanGlobalInterruptRestore()
#define IlEnterCriticalHeading_angle_Parameter_C1_0x775() CanGlobalInterruptDisable()
#define IlLeaveCriticalHeading_angle_Parameter_C1_0x775() CanGlobalInterruptRestore()
#define IlEnterCriticalView_range_0x775()    CanGlobalInterruptDisable()
#define IlLeaveCriticalView_range_0x775()    CanGlobalInterruptRestore()
#define IlEnterCriticalView_range_availability_0x775() CanGlobalInterruptDisable()
#define IlLeaveCriticalView_range_availability_0x775() CanGlobalInterruptRestore()
#define IlEnterCriticalLane_type_0x774()     CanGlobalInterruptDisable()
#define IlLeaveCriticalLane_type_0x774()     CanGlobalInterruptRestore()
#define IlEnterCriticalQuality_0x774()       CanGlobalInterruptDisable()
#define IlLeaveCriticalQuality_0x774()       CanGlobalInterruptRestore()
#define IlEnterCriticalModel_degree_0x774()  CanGlobalInterruptDisable()
#define IlLeaveCriticalModel_degree_0x774()  CanGlobalInterruptRestore()
#define IlEnterCriticalPosition_Parameter_C0_0x774() CanGlobalInterruptDisable()
#define IlLeaveCriticalPosition_Parameter_C0_0x774() CanGlobalInterruptRestore()
#define IlEnterCriticalCurvature_Parameter_C2_0x774() CanGlobalInterruptDisable()
#define IlLeaveCriticalCurvature_Parameter_C2_0x774() CanGlobalInterruptRestore()
#define IlEnterCriticalCurvature_derivative_C3_0x774() CanGlobalInterruptDisable()
#define IlLeaveCriticalCurvature_derivative_C3_0x774() CanGlobalInterruptRestore()
#define IlEnterCriticalLane_mark_width_0x774() CanGlobalInterruptDisable()
#define IlLeaveCriticalLane_mark_width_0x774() CanGlobalInterruptRestore()
#define IlEnterCriticalHeading_angle_Parameter_C1_0x773() CanGlobalInterruptDisable()
#define IlLeaveCriticalHeading_angle_Parameter_C1_0x773() CanGlobalInterruptRestore()
#define IlEnterCriticalView_range_0x773()    CanGlobalInterruptDisable()
#define IlLeaveCriticalView_range_0x773()    CanGlobalInterruptRestore()
#define IlEnterCriticalView_range_availability_0x773() CanGlobalInterruptDisable()
#define IlLeaveCriticalView_range_availability_0x773() CanGlobalInterruptRestore()
#define IlEnterCriticalLane_type_0x772()     CanGlobalInterruptDisable()
#define IlLeaveCriticalLane_type_0x772()     CanGlobalInterruptRestore()
#define IlEnterCriticalQuality_0x772()       CanGlobalInterruptDisable()
#define IlLeaveCriticalQuality_0x772()       CanGlobalInterruptRestore()
#define IlEnterCriticalModel_degree_0x772()  CanGlobalInterruptDisable()
#define IlLeaveCriticalModel_degree_0x772()  CanGlobalInterruptRestore()
#define IlEnterCriticalPosition_Parameter_C0_0x772() CanGlobalInterruptDisable()
#define IlLeaveCriticalPosition_Parameter_C0_0x772() CanGlobalInterruptRestore()
#define IlEnterCriticalCurvature_Parameter_C2_0x772() CanGlobalInterruptDisable()
#define IlLeaveCriticalCurvature_Parameter_C2_0x772() CanGlobalInterruptRestore()
#define IlEnterCriticalCurvature_derivative_C3_0x772() CanGlobalInterruptDisable()
#define IlLeaveCriticalCurvature_derivative_C3_0x772() CanGlobalInterruptRestore()
#define IlEnterCriticalLane_mark_width_0x772() CanGlobalInterruptDisable()
#define IlLeaveCriticalLane_mark_width_0x772() CanGlobalInterruptRestore()
#define IlEnterCriticalHeading_angle_Parameter_C1_0x771() CanGlobalInterruptDisable()
#define IlLeaveCriticalHeading_angle_Parameter_C1_0x771() CanGlobalInterruptRestore()
#define IlEnterCriticalView_range_0x771()    CanGlobalInterruptDisable()
#define IlLeaveCriticalView_range_0x771()    CanGlobalInterruptRestore()
#define IlEnterCriticalView_range_availability_0x771() CanGlobalInterruptDisable()
#define IlLeaveCriticalView_range_availability_0x771() CanGlobalInterruptRestore()
#define IlEnterCriticalLane_type_0x770()     CanGlobalInterruptDisable()
#define IlLeaveCriticalLane_type_0x770()     CanGlobalInterruptRestore()
#define IlEnterCriticalQuality_0x770()       CanGlobalInterruptDisable()
#define IlLeaveCriticalQuality_0x770()       CanGlobalInterruptRestore()
#define IlEnterCriticalModel_degree_0x770()  CanGlobalInterruptDisable()
#define IlLeaveCriticalModel_degree_0x770()  CanGlobalInterruptRestore()
#define IlEnterCriticalPosition_Parameter_C0_0x770() CanGlobalInterruptDisable()
#define IlLeaveCriticalPosition_Parameter_C0_0x770() CanGlobalInterruptRestore()
#define IlEnterCriticalCurvature_Parameter_C2_0x770() CanGlobalInterruptDisable()
#define IlLeaveCriticalCurvature_Parameter_C2_0x770() CanGlobalInterruptRestore()
#define IlEnterCriticalCurvature_derivative_C3_0x770() CanGlobalInterruptDisable()
#define IlLeaveCriticalCurvature_derivative_C3_0x770() CanGlobalInterruptRestore()
#define IlEnterCriticalLane_mark_width_0x770() CanGlobalInterruptDisable()
#define IlLeaveCriticalLane_mark_width_0x770() CanGlobalInterruptRestore()
#define IlEnterCriticalHeading_angle_Parameter_C1_0x76F() CanGlobalInterruptDisable()
#define IlLeaveCriticalHeading_angle_Parameter_C1_0x76F() CanGlobalInterruptRestore()
#define IlEnterCriticalView_range_0x76F()    CanGlobalInterruptDisable()
#define IlLeaveCriticalView_range_0x76F()    CanGlobalInterruptRestore()
#define IlEnterCriticalView_range_availability_0x76F() CanGlobalInterruptDisable()
#define IlLeaveCriticalView_range_availability_0x76F() CanGlobalInterruptRestore()
#define IlEnterCriticalLane_type_0x76E()     CanGlobalInterruptDisable()
#define IlLeaveCriticalLane_type_0x76E()     CanGlobalInterruptRestore()
#define IlEnterCriticalQuality_0x76E()       CanGlobalInterruptDisable()
#define IlLeaveCriticalQuality_0x76E()       CanGlobalInterruptRestore()
#define IlEnterCriticalModel_degree_0x76E()  CanGlobalInterruptDisable()
#define IlLeaveCriticalModel_degree_0x76E()  CanGlobalInterruptRestore()
#define IlEnterCriticalPosition_Parameter_C0_0x76E() CanGlobalInterruptDisable()
#define IlLeaveCriticalPosition_Parameter_C0_0x76E() CanGlobalInterruptRestore()
#define IlEnterCriticalCurvature_Parameter_C2_0x76E() CanGlobalInterruptDisable()
#define IlLeaveCriticalCurvature_Parameter_C2_0x76E() CanGlobalInterruptRestore()
#define IlEnterCriticalCurvature_derivative_C3_0x76E() CanGlobalInterruptDisable()
#define IlLeaveCriticalCurvature_derivative_C3_0x76E() CanGlobalInterruptRestore()
#define IlEnterCriticalLane_mark_width_0x76E() CanGlobalInterruptDisable()
#define IlLeaveCriticalLane_mark_width_0x76E() CanGlobalInterruptRestore()
#define IlEnterCriticalHeading_angle_Parameter_C1_0x76D() CanGlobalInterruptDisable()
#define IlLeaveCriticalHeading_angle_Parameter_C1_0x76D() CanGlobalInterruptRestore()
#define IlEnterCriticalView_range_0x76D()    CanGlobalInterruptDisable()
#define IlLeaveCriticalView_range_0x76D()    CanGlobalInterruptRestore()
#define IlEnterCriticalView_range_availability_0x76D() CanGlobalInterruptDisable()
#define IlLeaveCriticalView_range_availability_0x76D() CanGlobalInterruptRestore()
#define IlEnterCriticalLane_type_0x76C()     CanGlobalInterruptDisable()
#define IlLeaveCriticalLane_type_0x76C()     CanGlobalInterruptRestore()
#define IlEnterCriticalQuality_0x76C()       CanGlobalInterruptDisable()
#define IlLeaveCriticalQuality_0x76C()       CanGlobalInterruptRestore()
#define IlEnterCriticalModel_degree_0x76C()  CanGlobalInterruptDisable()
#define IlLeaveCriticalModel_degree_0x76C()  CanGlobalInterruptRestore()
#define IlEnterCriticalPosition_Parameter_C0_0x76C() CanGlobalInterruptDisable()
#define IlLeaveCriticalPosition_Parameter_C0_0x76C() CanGlobalInterruptRestore()
#define IlEnterCriticalCurvature_Parameter_C2_0x76C() CanGlobalInterruptDisable()
#define IlLeaveCriticalCurvature_Parameter_C2_0x76C() CanGlobalInterruptRestore()
#define IlEnterCriticalCurvature_derivative_C3_0x76C() CanGlobalInterruptDisable()
#define IlLeaveCriticalCurvature_derivative_C3_0x76C() CanGlobalInterruptRestore()
#define IlEnterCriticalLane_mark_width_0x76C() CanGlobalInterruptDisable()
#define IlLeaveCriticalLane_mark_width_0x76C() CanGlobalInterruptRestore()
#define IlEnterCriticalNumber_lane_markers_reported_0x76B() CanGlobalInterruptDisable()
#define IlLeaveCriticalNumber_lane_markers_reported_0x76B() CanGlobalInterruptRestore()
#define IlEnterCriticalRef_point_1_Position_0x76A() CanGlobalInterruptDisable()
#define IlLeaveCriticalRef_point_1_Position_0x76A() CanGlobalInterruptRestore()
#define IlEnterCriticalRef_point_1_Distance_0x76A() CanGlobalInterruptDisable()
#define IlLeaveCriticalRef_point_1_Distance_0x76A() CanGlobalInterruptRestore()
#define IlEnterCriticalRef_point_1_validity_0x76A() CanGlobalInterruptDisable()
#define IlLeaveCriticalRef_point_1_validity_0x76A() CanGlobalInterruptRestore()
#define IlEnterCriticalRef_point_2_Position_0x76A() CanGlobalInterruptDisable()
#define IlLeaveCriticalRef_point_2_Position_0x76A() CanGlobalInterruptRestore()
#define IlEnterCriticalRef_point_2_Distance_0x76A() CanGlobalInterruptDisable()
#define IlLeaveCriticalRef_point_2_Distance_0x76A() CanGlobalInterruptRestore()
#define IlEnterCriticalRef_point_2_validity_0x76A() CanGlobalInterruptDisable()
#define IlLeaveCriticalRef_point_2_validity_0x76A() CanGlobalInterruptRestore()
#define IlEnterCriticalHeading_angle_Parameter_C1_0x769() CanGlobalInterruptDisable()
#define IlLeaveCriticalHeading_angle_Parameter_C1_0x769() CanGlobalInterruptRestore()
#define IlEnterCriticalView_range_0x769()    CanGlobalInterruptDisable()
#define IlLeaveCriticalView_range_0x769()    CanGlobalInterruptRestore()
#define IlEnterCriticalView_range_availability_0x769() CanGlobalInterruptDisable()
#define IlLeaveCriticalView_range_availability_0x769() CanGlobalInterruptRestore()
#define IlEnterCriticalLane_type_0x768()     CanGlobalInterruptDisable()
#define IlLeaveCriticalLane_type_0x768()     CanGlobalInterruptRestore()
#define IlEnterCriticalQuality_0x768()       CanGlobalInterruptDisable()
#define IlLeaveCriticalQuality_0x768()       CanGlobalInterruptRestore()
#define IlEnterCriticalModel_degree_0x768()  CanGlobalInterruptDisable()
#define IlLeaveCriticalModel_degree_0x768()  CanGlobalInterruptRestore()
#define IlEnterCriticalPosition_Parameter_C0_0x768() CanGlobalInterruptDisable()
#define IlLeaveCriticalPosition_Parameter_C0_0x768() CanGlobalInterruptRestore()
#define IlEnterCriticalCurvature_Parameter_C2_0x768() CanGlobalInterruptDisable()
#define IlLeaveCriticalCurvature_Parameter_C2_0x768() CanGlobalInterruptRestore()
#define IlEnterCriticalCurvature_derivative_C3_0x768() CanGlobalInterruptDisable()
#define IlLeaveCriticalCurvature_derivative_C3_0x768() CanGlobalInterruptRestore()
#define IlEnterCriticalWidth_right_marking_0x768() CanGlobalInterruptDisable()
#define IlLeaveCriticalWidth_right_marking_0x768() CanGlobalInterruptRestore()
#define IlEnterCriticalHeading_angle_Parameter_C1_0x767() CanGlobalInterruptDisable()
#define IlLeaveCriticalHeading_angle_Parameter_C1_0x767() CanGlobalInterruptRestore()
#define IlEnterCriticalView_range_0x767()    CanGlobalInterruptDisable()
#define IlLeaveCriticalView_range_0x767()    CanGlobalInterruptRestore()
#define IlEnterCriticalView_range_availability_0x767() CanGlobalInterruptDisable()
#define IlLeaveCriticalView_range_availability_0x767() CanGlobalInterruptRestore()
#define IlEnterCriticalLane_type_0x766()     CanGlobalInterruptDisable()
#define IlLeaveCriticalLane_type_0x766()     CanGlobalInterruptRestore()
#define IlEnterCriticalQuality_0x766()       CanGlobalInterruptDisable()
#define IlLeaveCriticalQuality_0x766()       CanGlobalInterruptRestore()
#define IlEnterCriticalModel_degree_0x766()  CanGlobalInterruptDisable()
#define IlLeaveCriticalModel_degree_0x766()  CanGlobalInterruptRestore()
#define IlEnterCriticalPosition_Parameter_C0_0x766() CanGlobalInterruptDisable()
#define IlLeaveCriticalPosition_Parameter_C0_0x766() CanGlobalInterruptRestore()
#define IlEnterCriticalCurvature_Parameter_C2_0x766() CanGlobalInterruptDisable()
#define IlLeaveCriticalCurvature_Parameter_C2_0x766() CanGlobalInterruptRestore()
#define IlEnterCriticalCurvature_derivative_C3_0x766() CanGlobalInterruptDisable()
#define IlLeaveCriticalCurvature_derivative_C3_0x766() CanGlobalInterruptRestore()
#define IlEnterCriticalWidth_left_marking_0x766() CanGlobalInterruptDisable()
#define IlLeaveCriticalWidth_left_marking_0x766() CanGlobalInterruptRestore()
#define IlEnterCriticalBrakes_0x760()        CanGlobalInterruptDisable()
#define IlLeaveCriticalBrakes_0x760()        CanGlobalInterruptRestore()
#define IlEnterCriticalLeft_Signal_0x760()   CanGlobalInterruptDisable()
#define IlLeaveCriticalLeft_Signal_0x760()   CanGlobalInterruptRestore()
#define IlEnterCriticalRight_Signal_0x760()  CanGlobalInterruptDisable()
#define IlLeaveCriticalRight_Signal_0x760()  CanGlobalInterruptRestore()
#define IlEnterCriticalWipers_0x760()        CanGlobalInterruptDisable()
#define IlLeaveCriticalWipers_0x760()        CanGlobalInterruptRestore()
#define IlEnterCriticalLow_Beam_0x760()      CanGlobalInterruptDisable()
#define IlLeaveCriticalLow_Beam_0x760()      CanGlobalInterruptRestore()
#define IlEnterCriticalHigh_Beam_0x760()     CanGlobalInterruptDisable()
#define IlLeaveCriticalHigh_Beam_0x760()     CanGlobalInterruptRestore()
#define IlEnterCriticalWipers_available_0x760() CanGlobalInterruptDisable()
#define IlLeaveCriticalWipers_available_0x760() CanGlobalInterruptRestore()
#define IlEnterCriticalLow_Beam_available_0x760() CanGlobalInterruptDisable()
#define IlLeaveCriticalLow_Beam_available_0x760() CanGlobalInterruptRestore()
#define IlEnterCriticalHigh_Beam_Available_0x760() CanGlobalInterruptDisable()
#define IlLeaveCriticalHigh_Beam_Available_0x760() CanGlobalInterruptRestore()
#define IlEnterCriticalSpeed_Available_0x760() CanGlobalInterruptDisable()
#define IlLeaveCriticalSpeed_Available_0x760() CanGlobalInterruptRestore()
#define IlEnterCriticalSpeed_0x760()         CanGlobalInterruptDisable()
#define IlLeaveCriticalSpeed_0x760()         CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Angle_Rate_0x750() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Angle_Rate_0x750() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Scale_Change_0x750() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Scale_Change_0x750() CanGlobalInterruptRestore()
#define IlEnterCriticalObject_Accel_X_0x750() CanGlobalInterruptDisable()
#define IlLeaveCriticalObject_Accel_X_0x750() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Replaced_0x750() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Replaced_0x750() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Angle_0x750() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Angle_0x750() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Legnth_0x74F() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Legnth_0x74F() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Width_0x74F() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Width_0x74F() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Age_0x74F()  CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Age_0x74F()  CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Lane_0x74F() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Lane_0x74F() CanGlobalInterruptRestore()
#define IlEnterCriticalCIPV_Flag_0x74F()     CanGlobalInterruptDisable()
#define IlLeaveCriticalCIPV_Flag_0x74F()     CanGlobalInterruptRestore()
#define IlEnterCriticalRadar_Pos_X_0x74F()   CanGlobalInterruptDisable()
#define IlLeaveCriticalRadar_Pos_X_0x74F()   CanGlobalInterruptRestore()
#define IlEnterCriticalRadar_Vel_X_0x74F()   CanGlobalInterruptDisable()
#define IlLeaveCriticalRadar_Vel_X_0x74F()   CanGlobalInterruptRestore()
#define IlEnterCriticalRadar_Match_Confidence_0x74F() CanGlobalInterruptDisable()
#define IlLeaveCriticalRadar_Match_Confidence_0x74F() CanGlobalInterruptRestore()
#define IlEnterCriticalMatched_Radar_ID_0x74F() CanGlobalInterruptDisable()
#define IlLeaveCriticalMatched_Radar_ID_0x74F() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_ID_0x74E()   CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_ID_0x74E()   CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Pos_X_0x74E() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Pos_X_0x74E() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Pos_Y_0x74E() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Pos_Y_0x74E() CanGlobalInterruptRestore()
#define IlEnterCriticalBlinker_Info_0x74E()  CanGlobalInterruptDisable()
#define IlLeaveCriticalBlinker_Info_0x74E()  CanGlobalInterruptRestore()
#define IlEnterCriticalCut_in_and_out_0x74E() CanGlobalInterruptDisable()
#define IlLeaveCriticalCut_in_and_out_0x74E() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Rel_Vel_X_0x74E() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Rel_Vel_X_0x74E() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Type_0x74E() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Type_0x74E() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Status_0x74E() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Status_0x74E() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Brake_Light_0x74E() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Brake_Light_0x74E() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Valid_0x74E() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Valid_0x74E() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Angle_Rate_0x74D() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Angle_Rate_0x74D() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Scale_Change_0x74D() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Scale_Change_0x74D() CanGlobalInterruptRestore()
#define IlEnterCriticalObject_Accel_X_0x74D() CanGlobalInterruptDisable()
#define IlLeaveCriticalObject_Accel_X_0x74D() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Replaced_0x74D() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Replaced_0x74D() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Angle_0x74D() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Angle_0x74D() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Legnth_0x74C() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Legnth_0x74C() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Width_0x74C() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Width_0x74C() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Age_0x74C()  CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Age_0x74C()  CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Lane_0x74C() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Lane_0x74C() CanGlobalInterruptRestore()
#define IlEnterCriticalCIPV_Flag_0x74C()     CanGlobalInterruptDisable()
#define IlLeaveCriticalCIPV_Flag_0x74C()     CanGlobalInterruptRestore()
#define IlEnterCriticalRadar_Pos_X_0x74C()   CanGlobalInterruptDisable()
#define IlLeaveCriticalRadar_Pos_X_0x74C()   CanGlobalInterruptRestore()
#define IlEnterCriticalRadar_Vel_X_0x74C()   CanGlobalInterruptDisable()
#define IlLeaveCriticalRadar_Vel_X_0x74C()   CanGlobalInterruptRestore()
#define IlEnterCriticalRadar_Match_Confidence_0x74C() CanGlobalInterruptDisable()
#define IlLeaveCriticalRadar_Match_Confidence_0x74C() CanGlobalInterruptRestore()
#define IlEnterCriticalMatched_Radar_ID_0x74C() CanGlobalInterruptDisable()
#define IlLeaveCriticalMatched_Radar_ID_0x74C() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_ID_0x74B()   CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_ID_0x74B()   CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Pos_X_0x74B() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Pos_X_0x74B() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Pos_Y_0x74B() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Pos_Y_0x74B() CanGlobalInterruptRestore()
#define IlEnterCriticalBlinker_Info_0x74B()  CanGlobalInterruptDisable()
#define IlLeaveCriticalBlinker_Info_0x74B()  CanGlobalInterruptRestore()
#define IlEnterCriticalCut_in_and_out_0x74B() CanGlobalInterruptDisable()
#define IlLeaveCriticalCut_in_and_out_0x74B() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Rel_Vel_X_0x74B() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Rel_Vel_X_0x74B() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Type_0x74B() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Type_0x74B() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Status_0x74B() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Status_0x74B() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Brake_Light_0x74B() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Brake_Light_0x74B() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Valid_0x74B() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Valid_0x74B() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Angle_Rate_0x74A() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Angle_Rate_0x74A() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Scale_Change_0x74A() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Scale_Change_0x74A() CanGlobalInterruptRestore()
#define IlEnterCriticalObject_Accel_X_0x74A() CanGlobalInterruptDisable()
#define IlLeaveCriticalObject_Accel_X_0x74A() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Replaced_0x74A() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Replaced_0x74A() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Angle_0x74A() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Angle_0x74A() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Legnth_0x749() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Legnth_0x749() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Width_0x749() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Width_0x749() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Age_0x749()  CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Age_0x749()  CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Lane_0x749() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Lane_0x749() CanGlobalInterruptRestore()
#define IlEnterCriticalCIPV_Flag_0x749()     CanGlobalInterruptDisable()
#define IlLeaveCriticalCIPV_Flag_0x749()     CanGlobalInterruptRestore()
#define IlEnterCriticalRadar_Pos_X_0x749()   CanGlobalInterruptDisable()
#define IlLeaveCriticalRadar_Pos_X_0x749()   CanGlobalInterruptRestore()
#define IlEnterCriticalRadar_Vel_X_0x749()   CanGlobalInterruptDisable()
#define IlLeaveCriticalRadar_Vel_X_0x749()   CanGlobalInterruptRestore()
#define IlEnterCriticalRadar_Match_Confidence_0x749() CanGlobalInterruptDisable()
#define IlLeaveCriticalRadar_Match_Confidence_0x749() CanGlobalInterruptRestore()
#define IlEnterCriticalMatched_Radar_ID_0x749() CanGlobalInterruptDisable()
#define IlLeaveCriticalMatched_Radar_ID_0x749() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_ID_0x748()   CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_ID_0x748()   CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Pos_X_0x748() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Pos_X_0x748() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Pos_Y_0x748() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Pos_Y_0x748() CanGlobalInterruptRestore()
#define IlEnterCriticalBlinker_Info_0x748()  CanGlobalInterruptDisable()
#define IlLeaveCriticalBlinker_Info_0x748()  CanGlobalInterruptRestore()
#define IlEnterCriticalCut_in_and_out_0x748() CanGlobalInterruptDisable()
#define IlLeaveCriticalCut_in_and_out_0x748() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Rel_Vel_X_0x748() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Rel_Vel_X_0x748() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Type_0x748() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Type_0x748() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Status_0x748() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Status_0x748() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Brake_Light_0x748() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Brake_Light_0x748() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Valid_0x748() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Valid_0x748() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Angle_Rate_0x747() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Angle_Rate_0x747() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Scale_Change_0x747() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Scale_Change_0x747() CanGlobalInterruptRestore()
#define IlEnterCriticalObject_Accel_X_0x747() CanGlobalInterruptDisable()
#define IlLeaveCriticalObject_Accel_X_0x747() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Replaced_0x747() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Replaced_0x747() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Angle_0x747() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Angle_0x747() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Legnth_0x746() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Legnth_0x746() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Width_0x746() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Width_0x746() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Age_0x746()  CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Age_0x746()  CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Lane_0x746() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Lane_0x746() CanGlobalInterruptRestore()
#define IlEnterCriticalCIPV_Flag_0x746()     CanGlobalInterruptDisable()
#define IlLeaveCriticalCIPV_Flag_0x746()     CanGlobalInterruptRestore()
#define IlEnterCriticalRadar_Pos_X_0x746()   CanGlobalInterruptDisable()
#define IlLeaveCriticalRadar_Pos_X_0x746()   CanGlobalInterruptRestore()
#define IlEnterCriticalRadar_Vel_X_0x746()   CanGlobalInterruptDisable()
#define IlLeaveCriticalRadar_Vel_X_0x746()   CanGlobalInterruptRestore()
#define IlEnterCriticalRadar_Match_Confidence_0x746() CanGlobalInterruptDisable()
#define IlLeaveCriticalRadar_Match_Confidence_0x746() CanGlobalInterruptRestore()
#define IlEnterCriticalMatched_Radar_ID_0x746() CanGlobalInterruptDisable()
#define IlLeaveCriticalMatched_Radar_ID_0x746() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_ID_0x745()   CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_ID_0x745()   CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Pos_X_0x745() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Pos_X_0x745() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Pos_Y_0x745() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Pos_Y_0x745() CanGlobalInterruptRestore()
#define IlEnterCriticalBlinker_Info_0x745()  CanGlobalInterruptDisable()
#define IlLeaveCriticalBlinker_Info_0x745()  CanGlobalInterruptRestore()
#define IlEnterCriticalCut_in_and_out_0x745() CanGlobalInterruptDisable()
#define IlLeaveCriticalCut_in_and_out_0x745() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Rel_Vel_X_0x745() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Rel_Vel_X_0x745() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Type_0x745() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Type_0x745() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Status_0x745() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Status_0x745() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Brake_Light_0x745() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Brake_Light_0x745() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Valid_0x745() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Valid_0x745() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Angle_Rate_0x744() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Angle_Rate_0x744() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Scale_Change_0x744() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Scale_Change_0x744() CanGlobalInterruptRestore()
#define IlEnterCriticalObject_Accel_X_0x744() CanGlobalInterruptDisable()
#define IlLeaveCriticalObject_Accel_X_0x744() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Replaced_0x744() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Replaced_0x744() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Angle_0x744() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Angle_0x744() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Legnth_0x743() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Legnth_0x743() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Width_0x743() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Width_0x743() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Age_0x743()  CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Age_0x743()  CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Lane_0x743() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Lane_0x743() CanGlobalInterruptRestore()
#define IlEnterCriticalCIPV_Flag_0x743()     CanGlobalInterruptDisable()
#define IlLeaveCriticalCIPV_Flag_0x743()     CanGlobalInterruptRestore()
#define IlEnterCriticalRadar_Pos_X_0x743()   CanGlobalInterruptDisable()
#define IlLeaveCriticalRadar_Pos_X_0x743()   CanGlobalInterruptRestore()
#define IlEnterCriticalRadar_Vel_X_0x743()   CanGlobalInterruptDisable()
#define IlLeaveCriticalRadar_Vel_X_0x743()   CanGlobalInterruptRestore()
#define IlEnterCriticalRadar_Match_Confidence_0x743() CanGlobalInterruptDisable()
#define IlLeaveCriticalRadar_Match_Confidence_0x743() CanGlobalInterruptRestore()
#define IlEnterCriticalMatched_Radar_ID_0x743() CanGlobalInterruptDisable()
#define IlLeaveCriticalMatched_Radar_ID_0x743() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_ID_0x742()   CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_ID_0x742()   CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Pos_X_0x742() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Pos_X_0x742() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Pos_Y_0x742() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Pos_Y_0x742() CanGlobalInterruptRestore()
#define IlEnterCriticalBlinker_Info_0x742()  CanGlobalInterruptDisable()
#define IlLeaveCriticalBlinker_Info_0x742()  CanGlobalInterruptRestore()
#define IlEnterCriticalCut_in_and_out_0x742() CanGlobalInterruptDisable()
#define IlLeaveCriticalCut_in_and_out_0x742() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Rel_Vel_X_0x742() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Rel_Vel_X_0x742() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Type_0x742() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Type_0x742() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Status_0x742() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Status_0x742() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Brake_Light_0x742() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Brake_Light_0x742() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Valid_0x742() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Valid_0x742() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Angle_Rate_0x741() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Angle_Rate_0x741() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Scale_Change_0x741() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Scale_Change_0x741() CanGlobalInterruptRestore()
#define IlEnterCriticalObject_Accel_X_0x741() CanGlobalInterruptDisable()
#define IlLeaveCriticalObject_Accel_X_0x741() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Replaced_0x741() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Replaced_0x741() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Angle_0x741() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Angle_0x741() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Legnth_0x740() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Legnth_0x740() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Width_0x740() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Width_0x740() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Age_0x740()  CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Age_0x740()  CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Lane_0x740() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Lane_0x740() CanGlobalInterruptRestore()
#define IlEnterCriticalCIPV_Flag_0x740()     CanGlobalInterruptDisable()
#define IlLeaveCriticalCIPV_Flag_0x740()     CanGlobalInterruptRestore()
#define IlEnterCriticalRadar_Pos_X_0x740()   CanGlobalInterruptDisable()
#define IlLeaveCriticalRadar_Pos_X_0x740()   CanGlobalInterruptRestore()
#define IlEnterCriticalRadar_Vel_X_0x740()   CanGlobalInterruptDisable()
#define IlLeaveCriticalRadar_Vel_X_0x740()   CanGlobalInterruptRestore()
#define IlEnterCriticalRadar_Match_Confidence_0x740() CanGlobalInterruptDisable()
#define IlLeaveCriticalRadar_Match_Confidence_0x740() CanGlobalInterruptRestore()
#define IlEnterCriticalMatched_Radar_ID_0x740() CanGlobalInterruptDisable()
#define IlLeaveCriticalMatched_Radar_ID_0x740() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_ID_0x73F()   CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_ID_0x73F()   CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Pos_X_0x73F() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Pos_X_0x73F() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Pos_Y_0x73F() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Pos_Y_0x73F() CanGlobalInterruptRestore()
#define IlEnterCriticalBlinker_Info_0x73F()  CanGlobalInterruptDisable()
#define IlLeaveCriticalBlinker_Info_0x73F()  CanGlobalInterruptRestore()
#define IlEnterCriticalCut_in_and_out_0x73F() CanGlobalInterruptDisable()
#define IlLeaveCriticalCut_in_and_out_0x73F() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Rel_Vel_X_0x73F() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Rel_Vel_X_0x73F() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Type_0x73F() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Type_0x73F() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Status_0x73F() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Status_0x73F() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Brake_Light_0x73F() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Brake_Light_0x73F() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Valid_0x73F() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Valid_0x73F() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Angle_Rate_0x73E() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Angle_Rate_0x73E() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Scale_Change_0x73E() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Scale_Change_0x73E() CanGlobalInterruptRestore()
#define IlEnterCriticalObject_Accel_X_0x73E() CanGlobalInterruptDisable()
#define IlLeaveCriticalObject_Accel_X_0x73E() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Replaced_0x73E() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Replaced_0x73E() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Angle_0x73E() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Angle_0x73E() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Legnth_0x73D() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Legnth_0x73D() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Width_0x73D() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Width_0x73D() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Age_0x73D()  CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Age_0x73D()  CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Lane_0x73D() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Lane_0x73D() CanGlobalInterruptRestore()
#define IlEnterCriticalCIPV_Flag_0x73D()     CanGlobalInterruptDisable()
#define IlLeaveCriticalCIPV_Flag_0x73D()     CanGlobalInterruptRestore()
#define IlEnterCriticalRadar_Pos_X_0x73D()   CanGlobalInterruptDisable()
#define IlLeaveCriticalRadar_Pos_X_0x73D()   CanGlobalInterruptRestore()
#define IlEnterCriticalRadar_Vel_X_0x73D()   CanGlobalInterruptDisable()
#define IlLeaveCriticalRadar_Vel_X_0x73D()   CanGlobalInterruptRestore()
#define IlEnterCriticalRadar_Match_Confidence_0x73D() CanGlobalInterruptDisable()
#define IlLeaveCriticalRadar_Match_Confidence_0x73D() CanGlobalInterruptRestore()
#define IlEnterCriticalMatched_Radar_ID_0x73D() CanGlobalInterruptDisable()
#define IlLeaveCriticalMatched_Radar_ID_0x73D() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_ID_0x73C()   CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_ID_0x73C()   CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Pos_X_0x73C() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Pos_X_0x73C() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Pos_Y_0x73C() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Pos_Y_0x73C() CanGlobalInterruptRestore()
#define IlEnterCriticalBlinker_Info_0x73C()  CanGlobalInterruptDisable()
#define IlLeaveCriticalBlinker_Info_0x73C()  CanGlobalInterruptRestore()
#define IlEnterCriticalCut_in_and_out_0x73C() CanGlobalInterruptDisable()
#define IlLeaveCriticalCut_in_and_out_0x73C() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Rel_Vel_X_0x73C() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Rel_Vel_X_0x73C() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Type_0x73C() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Type_0x73C() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Status_0x73C() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Status_0x73C() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Brake_Light_0x73C() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Brake_Light_0x73C() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Valid_0x73C() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Valid_0x73C() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Angle_Rate_0x73B() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Angle_Rate_0x73B() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Scale_Change_0x73B() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Scale_Change_0x73B() CanGlobalInterruptRestore()
#define IlEnterCriticalObject_Accel_X_0x73B() CanGlobalInterruptDisable()
#define IlLeaveCriticalObject_Accel_X_0x73B() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Replaced_0x73B() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Replaced_0x73B() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Angle_0x73B() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Angle_0x73B() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Legnth_0x73A() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Legnth_0x73A() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Width_0x73A() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Width_0x73A() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Age_0x73A()  CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Age_0x73A()  CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Lane_0x73A() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Lane_0x73A() CanGlobalInterruptRestore()
#define IlEnterCriticalCIPV_Flag_0x73A()     CanGlobalInterruptDisable()
#define IlLeaveCriticalCIPV_Flag_0x73A()     CanGlobalInterruptRestore()
#define IlEnterCriticalRadar_Pos_X_0x73A()   CanGlobalInterruptDisable()
#define IlLeaveCriticalRadar_Pos_X_0x73A()   CanGlobalInterruptRestore()
#define IlEnterCriticalRadar_Vel_X_0x73A()   CanGlobalInterruptDisable()
#define IlLeaveCriticalRadar_Vel_X_0x73A()   CanGlobalInterruptRestore()
#define IlEnterCriticalRadar_Match_Confidence_0x73A() CanGlobalInterruptDisable()
#define IlLeaveCriticalRadar_Match_Confidence_0x73A() CanGlobalInterruptRestore()
#define IlEnterCriticalMatched_Radar_ID_0x73A() CanGlobalInterruptDisable()
#define IlLeaveCriticalMatched_Radar_ID_0x73A() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_ID_0x739()   CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_ID_0x739()   CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Pos_X_0x739() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Pos_X_0x739() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Pos_Y_0x739() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Pos_Y_0x739() CanGlobalInterruptRestore()
#define IlEnterCriticalBlinker_Info_0x739()  CanGlobalInterruptDisable()
#define IlLeaveCriticalBlinker_Info_0x739()  CanGlobalInterruptRestore()
#define IlEnterCriticalCut_in_and_out_0x739() CanGlobalInterruptDisable()
#define IlLeaveCriticalCut_in_and_out_0x739() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Rel_Vel_X_0x739() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Rel_Vel_X_0x739() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Type_0x739() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Type_0x739() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Status_0x739() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Status_0x739() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Brake_Light_0x739() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Brake_Light_0x739() CanGlobalInterruptRestore()
#define IlEnterCriticalObstacle_Valid_0x739() CanGlobalInterruptDisable()
#define IlLeaveCriticalObstacle_Valid_0x739() CanGlobalInterruptRestore()
#define IlEnterCriticalNum_Obstacles_0x738() CanGlobalInterruptDisable()
#define IlLeaveCriticalNum_Obstacles_0x738() CanGlobalInterruptRestore()
#define IlEnterCriticalTimestamp_0x738()     CanGlobalInterruptDisable()
#define IlLeaveCriticalTimestamp_0x738()     CanGlobalInterruptRestore()
#define IlEnterCriticalApplication_Version_0x738() CanGlobalInterruptDisable()
#define IlLeaveCriticalApplication_Version_0x738() CanGlobalInterruptRestore()
#define IlEnterCriticalActive_Version_Number_Section_0x738() CanGlobalInterruptDisable()
#define IlLeaveCriticalActive_Version_Number_Section_0x738() CanGlobalInterruptRestore()
#define IlEnterCriticalLeft_close_rang_cut_in_0x738() CanGlobalInterruptDisable()
#define IlLeaveCriticalLeft_close_rang_cut_in_0x738() CanGlobalInterruptRestore()
#define IlEnterCriticalRight_close_rang_cut_in_0x738() CanGlobalInterruptDisable()
#define IlLeaveCriticalRight_close_rang_cut_in_0x738() CanGlobalInterruptRestore()
#define IlEnterCriticalGo_0x738()            CanGlobalInterruptDisable()
#define IlLeaveCriticalGo_0x738()            CanGlobalInterruptRestore()
#define IlEnterCriticalProtocol_Version_0x738() CanGlobalInterruptDisable()
#define IlLeaveCriticalProtocol_Version_0x738() CanGlobalInterruptRestore()
#define IlEnterCriticalClose_Car_0x738()     CanGlobalInterruptDisable()
#define IlLeaveCriticalClose_Car_0x738()     CanGlobalInterruptRestore()
#define IlEnterCriticalFailsafe_0x738()      CanGlobalInterruptDisable()
#define IlLeaveCriticalFailsafe_0x738()      CanGlobalInterruptRestore()
#define IlEnterCriticalLane_Curvature_0x737() CanGlobalInterruptDisable()
#define IlLeaveCriticalLane_Curvature_0x737() CanGlobalInterruptRestore()
#define IlEnterCriticalLane_Heading_0x737()  CanGlobalInterruptDisable()
#define IlLeaveCriticalLane_Heading_0x737()  CanGlobalInterruptRestore()
#define IlEnterCriticalCA_0x737()            CanGlobalInterruptDisable()
#define IlLeaveCriticalCA_0x737()            CanGlobalInterruptRestore()
#define IlEnterCriticalRight_LDW_Availability_0x737() CanGlobalInterruptDisable()
#define IlLeaveCriticalRight_LDW_Availability_0x737() CanGlobalInterruptRestore()
#define IlEnterCriticalLeft_LDW_Availability_0x737() CanGlobalInterruptDisable()
#define IlLeaveCriticalLeft_LDW_Availability_0x737() CanGlobalInterruptRestore()
#define IlEnterCriticalYaw_Angle_0x737()     CanGlobalInterruptDisable()
#define IlLeaveCriticalYaw_Angle_0x737()     CanGlobalInterruptRestore()
#define IlEnterCriticalPitch_Angle_0x737()   CanGlobalInterruptDisable()
#define IlLeaveCriticalPitch_Angle_0x737()   CanGlobalInterruptRestore()
#define IlEnterCriticalBoundary_bottom_HLB_0x729() CanGlobalInterruptDisable()
#define IlLeaveCriticalBoundary_bottom_HLB_0x729() CanGlobalInterruptRestore()
#define IlEnterCriticalBoundary_left_hand_HLB_0x729() CanGlobalInterruptDisable()
#define IlLeaveCriticalBoundary_left_hand_HLB_0x729() CanGlobalInterruptRestore()
#define IlEnterCriticalBoundary_right_hand_HLB_0x729() CanGlobalInterruptDisable()
#define IlLeaveCriticalBoundary_right_hand_HLB_0x729() CanGlobalInterruptRestore()
#define IlEnterCriticalObject_Distance_HLB_0x729() CanGlobalInterruptDisable()
#define IlLeaveCriticalObject_Distance_HLB_0x729() CanGlobalInterruptRestore()
#define IlEnterCriticalStatus_Bottom_HLB_0x729() CanGlobalInterruptDisable()
#define IlLeaveCriticalStatus_Bottom_HLB_0x729() CanGlobalInterruptRestore()
#define IlEnterCriticalStatus_Left_Hand_HLB_0x729() CanGlobalInterruptDisable()
#define IlLeaveCriticalStatus_Left_Hand_HLB_0x729() CanGlobalInterruptRestore()
#define IlEnterCriticalStatus_Right_Hand_HLB_0x729() CanGlobalInterruptDisable()
#define IlLeaveCriticalStatus_Right_Hand_HLB_0x729() CanGlobalInterruptRestore()
#define IlEnterCriticalStatus_Object_Distance_HLB_0x729() CanGlobalInterruptDisable()
#define IlLeaveCriticalStatus_Object_Distance_HLB_0x729() CanGlobalInterruptRestore()
#define IlEnterCriticalLeft_Target_Change_0x729() CanGlobalInterruptDisable()
#define IlLeaveCriticalLeft_Target_Change_0x729() CanGlobalInterruptRestore()
#define IlEnterCriticalRight_Target_Change_0x729() CanGlobalInterruptDisable()
#define IlLeaveCriticalRight_Target_Change_0x729() CanGlobalInterruptRestore()
#define IlEnterCriticalToo_Many_Cars_0x729() CanGlobalInterruptDisable()
#define IlLeaveCriticalToo_Many_Cars_0x729() CanGlobalInterruptRestore()
#define IlEnterCriticalBusy_Scene_0x729()    CanGlobalInterruptDisable()
#define IlLeaveCriticalBusy_Scene_0x729()    CanGlobalInterruptRestore()
#define IlEnterCriticalBinary_high_low_beam_decision_0x728() CanGlobalInterruptDisable()
#define IlLeaveCriticalBinary_high_low_beam_decision_0x728() CanGlobalInterruptRestore()
#define IlEnterCriticalReasons_for_switch_to_low_beam_0x728() CanGlobalInterruptDisable()
#define IlLeaveCriticalReasons_for_switch_to_low_beam_0x728() CanGlobalInterruptRestore()
#define IlEnterCriticalVision_only_Sign_Type_Display1_0x727() CanGlobalInterruptDisable()
#define IlLeaveCriticalVision_only_Sign_Type_Display1_0x727() CanGlobalInterruptRestore()
#define IlEnterCriticalSupplementary_Sign_Type_Display1_0x727() CanGlobalInterruptDisable()
#define IlLeaveCriticalSupplementary_Sign_Type_Display1_0x727() CanGlobalInterruptRestore()
#define IlEnterCriticalVision_only_Sign_Type_Display2_0x727() CanGlobalInterruptDisable()
#define IlLeaveCriticalVision_only_Sign_Type_Display2_0x727() CanGlobalInterruptRestore()
#define IlEnterCriticalSupplementary_Sign_Type_Display2_0x727() CanGlobalInterruptDisable()
#define IlLeaveCriticalSupplementary_Sign_Type_Display2_0x727() CanGlobalInterruptRestore()
#define IlEnterCriticalVision_only_Sign_Type_Display3_0x727() CanGlobalInterruptDisable()
#define IlLeaveCriticalVision_only_Sign_Type_Display3_0x727() CanGlobalInterruptRestore()
#define IlEnterCriticalSupplementary_Sign_Type_Display3_0x727() CanGlobalInterruptDisable()
#define IlLeaveCriticalSupplementary_Sign_Type_Display3_0x727() CanGlobalInterruptRestore()
#define IlEnterCriticalVision_only_Sign_Type_Display4_0x727() CanGlobalInterruptDisable()
#define IlLeaveCriticalVision_only_Sign_Type_Display4_0x727() CanGlobalInterruptRestore()
#define IlEnterCriticalSupplementary_Sign_Type_Display4_0x727() CanGlobalInterruptDisable()
#define IlLeaveCriticalSupplementary_Sign_Type_Display4_0x727() CanGlobalInterruptRestore()
#define IlEnterCriticalVision_only_Sign_Type_0x725() CanGlobalInterruptDisable()
#define IlLeaveCriticalVision_only_Sign_Type_0x725() CanGlobalInterruptRestore()
#define IlEnterCriticalSupplementary_Sign_Type_0x725() CanGlobalInterruptDisable()
#define IlLeaveCriticalSupplementary_Sign_Type_0x725() CanGlobalInterruptRestore()
#define IlEnterCriticalSign_Position_X_0x725() CanGlobalInterruptDisable()
#define IlLeaveCriticalSign_Position_X_0x725() CanGlobalInterruptRestore()
#define IlEnterCriticalSign_Position_Y_0x725() CanGlobalInterruptDisable()
#define IlLeaveCriticalSign_Position_Y_0x725() CanGlobalInterruptRestore()
#define IlEnterCriticalSign_Position_Z_0x725() CanGlobalInterruptDisable()
#define IlLeaveCriticalSign_Position_Z_0x725() CanGlobalInterruptRestore()
#define IlEnterCriticalFilter_Type_0x725()   CanGlobalInterruptDisable()
#define IlLeaveCriticalFilter_Type_0x725()   CanGlobalInterruptRestore()
#define IlEnterCriticalVision_only_Sign_Type_0x724() CanGlobalInterruptDisable()
#define IlLeaveCriticalVision_only_Sign_Type_0x724() CanGlobalInterruptRestore()
#define IlEnterCriticalSupplementary_Sign_Type_0x724() CanGlobalInterruptDisable()
#define IlLeaveCriticalSupplementary_Sign_Type_0x724() CanGlobalInterruptRestore()
#define IlEnterCriticalSign_Position_X_0x724() CanGlobalInterruptDisable()
#define IlLeaveCriticalSign_Position_X_0x724() CanGlobalInterruptRestore()
#define IlEnterCriticalSign_Position_Y_0x724() CanGlobalInterruptDisable()
#define IlLeaveCriticalSign_Position_Y_0x724() CanGlobalInterruptRestore()
#define IlEnterCriticalSign_Position_Z_0x724() CanGlobalInterruptDisable()
#define IlLeaveCriticalSign_Position_Z_0x724() CanGlobalInterruptRestore()
#define IlEnterCriticalFilter_Type_0x724()   CanGlobalInterruptDisable()
#define IlLeaveCriticalFilter_Type_0x724()   CanGlobalInterruptRestore()
#define IlEnterCriticalVision_only_Sign_Type_0x723() CanGlobalInterruptDisable()
#define IlLeaveCriticalVision_only_Sign_Type_0x723() CanGlobalInterruptRestore()
#define IlEnterCriticalSupplementary_Sign_Type_0x723() CanGlobalInterruptDisable()
#define IlLeaveCriticalSupplementary_Sign_Type_0x723() CanGlobalInterruptRestore()
#define IlEnterCriticalSign_Position_X_0x723() CanGlobalInterruptDisable()
#define IlLeaveCriticalSign_Position_X_0x723() CanGlobalInterruptRestore()
#define IlEnterCriticalSign_Position_Y_0x723() CanGlobalInterruptDisable()
#define IlLeaveCriticalSign_Position_Y_0x723() CanGlobalInterruptRestore()
#define IlEnterCriticalSign_Position_Z_0x723() CanGlobalInterruptDisable()
#define IlLeaveCriticalSign_Position_Z_0x723() CanGlobalInterruptRestore()
#define IlEnterCriticalFilter_Type_0x723()   CanGlobalInterruptDisable()
#define IlLeaveCriticalFilter_Type_0x723()   CanGlobalInterruptRestore()
#define IlEnterCriticalVision_only_Sign_Type_0x722() CanGlobalInterruptDisable()
#define IlLeaveCriticalVision_only_Sign_Type_0x722() CanGlobalInterruptRestore()
#define IlEnterCriticalSupplementary_Sign_Type_0x722() CanGlobalInterruptDisable()
#define IlLeaveCriticalSupplementary_Sign_Type_0x722() CanGlobalInterruptRestore()
#define IlEnterCriticalSign_Position_X_0x722() CanGlobalInterruptDisable()
#define IlLeaveCriticalSign_Position_X_0x722() CanGlobalInterruptRestore()
#define IlEnterCriticalSign_Position_Y_0x722() CanGlobalInterruptDisable()
#define IlLeaveCriticalSign_Position_Y_0x722() CanGlobalInterruptRestore()
#define IlEnterCriticalSign_Position_Z_0x722() CanGlobalInterruptDisable()
#define IlLeaveCriticalSign_Position_Z_0x722() CanGlobalInterruptRestore()
#define IlEnterCriticalFilter_Type_0x722()   CanGlobalInterruptDisable()
#define IlLeaveCriticalFilter_Type_0x722()   CanGlobalInterruptRestore()
#define IlEnterCriticalVision_only_Sign_Type_0x721() CanGlobalInterruptDisable()
#define IlLeaveCriticalVision_only_Sign_Type_0x721() CanGlobalInterruptRestore()
#define IlEnterCriticalSupplementary_Sign_Type_0x721() CanGlobalInterruptDisable()
#define IlLeaveCriticalSupplementary_Sign_Type_0x721() CanGlobalInterruptRestore()
#define IlEnterCriticalSign_Position_X_0x721() CanGlobalInterruptDisable()
#define IlLeaveCriticalSign_Position_X_0x721() CanGlobalInterruptRestore()
#define IlEnterCriticalSign_Position_Y_0x721() CanGlobalInterruptDisable()
#define IlLeaveCriticalSign_Position_Y_0x721() CanGlobalInterruptRestore()
#define IlEnterCriticalSign_Position_Z_0x721() CanGlobalInterruptDisable()
#define IlLeaveCriticalSign_Position_Z_0x721() CanGlobalInterruptRestore()
#define IlEnterCriticalFilter_Type_0x721()   CanGlobalInterruptDisable()
#define IlLeaveCriticalFilter_Type_0x721()   CanGlobalInterruptRestore()
#define IlEnterCriticalVision_only_Sign_Type_0x720() CanGlobalInterruptDisable()
#define IlLeaveCriticalVision_only_Sign_Type_0x720() CanGlobalInterruptRestore()
#define IlEnterCriticalSupplementary_Sign_Type_0x720() CanGlobalInterruptDisable()
#define IlLeaveCriticalSupplementary_Sign_Type_0x720() CanGlobalInterruptRestore()
#define IlEnterCriticalSign_Position_X_0x720() CanGlobalInterruptDisable()
#define IlLeaveCriticalSign_Position_X_0x720() CanGlobalInterruptRestore()
#define IlEnterCriticalSign_Position_Y_0x720() CanGlobalInterruptDisable()
#define IlLeaveCriticalSign_Position_Y_0x720() CanGlobalInterruptRestore()
#define IlEnterCriticalSign_Position_Z_0x720() CanGlobalInterruptDisable()
#define IlLeaveCriticalSign_Position_Z_0x720() CanGlobalInterruptRestore()
#define IlEnterCriticalFilter_Type_0x720()   CanGlobalInterruptDisable()
#define IlLeaveCriticalFilter_Type_0x720()   CanGlobalInterruptRestore()
#define IlEnterCriticalSound_type_0x700()    CanGlobalInterruptDisable()
#define IlLeaveCriticalSound_type_0x700()    CanGlobalInterruptRestore()
#define IlEnterCriticalDusk_Time_Indicator_0x700() CanGlobalInterruptDisable()
#define IlLeaveCriticalDusk_Time_Indicator_0x700() CanGlobalInterruptRestore()
#define IlEnterCriticalNight_Time_Indicator_0x700() CanGlobalInterruptDisable()
#define IlLeaveCriticalNight_Time_Indicator_0x700() CanGlobalInterruptRestore()
#define IlEnterCriticalSuppress_0x700()      CanGlobalInterruptDisable()
#define IlLeaveCriticalSuppress_0x700()      CanGlobalInterruptRestore()
#define IlEnterCriticalHeadway_valid_0x700() CanGlobalInterruptDisable()
#define IlLeaveCriticalHeadway_valid_0x700() CanGlobalInterruptRestore()
#define IlEnterCriticalHeadway_measurement_0x700() CanGlobalInterruptDisable()
#define IlLeaveCriticalHeadway_measurement_0x700() CanGlobalInterruptRestore()
#define IlEnterCriticalLanes_On_0x700()      CanGlobalInterruptDisable()
#define IlLeaveCriticalLanes_On_0x700()      CanGlobalInterruptRestore()
#define IlEnterCriticalLeft_LDW_ON_0x700()   CanGlobalInterruptDisable()
#define IlLeaveCriticalLeft_LDW_ON_0x700()   CanGlobalInterruptRestore()
#define IlEnterCriticalRight_LDW_ON_0x700()  CanGlobalInterruptDisable()
#define IlLeaveCriticalRight_LDW_ON_0x700()  CanGlobalInterruptRestore()
#define IlEnterCriticalFCW_on_0x700()        CanGlobalInterruptDisable()
#define IlLeaveCriticalFCW_on_0x700()        CanGlobalInterruptRestore()
#define IlEnterCriticalLeft_Crossing_0x700() CanGlobalInterruptDisable()
#define IlLeaveCriticalLeft_Crossing_0x700() CanGlobalInterruptRestore()
#define IlEnterCriticalRight_Crossing_0x700() CanGlobalInterruptDisable()
#define IlLeaveCriticalRight_Crossing_0x700() CanGlobalInterruptRestore()
#define IlEnterCriticalMaintenanc_0x700()    CanGlobalInterruptDisable()
#define IlLeaveCriticalMaintenanc_0x700()    CanGlobalInterruptRestore()
#define IlEnterCriticalFailsafe_0x700()      CanGlobalInterruptDisable()
#define IlLeaveCriticalFailsafe_0x700()      CanGlobalInterruptRestore()
#define IlEnterCriticalPeds_FCW_0x700()      CanGlobalInterruptDisable()
#define IlLeaveCriticalPeds_FCW_0x700()      CanGlobalInterruptRestore()
#define IlEnterCriticalPeds_in_DZ_0x700()    CanGlobalInterruptDisable()
#define IlLeaveCriticalPeds_in_DZ_0x700()    CanGlobalInterruptRestore()
#define IlEnterCriticalHeadway_Warning_Level_0x700() CanGlobalInterruptDisable()
#define IlLeaveCriticalHeadway_Warning_Level_0x700() CanGlobalInterruptRestore()
#define IlEnterCriticalLane_Confidence_Left_0x669() CanGlobalInterruptDisable()
#define IlLeaveCriticalLane_Confidence_Left_0x669() CanGlobalInterruptRestore()
#define IlEnterCriticalLDW_Availability_Left_0x669() CanGlobalInterruptDisable()
#define IlLeaveCriticalLDW_Availability_Left_0x669() CanGlobalInterruptRestore()
#define IlEnterCriticalUndocumented1_0x669() CanGlobalInterruptDisable()
#define IlLeaveCriticalUndocumented1_0x669() CanGlobalInterruptRestore()
#define IlEnterCriticalLane_Type_Left_0x669() CanGlobalInterruptDisable()
#define IlLeaveCriticalLane_Type_Left_0x669() CanGlobalInterruptRestore()
#define IlEnterCriticalDistance_To_Left_Lane_0x669() CanGlobalInterruptDisable()
#define IlLeaveCriticalDistance_To_Left_Lane_0x669() CanGlobalInterruptRestore()
#define IlEnterCriticalLane_Confidence_Right_0x669() CanGlobalInterruptDisable()
#define IlLeaveCriticalLane_Confidence_Right_0x669() CanGlobalInterruptRestore()
#define IlEnterCriticalLDW_Availability_Right_0x669() CanGlobalInterruptDisable()
#define IlLeaveCriticalLDW_Availability_Right_0x669() CanGlobalInterruptRestore()
#define IlEnterCriticalUndocumented2_0x669() CanGlobalInterruptDisable()
#define IlLeaveCriticalUndocumented2_0x669() CanGlobalInterruptRestore()
#define IlEnterCriticalLane_Type_Right_0x669() CanGlobalInterruptDisable()
#define IlLeaveCriticalLane_Type_Right_0x669() CanGlobalInterruptRestore()
#define IlEnterCriticalDistance_To_Right_Lane_0x669() CanGlobalInterruptDisable()
#define IlLeaveCriticalDistance_To_Right_Lane_0x669() CanGlobalInterruptRestore()
#define IlEnterCriticalFixed_Yaw_0x650()     CanGlobalInterruptDisable()
#define IlLeaveCriticalFixed_Yaw_0x650()     CanGlobalInterruptRestore()
#define IlEnterCriticalFixed_Horizon_0x650() CanGlobalInterruptDisable()
#define IlLeaveCriticalFixed_Horizon_0x650() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_AVG_PWR_CWBLKG() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_AVG_PWR_CWBLKG() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_SIDESLIP_ANGLE() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_SIDESLIP_ANGLE() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_SERIAL_NUM_3RD_BYTE() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_SERIAL_NUM_3RD_BYTE() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_FILTERED_XOHP_ACC_CIPV() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_FILTERED_XOHP_ACC_CIPV() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_WATER_SPRAY_TARGET_ID() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_WATER_SPRAY_TARGET_ID() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_PATH_ID_ACC_2() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_PATH_ID_ACC_2() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_PATH_ID_ACC_3() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_PATH_ID_ACC_3() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_HISTORY_FAULT_0() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_HISTORY_FAULT_0() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_HISTORY_FAULT_1() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_HISTORY_FAULT_1() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_HISTORY_FAULT_2() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_HISTORY_FAULT_2() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_HISTORY_FAULT_3() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_HISTORY_FAULT_3() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_HISTORY_FAULT_4() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_HISTORY_FAULT_4() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_HISTORY_FAULT_5() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_HISTORY_FAULT_5() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_HISTORY_FAULT_6() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_HISTORY_FAULT_6() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_HISTORY_FAULT_7() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_HISTORY_FAULT_7() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_ACTIVE_FAULT_0() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_ACTIVE_FAULT_0() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_ACTIVE_FAULT_1() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_ACTIVE_FAULT_1() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_ACTIVE_FAULT_2() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_ACTIVE_FAULT_2() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_ACTIVE_FAULT_3() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_ACTIVE_FAULT_3() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_ACTIVE_FAULT_4() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_ACTIVE_FAULT_4() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_ACTIVE_FAULT_5() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_ACTIVE_FAULT_5() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_ACTIVE_FAULT_6() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_ACTIVE_FAULT_6() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_ACTIVE_FAULT_7() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_ACTIVE_FAULT_7() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_SUPPLY_1P8V_A2D() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_SUPPLY_1P8V_A2D() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_SUPPLY_N5V_A2D() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_SUPPLY_N5V_A2D() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_WAVE_DIFF_A2D() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_WAVE_DIFF_A2D() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_SYSTEM_POWER_MODE() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_SYSTEM_POWER_MODE() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_VERTICAL_ALIGN_UPDATED() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_VERTICAL_ALIGN_UPDATED() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_SW_VERSION_DSP_3RD_BYTE() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_SW_VERSION_DSP_3RD_BYTE() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_FACTORY_ALIGN_STATUS_2() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_FACTORY_ALIGN_STATUS_2() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_FACTORY_ALIGN_STATUS_1() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_FACTORY_ALIGN_STATUS_1() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_RECOMMEND_UNCONVERGE() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_RECOMMEND_UNCONVERGE() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_FOUND_TARGET() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_FOUND_TARGET() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_FACTORY_MISALIGNMENT() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_FACTORY_MISALIGNMENT() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_SERV_ALIGN_UPDATES_DONE() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_SERV_ALIGN_UPDATES_DONE() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_VERTICAL_MISALIGNMENT() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_VERTICAL_MISALIGNMENT() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_SWBATT_A2D()   CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_SWBATT_A2D()   CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_IGNP_A2D()     CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_IGNP_A2D()     CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TEMP1_A2D()    CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TEMP1_A2D()    CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TEMP2_A2D()    CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TEMP2_A2D()    CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_SUPPLY_5VA_A2D() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_SUPPLY_5VA_A2D() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_SUPPLY_5VDX_A2D() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_SUPPLY_5VDX_A2D() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_SUPPLY_3P3V_A2D() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_SUPPLY_3P3V_A2D() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_SUPPLY_10V_A2D() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_SUPPLY_10V_A2D() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ONCOMING_64() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ONCOMING_64() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_GROUPING_CHANGED_64() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_GROUPING_CHANGED_64() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_LAT_RATE_64() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_LAT_RATE_64() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ANGLE_64() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ANGLE_64() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_STATUS_64() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_STATUS_64() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_64() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_64() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_64() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_64() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_WIDTH_64() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_WIDTH_64() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ROLLING_COUNT_64() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ROLLING_COUNT_64() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_BRIDGE_OBJECT_64() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_BRIDGE_OBJECT_64() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_64() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_64() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_MED_RANGE_MODE_64() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_MED_RANGE_MODE_64() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ONCOMING_63() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ONCOMING_63() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_GROUPING_CHANGED_63() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_GROUPING_CHANGED_63() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_LAT_RATE_63() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_LAT_RATE_63() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ANGLE_63() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ANGLE_63() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_STATUS_63() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_STATUS_63() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_63() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_63() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_63() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_63() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_WIDTH_63() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_WIDTH_63() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ROLLING_COUNT_63() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ROLLING_COUNT_63() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_BRIDGE_OBJECT_63() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_BRIDGE_OBJECT_63() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_63() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_63() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_MED_RANGE_MODE_63() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_MED_RANGE_MODE_63() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ONCOMING_62() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ONCOMING_62() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_GROUPING_CHANGED_62() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_GROUPING_CHANGED_62() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_LAT_RATE_62() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_LAT_RATE_62() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ANGLE_62() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ANGLE_62() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_STATUS_62() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_STATUS_62() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_62() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_62() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_62() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_62() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_WIDTH_62() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_WIDTH_62() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ROLLING_COUNT_62() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ROLLING_COUNT_62() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_BRIDGE_OBJECT_62() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_BRIDGE_OBJECT_62() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_62() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_62() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_MED_RANGE_MODE_62() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_MED_RANGE_MODE_62() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ONCOMING_61() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ONCOMING_61() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_GROUPING_CHANGED_61() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_GROUPING_CHANGED_61() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_LAT_RATE_61() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_LAT_RATE_61() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ANGLE_61() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ANGLE_61() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_STATUS_61() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_STATUS_61() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_61() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_61() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_61() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_61() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_WIDTH_61() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_WIDTH_61() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ROLLING_COUNT_61() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ROLLING_COUNT_61() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_BRIDGE_OBJECT_61() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_BRIDGE_OBJECT_61() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_61() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_61() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_MED_RANGE_MODE_61() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_MED_RANGE_MODE_61() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ONCOMING_60() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ONCOMING_60() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_GROUPING_CHANGED_60() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_GROUPING_CHANGED_60() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_LAT_RATE_60() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_LAT_RATE_60() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ANGLE_60() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ANGLE_60() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_STATUS_60() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_STATUS_60() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_60() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_60() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_60() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_60() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_WIDTH_60() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_WIDTH_60() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ROLLING_COUNT_60() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ROLLING_COUNT_60() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_BRIDGE_OBJECT_60() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_BRIDGE_OBJECT_60() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_60() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_60() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_MED_RANGE_MODE_60() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_MED_RANGE_MODE_60() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ONCOMING_59() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ONCOMING_59() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_GROUPING_CHANGED_59() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_GROUPING_CHANGED_59() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_LAT_RATE_59() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_LAT_RATE_59() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ANGLE_59() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ANGLE_59() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_STATUS_59() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_STATUS_59() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_59() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_59() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_59() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_59() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_WIDTH_59() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_WIDTH_59() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ROLLING_COUNT_59() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ROLLING_COUNT_59() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_BRIDGE_OBJECT_59() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_BRIDGE_OBJECT_59() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_59() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_59() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_MED_RANGE_MODE_59() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_MED_RANGE_MODE_59() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ONCOMING_58() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ONCOMING_58() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_GROUPING_CHANGED_58() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_GROUPING_CHANGED_58() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_LAT_RATE_58() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_LAT_RATE_58() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ANGLE_58() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ANGLE_58() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_STATUS_58() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_STATUS_58() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_58() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_58() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_58() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_58() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_WIDTH_58() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_WIDTH_58() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ROLLING_COUNT_58() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ROLLING_COUNT_58() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_BRIDGE_OBJECT_58() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_BRIDGE_OBJECT_58() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_58() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_58() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_MED_RANGE_MODE_58() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_MED_RANGE_MODE_58() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ONCOMING_57() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ONCOMING_57() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_GROUPING_CHANGED_57() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_GROUPING_CHANGED_57() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_LAT_RATE_57() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_LAT_RATE_57() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ANGLE_57() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ANGLE_57() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_STATUS_57() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_STATUS_57() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_57() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_57() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_57() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_57() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_WIDTH_57() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_WIDTH_57() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ROLLING_COUNT_57() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ROLLING_COUNT_57() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_BRIDGE_OBJECT_57() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_BRIDGE_OBJECT_57() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_57() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_57() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_MED_RANGE_MODE_57() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_MED_RANGE_MODE_57() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ONCOMING_56() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ONCOMING_56() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_GROUPING_CHANGED_56() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_GROUPING_CHANGED_56() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_LAT_RATE_56() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_LAT_RATE_56() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ANGLE_56() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ANGLE_56() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_STATUS_56() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_STATUS_56() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_56() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_56() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_56() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_56() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_WIDTH_56() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_WIDTH_56() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ROLLING_COUNT_56() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ROLLING_COUNT_56() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_BRIDGE_OBJECT_56() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_BRIDGE_OBJECT_56() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_56() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_56() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_MED_RANGE_MODE_56() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_MED_RANGE_MODE_56() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ONCOMING_55() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ONCOMING_55() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_GROUPING_CHANGED_55() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_GROUPING_CHANGED_55() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_LAT_RATE_55() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_LAT_RATE_55() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ANGLE_55() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ANGLE_55() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_STATUS_55() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_STATUS_55() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_55() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_55() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_55() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_55() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_WIDTH_55() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_WIDTH_55() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ROLLING_COUNT_55() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ROLLING_COUNT_55() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_BRIDGE_OBJECT_55() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_BRIDGE_OBJECT_55() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_55() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_55() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_MED_RANGE_MODE_55() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_MED_RANGE_MODE_55() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ONCOMING_54() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ONCOMING_54() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_GROUPING_CHANGED_54() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_GROUPING_CHANGED_54() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_LAT_RATE_54() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_LAT_RATE_54() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ANGLE_54() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ANGLE_54() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_STATUS_54() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_STATUS_54() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_54() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_54() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_54() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_54() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_WIDTH_54() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_WIDTH_54() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ROLLING_COUNT_54() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ROLLING_COUNT_54() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_BRIDGE_OBJECT_54() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_BRIDGE_OBJECT_54() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_54() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_54() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_MED_RANGE_MODE_54() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_MED_RANGE_MODE_54() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ONCOMING_53() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ONCOMING_53() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_GROUPING_CHANGED_53() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_GROUPING_CHANGED_53() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_LAT_RATE_53() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_LAT_RATE_53() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ANGLE_53() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ANGLE_53() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_STATUS_53() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_STATUS_53() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_53() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_53() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_53() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_53() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_WIDTH_53() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_WIDTH_53() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ROLLING_COUNT_53() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ROLLING_COUNT_53() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_BRIDGE_OBJECT_53() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_BRIDGE_OBJECT_53() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_53() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_53() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_MED_RANGE_MODE_53() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_MED_RANGE_MODE_53() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ONCOMING_52() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ONCOMING_52() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_GROUPING_CHANGED_52() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_GROUPING_CHANGED_52() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_LAT_RATE_52() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_LAT_RATE_52() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ANGLE_52() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ANGLE_52() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_STATUS_52() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_STATUS_52() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_52() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_52() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_52() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_52() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_WIDTH_52() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_WIDTH_52() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ROLLING_COUNT_52() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ROLLING_COUNT_52() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_BRIDGE_OBJECT_52() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_BRIDGE_OBJECT_52() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_52() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_52() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_MED_RANGE_MODE_52() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_MED_RANGE_MODE_52() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ONCOMING_51() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ONCOMING_51() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_GROUPING_CHANGED_51() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_GROUPING_CHANGED_51() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_LAT_RATE_51() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_LAT_RATE_51() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ANGLE_51() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ANGLE_51() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_STATUS_51() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_STATUS_51() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_51() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_51() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_51() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_51() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_WIDTH_51() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_WIDTH_51() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ROLLING_COUNT_51() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ROLLING_COUNT_51() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_BRIDGE_OBJECT_51() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_BRIDGE_OBJECT_51() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_51() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_51() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_MED_RANGE_MODE_51() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_MED_RANGE_MODE_51() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ONCOMING_50() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ONCOMING_50() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_GROUPING_CHANGED_50() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_GROUPING_CHANGED_50() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_LAT_RATE_50() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_LAT_RATE_50() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ANGLE_50() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ANGLE_50() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_STATUS_50() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_STATUS_50() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_50() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_50() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_50() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_50() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_WIDTH_50() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_WIDTH_50() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ROLLING_COUNT_50() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ROLLING_COUNT_50() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_BRIDGE_OBJECT_50() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_BRIDGE_OBJECT_50() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_50() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_50() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_MED_RANGE_MODE_50() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_MED_RANGE_MODE_50() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ONCOMING_49() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ONCOMING_49() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_GROUPING_CHANGED_49() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_GROUPING_CHANGED_49() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_LAT_RATE_49() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_LAT_RATE_49() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ANGLE_49() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ANGLE_49() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_STATUS_49() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_STATUS_49() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_49() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_49() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_49() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_49() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_WIDTH_49() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_WIDTH_49() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ROLLING_COUNT_49() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ROLLING_COUNT_49() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_BRIDGE_OBJECT_49() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_BRIDGE_OBJECT_49() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_49() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_49() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_MED_RANGE_MODE_49() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_MED_RANGE_MODE_49() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ONCOMING_48() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ONCOMING_48() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_GROUPING_CHANGED_48() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_GROUPING_CHANGED_48() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_LAT_RATE_48() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_LAT_RATE_48() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ANGLE_48() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ANGLE_48() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_STATUS_48() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_STATUS_48() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_48() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_48() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_48() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_48() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_WIDTH_48() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_WIDTH_48() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ROLLING_COUNT_48() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ROLLING_COUNT_48() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_BRIDGE_OBJECT_48() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_BRIDGE_OBJECT_48() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_48() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_48() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_MED_RANGE_MODE_48() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_MED_RANGE_MODE_48() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ONCOMING_47() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ONCOMING_47() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_GROUPING_CHANGED_47() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_GROUPING_CHANGED_47() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_LAT_RATE_47() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_LAT_RATE_47() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ANGLE_47() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ANGLE_47() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_STATUS_47() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_STATUS_47() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_47() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_47() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_47() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_47() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_WIDTH_47() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_WIDTH_47() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ROLLING_COUNT_47() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ROLLING_COUNT_47() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_BRIDGE_OBJECT_47() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_BRIDGE_OBJECT_47() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_47() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_47() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_MED_RANGE_MODE_47() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_MED_RANGE_MODE_47() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ONCOMING_46() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ONCOMING_46() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_GROUPING_CHANGED_46() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_GROUPING_CHANGED_46() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_LAT_RATE_46() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_LAT_RATE_46() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ANGLE_46() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ANGLE_46() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_STATUS_46() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_STATUS_46() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_46() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_46() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_46() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_46() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_WIDTH_46() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_WIDTH_46() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ROLLING_COUNT_46() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ROLLING_COUNT_46() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_BRIDGE_OBJECT_46() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_BRIDGE_OBJECT_46() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_46() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_46() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_MED_RANGE_MODE_46() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_MED_RANGE_MODE_46() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ONCOMING_45() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ONCOMING_45() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_GROUPING_CHANGED_45() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_GROUPING_CHANGED_45() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_LAT_RATE_45() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_LAT_RATE_45() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ANGLE_45() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ANGLE_45() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_STATUS_45() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_STATUS_45() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_45() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_45() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_45() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_45() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_WIDTH_45() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_WIDTH_45() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ROLLING_COUNT_45() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ROLLING_COUNT_45() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_BRIDGE_OBJECT_45() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_BRIDGE_OBJECT_45() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_45() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_45() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_MED_RANGE_MODE_45() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_MED_RANGE_MODE_45() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ONCOMING_44() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ONCOMING_44() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_GROUPING_CHANGED_44() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_GROUPING_CHANGED_44() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_LAT_RATE_44() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_LAT_RATE_44() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ANGLE_44() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ANGLE_44() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_STATUS_44() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_STATUS_44() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_44() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_44() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_44() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_44() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_WIDTH_44() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_WIDTH_44() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ROLLING_COUNT_44() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ROLLING_COUNT_44() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_BRIDGE_OBJECT_44() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_BRIDGE_OBJECT_44() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_44() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_44() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_MED_RANGE_MODE_44() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_MED_RANGE_MODE_44() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ONCOMING_43() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ONCOMING_43() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_GROUPING_CHANGED_43() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_GROUPING_CHANGED_43() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_LAT_RATE_43() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_LAT_RATE_43() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ANGLE_43() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ANGLE_43() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_STATUS_43() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_STATUS_43() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_43() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_43() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_43() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_43() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_WIDTH_43() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_WIDTH_43() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ROLLING_COUNT_43() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ROLLING_COUNT_43() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_BRIDGE_OBJECT_43() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_BRIDGE_OBJECT_43() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_43() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_43() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_MED_RANGE_MODE_43() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_MED_RANGE_MODE_43() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ONCOMING_42() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ONCOMING_42() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_GROUPING_CHANGED_42() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_GROUPING_CHANGED_42() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_LAT_RATE_42() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_LAT_RATE_42() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ANGLE_42() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ANGLE_42() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_STATUS_42() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_STATUS_42() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_42() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_42() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_42() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_42() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_WIDTH_42() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_WIDTH_42() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ROLLING_COUNT_42() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ROLLING_COUNT_42() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_BRIDGE_OBJECT_42() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_BRIDGE_OBJECT_42() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_42() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_42() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_MED_RANGE_MODE_42() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_MED_RANGE_MODE_42() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ONCOMING_41() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ONCOMING_41() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_GROUPING_CHANGED_41() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_GROUPING_CHANGED_41() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_LAT_RATE_41() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_LAT_RATE_41() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ANGLE_41() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ANGLE_41() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_STATUS_41() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_STATUS_41() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_41() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_41() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_41() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_41() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_WIDTH_41() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_WIDTH_41() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ROLLING_COUNT_41() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ROLLING_COUNT_41() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_BRIDGE_OBJECT_41() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_BRIDGE_OBJECT_41() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_41() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_41() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_MED_RANGE_MODE_41() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_MED_RANGE_MODE_41() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ONCOMING_40() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ONCOMING_40() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_GROUPING_CHANGED_40() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_GROUPING_CHANGED_40() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_LAT_RATE_40() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_LAT_RATE_40() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ANGLE_40() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ANGLE_40() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_STATUS_40() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_STATUS_40() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_40() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_40() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_40() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_40() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_WIDTH_40() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_WIDTH_40() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ROLLING_COUNT_40() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ROLLING_COUNT_40() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_BRIDGE_OBJECT_40() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_BRIDGE_OBJECT_40() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_40() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_40() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_MED_RANGE_MODE_40() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_MED_RANGE_MODE_40() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ONCOMING_39() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ONCOMING_39() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_GROUPING_CHANGED_39() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_GROUPING_CHANGED_39() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_LAT_RATE_39() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_LAT_RATE_39() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ANGLE_39() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ANGLE_39() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_STATUS_39() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_STATUS_39() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_39() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_39() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_39() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_39() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_WIDTH_39() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_WIDTH_39() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ROLLING_COUNT_39() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ROLLING_COUNT_39() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_BRIDGE_OBJECT_39() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_BRIDGE_OBJECT_39() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_39() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_39() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_MED_RANGE_MODE_39() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_MED_RANGE_MODE_39() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ONCOMING_38() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ONCOMING_38() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_GROUPING_CHANGED_38() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_GROUPING_CHANGED_38() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_LAT_RATE_38() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_LAT_RATE_38() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ANGLE_38() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ANGLE_38() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_STATUS_38() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_STATUS_38() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_38() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_38() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_38() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_38() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_WIDTH_38() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_WIDTH_38() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ROLLING_COUNT_38() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ROLLING_COUNT_38() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_BRIDGE_OBJECT_38() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_BRIDGE_OBJECT_38() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_38() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_38() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_MED_RANGE_MODE_38() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_MED_RANGE_MODE_38() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ONCOMING_37() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ONCOMING_37() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_GROUPING_CHANGED_37() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_GROUPING_CHANGED_37() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_LAT_RATE_37() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_LAT_RATE_37() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ANGLE_37() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ANGLE_37() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_STATUS_37() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_STATUS_37() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_37() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_37() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_37() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_37() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_WIDTH_37() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_WIDTH_37() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ROLLING_COUNT_37() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ROLLING_COUNT_37() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_BRIDGE_OBJECT_37() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_BRIDGE_OBJECT_37() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_37() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_37() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_MED_RANGE_MODE_37() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_MED_RANGE_MODE_37() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ONCOMING_36() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ONCOMING_36() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_GROUPING_CHANGED_36() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_GROUPING_CHANGED_36() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_LAT_RATE_36() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_LAT_RATE_36() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ANGLE_36() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ANGLE_36() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_STATUS_36() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_STATUS_36() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_36() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_36() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_36() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_36() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_WIDTH_36() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_WIDTH_36() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ROLLING_COUNT_36() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ROLLING_COUNT_36() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_BRIDGE_OBJECT_36() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_BRIDGE_OBJECT_36() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_36() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_36() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_MED_RANGE_MODE_36() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_MED_RANGE_MODE_36() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ONCOMING_35() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ONCOMING_35() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_GROUPING_CHANGED_35() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_GROUPING_CHANGED_35() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_LAT_RATE_35() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_LAT_RATE_35() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ANGLE_35() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ANGLE_35() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_STATUS_35() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_STATUS_35() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_35() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_35() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_35() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_35() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_WIDTH_35() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_WIDTH_35() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ROLLING_COUNT_35() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ROLLING_COUNT_35() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_BRIDGE_OBJECT_35() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_BRIDGE_OBJECT_35() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_35() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_35() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_MED_RANGE_MODE_35() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_MED_RANGE_MODE_35() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ONCOMING_34() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ONCOMING_34() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_GROUPING_CHANGED_34() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_GROUPING_CHANGED_34() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_LAT_RATE_34() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_LAT_RATE_34() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ANGLE_34() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ANGLE_34() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_STATUS_34() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_STATUS_34() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_34() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_34() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_34() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_34() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_WIDTH_34() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_WIDTH_34() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ROLLING_COUNT_34() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ROLLING_COUNT_34() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_BRIDGE_OBJECT_34() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_BRIDGE_OBJECT_34() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_34() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_34() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_MED_RANGE_MODE_34() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_MED_RANGE_MODE_34() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ONCOMING_33() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ONCOMING_33() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_GROUPING_CHANGED_33() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_GROUPING_CHANGED_33() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_LAT_RATE_33() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_LAT_RATE_33() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ANGLE_33() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ANGLE_33() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_STATUS_33() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_STATUS_33() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_33() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_33() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_33() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_33() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_WIDTH_33() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_WIDTH_33() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ROLLING_COUNT_33() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ROLLING_COUNT_33() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_BRIDGE_OBJECT_33() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_BRIDGE_OBJECT_33() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_33() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_33() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_MED_RANGE_MODE_33() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_MED_RANGE_MODE_33() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ONCOMING_32() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ONCOMING_32() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_GROUPING_CHANGED_32() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_GROUPING_CHANGED_32() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_LAT_RATE_32() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_LAT_RATE_32() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ANGLE_32() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ANGLE_32() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_STATUS_32() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_STATUS_32() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_32() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_32() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_32() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_32() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_WIDTH_32() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_WIDTH_32() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ROLLING_COUNT_32() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ROLLING_COUNT_32() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_BRIDGE_OBJECT_32() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_BRIDGE_OBJECT_32() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_32() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_32() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_MED_RANGE_MODE_32() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_MED_RANGE_MODE_32() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ONCOMING_31() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ONCOMING_31() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_GROUPING_CHANGED_31() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_GROUPING_CHANGED_31() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_LAT_RATE_31() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_LAT_RATE_31() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ANGLE_31() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ANGLE_31() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_STATUS_31() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_STATUS_31() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_31() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_31() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_31() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_31() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_WIDTH_31() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_WIDTH_31() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ROLLING_COUNT_31() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ROLLING_COUNT_31() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_BRIDGE_OBJECT_31() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_BRIDGE_OBJECT_31() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_31() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_31() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_MED_RANGE_MODE_31() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_MED_RANGE_MODE_31() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ONCOMING_30() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ONCOMING_30() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_GROUPING_CHANGED_30() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_GROUPING_CHANGED_30() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_LAT_RATE_30() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_LAT_RATE_30() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ANGLE_30() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ANGLE_30() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_STATUS_30() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_STATUS_30() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_30() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_30() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_30() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_30() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_WIDTH_30() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_WIDTH_30() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ROLLING_COUNT_30() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ROLLING_COUNT_30() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_BRIDGE_OBJECT_30() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_BRIDGE_OBJECT_30() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_30() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_30() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_MED_RANGE_MODE_30() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_MED_RANGE_MODE_30() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ONCOMING_29() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ONCOMING_29() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_GROUPING_CHANGED_29() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_GROUPING_CHANGED_29() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_LAT_RATE_29() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_LAT_RATE_29() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ANGLE_29() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ANGLE_29() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_STATUS_29() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_STATUS_29() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_29() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_29() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_29() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_29() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_WIDTH_29() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_WIDTH_29() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ROLLING_COUNT_29() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ROLLING_COUNT_29() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_BRIDGE_OBJECT_29() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_BRIDGE_OBJECT_29() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_29() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_29() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_MED_RANGE_MODE_29() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_MED_RANGE_MODE_29() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ONCOMING_28() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ONCOMING_28() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_GROUPING_CHANGED_28() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_GROUPING_CHANGED_28() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_LAT_RATE_28() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_LAT_RATE_28() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ANGLE_28() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ANGLE_28() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_STATUS_28() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_STATUS_28() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_28() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_28() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_28() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_28() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_WIDTH_28() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_WIDTH_28() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ROLLING_COUNT_28() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ROLLING_COUNT_28() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_BRIDGE_OBJECT_28() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_BRIDGE_OBJECT_28() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_28() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_28() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_MED_RANGE_MODE_28() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_MED_RANGE_MODE_28() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ONCOMING_27() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ONCOMING_27() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_GROUPING_CHANGED_27() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_GROUPING_CHANGED_27() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_LAT_RATE_27() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_LAT_RATE_27() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ANGLE_27() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ANGLE_27() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_STATUS_27() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_STATUS_27() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_27() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_27() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_27() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_27() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_WIDTH_27() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_WIDTH_27() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ROLLING_COUNT_27() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ROLLING_COUNT_27() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_BRIDGE_OBJECT_27() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_BRIDGE_OBJECT_27() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_27() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_27() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_MED_RANGE_MODE_27() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_MED_RANGE_MODE_27() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ONCOMING_26() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ONCOMING_26() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_GROUPING_CHANGED_26() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_GROUPING_CHANGED_26() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_LAT_RATE_26() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_LAT_RATE_26() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ANGLE_26() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ANGLE_26() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_STATUS_26() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_STATUS_26() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_26() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_26() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_26() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_26() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_WIDTH_26() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_WIDTH_26() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ROLLING_COUNT_26() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ROLLING_COUNT_26() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_BRIDGE_OBJECT_26() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_BRIDGE_OBJECT_26() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_26() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_26() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_MED_RANGE_MODE_26() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_MED_RANGE_MODE_26() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ONCOMING_25() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ONCOMING_25() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_GROUPING_CHANGED_25() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_GROUPING_CHANGED_25() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_LAT_RATE_25() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_LAT_RATE_25() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ANGLE_25() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ANGLE_25() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_STATUS_25() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_STATUS_25() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_25() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_25() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_25() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_25() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_WIDTH_25() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_WIDTH_25() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ROLLING_COUNT_25() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ROLLING_COUNT_25() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_BRIDGE_OBJECT_25() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_BRIDGE_OBJECT_25() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_25() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_25() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_MED_RANGE_MODE_25() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_MED_RANGE_MODE_25() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ONCOMING_24() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ONCOMING_24() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_GROUPING_CHANGED_24() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_GROUPING_CHANGED_24() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_LAT_RATE_24() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_LAT_RATE_24() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ANGLE_24() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ANGLE_24() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_STATUS_24() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_STATUS_24() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_24() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_24() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_24() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_24() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_WIDTH_24() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_WIDTH_24() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ROLLING_COUNT_24() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ROLLING_COUNT_24() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_BRIDGE_OBJECT_24() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_BRIDGE_OBJECT_24() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_24() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_24() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_MED_RANGE_MODE_24() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_MED_RANGE_MODE_24() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ONCOMING_23() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ONCOMING_23() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_GROUPING_CHANGED_23() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_GROUPING_CHANGED_23() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_LAT_RATE_23() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_LAT_RATE_23() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ANGLE_23() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ANGLE_23() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_STATUS_23() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_STATUS_23() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_23() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_23() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_23() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_23() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_WIDTH_23() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_WIDTH_23() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ROLLING_COUNT_23() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ROLLING_COUNT_23() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_BRIDGE_OBJECT_23() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_BRIDGE_OBJECT_23() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_23() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_23() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_MED_RANGE_MODE_23() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_MED_RANGE_MODE_23() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ONCOMING_22() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ONCOMING_22() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_GROUPING_CHANGED_22() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_GROUPING_CHANGED_22() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_LAT_RATE_22() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_LAT_RATE_22() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ANGLE_22() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ANGLE_22() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_STATUS_22() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_STATUS_22() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_22() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_22() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_22() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_22() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_WIDTH_22() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_WIDTH_22() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ROLLING_COUNT_22() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ROLLING_COUNT_22() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_BRIDGE_OBJECT_22() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_BRIDGE_OBJECT_22() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_22() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_22() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_MED_RANGE_MODE_22() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_MED_RANGE_MODE_22() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ONCOMING_21() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ONCOMING_21() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_GROUPING_CHANGED_21() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_GROUPING_CHANGED_21() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_LAT_RATE_21() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_LAT_RATE_21() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ANGLE_21() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ANGLE_21() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_STATUS_21() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_STATUS_21() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_21() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_21() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_21() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_21() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_WIDTH_21() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_WIDTH_21() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ROLLING_COUNT_21() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ROLLING_COUNT_21() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_BRIDGE_OBJECT_21() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_BRIDGE_OBJECT_21() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_21() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_21() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_MED_RANGE_MODE_21() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_MED_RANGE_MODE_21() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ONCOMING_20() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ONCOMING_20() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_GROUPING_CHANGED_20() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_GROUPING_CHANGED_20() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_LAT_RATE_20() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_LAT_RATE_20() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ANGLE_20() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ANGLE_20() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_STATUS_20() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_STATUS_20() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_20() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_20() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_20() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_20() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_WIDTH_20() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_WIDTH_20() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ROLLING_COUNT_20() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ROLLING_COUNT_20() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_BRIDGE_OBJECT_20() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_BRIDGE_OBJECT_20() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_20() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_20() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_MED_RANGE_MODE_20() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_MED_RANGE_MODE_20() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ONCOMING_19() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ONCOMING_19() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_GROUPING_CHANGED_19() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_GROUPING_CHANGED_19() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_LAT_RATE_19() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_LAT_RATE_19() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ANGLE_19() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ANGLE_19() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_STATUS_19() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_STATUS_19() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_19() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_19() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_19() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_19() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_WIDTH_19() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_WIDTH_19() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ROLLING_COUNT_19() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ROLLING_COUNT_19() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_BRIDGE_OBJECT_19() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_BRIDGE_OBJECT_19() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_19() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_19() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_MED_RANGE_MODE_19() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_MED_RANGE_MODE_19() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ONCOMING_18() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ONCOMING_18() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_GROUPING_CHANGED_18() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_GROUPING_CHANGED_18() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_LAT_RATE_18() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_LAT_RATE_18() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ANGLE_18() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ANGLE_18() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_STATUS_18() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_STATUS_18() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_18() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_18() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_18() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_18() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_WIDTH_18() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_WIDTH_18() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ROLLING_COUNT_18() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ROLLING_COUNT_18() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_BRIDGE_OBJECT_18() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_BRIDGE_OBJECT_18() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_18() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_18() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_MED_RANGE_MODE_18() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_MED_RANGE_MODE_18() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ONCOMING_17() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ONCOMING_17() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_GROUPING_CHANGED_17() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_GROUPING_CHANGED_17() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_LAT_RATE_17() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_LAT_RATE_17() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ANGLE_17() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ANGLE_17() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_STATUS_17() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_STATUS_17() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_17() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_17() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_17() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_17() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_WIDTH_17() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_WIDTH_17() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ROLLING_COUNT_17() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ROLLING_COUNT_17() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_BRIDGE_OBJECT_17() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_BRIDGE_OBJECT_17() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_17() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_17() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_MED_RANGE_MODE_17() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_MED_RANGE_MODE_17() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ONCOMING_16() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ONCOMING_16() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_GROUPING_CHANGED_16() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_GROUPING_CHANGED_16() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_LAT_RATE_16() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_LAT_RATE_16() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ANGLE_16() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ANGLE_16() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_STATUS_16() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_STATUS_16() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_16() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_16() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_16() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_16() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_WIDTH_16() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_WIDTH_16() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ROLLING_COUNT_16() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ROLLING_COUNT_16() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_BRIDGE_OBJECT_16() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_BRIDGE_OBJECT_16() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_16() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_16() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_MED_RANGE_MODE_16() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_MED_RANGE_MODE_16() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ONCOMING_15() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ONCOMING_15() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_GROUPING_CHANGED_15() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_GROUPING_CHANGED_15() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_LAT_RATE_15() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_LAT_RATE_15() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ANGLE_15() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ANGLE_15() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_STATUS_15() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_STATUS_15() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_15() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_15() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_15() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_15() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_WIDTH_15() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_WIDTH_15() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ROLLING_COUNT_15() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ROLLING_COUNT_15() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_BRIDGE_OBJECT_15() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_BRIDGE_OBJECT_15() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_15() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_15() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_MED_RANGE_MODE_15() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_MED_RANGE_MODE_15() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ONCOMING_14() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ONCOMING_14() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_GROUPING_CHANGED_14() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_GROUPING_CHANGED_14() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_LAT_RATE_14() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_LAT_RATE_14() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ANGLE_14() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ANGLE_14() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_STATUS_14() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_STATUS_14() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_14() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_14() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_14() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_14() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_WIDTH_14() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_WIDTH_14() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ROLLING_COUNT_14() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ROLLING_COUNT_14() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_BRIDGE_OBJECT_14() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_BRIDGE_OBJECT_14() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_14() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_14() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_MED_RANGE_MODE_14() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_MED_RANGE_MODE_14() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ONCOMING_13() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ONCOMING_13() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_GROUPING_CHANGED_13() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_GROUPING_CHANGED_13() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_LAT_RATE_13() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_LAT_RATE_13() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ANGLE_13() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ANGLE_13() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_STATUS_13() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_STATUS_13() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_13() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_13() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_13() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_13() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_WIDTH_13() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_WIDTH_13() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ROLLING_COUNT_13() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ROLLING_COUNT_13() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_BRIDGE_OBJECT_13() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_BRIDGE_OBJECT_13() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_13() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_13() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_MED_RANGE_MODE_13() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_MED_RANGE_MODE_13() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ONCOMING_12() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ONCOMING_12() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_GROUPING_CHANGED_12() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_GROUPING_CHANGED_12() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_LAT_RATE_12() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_LAT_RATE_12() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ANGLE_12() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ANGLE_12() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_STATUS_12() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_STATUS_12() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_12() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_12() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_12() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_12() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_WIDTH_12() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_WIDTH_12() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ROLLING_COUNT_12() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ROLLING_COUNT_12() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_BRIDGE_OBJECT_12() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_BRIDGE_OBJECT_12() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_12() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_12() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_MED_RANGE_MODE_12() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_MED_RANGE_MODE_12() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ONCOMING_11() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ONCOMING_11() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_GROUPING_CHANGED_11() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_GROUPING_CHANGED_11() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_LAT_RATE_11() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_LAT_RATE_11() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ANGLE_11() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ANGLE_11() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_STATUS_11() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_STATUS_11() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_11() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_11() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_11() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_11() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_WIDTH_11() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_WIDTH_11() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ROLLING_COUNT_11() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ROLLING_COUNT_11() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_BRIDGE_OBJECT_11() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_BRIDGE_OBJECT_11() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_11() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_11() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_MED_RANGE_MODE_11() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_MED_RANGE_MODE_11() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ONCOMING_10() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ONCOMING_10() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_GROUPING_CHANGED_10() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_GROUPING_CHANGED_10() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_LAT_RATE_10() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_LAT_RATE_10() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ANGLE_10() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ANGLE_10() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_STATUS_10() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_STATUS_10() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_10() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_10() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_10() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_10() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_WIDTH_10() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_WIDTH_10() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ROLLING_COUNT_10() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ROLLING_COUNT_10() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_BRIDGE_OBJECT_10() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_BRIDGE_OBJECT_10() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_10() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_10() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_MED_RANGE_MODE_10() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_MED_RANGE_MODE_10() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ONCOMING_09() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ONCOMING_09() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_GROUPING_CHANGED_09() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_GROUPING_CHANGED_09() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_LAT_RATE_09() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_LAT_RATE_09() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ANGLE_09() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ANGLE_09() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_STATUS_09() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_STATUS_09() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_09() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_09() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_09() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_09() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_WIDTH_09() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_WIDTH_09() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ROLLING_COUNT_09() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ROLLING_COUNT_09() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_BRIDGE_OBJECT_09() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_BRIDGE_OBJECT_09() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_09() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_09() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_MED_RANGE_MODE_09() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_MED_RANGE_MODE_09() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ONCOMING_08() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ONCOMING_08() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_GROUPING_CHANGED_08() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_GROUPING_CHANGED_08() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_LAT_RATE_08() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_LAT_RATE_08() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ANGLE_08() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ANGLE_08() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_STATUS_08() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_STATUS_08() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_08() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_08() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_08() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_08() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_WIDTH_08() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_WIDTH_08() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ROLLING_COUNT_08() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ROLLING_COUNT_08() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_BRIDGE_OBJECT_08() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_BRIDGE_OBJECT_08() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_08() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_08() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_MED_RANGE_MODE_08() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_MED_RANGE_MODE_08() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ONCOMING_07() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ONCOMING_07() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_GROUPING_CHANGED_07() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_GROUPING_CHANGED_07() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_LAT_RATE_07() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_LAT_RATE_07() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ANGLE_07() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ANGLE_07() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_STATUS_07() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_STATUS_07() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_07() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_07() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_07() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_07() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_WIDTH_07() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_WIDTH_07() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ROLLING_COUNT_07() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ROLLING_COUNT_07() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_BRIDGE_OBJECT_07() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_BRIDGE_OBJECT_07() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_07() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_07() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_MED_RANGE_MODE_07() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_MED_RANGE_MODE_07() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ONCOMING_06() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ONCOMING_06() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_GROUPING_CHANGED_06() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_GROUPING_CHANGED_06() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_LAT_RATE_06() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_LAT_RATE_06() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ANGLE_06() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ANGLE_06() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_STATUS_06() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_STATUS_06() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_06() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_06() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_06() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_06() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_WIDTH_06() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_WIDTH_06() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ROLLING_COUNT_06() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ROLLING_COUNT_06() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_BRIDGE_OBJECT_06() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_BRIDGE_OBJECT_06() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_06() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_06() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_MED_RANGE_MODE_06() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_MED_RANGE_MODE_06() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ONCOMING_05() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ONCOMING_05() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_GROUPING_CHANGED_05() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_GROUPING_CHANGED_05() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_LAT_RATE_05() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_LAT_RATE_05() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ANGLE_05() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ANGLE_05() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_STATUS_05() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_STATUS_05() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_05() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_05() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_05() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_05() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_WIDTH_05() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_WIDTH_05() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ROLLING_COUNT_05() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ROLLING_COUNT_05() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_BRIDGE_OBJECT_05() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_BRIDGE_OBJECT_05() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_05() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_05() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_MED_RANGE_MODE_05() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_MED_RANGE_MODE_05() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ONCOMING_04() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ONCOMING_04() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_GROUPING_CHANGED_04() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_GROUPING_CHANGED_04() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_LAT_RATE_04() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_LAT_RATE_04() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ANGLE_04() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ANGLE_04() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_STATUS_04() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_STATUS_04() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_04() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_04() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_04() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_04() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_WIDTH_04() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_WIDTH_04() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ROLLING_COUNT_04() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ROLLING_COUNT_04() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_BRIDGE_OBJECT_04() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_BRIDGE_OBJECT_04() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_04() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_04() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_MED_RANGE_MODE_04() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_MED_RANGE_MODE_04() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ONCOMING_03() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ONCOMING_03() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_GROUPING_CHANGED_03() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_GROUPING_CHANGED_03() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_LAT_RATE_03() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_LAT_RATE_03() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ANGLE_03() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ANGLE_03() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_STATUS_03() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_STATUS_03() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_03() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_03() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_03() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_03() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_WIDTH_03() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_WIDTH_03() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ROLLING_COUNT_03() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ROLLING_COUNT_03() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_BRIDGE_OBJECT_03() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_BRIDGE_OBJECT_03() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_03() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_03() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_MED_RANGE_MODE_03() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_MED_RANGE_MODE_03() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ONCOMING_02() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ONCOMING_02() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_GROUPING_CHANGED_02() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_GROUPING_CHANGED_02() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_LAT_RATE_02() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_LAT_RATE_02() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ANGLE_02() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ANGLE_02() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_STATUS_02() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_STATUS_02() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_02() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_02() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_02() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_02() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_WIDTH_02() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_WIDTH_02() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ROLLING_COUNT_02() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ROLLING_COUNT_02() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_BRIDGE_OBJECT_02() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_BRIDGE_OBJECT_02() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_02() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_02() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_MED_RANGE_MODE_02() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_MED_RANGE_MODE_02() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ONCOMING_01() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ONCOMING_01() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_GROUPING_CHANGED_01() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_GROUPING_CHANGED_01() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_LAT_RATE_01() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_LAT_RATE_01() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ANGLE_01() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ANGLE_01() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_STATUS_01() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_STATUS_01() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_01() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_01() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_01() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_01() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_WIDTH_01() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_WIDTH_01() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_ROLLING_COUNT_01() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_ROLLING_COUNT_01() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_BRIDGE_OBJECT_01() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_BRIDGE_OBJECT_01() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_01() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_01() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRACK_MED_RANGE_MODE_01() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRACK_MED_RANGE_MODE_01() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_ROLLING_COUNT_3() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_ROLLING_COUNT_3() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_MR_LR_MODE()   CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_MR_LR_MODE()   CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_PARTIAL_BLOCKAGE() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_PARTIAL_BLOCKAGE() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_SIDELOBE_BLOCKAGE() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_SIDELOBE_BLOCKAGE() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_LR_ONLY_GRATING_LOBE_DET() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_LR_ONLY_GRATING_LOBE_DET() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TRUCK_TARGET_DET() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TRUCK_TARGET_DET() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_PATH_ID_ACC()  CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_PATH_ID_ACC()  CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_PATH_ID_CMBB_MOVE() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_PATH_ID_CMBB_MOVE() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_PATH_ID_CMBB_STAT() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_PATH_ID_CMBB_STAT() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_PATH_ID_FCW_MOVE() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_PATH_ID_FCW_MOVE() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_PATH_ID_FCW_STAT() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_PATH_ID_FCW_STAT() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_AUTO_ALIGN_ANGLE() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_AUTO_ALIGN_ANGLE() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_PATH_ID_ACC_STAT() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_PATH_ID_ACC_STAT() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_HW_VERSION()   CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_HW_VERSION()   CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_INTERFACE_VERSION() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_INTERFACE_VERSION() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_SW_VERSION_HOST() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_SW_VERSION_HOST() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_SERIAL_NUM()   CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_SERIAL_NUM()   CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_SW_VERSION_PLD() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_SW_VERSION_PLD() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_ROLLING_COUNT_2() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_ROLLING_COUNT_2() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_MAXIMUM_TRACKS_ACK() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_MAXIMUM_TRACKS_ACK() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_STEERING_ANGLE_ACK() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_STEERING_ANGLE_ACK() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_RAW_DATA_MODE() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_RAW_DATA_MODE() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_XCVR_OPERATIONAL() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_XCVR_OPERATIONAL() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_INTERNAL_ERROR() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_INTERNAL_ERROR() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_RANGE_PERF_ERROR() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_RANGE_PERF_ERROR() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_OVERHEAT_ERROR() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_OVERHEAT_ERROR() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_TEMPERATURE()  CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_TEMPERATURE()  CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_GROUPING_MODE() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_GROUPING_MODE() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_VEH_SPD_COMP_FACTOR() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_VEH_SPD_COMP_FACTOR() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_YAW_RATE_BIAS() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_YAW_RATE_BIAS() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_SW_VERSION_DSP() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_SW_VERSION_DSP() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_DSP_TIMESTAMP() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_DSP_TIMESTAMP() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_ROLLING_COUNT_1() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_ROLLING_COUNT_1() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_RADIUS_CURVATURE_CALC() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_RADIUS_CURVATURE_CALC() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_COMM_ERROR()   CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_COMM_ERROR()   CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_SCAN_INDEX()   CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_SCAN_INDEX()   CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_YAW_RATE_CALC() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_YAW_RATE_CALC() CanGlobalInterruptRestore()
#define IlEnterCriticalCAN_TX_VEHICLE_SPEED_CALC() CanGlobalInterruptDisable()
#define IlLeaveCriticalCAN_TX_VEHICLE_SPEED_CALC() CanGlobalInterruptRestore()


/* -----------------------------------------------------------------------------
    &&&~ Declaration Confirmation Functions
 ----------------------------------------------------------------------------- */

/* Application signal confirmation callback functions */


/* -----------------------------------------------------------------------------
    &&&~ Declaration Indication Functions
 ----------------------------------------------------------------------------- */

/* Application signal indication callback functions */


/* -----------------------------------------------------------------------------
    &&&~ Declaration User Timeout Functions
 ----------------------------------------------------------------------------- */

#if defined(IL_ENABLE_TX) && defined(IL_ENABLE_TX_TIMEOUT)
#endif



/* -----------------------------------------------------------------------------
    &&&~ Get Rx Signal Access for signals smaller or equal 8bit
 ----------------------------------------------------------------------------- */

/* Handle:    2,Name:     CAN_TX_SERIAL_NUM_3RD_BYTE,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_SERIAL_NUM_3RD_BYTE()  (ESR_Status9.ESR_Status9.CAN_TX_SERIAL_NUM_3RD_BYTE)
#endif

/* Handle:    4,Name:   CAN_TX_WATER_SPRAY_TARGET_ID,Size:  7,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_WATER_SPRAY_TARGET_ID() (ESR_Status9.ESR_Status9.CAN_TX_WATER_SPRAY_TARGET_ID)
#endif

/* Handle:    5,Name:           CAN_TX_PATH_ID_ACC_2,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_PATH_ID_ACC_2()        (ESR_Status9.ESR_Status9.CAN_TX_PATH_ID_ACC_2)
#endif

/* Handle:    6,Name:           CAN_TX_PATH_ID_ACC_3,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_PATH_ID_ACC_3()        (ESR_Status9.ESR_Status9.CAN_TX_PATH_ID_ACC_3)
#endif

/* Handle:    7,Name:         CAN_TX_HISTORY_FAULT_0,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_HISTORY_FAULT_0()      (ESR_Status8.ESR_Status8.CAN_TX_HISTORY_FAULT_0)
#endif

/* Handle:    8,Name:         CAN_TX_HISTORY_FAULT_1,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_HISTORY_FAULT_1()      (ESR_Status8.ESR_Status8.CAN_TX_HISTORY_FAULT_1)
#endif

/* Handle:    9,Name:         CAN_TX_HISTORY_FAULT_2,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_HISTORY_FAULT_2()      (ESR_Status8.ESR_Status8.CAN_TX_HISTORY_FAULT_2)
#endif

/* Handle:   10,Name:         CAN_TX_HISTORY_FAULT_3,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_HISTORY_FAULT_3()      (ESR_Status8.ESR_Status8.CAN_TX_HISTORY_FAULT_3)
#endif

/* Handle:   11,Name:         CAN_TX_HISTORY_FAULT_4,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_HISTORY_FAULT_4()      (ESR_Status8.ESR_Status8.CAN_TX_HISTORY_FAULT_4)
#endif

/* Handle:   12,Name:         CAN_TX_HISTORY_FAULT_5,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_HISTORY_FAULT_5()      (ESR_Status8.ESR_Status8.CAN_TX_HISTORY_FAULT_5)
#endif

/* Handle:   13,Name:         CAN_TX_HISTORY_FAULT_6,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_HISTORY_FAULT_6()      (ESR_Status8.ESR_Status8.CAN_TX_HISTORY_FAULT_6)
#endif

/* Handle:   14,Name:         CAN_TX_HISTORY_FAULT_7,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_HISTORY_FAULT_7()      (ESR_Status8.ESR_Status8.CAN_TX_HISTORY_FAULT_7)
#endif

/* Handle:   15,Name:          CAN_TX_ACTIVE_FAULT_0,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_ACTIVE_FAULT_0()       (ESR_Status7.ESR_Status7.CAN_TX_ACTIVE_FAULT_0)
#endif

/* Handle:   16,Name:          CAN_TX_ACTIVE_FAULT_1,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_ACTIVE_FAULT_1()       (ESR_Status7.ESR_Status7.CAN_TX_ACTIVE_FAULT_1)
#endif

/* Handle:   17,Name:          CAN_TX_ACTIVE_FAULT_2,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_ACTIVE_FAULT_2()       (ESR_Status7.ESR_Status7.CAN_TX_ACTIVE_FAULT_2)
#endif

/* Handle:   18,Name:          CAN_TX_ACTIVE_FAULT_3,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_ACTIVE_FAULT_3()       (ESR_Status7.ESR_Status7.CAN_TX_ACTIVE_FAULT_3)
#endif

/* Handle:   19,Name:          CAN_TX_ACTIVE_FAULT_4,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_ACTIVE_FAULT_4()       (ESR_Status7.ESR_Status7.CAN_TX_ACTIVE_FAULT_4)
#endif

/* Handle:   20,Name:          CAN_TX_ACTIVE_FAULT_5,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_ACTIVE_FAULT_5()       (ESR_Status7.ESR_Status7.CAN_TX_ACTIVE_FAULT_5)
#endif

/* Handle:   21,Name:          CAN_TX_ACTIVE_FAULT_6,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_ACTIVE_FAULT_6()       (ESR_Status7.ESR_Status7.CAN_TX_ACTIVE_FAULT_6)
#endif

/* Handle:   22,Name:          CAN_TX_ACTIVE_FAULT_7,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_ACTIVE_FAULT_7()       (ESR_Status7.ESR_Status7.CAN_TX_ACTIVE_FAULT_7)
#endif

/* Handle:   23,Name:         CAN_TX_SUPPLY_1P8V_A2D,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_SUPPLY_1P8V_A2D()      (ESR_Status6.ESR_Status6.CAN_TX_SUPPLY_1P8V_A2D)
#endif

/* Handle:   24,Name:          CAN_TX_SUPPLY_N5V_A2D,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_SUPPLY_N5V_A2D()       (ESR_Status6.ESR_Status6.CAN_TX_SUPPLY_N5V_A2D)
#endif

/* Handle:   25,Name:           CAN_TX_WAVE_DIFF_A2D,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_WAVE_DIFF_A2D()        (ESR_Status6.ESR_Status6.CAN_TX_WAVE_DIFF_A2D)
#endif

/* Handle:   26,Name:       CAN_TX_SYSTEM_POWER_MODE,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_SYSTEM_POWER_MODE()    (ESR_Status6.ESR_Status6.CAN_TX_SYSTEM_POWER_MODE)
#endif

/* Handle:   27,Name:  CAN_TX_VERTICAL_ALIGN_UPDATED,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_VERTICAL_ALIGN_UPDATED() (ESR_Status6.ESR_Status6.CAN_TX_VERTICAL_ALIGN_UPDATED)
#endif

/* Handle:   28,Name: CAN_TX_SW_VERSION_DSP_3RD_BYTE,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_SW_VERSION_DSP_3RD_BYTE() (ESR_Status6.ESR_Status6.CAN_TX_SW_VERSION_DSP_3RD_BYTE)
#endif

/* Handle:   29,Name:  CAN_TX_FACTORY_ALIGN_STATUS_2,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_FACTORY_ALIGN_STATUS_2() (ESR_Status6.ESR_Status6.CAN_TX_FACTORY_ALIGN_STATUS_2)
#endif

/* Handle:   30,Name:  CAN_TX_FACTORY_ALIGN_STATUS_1,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_FACTORY_ALIGN_STATUS_1() (ESR_Status6.ESR_Status6.CAN_TX_FACTORY_ALIGN_STATUS_1)
#endif

/* Handle:   31,Name:    CAN_TX_RECOMMEND_UNCONVERGE,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_RECOMMEND_UNCONVERGE() (ESR_Status6.ESR_Status6.CAN_TX_RECOMMEND_UNCONVERGE)
#endif

/* Handle:   32,Name:            CAN_TX_FOUND_TARGET,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_FOUND_TARGET()         (ESR_Status6.ESR_Status6.CAN_TX_FOUND_TARGET)
#endif

/* Handle:   33,Name:    CAN_TX_FACTORY_MISALIGNMENT,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_FACTORY_MISALIGNMENT() (ESR_Status6.ESR_Status6.CAN_TX_FACTORY_MISALIGNMENT)
#endif

/* Handle:   34,Name: CAN_TX_SERV_ALIGN_UPDATES_DONE,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_SERV_ALIGN_UPDATES_DONE() (ESR_Status6.ESR_Status6.CAN_TX_SERV_ALIGN_UPDATES_DONE)
#endif

/* Handle:   35,Name:   CAN_TX_VERTICAL_MISALIGNMENT,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_VERTICAL_MISALIGNMENT() (ESR_Status6.ESR_Status6.CAN_TX_VERTICAL_MISALIGNMENT)
#endif

/* Handle:   36,Name:              CAN_TX_SWBATT_A2D,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_SWBATT_A2D()           (ESR_Status5.ESR_Status5.CAN_TX_SWBATT_A2D)
#endif

/* Handle:   37,Name:                CAN_TX_IGNP_A2D,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_IGNP_A2D()             (ESR_Status5.ESR_Status5.CAN_TX_IGNP_A2D)
#endif

/* Handle:   38,Name:               CAN_TX_TEMP1_A2D,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TEMP1_A2D()            (ESR_Status5.ESR_Status5.CAN_TX_TEMP1_A2D)
#endif

/* Handle:   39,Name:               CAN_TX_TEMP2_A2D,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TEMP2_A2D()            (ESR_Status5.ESR_Status5.CAN_TX_TEMP2_A2D)
#endif

/* Handle:   40,Name:          CAN_TX_SUPPLY_5VA_A2D,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_SUPPLY_5VA_A2D()       (ESR_Status5.ESR_Status5.CAN_TX_SUPPLY_5VA_A2D)
#endif

/* Handle:   41,Name:         CAN_TX_SUPPLY_5VDX_A2D,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_SUPPLY_5VDX_A2D()      (ESR_Status5.ESR_Status5.CAN_TX_SUPPLY_5VDX_A2D)
#endif

/* Handle:   42,Name:         CAN_TX_SUPPLY_3P3V_A2D,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_SUPPLY_3P3V_A2D()      (ESR_Status5.ESR_Status5.CAN_TX_SUPPLY_3P3V_A2D)
#endif

/* Handle:   43,Name:          CAN_TX_SUPPLY_10V_A2D,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_SUPPLY_10V_A2D()       (ESR_Status5.ESR_Status5.CAN_TX_SUPPLY_10V_A2D)
#endif

/* Handle:   44,Name:       CAN_TX_TRACK_ONCOMING_64,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ONCOMING_64()    (ESR_Track64.ESR_Track64.CAN_TX_TRACK_ONCOMING_64)
#endif

/* Handle:   45,Name: CAN_TX_TRACK_GROUPING_CHANGED_64,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_GROUPING_CHANGED_64() (ESR_Track64.ESR_Track64.CAN_TX_TRACK_GROUPING_CHANGED_64)
#endif

/* Handle:   46,Name:       CAN_TX_TRACK_LAT_RATE_64,Size:  6,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_LAT_RATE_64()    (ESR_Track64.ESR_Track64.CAN_TX_TRACK_LAT_RATE_64)
#endif

/* Handle:   48,Name:         CAN_TX_TRACK_STATUS_64,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_STATUS_64()      (ESR_Track64.ESR_Track64.CAN_TX_TRACK_STATUS_64)
#endif

/* Handle:   51,Name:          CAN_TX_TRACK_WIDTH_64,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_WIDTH_64()       (ESR_Track64.ESR_Track64.CAN_TX_TRACK_WIDTH_64)
#endif

/* Handle:   52,Name:  CAN_TX_TRACK_ROLLING_COUNT_64,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ROLLING_COUNT_64() (ESR_Track64.ESR_Track64.CAN_TX_TRACK_ROLLING_COUNT_64)
#endif

/* Handle:   53,Name:  CAN_TX_TRACK_BRIDGE_OBJECT_64,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_BRIDGE_OBJECT_64() (ESR_Track64.ESR_Track64.CAN_TX_TRACK_BRIDGE_OBJECT_64)
#endif

/* Handle:   55,Name: CAN_TX_TRACK_MED_RANGE_MODE_64,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_MED_RANGE_MODE_64() (ESR_Track64.ESR_Track64.CAN_TX_TRACK_MED_RANGE_MODE_64)
#endif

/* Handle:   56,Name:       CAN_TX_TRACK_ONCOMING_63,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ONCOMING_63()    (ESR_Track63.ESR_Track63.CAN_TX_TRACK_ONCOMING_63)
#endif

/* Handle:   57,Name: CAN_TX_TRACK_GROUPING_CHANGED_63,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_GROUPING_CHANGED_63() (ESR_Track63.ESR_Track63.CAN_TX_TRACK_GROUPING_CHANGED_63)
#endif

/* Handle:   58,Name:       CAN_TX_TRACK_LAT_RATE_63,Size:  6,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_LAT_RATE_63()    (ESR_Track63.ESR_Track63.CAN_TX_TRACK_LAT_RATE_63)
#endif

/* Handle:   60,Name:         CAN_TX_TRACK_STATUS_63,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_STATUS_63()      (ESR_Track63.ESR_Track63.CAN_TX_TRACK_STATUS_63)
#endif

/* Handle:   63,Name:          CAN_TX_TRACK_WIDTH_63,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_WIDTH_63()       (ESR_Track63.ESR_Track63.CAN_TX_TRACK_WIDTH_63)
#endif

/* Handle:   64,Name:  CAN_TX_TRACK_ROLLING_COUNT_63,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ROLLING_COUNT_63() (ESR_Track63.ESR_Track63.CAN_TX_TRACK_ROLLING_COUNT_63)
#endif

/* Handle:   65,Name:  CAN_TX_TRACK_BRIDGE_OBJECT_63,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_BRIDGE_OBJECT_63() (ESR_Track63.ESR_Track63.CAN_TX_TRACK_BRIDGE_OBJECT_63)
#endif

/* Handle:   67,Name: CAN_TX_TRACK_MED_RANGE_MODE_63,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_MED_RANGE_MODE_63() (ESR_Track63.ESR_Track63.CAN_TX_TRACK_MED_RANGE_MODE_63)
#endif

/* Handle:   68,Name:       CAN_TX_TRACK_ONCOMING_62,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ONCOMING_62()    (ESR_Track62.ESR_Track62.CAN_TX_TRACK_ONCOMING_62)
#endif

/* Handle:   69,Name: CAN_TX_TRACK_GROUPING_CHANGED_62,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_GROUPING_CHANGED_62() (ESR_Track62.ESR_Track62.CAN_TX_TRACK_GROUPING_CHANGED_62)
#endif

/* Handle:   70,Name:       CAN_TX_TRACK_LAT_RATE_62,Size:  6,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_LAT_RATE_62()    (ESR_Track62.ESR_Track62.CAN_TX_TRACK_LAT_RATE_62)
#endif

/* Handle:   72,Name:         CAN_TX_TRACK_STATUS_62,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_STATUS_62()      (ESR_Track62.ESR_Track62.CAN_TX_TRACK_STATUS_62)
#endif

/* Handle:   75,Name:          CAN_TX_TRACK_WIDTH_62,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_WIDTH_62()       (ESR_Track62.ESR_Track62.CAN_TX_TRACK_WIDTH_62)
#endif

/* Handle:   76,Name:  CAN_TX_TRACK_ROLLING_COUNT_62,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ROLLING_COUNT_62() (ESR_Track62.ESR_Track62.CAN_TX_TRACK_ROLLING_COUNT_62)
#endif

/* Handle:   77,Name:  CAN_TX_TRACK_BRIDGE_OBJECT_62,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_BRIDGE_OBJECT_62() (ESR_Track62.ESR_Track62.CAN_TX_TRACK_BRIDGE_OBJECT_62)
#endif

/* Handle:   79,Name: CAN_TX_TRACK_MED_RANGE_MODE_62,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_MED_RANGE_MODE_62() (ESR_Track62.ESR_Track62.CAN_TX_TRACK_MED_RANGE_MODE_62)
#endif

/* Handle:   80,Name:       CAN_TX_TRACK_ONCOMING_61,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ONCOMING_61()    (ESR_Track61.ESR_Track61.CAN_TX_TRACK_ONCOMING_61)
#endif

/* Handle:   81,Name: CAN_TX_TRACK_GROUPING_CHANGED_61,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_GROUPING_CHANGED_61() (ESR_Track61.ESR_Track61.CAN_TX_TRACK_GROUPING_CHANGED_61)
#endif

/* Handle:   82,Name:       CAN_TX_TRACK_LAT_RATE_61,Size:  6,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_LAT_RATE_61()    (ESR_Track61.ESR_Track61.CAN_TX_TRACK_LAT_RATE_61)
#endif

/* Handle:   84,Name:         CAN_TX_TRACK_STATUS_61,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_STATUS_61()      (ESR_Track61.ESR_Track61.CAN_TX_TRACK_STATUS_61)
#endif

/* Handle:   87,Name:          CAN_TX_TRACK_WIDTH_61,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_WIDTH_61()       (ESR_Track61.ESR_Track61.CAN_TX_TRACK_WIDTH_61)
#endif

/* Handle:   88,Name:  CAN_TX_TRACK_ROLLING_COUNT_61,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ROLLING_COUNT_61() (ESR_Track61.ESR_Track61.CAN_TX_TRACK_ROLLING_COUNT_61)
#endif

/* Handle:   89,Name:  CAN_TX_TRACK_BRIDGE_OBJECT_61,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_BRIDGE_OBJECT_61() (ESR_Track61.ESR_Track61.CAN_TX_TRACK_BRIDGE_OBJECT_61)
#endif

/* Handle:   91,Name: CAN_TX_TRACK_MED_RANGE_MODE_61,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_MED_RANGE_MODE_61() (ESR_Track61.ESR_Track61.CAN_TX_TRACK_MED_RANGE_MODE_61)
#endif

/* Handle:   92,Name:       CAN_TX_TRACK_ONCOMING_60,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ONCOMING_60()    (ESR_Track60.ESR_Track60.CAN_TX_TRACK_ONCOMING_60)
#endif

/* Handle:   93,Name: CAN_TX_TRACK_GROUPING_CHANGED_60,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_GROUPING_CHANGED_60() (ESR_Track60.ESR_Track60.CAN_TX_TRACK_GROUPING_CHANGED_60)
#endif

/* Handle:   94,Name:       CAN_TX_TRACK_LAT_RATE_60,Size:  6,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_LAT_RATE_60()    (ESR_Track60.ESR_Track60.CAN_TX_TRACK_LAT_RATE_60)
#endif

/* Handle:   96,Name:         CAN_TX_TRACK_STATUS_60,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_STATUS_60()      (ESR_Track60.ESR_Track60.CAN_TX_TRACK_STATUS_60)
#endif

/* Handle:   99,Name:          CAN_TX_TRACK_WIDTH_60,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_WIDTH_60()       (ESR_Track60.ESR_Track60.CAN_TX_TRACK_WIDTH_60)
#endif

/* Handle:  100,Name:  CAN_TX_TRACK_ROLLING_COUNT_60,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ROLLING_COUNT_60() (ESR_Track60.ESR_Track60.CAN_TX_TRACK_ROLLING_COUNT_60)
#endif

/* Handle:  101,Name:  CAN_TX_TRACK_BRIDGE_OBJECT_60,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_BRIDGE_OBJECT_60() (ESR_Track60.ESR_Track60.CAN_TX_TRACK_BRIDGE_OBJECT_60)
#endif

/* Handle:  103,Name: CAN_TX_TRACK_MED_RANGE_MODE_60,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_MED_RANGE_MODE_60() (ESR_Track60.ESR_Track60.CAN_TX_TRACK_MED_RANGE_MODE_60)
#endif

/* Handle:  104,Name:       CAN_TX_TRACK_ONCOMING_59,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ONCOMING_59()    (ESR_Track59.ESR_Track59.CAN_TX_TRACK_ONCOMING_59)
#endif

/* Handle:  105,Name: CAN_TX_TRACK_GROUPING_CHANGED_59,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_GROUPING_CHANGED_59() (ESR_Track59.ESR_Track59.CAN_TX_TRACK_GROUPING_CHANGED_59)
#endif

/* Handle:  106,Name:       CAN_TX_TRACK_LAT_RATE_59,Size:  6,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_LAT_RATE_59()    (ESR_Track59.ESR_Track59.CAN_TX_TRACK_LAT_RATE_59)
#endif

/* Handle:  108,Name:         CAN_TX_TRACK_STATUS_59,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_STATUS_59()      (ESR_Track59.ESR_Track59.CAN_TX_TRACK_STATUS_59)
#endif

/* Handle:  111,Name:          CAN_TX_TRACK_WIDTH_59,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_WIDTH_59()       (ESR_Track59.ESR_Track59.CAN_TX_TRACK_WIDTH_59)
#endif

/* Handle:  112,Name:  CAN_TX_TRACK_ROLLING_COUNT_59,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ROLLING_COUNT_59() (ESR_Track59.ESR_Track59.CAN_TX_TRACK_ROLLING_COUNT_59)
#endif

/* Handle:  113,Name:  CAN_TX_TRACK_BRIDGE_OBJECT_59,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_BRIDGE_OBJECT_59() (ESR_Track59.ESR_Track59.CAN_TX_TRACK_BRIDGE_OBJECT_59)
#endif

/* Handle:  115,Name: CAN_TX_TRACK_MED_RANGE_MODE_59,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_MED_RANGE_MODE_59() (ESR_Track59.ESR_Track59.CAN_TX_TRACK_MED_RANGE_MODE_59)
#endif

/* Handle:  116,Name:       CAN_TX_TRACK_ONCOMING_58,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ONCOMING_58()    (ESR_Track58.ESR_Track58.CAN_TX_TRACK_ONCOMING_58)
#endif

/* Handle:  117,Name: CAN_TX_TRACK_GROUPING_CHANGED_58,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_GROUPING_CHANGED_58() (ESR_Track58.ESR_Track58.CAN_TX_TRACK_GROUPING_CHANGED_58)
#endif

/* Handle:  118,Name:       CAN_TX_TRACK_LAT_RATE_58,Size:  6,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_LAT_RATE_58()    (ESR_Track58.ESR_Track58.CAN_TX_TRACK_LAT_RATE_58)
#endif

/* Handle:  120,Name:         CAN_TX_TRACK_STATUS_58,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_STATUS_58()      (ESR_Track58.ESR_Track58.CAN_TX_TRACK_STATUS_58)
#endif

/* Handle:  123,Name:          CAN_TX_TRACK_WIDTH_58,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_WIDTH_58()       (ESR_Track58.ESR_Track58.CAN_TX_TRACK_WIDTH_58)
#endif

/* Handle:  124,Name:  CAN_TX_TRACK_ROLLING_COUNT_58,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ROLLING_COUNT_58() (ESR_Track58.ESR_Track58.CAN_TX_TRACK_ROLLING_COUNT_58)
#endif

/* Handle:  125,Name:  CAN_TX_TRACK_BRIDGE_OBJECT_58,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_BRIDGE_OBJECT_58() (ESR_Track58.ESR_Track58.CAN_TX_TRACK_BRIDGE_OBJECT_58)
#endif

/* Handle:  127,Name: CAN_TX_TRACK_MED_RANGE_MODE_58,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_MED_RANGE_MODE_58() (ESR_Track58.ESR_Track58.CAN_TX_TRACK_MED_RANGE_MODE_58)
#endif

/* Handle:  128,Name:       CAN_TX_TRACK_ONCOMING_57,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ONCOMING_57()    (ESR_Track57.ESR_Track57.CAN_TX_TRACK_ONCOMING_57)
#endif

/* Handle:  129,Name: CAN_TX_TRACK_GROUPING_CHANGED_57,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_GROUPING_CHANGED_57() (ESR_Track57.ESR_Track57.CAN_TX_TRACK_GROUPING_CHANGED_57)
#endif

/* Handle:  130,Name:       CAN_TX_TRACK_LAT_RATE_57,Size:  6,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_LAT_RATE_57()    (ESR_Track57.ESR_Track57.CAN_TX_TRACK_LAT_RATE_57)
#endif

/* Handle:  132,Name:         CAN_TX_TRACK_STATUS_57,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_STATUS_57()      (ESR_Track57.ESR_Track57.CAN_TX_TRACK_STATUS_57)
#endif

/* Handle:  135,Name:          CAN_TX_TRACK_WIDTH_57,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_WIDTH_57()       (ESR_Track57.ESR_Track57.CAN_TX_TRACK_WIDTH_57)
#endif

/* Handle:  136,Name:  CAN_TX_TRACK_ROLLING_COUNT_57,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ROLLING_COUNT_57() (ESR_Track57.ESR_Track57.CAN_TX_TRACK_ROLLING_COUNT_57)
#endif

/* Handle:  137,Name:  CAN_TX_TRACK_BRIDGE_OBJECT_57,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_BRIDGE_OBJECT_57() (ESR_Track57.ESR_Track57.CAN_TX_TRACK_BRIDGE_OBJECT_57)
#endif

/* Handle:  139,Name: CAN_TX_TRACK_MED_RANGE_MODE_57,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_MED_RANGE_MODE_57() (ESR_Track57.ESR_Track57.CAN_TX_TRACK_MED_RANGE_MODE_57)
#endif

/* Handle:  140,Name:       CAN_TX_TRACK_ONCOMING_56,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ONCOMING_56()    (ESR_Track56.ESR_Track56.CAN_TX_TRACK_ONCOMING_56)
#endif

/* Handle:  141,Name: CAN_TX_TRACK_GROUPING_CHANGED_56,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_GROUPING_CHANGED_56() (ESR_Track56.ESR_Track56.CAN_TX_TRACK_GROUPING_CHANGED_56)
#endif

/* Handle:  142,Name:       CAN_TX_TRACK_LAT_RATE_56,Size:  6,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_LAT_RATE_56()    (ESR_Track56.ESR_Track56.CAN_TX_TRACK_LAT_RATE_56)
#endif

/* Handle:  144,Name:         CAN_TX_TRACK_STATUS_56,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_STATUS_56()      (ESR_Track56.ESR_Track56.CAN_TX_TRACK_STATUS_56)
#endif

/* Handle:  147,Name:          CAN_TX_TRACK_WIDTH_56,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_WIDTH_56()       (ESR_Track56.ESR_Track56.CAN_TX_TRACK_WIDTH_56)
#endif

/* Handle:  148,Name:  CAN_TX_TRACK_ROLLING_COUNT_56,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ROLLING_COUNT_56() (ESR_Track56.ESR_Track56.CAN_TX_TRACK_ROLLING_COUNT_56)
#endif

/* Handle:  149,Name:  CAN_TX_TRACK_BRIDGE_OBJECT_56,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_BRIDGE_OBJECT_56() (ESR_Track56.ESR_Track56.CAN_TX_TRACK_BRIDGE_OBJECT_56)
#endif

/* Handle:  151,Name: CAN_TX_TRACK_MED_RANGE_MODE_56,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_MED_RANGE_MODE_56() (ESR_Track56.ESR_Track56.CAN_TX_TRACK_MED_RANGE_MODE_56)
#endif

/* Handle:  152,Name:       CAN_TX_TRACK_ONCOMING_55,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ONCOMING_55()    (ESR_Track55.ESR_Track55.CAN_TX_TRACK_ONCOMING_55)
#endif

/* Handle:  153,Name: CAN_TX_TRACK_GROUPING_CHANGED_55,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_GROUPING_CHANGED_55() (ESR_Track55.ESR_Track55.CAN_TX_TRACK_GROUPING_CHANGED_55)
#endif

/* Handle:  154,Name:       CAN_TX_TRACK_LAT_RATE_55,Size:  6,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_LAT_RATE_55()    (ESR_Track55.ESR_Track55.CAN_TX_TRACK_LAT_RATE_55)
#endif

/* Handle:  156,Name:         CAN_TX_TRACK_STATUS_55,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_STATUS_55()      (ESR_Track55.ESR_Track55.CAN_TX_TRACK_STATUS_55)
#endif

/* Handle:  159,Name:          CAN_TX_TRACK_WIDTH_55,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_WIDTH_55()       (ESR_Track55.ESR_Track55.CAN_TX_TRACK_WIDTH_55)
#endif

/* Handle:  160,Name:  CAN_TX_TRACK_ROLLING_COUNT_55,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ROLLING_COUNT_55() (ESR_Track55.ESR_Track55.CAN_TX_TRACK_ROLLING_COUNT_55)
#endif

/* Handle:  161,Name:  CAN_TX_TRACK_BRIDGE_OBJECT_55,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_BRIDGE_OBJECT_55() (ESR_Track55.ESR_Track55.CAN_TX_TRACK_BRIDGE_OBJECT_55)
#endif

/* Handle:  163,Name: CAN_TX_TRACK_MED_RANGE_MODE_55,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_MED_RANGE_MODE_55() (ESR_Track55.ESR_Track55.CAN_TX_TRACK_MED_RANGE_MODE_55)
#endif

/* Handle:  164,Name:       CAN_TX_TRACK_ONCOMING_54,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ONCOMING_54()    (ESR_Track54.ESR_Track54.CAN_TX_TRACK_ONCOMING_54)
#endif

/* Handle:  165,Name: CAN_TX_TRACK_GROUPING_CHANGED_54,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_GROUPING_CHANGED_54() (ESR_Track54.ESR_Track54.CAN_TX_TRACK_GROUPING_CHANGED_54)
#endif

/* Handle:  166,Name:       CAN_TX_TRACK_LAT_RATE_54,Size:  6,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_LAT_RATE_54()    (ESR_Track54.ESR_Track54.CAN_TX_TRACK_LAT_RATE_54)
#endif

/* Handle:  168,Name:         CAN_TX_TRACK_STATUS_54,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_STATUS_54()      (ESR_Track54.ESR_Track54.CAN_TX_TRACK_STATUS_54)
#endif

/* Handle:  171,Name:          CAN_TX_TRACK_WIDTH_54,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_WIDTH_54()       (ESR_Track54.ESR_Track54.CAN_TX_TRACK_WIDTH_54)
#endif

/* Handle:  172,Name:  CAN_TX_TRACK_ROLLING_COUNT_54,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ROLLING_COUNT_54() (ESR_Track54.ESR_Track54.CAN_TX_TRACK_ROLLING_COUNT_54)
#endif

/* Handle:  173,Name:  CAN_TX_TRACK_BRIDGE_OBJECT_54,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_BRIDGE_OBJECT_54() (ESR_Track54.ESR_Track54.CAN_TX_TRACK_BRIDGE_OBJECT_54)
#endif

/* Handle:  175,Name: CAN_TX_TRACK_MED_RANGE_MODE_54,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_MED_RANGE_MODE_54() (ESR_Track54.ESR_Track54.CAN_TX_TRACK_MED_RANGE_MODE_54)
#endif

/* Handle:  176,Name:       CAN_TX_TRACK_ONCOMING_53,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ONCOMING_53()    (ESR_Track53.ESR_Track53.CAN_TX_TRACK_ONCOMING_53)
#endif

/* Handle:  177,Name: CAN_TX_TRACK_GROUPING_CHANGED_53,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_GROUPING_CHANGED_53() (ESR_Track53.ESR_Track53.CAN_TX_TRACK_GROUPING_CHANGED_53)
#endif

/* Handle:  178,Name:       CAN_TX_TRACK_LAT_RATE_53,Size:  6,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_LAT_RATE_53()    (ESR_Track53.ESR_Track53.CAN_TX_TRACK_LAT_RATE_53)
#endif

/* Handle:  180,Name:         CAN_TX_TRACK_STATUS_53,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_STATUS_53()      (ESR_Track53.ESR_Track53.CAN_TX_TRACK_STATUS_53)
#endif

/* Handle:  183,Name:          CAN_TX_TRACK_WIDTH_53,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_WIDTH_53()       (ESR_Track53.ESR_Track53.CAN_TX_TRACK_WIDTH_53)
#endif

/* Handle:  184,Name:  CAN_TX_TRACK_ROLLING_COUNT_53,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ROLLING_COUNT_53() (ESR_Track53.ESR_Track53.CAN_TX_TRACK_ROLLING_COUNT_53)
#endif

/* Handle:  185,Name:  CAN_TX_TRACK_BRIDGE_OBJECT_53,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_BRIDGE_OBJECT_53() (ESR_Track53.ESR_Track53.CAN_TX_TRACK_BRIDGE_OBJECT_53)
#endif

/* Handle:  187,Name: CAN_TX_TRACK_MED_RANGE_MODE_53,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_MED_RANGE_MODE_53() (ESR_Track53.ESR_Track53.CAN_TX_TRACK_MED_RANGE_MODE_53)
#endif

/* Handle:  188,Name:       CAN_TX_TRACK_ONCOMING_52,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ONCOMING_52()    (ESR_Track52.ESR_Track52.CAN_TX_TRACK_ONCOMING_52)
#endif

/* Handle:  189,Name: CAN_TX_TRACK_GROUPING_CHANGED_52,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_GROUPING_CHANGED_52() (ESR_Track52.ESR_Track52.CAN_TX_TRACK_GROUPING_CHANGED_52)
#endif

/* Handle:  190,Name:       CAN_TX_TRACK_LAT_RATE_52,Size:  6,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_LAT_RATE_52()    (ESR_Track52.ESR_Track52.CAN_TX_TRACK_LAT_RATE_52)
#endif

/* Handle:  192,Name:         CAN_TX_TRACK_STATUS_52,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_STATUS_52()      (ESR_Track52.ESR_Track52.CAN_TX_TRACK_STATUS_52)
#endif

/* Handle:  195,Name:          CAN_TX_TRACK_WIDTH_52,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_WIDTH_52()       (ESR_Track52.ESR_Track52.CAN_TX_TRACK_WIDTH_52)
#endif

/* Handle:  196,Name:  CAN_TX_TRACK_ROLLING_COUNT_52,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ROLLING_COUNT_52() (ESR_Track52.ESR_Track52.CAN_TX_TRACK_ROLLING_COUNT_52)
#endif

/* Handle:  197,Name:  CAN_TX_TRACK_BRIDGE_OBJECT_52,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_BRIDGE_OBJECT_52() (ESR_Track52.ESR_Track52.CAN_TX_TRACK_BRIDGE_OBJECT_52)
#endif

/* Handle:  199,Name: CAN_TX_TRACK_MED_RANGE_MODE_52,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_MED_RANGE_MODE_52() (ESR_Track52.ESR_Track52.CAN_TX_TRACK_MED_RANGE_MODE_52)
#endif

/* Handle:  200,Name:       CAN_TX_TRACK_ONCOMING_51,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ONCOMING_51()    (ESR_Track51.ESR_Track51.CAN_TX_TRACK_ONCOMING_51)
#endif

/* Handle:  201,Name: CAN_TX_TRACK_GROUPING_CHANGED_51,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_GROUPING_CHANGED_51() (ESR_Track51.ESR_Track51.CAN_TX_TRACK_GROUPING_CHANGED_51)
#endif

/* Handle:  202,Name:       CAN_TX_TRACK_LAT_RATE_51,Size:  6,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_LAT_RATE_51()    (ESR_Track51.ESR_Track51.CAN_TX_TRACK_LAT_RATE_51)
#endif

/* Handle:  204,Name:         CAN_TX_TRACK_STATUS_51,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_STATUS_51()      (ESR_Track51.ESR_Track51.CAN_TX_TRACK_STATUS_51)
#endif

/* Handle:  207,Name:          CAN_TX_TRACK_WIDTH_51,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_WIDTH_51()       (ESR_Track51.ESR_Track51.CAN_TX_TRACK_WIDTH_51)
#endif

/* Handle:  208,Name:  CAN_TX_TRACK_ROLLING_COUNT_51,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ROLLING_COUNT_51() (ESR_Track51.ESR_Track51.CAN_TX_TRACK_ROLLING_COUNT_51)
#endif

/* Handle:  209,Name:  CAN_TX_TRACK_BRIDGE_OBJECT_51,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_BRIDGE_OBJECT_51() (ESR_Track51.ESR_Track51.CAN_TX_TRACK_BRIDGE_OBJECT_51)
#endif

/* Handle:  211,Name: CAN_TX_TRACK_MED_RANGE_MODE_51,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_MED_RANGE_MODE_51() (ESR_Track51.ESR_Track51.CAN_TX_TRACK_MED_RANGE_MODE_51)
#endif

/* Handle:  212,Name:       CAN_TX_TRACK_ONCOMING_50,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ONCOMING_50()    (ESR_Track50.ESR_Track50.CAN_TX_TRACK_ONCOMING_50)
#endif

/* Handle:  213,Name: CAN_TX_TRACK_GROUPING_CHANGED_50,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_GROUPING_CHANGED_50() (ESR_Track50.ESR_Track50.CAN_TX_TRACK_GROUPING_CHANGED_50)
#endif

/* Handle:  214,Name:       CAN_TX_TRACK_LAT_RATE_50,Size:  6,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_LAT_RATE_50()    (ESR_Track50.ESR_Track50.CAN_TX_TRACK_LAT_RATE_50)
#endif

/* Handle:  216,Name:         CAN_TX_TRACK_STATUS_50,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_STATUS_50()      (ESR_Track50.ESR_Track50.CAN_TX_TRACK_STATUS_50)
#endif

/* Handle:  219,Name:          CAN_TX_TRACK_WIDTH_50,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_WIDTH_50()       (ESR_Track50.ESR_Track50.CAN_TX_TRACK_WIDTH_50)
#endif

/* Handle:  220,Name:  CAN_TX_TRACK_ROLLING_COUNT_50,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ROLLING_COUNT_50() (ESR_Track50.ESR_Track50.CAN_TX_TRACK_ROLLING_COUNT_50)
#endif

/* Handle:  221,Name:  CAN_TX_TRACK_BRIDGE_OBJECT_50,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_BRIDGE_OBJECT_50() (ESR_Track50.ESR_Track50.CAN_TX_TRACK_BRIDGE_OBJECT_50)
#endif

/* Handle:  223,Name: CAN_TX_TRACK_MED_RANGE_MODE_50,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_MED_RANGE_MODE_50() (ESR_Track50.ESR_Track50.CAN_TX_TRACK_MED_RANGE_MODE_50)
#endif

/* Handle:  224,Name:       CAN_TX_TRACK_ONCOMING_49,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ONCOMING_49()    (ESR_Track49.ESR_Track49.CAN_TX_TRACK_ONCOMING_49)
#endif

/* Handle:  225,Name: CAN_TX_TRACK_GROUPING_CHANGED_49,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_GROUPING_CHANGED_49() (ESR_Track49.ESR_Track49.CAN_TX_TRACK_GROUPING_CHANGED_49)
#endif

/* Handle:  226,Name:       CAN_TX_TRACK_LAT_RATE_49,Size:  6,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_LAT_RATE_49()    (ESR_Track49.ESR_Track49.CAN_TX_TRACK_LAT_RATE_49)
#endif

/* Handle:  228,Name:         CAN_TX_TRACK_STATUS_49,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_STATUS_49()      (ESR_Track49.ESR_Track49.CAN_TX_TRACK_STATUS_49)
#endif

/* Handle:  231,Name:          CAN_TX_TRACK_WIDTH_49,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_WIDTH_49()       (ESR_Track49.ESR_Track49.CAN_TX_TRACK_WIDTH_49)
#endif

/* Handle:  232,Name:  CAN_TX_TRACK_ROLLING_COUNT_49,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ROLLING_COUNT_49() (ESR_Track49.ESR_Track49.CAN_TX_TRACK_ROLLING_COUNT_49)
#endif

/* Handle:  233,Name:  CAN_TX_TRACK_BRIDGE_OBJECT_49,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_BRIDGE_OBJECT_49() (ESR_Track49.ESR_Track49.CAN_TX_TRACK_BRIDGE_OBJECT_49)
#endif

/* Handle:  235,Name: CAN_TX_TRACK_MED_RANGE_MODE_49,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_MED_RANGE_MODE_49() (ESR_Track49.ESR_Track49.CAN_TX_TRACK_MED_RANGE_MODE_49)
#endif

/* Handle:  236,Name:       CAN_TX_TRACK_ONCOMING_48,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ONCOMING_48()    (ESR_Track48.ESR_Track48.CAN_TX_TRACK_ONCOMING_48)
#endif

/* Handle:  237,Name: CAN_TX_TRACK_GROUPING_CHANGED_48,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_GROUPING_CHANGED_48() (ESR_Track48.ESR_Track48.CAN_TX_TRACK_GROUPING_CHANGED_48)
#endif

/* Handle:  238,Name:       CAN_TX_TRACK_LAT_RATE_48,Size:  6,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_LAT_RATE_48()    (ESR_Track48.ESR_Track48.CAN_TX_TRACK_LAT_RATE_48)
#endif

/* Handle:  240,Name:         CAN_TX_TRACK_STATUS_48,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_STATUS_48()      (ESR_Track48.ESR_Track48.CAN_TX_TRACK_STATUS_48)
#endif

/* Handle:  243,Name:          CAN_TX_TRACK_WIDTH_48,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_WIDTH_48()       (ESR_Track48.ESR_Track48.CAN_TX_TRACK_WIDTH_48)
#endif

/* Handle:  244,Name:  CAN_TX_TRACK_ROLLING_COUNT_48,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ROLLING_COUNT_48() (ESR_Track48.ESR_Track48.CAN_TX_TRACK_ROLLING_COUNT_48)
#endif

/* Handle:  245,Name:  CAN_TX_TRACK_BRIDGE_OBJECT_48,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_BRIDGE_OBJECT_48() (ESR_Track48.ESR_Track48.CAN_TX_TRACK_BRIDGE_OBJECT_48)
#endif

/* Handle:  247,Name: CAN_TX_TRACK_MED_RANGE_MODE_48,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_MED_RANGE_MODE_48() (ESR_Track48.ESR_Track48.CAN_TX_TRACK_MED_RANGE_MODE_48)
#endif

/* Handle:  248,Name:       CAN_TX_TRACK_ONCOMING_47,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ONCOMING_47()    (ESR_Track47.ESR_Track47.CAN_TX_TRACK_ONCOMING_47)
#endif

/* Handle:  249,Name: CAN_TX_TRACK_GROUPING_CHANGED_47,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_GROUPING_CHANGED_47() (ESR_Track47.ESR_Track47.CAN_TX_TRACK_GROUPING_CHANGED_47)
#endif

/* Handle:  250,Name:       CAN_TX_TRACK_LAT_RATE_47,Size:  6,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_LAT_RATE_47()    (ESR_Track47.ESR_Track47.CAN_TX_TRACK_LAT_RATE_47)
#endif

/* Handle:  252,Name:         CAN_TX_TRACK_STATUS_47,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_STATUS_47()      (ESR_Track47.ESR_Track47.CAN_TX_TRACK_STATUS_47)
#endif

/* Handle:  255,Name:          CAN_TX_TRACK_WIDTH_47,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_WIDTH_47()       (ESR_Track47.ESR_Track47.CAN_TX_TRACK_WIDTH_47)
#endif

/* Handle:  256,Name:  CAN_TX_TRACK_ROLLING_COUNT_47,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ROLLING_COUNT_47() (ESR_Track47.ESR_Track47.CAN_TX_TRACK_ROLLING_COUNT_47)
#endif

/* Handle:  257,Name:  CAN_TX_TRACK_BRIDGE_OBJECT_47,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_BRIDGE_OBJECT_47() (ESR_Track47.ESR_Track47.CAN_TX_TRACK_BRIDGE_OBJECT_47)
#endif

/* Handle:  259,Name: CAN_TX_TRACK_MED_RANGE_MODE_47,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_MED_RANGE_MODE_47() (ESR_Track47.ESR_Track47.CAN_TX_TRACK_MED_RANGE_MODE_47)
#endif

/* Handle:  260,Name:       CAN_TX_TRACK_ONCOMING_46,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ONCOMING_46()    (ESR_Track46.ESR_Track46.CAN_TX_TRACK_ONCOMING_46)
#endif

/* Handle:  261,Name: CAN_TX_TRACK_GROUPING_CHANGED_46,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_GROUPING_CHANGED_46() (ESR_Track46.ESR_Track46.CAN_TX_TRACK_GROUPING_CHANGED_46)
#endif

/* Handle:  262,Name:       CAN_TX_TRACK_LAT_RATE_46,Size:  6,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_LAT_RATE_46()    (ESR_Track46.ESR_Track46.CAN_TX_TRACK_LAT_RATE_46)
#endif

/* Handle:  264,Name:         CAN_TX_TRACK_STATUS_46,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_STATUS_46()      (ESR_Track46.ESR_Track46.CAN_TX_TRACK_STATUS_46)
#endif

/* Handle:  267,Name:          CAN_TX_TRACK_WIDTH_46,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_WIDTH_46()       (ESR_Track46.ESR_Track46.CAN_TX_TRACK_WIDTH_46)
#endif

/* Handle:  268,Name:  CAN_TX_TRACK_ROLLING_COUNT_46,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ROLLING_COUNT_46() (ESR_Track46.ESR_Track46.CAN_TX_TRACK_ROLLING_COUNT_46)
#endif

/* Handle:  269,Name:  CAN_TX_TRACK_BRIDGE_OBJECT_46,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_BRIDGE_OBJECT_46() (ESR_Track46.ESR_Track46.CAN_TX_TRACK_BRIDGE_OBJECT_46)
#endif

/* Handle:  271,Name: CAN_TX_TRACK_MED_RANGE_MODE_46,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_MED_RANGE_MODE_46() (ESR_Track46.ESR_Track46.CAN_TX_TRACK_MED_RANGE_MODE_46)
#endif

/* Handle:  272,Name:       CAN_TX_TRACK_ONCOMING_45,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ONCOMING_45()    (ESR_Track45.ESR_Track45.CAN_TX_TRACK_ONCOMING_45)
#endif

/* Handle:  273,Name: CAN_TX_TRACK_GROUPING_CHANGED_45,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_GROUPING_CHANGED_45() (ESR_Track45.ESR_Track45.CAN_TX_TRACK_GROUPING_CHANGED_45)
#endif

/* Handle:  274,Name:       CAN_TX_TRACK_LAT_RATE_45,Size:  6,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_LAT_RATE_45()    (ESR_Track45.ESR_Track45.CAN_TX_TRACK_LAT_RATE_45)
#endif

/* Handle:  276,Name:         CAN_TX_TRACK_STATUS_45,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_STATUS_45()      (ESR_Track45.ESR_Track45.CAN_TX_TRACK_STATUS_45)
#endif

/* Handle:  279,Name:          CAN_TX_TRACK_WIDTH_45,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_WIDTH_45()       (ESR_Track45.ESR_Track45.CAN_TX_TRACK_WIDTH_45)
#endif

/* Handle:  280,Name:  CAN_TX_TRACK_ROLLING_COUNT_45,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ROLLING_COUNT_45() (ESR_Track45.ESR_Track45.CAN_TX_TRACK_ROLLING_COUNT_45)
#endif

/* Handle:  281,Name:  CAN_TX_TRACK_BRIDGE_OBJECT_45,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_BRIDGE_OBJECT_45() (ESR_Track45.ESR_Track45.CAN_TX_TRACK_BRIDGE_OBJECT_45)
#endif

/* Handle:  283,Name: CAN_TX_TRACK_MED_RANGE_MODE_45,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_MED_RANGE_MODE_45() (ESR_Track45.ESR_Track45.CAN_TX_TRACK_MED_RANGE_MODE_45)
#endif

/* Handle:  284,Name:       CAN_TX_TRACK_ONCOMING_44,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ONCOMING_44()    (ESR_Track44.ESR_Track44.CAN_TX_TRACK_ONCOMING_44)
#endif

/* Handle:  285,Name: CAN_TX_TRACK_GROUPING_CHANGED_44,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_GROUPING_CHANGED_44() (ESR_Track44.ESR_Track44.CAN_TX_TRACK_GROUPING_CHANGED_44)
#endif

/* Handle:  286,Name:       CAN_TX_TRACK_LAT_RATE_44,Size:  6,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_LAT_RATE_44()    (ESR_Track44.ESR_Track44.CAN_TX_TRACK_LAT_RATE_44)
#endif

/* Handle:  288,Name:         CAN_TX_TRACK_STATUS_44,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_STATUS_44()      (ESR_Track44.ESR_Track44.CAN_TX_TRACK_STATUS_44)
#endif

/* Handle:  291,Name:          CAN_TX_TRACK_WIDTH_44,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_WIDTH_44()       (ESR_Track44.ESR_Track44.CAN_TX_TRACK_WIDTH_44)
#endif

/* Handle:  292,Name:  CAN_TX_TRACK_ROLLING_COUNT_44,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ROLLING_COUNT_44() (ESR_Track44.ESR_Track44.CAN_TX_TRACK_ROLLING_COUNT_44)
#endif

/* Handle:  293,Name:  CAN_TX_TRACK_BRIDGE_OBJECT_44,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_BRIDGE_OBJECT_44() (ESR_Track44.ESR_Track44.CAN_TX_TRACK_BRIDGE_OBJECT_44)
#endif

/* Handle:  295,Name: CAN_TX_TRACK_MED_RANGE_MODE_44,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_MED_RANGE_MODE_44() (ESR_Track44.ESR_Track44.CAN_TX_TRACK_MED_RANGE_MODE_44)
#endif

/* Handle:  296,Name:       CAN_TX_TRACK_ONCOMING_43,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ONCOMING_43()    (ESR_Track43.ESR_Track43.CAN_TX_TRACK_ONCOMING_43)
#endif

/* Handle:  297,Name: CAN_TX_TRACK_GROUPING_CHANGED_43,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_GROUPING_CHANGED_43() (ESR_Track43.ESR_Track43.CAN_TX_TRACK_GROUPING_CHANGED_43)
#endif

/* Handle:  298,Name:       CAN_TX_TRACK_LAT_RATE_43,Size:  6,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_LAT_RATE_43()    (ESR_Track43.ESR_Track43.CAN_TX_TRACK_LAT_RATE_43)
#endif

/* Handle:  300,Name:         CAN_TX_TRACK_STATUS_43,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_STATUS_43()      (ESR_Track43.ESR_Track43.CAN_TX_TRACK_STATUS_43)
#endif

/* Handle:  303,Name:          CAN_TX_TRACK_WIDTH_43,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_WIDTH_43()       (ESR_Track43.ESR_Track43.CAN_TX_TRACK_WIDTH_43)
#endif

/* Handle:  304,Name:  CAN_TX_TRACK_ROLLING_COUNT_43,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ROLLING_COUNT_43() (ESR_Track43.ESR_Track43.CAN_TX_TRACK_ROLLING_COUNT_43)
#endif

/* Handle:  305,Name:  CAN_TX_TRACK_BRIDGE_OBJECT_43,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_BRIDGE_OBJECT_43() (ESR_Track43.ESR_Track43.CAN_TX_TRACK_BRIDGE_OBJECT_43)
#endif

/* Handle:  307,Name: CAN_TX_TRACK_MED_RANGE_MODE_43,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_MED_RANGE_MODE_43() (ESR_Track43.ESR_Track43.CAN_TX_TRACK_MED_RANGE_MODE_43)
#endif

/* Handle:  308,Name:       CAN_TX_TRACK_ONCOMING_42,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ONCOMING_42()    (ESR_Track42.ESR_Track42.CAN_TX_TRACK_ONCOMING_42)
#endif

/* Handle:  309,Name: CAN_TX_TRACK_GROUPING_CHANGED_42,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_GROUPING_CHANGED_42() (ESR_Track42.ESR_Track42.CAN_TX_TRACK_GROUPING_CHANGED_42)
#endif

/* Handle:  310,Name:       CAN_TX_TRACK_LAT_RATE_42,Size:  6,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_LAT_RATE_42()    (ESR_Track42.ESR_Track42.CAN_TX_TRACK_LAT_RATE_42)
#endif

/* Handle:  312,Name:         CAN_TX_TRACK_STATUS_42,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_STATUS_42()      (ESR_Track42.ESR_Track42.CAN_TX_TRACK_STATUS_42)
#endif

/* Handle:  315,Name:          CAN_TX_TRACK_WIDTH_42,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_WIDTH_42()       (ESR_Track42.ESR_Track42.CAN_TX_TRACK_WIDTH_42)
#endif

/* Handle:  316,Name:  CAN_TX_TRACK_ROLLING_COUNT_42,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ROLLING_COUNT_42() (ESR_Track42.ESR_Track42.CAN_TX_TRACK_ROLLING_COUNT_42)
#endif

/* Handle:  317,Name:  CAN_TX_TRACK_BRIDGE_OBJECT_42,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_BRIDGE_OBJECT_42() (ESR_Track42.ESR_Track42.CAN_TX_TRACK_BRIDGE_OBJECT_42)
#endif

/* Handle:  319,Name: CAN_TX_TRACK_MED_RANGE_MODE_42,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_MED_RANGE_MODE_42() (ESR_Track42.ESR_Track42.CAN_TX_TRACK_MED_RANGE_MODE_42)
#endif

/* Handle:  320,Name:       CAN_TX_TRACK_ONCOMING_41,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ONCOMING_41()    (ESR_Track41.ESR_Track41.CAN_TX_TRACK_ONCOMING_41)
#endif

/* Handle:  321,Name: CAN_TX_TRACK_GROUPING_CHANGED_41,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_GROUPING_CHANGED_41() (ESR_Track41.ESR_Track41.CAN_TX_TRACK_GROUPING_CHANGED_41)
#endif

/* Handle:  322,Name:       CAN_TX_TRACK_LAT_RATE_41,Size:  6,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_LAT_RATE_41()    (ESR_Track41.ESR_Track41.CAN_TX_TRACK_LAT_RATE_41)
#endif

/* Handle:  324,Name:         CAN_TX_TRACK_STATUS_41,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_STATUS_41()      (ESR_Track41.ESR_Track41.CAN_TX_TRACK_STATUS_41)
#endif

/* Handle:  327,Name:          CAN_TX_TRACK_WIDTH_41,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_WIDTH_41()       (ESR_Track41.ESR_Track41.CAN_TX_TRACK_WIDTH_41)
#endif

/* Handle:  328,Name:  CAN_TX_TRACK_ROLLING_COUNT_41,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ROLLING_COUNT_41() (ESR_Track41.ESR_Track41.CAN_TX_TRACK_ROLLING_COUNT_41)
#endif

/* Handle:  329,Name:  CAN_TX_TRACK_BRIDGE_OBJECT_41,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_BRIDGE_OBJECT_41() (ESR_Track41.ESR_Track41.CAN_TX_TRACK_BRIDGE_OBJECT_41)
#endif

/* Handle:  331,Name: CAN_TX_TRACK_MED_RANGE_MODE_41,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_MED_RANGE_MODE_41() (ESR_Track41.ESR_Track41.CAN_TX_TRACK_MED_RANGE_MODE_41)
#endif

/* Handle:  332,Name:       CAN_TX_TRACK_ONCOMING_40,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ONCOMING_40()    (ESR_Track40.ESR_Track40.CAN_TX_TRACK_ONCOMING_40)
#endif

/* Handle:  333,Name: CAN_TX_TRACK_GROUPING_CHANGED_40,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_GROUPING_CHANGED_40() (ESR_Track40.ESR_Track40.CAN_TX_TRACK_GROUPING_CHANGED_40)
#endif

/* Handle:  334,Name:       CAN_TX_TRACK_LAT_RATE_40,Size:  6,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_LAT_RATE_40()    (ESR_Track40.ESR_Track40.CAN_TX_TRACK_LAT_RATE_40)
#endif

/* Handle:  336,Name:         CAN_TX_TRACK_STATUS_40,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_STATUS_40()      (ESR_Track40.ESR_Track40.CAN_TX_TRACK_STATUS_40)
#endif

/* Handle:  339,Name:          CAN_TX_TRACK_WIDTH_40,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_WIDTH_40()       (ESR_Track40.ESR_Track40.CAN_TX_TRACK_WIDTH_40)
#endif

/* Handle:  340,Name:  CAN_TX_TRACK_ROLLING_COUNT_40,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ROLLING_COUNT_40() (ESR_Track40.ESR_Track40.CAN_TX_TRACK_ROLLING_COUNT_40)
#endif

/* Handle:  341,Name:  CAN_TX_TRACK_BRIDGE_OBJECT_40,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_BRIDGE_OBJECT_40() (ESR_Track40.ESR_Track40.CAN_TX_TRACK_BRIDGE_OBJECT_40)
#endif

/* Handle:  343,Name: CAN_TX_TRACK_MED_RANGE_MODE_40,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_MED_RANGE_MODE_40() (ESR_Track40.ESR_Track40.CAN_TX_TRACK_MED_RANGE_MODE_40)
#endif

/* Handle:  344,Name:       CAN_TX_TRACK_ONCOMING_39,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ONCOMING_39()    (ESR_Track39.ESR_Track39.CAN_TX_TRACK_ONCOMING_39)
#endif

/* Handle:  345,Name: CAN_TX_TRACK_GROUPING_CHANGED_39,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_GROUPING_CHANGED_39() (ESR_Track39.ESR_Track39.CAN_TX_TRACK_GROUPING_CHANGED_39)
#endif

/* Handle:  346,Name:       CAN_TX_TRACK_LAT_RATE_39,Size:  6,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_LAT_RATE_39()    (ESR_Track39.ESR_Track39.CAN_TX_TRACK_LAT_RATE_39)
#endif

/* Handle:  348,Name:         CAN_TX_TRACK_STATUS_39,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_STATUS_39()      (ESR_Track39.ESR_Track39.CAN_TX_TRACK_STATUS_39)
#endif

/* Handle:  351,Name:          CAN_TX_TRACK_WIDTH_39,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_WIDTH_39()       (ESR_Track39.ESR_Track39.CAN_TX_TRACK_WIDTH_39)
#endif

/* Handle:  352,Name:  CAN_TX_TRACK_ROLLING_COUNT_39,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ROLLING_COUNT_39() (ESR_Track39.ESR_Track39.CAN_TX_TRACK_ROLLING_COUNT_39)
#endif

/* Handle:  353,Name:  CAN_TX_TRACK_BRIDGE_OBJECT_39,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_BRIDGE_OBJECT_39() (ESR_Track39.ESR_Track39.CAN_TX_TRACK_BRIDGE_OBJECT_39)
#endif

/* Handle:  355,Name: CAN_TX_TRACK_MED_RANGE_MODE_39,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_MED_RANGE_MODE_39() (ESR_Track39.ESR_Track39.CAN_TX_TRACK_MED_RANGE_MODE_39)
#endif

/* Handle:  356,Name:       CAN_TX_TRACK_ONCOMING_38,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ONCOMING_38()    (ESR_Track38.ESR_Track38.CAN_TX_TRACK_ONCOMING_38)
#endif

/* Handle:  357,Name: CAN_TX_TRACK_GROUPING_CHANGED_38,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_GROUPING_CHANGED_38() (ESR_Track38.ESR_Track38.CAN_TX_TRACK_GROUPING_CHANGED_38)
#endif

/* Handle:  358,Name:       CAN_TX_TRACK_LAT_RATE_38,Size:  6,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_LAT_RATE_38()    (ESR_Track38.ESR_Track38.CAN_TX_TRACK_LAT_RATE_38)
#endif

/* Handle:  360,Name:         CAN_TX_TRACK_STATUS_38,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_STATUS_38()      (ESR_Track38.ESR_Track38.CAN_TX_TRACK_STATUS_38)
#endif

/* Handle:  363,Name:          CAN_TX_TRACK_WIDTH_38,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_WIDTH_38()       (ESR_Track38.ESR_Track38.CAN_TX_TRACK_WIDTH_38)
#endif

/* Handle:  364,Name:  CAN_TX_TRACK_ROLLING_COUNT_38,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ROLLING_COUNT_38() (ESR_Track38.ESR_Track38.CAN_TX_TRACK_ROLLING_COUNT_38)
#endif

/* Handle:  365,Name:  CAN_TX_TRACK_BRIDGE_OBJECT_38,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_BRIDGE_OBJECT_38() (ESR_Track38.ESR_Track38.CAN_TX_TRACK_BRIDGE_OBJECT_38)
#endif

/* Handle:  367,Name: CAN_TX_TRACK_MED_RANGE_MODE_38,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_MED_RANGE_MODE_38() (ESR_Track38.ESR_Track38.CAN_TX_TRACK_MED_RANGE_MODE_38)
#endif

/* Handle:  368,Name:       CAN_TX_TRACK_ONCOMING_37,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ONCOMING_37()    (ESR_Track37.ESR_Track37.CAN_TX_TRACK_ONCOMING_37)
#endif

/* Handle:  369,Name: CAN_TX_TRACK_GROUPING_CHANGED_37,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_GROUPING_CHANGED_37() (ESR_Track37.ESR_Track37.CAN_TX_TRACK_GROUPING_CHANGED_37)
#endif

/* Handle:  370,Name:       CAN_TX_TRACK_LAT_RATE_37,Size:  6,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_LAT_RATE_37()    (ESR_Track37.ESR_Track37.CAN_TX_TRACK_LAT_RATE_37)
#endif

/* Handle:  372,Name:         CAN_TX_TRACK_STATUS_37,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_STATUS_37()      (ESR_Track37.ESR_Track37.CAN_TX_TRACK_STATUS_37)
#endif

/* Handle:  375,Name:          CAN_TX_TRACK_WIDTH_37,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_WIDTH_37()       (ESR_Track37.ESR_Track37.CAN_TX_TRACK_WIDTH_37)
#endif

/* Handle:  376,Name:  CAN_TX_TRACK_ROLLING_COUNT_37,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ROLLING_COUNT_37() (ESR_Track37.ESR_Track37.CAN_TX_TRACK_ROLLING_COUNT_37)
#endif

/* Handle:  377,Name:  CAN_TX_TRACK_BRIDGE_OBJECT_37,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_BRIDGE_OBJECT_37() (ESR_Track37.ESR_Track37.CAN_TX_TRACK_BRIDGE_OBJECT_37)
#endif

/* Handle:  379,Name: CAN_TX_TRACK_MED_RANGE_MODE_37,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_MED_RANGE_MODE_37() (ESR_Track37.ESR_Track37.CAN_TX_TRACK_MED_RANGE_MODE_37)
#endif

/* Handle:  380,Name:       CAN_TX_TRACK_ONCOMING_36,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ONCOMING_36()    (ESR_Track36.ESR_Track36.CAN_TX_TRACK_ONCOMING_36)
#endif

/* Handle:  381,Name: CAN_TX_TRACK_GROUPING_CHANGED_36,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_GROUPING_CHANGED_36() (ESR_Track36.ESR_Track36.CAN_TX_TRACK_GROUPING_CHANGED_36)
#endif

/* Handle:  382,Name:       CAN_TX_TRACK_LAT_RATE_36,Size:  6,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_LAT_RATE_36()    (ESR_Track36.ESR_Track36.CAN_TX_TRACK_LAT_RATE_36)
#endif

/* Handle:  384,Name:         CAN_TX_TRACK_STATUS_36,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_STATUS_36()      (ESR_Track36.ESR_Track36.CAN_TX_TRACK_STATUS_36)
#endif

/* Handle:  387,Name:          CAN_TX_TRACK_WIDTH_36,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_WIDTH_36()       (ESR_Track36.ESR_Track36.CAN_TX_TRACK_WIDTH_36)
#endif

/* Handle:  388,Name:  CAN_TX_TRACK_ROLLING_COUNT_36,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ROLLING_COUNT_36() (ESR_Track36.ESR_Track36.CAN_TX_TRACK_ROLLING_COUNT_36)
#endif

/* Handle:  389,Name:  CAN_TX_TRACK_BRIDGE_OBJECT_36,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_BRIDGE_OBJECT_36() (ESR_Track36.ESR_Track36.CAN_TX_TRACK_BRIDGE_OBJECT_36)
#endif

/* Handle:  391,Name: CAN_TX_TRACK_MED_RANGE_MODE_36,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_MED_RANGE_MODE_36() (ESR_Track36.ESR_Track36.CAN_TX_TRACK_MED_RANGE_MODE_36)
#endif

/* Handle:  392,Name:       CAN_TX_TRACK_ONCOMING_35,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ONCOMING_35()    (ESR_Track35.ESR_Track35.CAN_TX_TRACK_ONCOMING_35)
#endif

/* Handle:  393,Name: CAN_TX_TRACK_GROUPING_CHANGED_35,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_GROUPING_CHANGED_35() (ESR_Track35.ESR_Track35.CAN_TX_TRACK_GROUPING_CHANGED_35)
#endif

/* Handle:  394,Name:       CAN_TX_TRACK_LAT_RATE_35,Size:  6,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_LAT_RATE_35()    (ESR_Track35.ESR_Track35.CAN_TX_TRACK_LAT_RATE_35)
#endif

/* Handle:  396,Name:         CAN_TX_TRACK_STATUS_35,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_STATUS_35()      (ESR_Track35.ESR_Track35.CAN_TX_TRACK_STATUS_35)
#endif

/* Handle:  399,Name:          CAN_TX_TRACK_WIDTH_35,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_WIDTH_35()       (ESR_Track35.ESR_Track35.CAN_TX_TRACK_WIDTH_35)
#endif

/* Handle:  400,Name:  CAN_TX_TRACK_ROLLING_COUNT_35,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ROLLING_COUNT_35() (ESR_Track35.ESR_Track35.CAN_TX_TRACK_ROLLING_COUNT_35)
#endif

/* Handle:  401,Name:  CAN_TX_TRACK_BRIDGE_OBJECT_35,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_BRIDGE_OBJECT_35() (ESR_Track35.ESR_Track35.CAN_TX_TRACK_BRIDGE_OBJECT_35)
#endif

/* Handle:  403,Name: CAN_TX_TRACK_MED_RANGE_MODE_35,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_MED_RANGE_MODE_35() (ESR_Track35.ESR_Track35.CAN_TX_TRACK_MED_RANGE_MODE_35)
#endif

/* Handle:  404,Name:       CAN_TX_TRACK_ONCOMING_34,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ONCOMING_34()    (ESR_Track34.ESR_Track34.CAN_TX_TRACK_ONCOMING_34)
#endif

/* Handle:  405,Name: CAN_TX_TRACK_GROUPING_CHANGED_34,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_GROUPING_CHANGED_34() (ESR_Track34.ESR_Track34.CAN_TX_TRACK_GROUPING_CHANGED_34)
#endif

/* Handle:  406,Name:       CAN_TX_TRACK_LAT_RATE_34,Size:  6,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_LAT_RATE_34()    (ESR_Track34.ESR_Track34.CAN_TX_TRACK_LAT_RATE_34)
#endif

/* Handle:  408,Name:         CAN_TX_TRACK_STATUS_34,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_STATUS_34()      (ESR_Track34.ESR_Track34.CAN_TX_TRACK_STATUS_34)
#endif

/* Handle:  411,Name:          CAN_TX_TRACK_WIDTH_34,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_WIDTH_34()       (ESR_Track34.ESR_Track34.CAN_TX_TRACK_WIDTH_34)
#endif

/* Handle:  412,Name:  CAN_TX_TRACK_ROLLING_COUNT_34,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ROLLING_COUNT_34() (ESR_Track34.ESR_Track34.CAN_TX_TRACK_ROLLING_COUNT_34)
#endif

/* Handle:  413,Name:  CAN_TX_TRACK_BRIDGE_OBJECT_34,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_BRIDGE_OBJECT_34() (ESR_Track34.ESR_Track34.CAN_TX_TRACK_BRIDGE_OBJECT_34)
#endif

/* Handle:  415,Name: CAN_TX_TRACK_MED_RANGE_MODE_34,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_MED_RANGE_MODE_34() (ESR_Track34.ESR_Track34.CAN_TX_TRACK_MED_RANGE_MODE_34)
#endif

/* Handle:  416,Name:       CAN_TX_TRACK_ONCOMING_33,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ONCOMING_33()    (ESR_Track33.ESR_Track33.CAN_TX_TRACK_ONCOMING_33)
#endif

/* Handle:  417,Name: CAN_TX_TRACK_GROUPING_CHANGED_33,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_GROUPING_CHANGED_33() (ESR_Track33.ESR_Track33.CAN_TX_TRACK_GROUPING_CHANGED_33)
#endif

/* Handle:  418,Name:       CAN_TX_TRACK_LAT_RATE_33,Size:  6,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_LAT_RATE_33()    (ESR_Track33.ESR_Track33.CAN_TX_TRACK_LAT_RATE_33)
#endif

/* Handle:  420,Name:         CAN_TX_TRACK_STATUS_33,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_STATUS_33()      (ESR_Track33.ESR_Track33.CAN_TX_TRACK_STATUS_33)
#endif

/* Handle:  423,Name:          CAN_TX_TRACK_WIDTH_33,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_WIDTH_33()       (ESR_Track33.ESR_Track33.CAN_TX_TRACK_WIDTH_33)
#endif

/* Handle:  424,Name:  CAN_TX_TRACK_ROLLING_COUNT_33,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ROLLING_COUNT_33() (ESR_Track33.ESR_Track33.CAN_TX_TRACK_ROLLING_COUNT_33)
#endif

/* Handle:  425,Name:  CAN_TX_TRACK_BRIDGE_OBJECT_33,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_BRIDGE_OBJECT_33() (ESR_Track33.ESR_Track33.CAN_TX_TRACK_BRIDGE_OBJECT_33)
#endif

/* Handle:  427,Name: CAN_TX_TRACK_MED_RANGE_MODE_33,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_MED_RANGE_MODE_33() (ESR_Track33.ESR_Track33.CAN_TX_TRACK_MED_RANGE_MODE_33)
#endif

/* Handle:  428,Name:       CAN_TX_TRACK_ONCOMING_32,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ONCOMING_32()    (ESR_Track32.ESR_Track32.CAN_TX_TRACK_ONCOMING_32)
#endif

/* Handle:  429,Name: CAN_TX_TRACK_GROUPING_CHANGED_32,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_GROUPING_CHANGED_32() (ESR_Track32.ESR_Track32.CAN_TX_TRACK_GROUPING_CHANGED_32)
#endif

/* Handle:  430,Name:       CAN_TX_TRACK_LAT_RATE_32,Size:  6,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_LAT_RATE_32()    (ESR_Track32.ESR_Track32.CAN_TX_TRACK_LAT_RATE_32)
#endif

/* Handle:  432,Name:         CAN_TX_TRACK_STATUS_32,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_STATUS_32()      (ESR_Track32.ESR_Track32.CAN_TX_TRACK_STATUS_32)
#endif

/* Handle:  435,Name:          CAN_TX_TRACK_WIDTH_32,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_WIDTH_32()       (ESR_Track32.ESR_Track32.CAN_TX_TRACK_WIDTH_32)
#endif

/* Handle:  436,Name:  CAN_TX_TRACK_ROLLING_COUNT_32,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ROLLING_COUNT_32() (ESR_Track32.ESR_Track32.CAN_TX_TRACK_ROLLING_COUNT_32)
#endif

/* Handle:  437,Name:  CAN_TX_TRACK_BRIDGE_OBJECT_32,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_BRIDGE_OBJECT_32() (ESR_Track32.ESR_Track32.CAN_TX_TRACK_BRIDGE_OBJECT_32)
#endif

/* Handle:  439,Name: CAN_TX_TRACK_MED_RANGE_MODE_32,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_MED_RANGE_MODE_32() (ESR_Track32.ESR_Track32.CAN_TX_TRACK_MED_RANGE_MODE_32)
#endif

/* Handle:  440,Name:       CAN_TX_TRACK_ONCOMING_31,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ONCOMING_31()    (ESR_Track31.ESR_Track31.CAN_TX_TRACK_ONCOMING_31)
#endif

/* Handle:  441,Name: CAN_TX_TRACK_GROUPING_CHANGED_31,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_GROUPING_CHANGED_31() (ESR_Track31.ESR_Track31.CAN_TX_TRACK_GROUPING_CHANGED_31)
#endif

/* Handle:  442,Name:       CAN_TX_TRACK_LAT_RATE_31,Size:  6,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_LAT_RATE_31()    (ESR_Track31.ESR_Track31.CAN_TX_TRACK_LAT_RATE_31)
#endif

/* Handle:  444,Name:         CAN_TX_TRACK_STATUS_31,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_STATUS_31()      (ESR_Track31.ESR_Track31.CAN_TX_TRACK_STATUS_31)
#endif

/* Handle:  447,Name:          CAN_TX_TRACK_WIDTH_31,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_WIDTH_31()       (ESR_Track31.ESR_Track31.CAN_TX_TRACK_WIDTH_31)
#endif

/* Handle:  448,Name:  CAN_TX_TRACK_ROLLING_COUNT_31,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ROLLING_COUNT_31() (ESR_Track31.ESR_Track31.CAN_TX_TRACK_ROLLING_COUNT_31)
#endif

/* Handle:  449,Name:  CAN_TX_TRACK_BRIDGE_OBJECT_31,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_BRIDGE_OBJECT_31() (ESR_Track31.ESR_Track31.CAN_TX_TRACK_BRIDGE_OBJECT_31)
#endif

/* Handle:  451,Name: CAN_TX_TRACK_MED_RANGE_MODE_31,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_MED_RANGE_MODE_31() (ESR_Track31.ESR_Track31.CAN_TX_TRACK_MED_RANGE_MODE_31)
#endif

/* Handle:  452,Name:       CAN_TX_TRACK_ONCOMING_30,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ONCOMING_30()    (ESR_Track30.ESR_Track30.CAN_TX_TRACK_ONCOMING_30)
#endif

/* Handle:  453,Name: CAN_TX_TRACK_GROUPING_CHANGED_30,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_GROUPING_CHANGED_30() (ESR_Track30.ESR_Track30.CAN_TX_TRACK_GROUPING_CHANGED_30)
#endif

/* Handle:  454,Name:       CAN_TX_TRACK_LAT_RATE_30,Size:  6,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_LAT_RATE_30()    (ESR_Track30.ESR_Track30.CAN_TX_TRACK_LAT_RATE_30)
#endif

/* Handle:  456,Name:         CAN_TX_TRACK_STATUS_30,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_STATUS_30()      (ESR_Track30.ESR_Track30.CAN_TX_TRACK_STATUS_30)
#endif

/* Handle:  459,Name:          CAN_TX_TRACK_WIDTH_30,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_WIDTH_30()       (ESR_Track30.ESR_Track30.CAN_TX_TRACK_WIDTH_30)
#endif

/* Handle:  460,Name:  CAN_TX_TRACK_ROLLING_COUNT_30,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ROLLING_COUNT_30() (ESR_Track30.ESR_Track30.CAN_TX_TRACK_ROLLING_COUNT_30)
#endif

/* Handle:  461,Name:  CAN_TX_TRACK_BRIDGE_OBJECT_30,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_BRIDGE_OBJECT_30() (ESR_Track30.ESR_Track30.CAN_TX_TRACK_BRIDGE_OBJECT_30)
#endif

/* Handle:  463,Name: CAN_TX_TRACK_MED_RANGE_MODE_30,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_MED_RANGE_MODE_30() (ESR_Track30.ESR_Track30.CAN_TX_TRACK_MED_RANGE_MODE_30)
#endif

/* Handle:  464,Name:       CAN_TX_TRACK_ONCOMING_29,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ONCOMING_29()    (ESR_Track29.ESR_Track29.CAN_TX_TRACK_ONCOMING_29)
#endif

/* Handle:  465,Name: CAN_TX_TRACK_GROUPING_CHANGED_29,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_GROUPING_CHANGED_29() (ESR_Track29.ESR_Track29.CAN_TX_TRACK_GROUPING_CHANGED_29)
#endif

/* Handle:  466,Name:       CAN_TX_TRACK_LAT_RATE_29,Size:  6,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_LAT_RATE_29()    (ESR_Track29.ESR_Track29.CAN_TX_TRACK_LAT_RATE_29)
#endif

/* Handle:  468,Name:         CAN_TX_TRACK_STATUS_29,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_STATUS_29()      (ESR_Track29.ESR_Track29.CAN_TX_TRACK_STATUS_29)
#endif

/* Handle:  471,Name:          CAN_TX_TRACK_WIDTH_29,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_WIDTH_29()       (ESR_Track29.ESR_Track29.CAN_TX_TRACK_WIDTH_29)
#endif

/* Handle:  472,Name:  CAN_TX_TRACK_ROLLING_COUNT_29,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ROLLING_COUNT_29() (ESR_Track29.ESR_Track29.CAN_TX_TRACK_ROLLING_COUNT_29)
#endif

/* Handle:  473,Name:  CAN_TX_TRACK_BRIDGE_OBJECT_29,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_BRIDGE_OBJECT_29() (ESR_Track29.ESR_Track29.CAN_TX_TRACK_BRIDGE_OBJECT_29)
#endif

/* Handle:  475,Name: CAN_TX_TRACK_MED_RANGE_MODE_29,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_MED_RANGE_MODE_29() (ESR_Track29.ESR_Track29.CAN_TX_TRACK_MED_RANGE_MODE_29)
#endif

/* Handle:  476,Name:       CAN_TX_TRACK_ONCOMING_28,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ONCOMING_28()    (ESR_Track28.ESR_Track28.CAN_TX_TRACK_ONCOMING_28)
#endif

/* Handle:  477,Name: CAN_TX_TRACK_GROUPING_CHANGED_28,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_GROUPING_CHANGED_28() (ESR_Track28.ESR_Track28.CAN_TX_TRACK_GROUPING_CHANGED_28)
#endif

/* Handle:  478,Name:       CAN_TX_TRACK_LAT_RATE_28,Size:  6,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_LAT_RATE_28()    (ESR_Track28.ESR_Track28.CAN_TX_TRACK_LAT_RATE_28)
#endif

/* Handle:  480,Name:         CAN_TX_TRACK_STATUS_28,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_STATUS_28()      (ESR_Track28.ESR_Track28.CAN_TX_TRACK_STATUS_28)
#endif

/* Handle:  483,Name:          CAN_TX_TRACK_WIDTH_28,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_WIDTH_28()       (ESR_Track28.ESR_Track28.CAN_TX_TRACK_WIDTH_28)
#endif

/* Handle:  484,Name:  CAN_TX_TRACK_ROLLING_COUNT_28,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ROLLING_COUNT_28() (ESR_Track28.ESR_Track28.CAN_TX_TRACK_ROLLING_COUNT_28)
#endif

/* Handle:  485,Name:  CAN_TX_TRACK_BRIDGE_OBJECT_28,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_BRIDGE_OBJECT_28() (ESR_Track28.ESR_Track28.CAN_TX_TRACK_BRIDGE_OBJECT_28)
#endif

/* Handle:  487,Name: CAN_TX_TRACK_MED_RANGE_MODE_28,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_MED_RANGE_MODE_28() (ESR_Track28.ESR_Track28.CAN_TX_TRACK_MED_RANGE_MODE_28)
#endif

/* Handle:  488,Name:       CAN_TX_TRACK_ONCOMING_27,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ONCOMING_27()    (ESR_Track27.ESR_Track27.CAN_TX_TRACK_ONCOMING_27)
#endif

/* Handle:  489,Name: CAN_TX_TRACK_GROUPING_CHANGED_27,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_GROUPING_CHANGED_27() (ESR_Track27.ESR_Track27.CAN_TX_TRACK_GROUPING_CHANGED_27)
#endif

/* Handle:  490,Name:       CAN_TX_TRACK_LAT_RATE_27,Size:  6,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_LAT_RATE_27()    (ESR_Track27.ESR_Track27.CAN_TX_TRACK_LAT_RATE_27)
#endif

/* Handle:  492,Name:         CAN_TX_TRACK_STATUS_27,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_STATUS_27()      (ESR_Track27.ESR_Track27.CAN_TX_TRACK_STATUS_27)
#endif

/* Handle:  495,Name:          CAN_TX_TRACK_WIDTH_27,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_WIDTH_27()       (ESR_Track27.ESR_Track27.CAN_TX_TRACK_WIDTH_27)
#endif

/* Handle:  496,Name:  CAN_TX_TRACK_ROLLING_COUNT_27,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ROLLING_COUNT_27() (ESR_Track27.ESR_Track27.CAN_TX_TRACK_ROLLING_COUNT_27)
#endif

/* Handle:  497,Name:  CAN_TX_TRACK_BRIDGE_OBJECT_27,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_BRIDGE_OBJECT_27() (ESR_Track27.ESR_Track27.CAN_TX_TRACK_BRIDGE_OBJECT_27)
#endif

/* Handle:  499,Name: CAN_TX_TRACK_MED_RANGE_MODE_27,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_MED_RANGE_MODE_27() (ESR_Track27.ESR_Track27.CAN_TX_TRACK_MED_RANGE_MODE_27)
#endif

/* Handle:  500,Name:       CAN_TX_TRACK_ONCOMING_26,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ONCOMING_26()    (ESR_Track26.ESR_Track26.CAN_TX_TRACK_ONCOMING_26)
#endif

/* Handle:  501,Name: CAN_TX_TRACK_GROUPING_CHANGED_26,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_GROUPING_CHANGED_26() (ESR_Track26.ESR_Track26.CAN_TX_TRACK_GROUPING_CHANGED_26)
#endif

/* Handle:  502,Name:       CAN_TX_TRACK_LAT_RATE_26,Size:  6,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_LAT_RATE_26()    (ESR_Track26.ESR_Track26.CAN_TX_TRACK_LAT_RATE_26)
#endif

/* Handle:  504,Name:         CAN_TX_TRACK_STATUS_26,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_STATUS_26()      (ESR_Track26.ESR_Track26.CAN_TX_TRACK_STATUS_26)
#endif

/* Handle:  507,Name:          CAN_TX_TRACK_WIDTH_26,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_WIDTH_26()       (ESR_Track26.ESR_Track26.CAN_TX_TRACK_WIDTH_26)
#endif

/* Handle:  508,Name:  CAN_TX_TRACK_ROLLING_COUNT_26,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ROLLING_COUNT_26() (ESR_Track26.ESR_Track26.CAN_TX_TRACK_ROLLING_COUNT_26)
#endif

/* Handle:  509,Name:  CAN_TX_TRACK_BRIDGE_OBJECT_26,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_BRIDGE_OBJECT_26() (ESR_Track26.ESR_Track26.CAN_TX_TRACK_BRIDGE_OBJECT_26)
#endif

/* Handle:  511,Name: CAN_TX_TRACK_MED_RANGE_MODE_26,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_MED_RANGE_MODE_26() (ESR_Track26.ESR_Track26.CAN_TX_TRACK_MED_RANGE_MODE_26)
#endif

/* Handle:  512,Name:       CAN_TX_TRACK_ONCOMING_25,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ONCOMING_25()    (ESR_Track25.ESR_Track25.CAN_TX_TRACK_ONCOMING_25)
#endif

/* Handle:  513,Name: CAN_TX_TRACK_GROUPING_CHANGED_25,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_GROUPING_CHANGED_25() (ESR_Track25.ESR_Track25.CAN_TX_TRACK_GROUPING_CHANGED_25)
#endif

/* Handle:  514,Name:       CAN_TX_TRACK_LAT_RATE_25,Size:  6,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_LAT_RATE_25()    (ESR_Track25.ESR_Track25.CAN_TX_TRACK_LAT_RATE_25)
#endif

/* Handle:  516,Name:         CAN_TX_TRACK_STATUS_25,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_STATUS_25()      (ESR_Track25.ESR_Track25.CAN_TX_TRACK_STATUS_25)
#endif

/* Handle:  519,Name:          CAN_TX_TRACK_WIDTH_25,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_WIDTH_25()       (ESR_Track25.ESR_Track25.CAN_TX_TRACK_WIDTH_25)
#endif

/* Handle:  520,Name:  CAN_TX_TRACK_ROLLING_COUNT_25,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ROLLING_COUNT_25() (ESR_Track25.ESR_Track25.CAN_TX_TRACK_ROLLING_COUNT_25)
#endif

/* Handle:  521,Name:  CAN_TX_TRACK_BRIDGE_OBJECT_25,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_BRIDGE_OBJECT_25() (ESR_Track25.ESR_Track25.CAN_TX_TRACK_BRIDGE_OBJECT_25)
#endif

/* Handle:  523,Name: CAN_TX_TRACK_MED_RANGE_MODE_25,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_MED_RANGE_MODE_25() (ESR_Track25.ESR_Track25.CAN_TX_TRACK_MED_RANGE_MODE_25)
#endif

/* Handle:  524,Name:       CAN_TX_TRACK_ONCOMING_24,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ONCOMING_24()    (ESR_Track24.ESR_Track24.CAN_TX_TRACK_ONCOMING_24)
#endif

/* Handle:  525,Name: CAN_TX_TRACK_GROUPING_CHANGED_24,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_GROUPING_CHANGED_24() (ESR_Track24.ESR_Track24.CAN_TX_TRACK_GROUPING_CHANGED_24)
#endif

/* Handle:  526,Name:       CAN_TX_TRACK_LAT_RATE_24,Size:  6,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_LAT_RATE_24()    (ESR_Track24.ESR_Track24.CAN_TX_TRACK_LAT_RATE_24)
#endif

/* Handle:  528,Name:         CAN_TX_TRACK_STATUS_24,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_STATUS_24()      (ESR_Track24.ESR_Track24.CAN_TX_TRACK_STATUS_24)
#endif

/* Handle:  531,Name:          CAN_TX_TRACK_WIDTH_24,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_WIDTH_24()       (ESR_Track24.ESR_Track24.CAN_TX_TRACK_WIDTH_24)
#endif

/* Handle:  532,Name:  CAN_TX_TRACK_ROLLING_COUNT_24,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ROLLING_COUNT_24() (ESR_Track24.ESR_Track24.CAN_TX_TRACK_ROLLING_COUNT_24)
#endif

/* Handle:  533,Name:  CAN_TX_TRACK_BRIDGE_OBJECT_24,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_BRIDGE_OBJECT_24() (ESR_Track24.ESR_Track24.CAN_TX_TRACK_BRIDGE_OBJECT_24)
#endif

/* Handle:  535,Name: CAN_TX_TRACK_MED_RANGE_MODE_24,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_MED_RANGE_MODE_24() (ESR_Track24.ESR_Track24.CAN_TX_TRACK_MED_RANGE_MODE_24)
#endif

/* Handle:  536,Name:       CAN_TX_TRACK_ONCOMING_23,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ONCOMING_23()    (ESR_Track23.ESR_Track23.CAN_TX_TRACK_ONCOMING_23)
#endif

/* Handle:  537,Name: CAN_TX_TRACK_GROUPING_CHANGED_23,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_GROUPING_CHANGED_23() (ESR_Track23.ESR_Track23.CAN_TX_TRACK_GROUPING_CHANGED_23)
#endif

/* Handle:  538,Name:       CAN_TX_TRACK_LAT_RATE_23,Size:  6,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_LAT_RATE_23()    (ESR_Track23.ESR_Track23.CAN_TX_TRACK_LAT_RATE_23)
#endif

/* Handle:  540,Name:         CAN_TX_TRACK_STATUS_23,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_STATUS_23()      (ESR_Track23.ESR_Track23.CAN_TX_TRACK_STATUS_23)
#endif

/* Handle:  543,Name:          CAN_TX_TRACK_WIDTH_23,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_WIDTH_23()       (ESR_Track23.ESR_Track23.CAN_TX_TRACK_WIDTH_23)
#endif

/* Handle:  544,Name:  CAN_TX_TRACK_ROLLING_COUNT_23,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ROLLING_COUNT_23() (ESR_Track23.ESR_Track23.CAN_TX_TRACK_ROLLING_COUNT_23)
#endif

/* Handle:  545,Name:  CAN_TX_TRACK_BRIDGE_OBJECT_23,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_BRIDGE_OBJECT_23() (ESR_Track23.ESR_Track23.CAN_TX_TRACK_BRIDGE_OBJECT_23)
#endif

/* Handle:  547,Name: CAN_TX_TRACK_MED_RANGE_MODE_23,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_MED_RANGE_MODE_23() (ESR_Track23.ESR_Track23.CAN_TX_TRACK_MED_RANGE_MODE_23)
#endif

/* Handle:  548,Name:       CAN_TX_TRACK_ONCOMING_22,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ONCOMING_22()    (ESR_Track22.ESR_Track22.CAN_TX_TRACK_ONCOMING_22)
#endif

/* Handle:  549,Name: CAN_TX_TRACK_GROUPING_CHANGED_22,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_GROUPING_CHANGED_22() (ESR_Track22.ESR_Track22.CAN_TX_TRACK_GROUPING_CHANGED_22)
#endif

/* Handle:  550,Name:       CAN_TX_TRACK_LAT_RATE_22,Size:  6,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_LAT_RATE_22()    (ESR_Track22.ESR_Track22.CAN_TX_TRACK_LAT_RATE_22)
#endif

/* Handle:  552,Name:         CAN_TX_TRACK_STATUS_22,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_STATUS_22()      (ESR_Track22.ESR_Track22.CAN_TX_TRACK_STATUS_22)
#endif

/* Handle:  555,Name:          CAN_TX_TRACK_WIDTH_22,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_WIDTH_22()       (ESR_Track22.ESR_Track22.CAN_TX_TRACK_WIDTH_22)
#endif

/* Handle:  556,Name:  CAN_TX_TRACK_ROLLING_COUNT_22,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ROLLING_COUNT_22() (ESR_Track22.ESR_Track22.CAN_TX_TRACK_ROLLING_COUNT_22)
#endif

/* Handle:  557,Name:  CAN_TX_TRACK_BRIDGE_OBJECT_22,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_BRIDGE_OBJECT_22() (ESR_Track22.ESR_Track22.CAN_TX_TRACK_BRIDGE_OBJECT_22)
#endif

/* Handle:  559,Name: CAN_TX_TRACK_MED_RANGE_MODE_22,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_MED_RANGE_MODE_22() (ESR_Track22.ESR_Track22.CAN_TX_TRACK_MED_RANGE_MODE_22)
#endif

/* Handle:  560,Name:       CAN_TX_TRACK_ONCOMING_21,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ONCOMING_21()    (ESR_Track21.ESR_Track21.CAN_TX_TRACK_ONCOMING_21)
#endif

/* Handle:  561,Name: CAN_TX_TRACK_GROUPING_CHANGED_21,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_GROUPING_CHANGED_21() (ESR_Track21.ESR_Track21.CAN_TX_TRACK_GROUPING_CHANGED_21)
#endif

/* Handle:  562,Name:       CAN_TX_TRACK_LAT_RATE_21,Size:  6,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_LAT_RATE_21()    (ESR_Track21.ESR_Track21.CAN_TX_TRACK_LAT_RATE_21)
#endif

/* Handle:  564,Name:         CAN_TX_TRACK_STATUS_21,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_STATUS_21()      (ESR_Track21.ESR_Track21.CAN_TX_TRACK_STATUS_21)
#endif

/* Handle:  567,Name:          CAN_TX_TRACK_WIDTH_21,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_WIDTH_21()       (ESR_Track21.ESR_Track21.CAN_TX_TRACK_WIDTH_21)
#endif

/* Handle:  568,Name:  CAN_TX_TRACK_ROLLING_COUNT_21,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ROLLING_COUNT_21() (ESR_Track21.ESR_Track21.CAN_TX_TRACK_ROLLING_COUNT_21)
#endif

/* Handle:  569,Name:  CAN_TX_TRACK_BRIDGE_OBJECT_21,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_BRIDGE_OBJECT_21() (ESR_Track21.ESR_Track21.CAN_TX_TRACK_BRIDGE_OBJECT_21)
#endif

/* Handle:  571,Name: CAN_TX_TRACK_MED_RANGE_MODE_21,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_MED_RANGE_MODE_21() (ESR_Track21.ESR_Track21.CAN_TX_TRACK_MED_RANGE_MODE_21)
#endif

/* Handle:  572,Name:       CAN_TX_TRACK_ONCOMING_20,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ONCOMING_20()    (ESR_Track20.ESR_Track20.CAN_TX_TRACK_ONCOMING_20)
#endif

/* Handle:  573,Name: CAN_TX_TRACK_GROUPING_CHANGED_20,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_GROUPING_CHANGED_20() (ESR_Track20.ESR_Track20.CAN_TX_TRACK_GROUPING_CHANGED_20)
#endif

/* Handle:  574,Name:       CAN_TX_TRACK_LAT_RATE_20,Size:  6,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_LAT_RATE_20()    (ESR_Track20.ESR_Track20.CAN_TX_TRACK_LAT_RATE_20)
#endif

/* Handle:  576,Name:         CAN_TX_TRACK_STATUS_20,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_STATUS_20()      (ESR_Track20.ESR_Track20.CAN_TX_TRACK_STATUS_20)
#endif

/* Handle:  579,Name:          CAN_TX_TRACK_WIDTH_20,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_WIDTH_20()       (ESR_Track20.ESR_Track20.CAN_TX_TRACK_WIDTH_20)
#endif

/* Handle:  580,Name:  CAN_TX_TRACK_ROLLING_COUNT_20,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ROLLING_COUNT_20() (ESR_Track20.ESR_Track20.CAN_TX_TRACK_ROLLING_COUNT_20)
#endif

/* Handle:  581,Name:  CAN_TX_TRACK_BRIDGE_OBJECT_20,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_BRIDGE_OBJECT_20() (ESR_Track20.ESR_Track20.CAN_TX_TRACK_BRIDGE_OBJECT_20)
#endif

/* Handle:  583,Name: CAN_TX_TRACK_MED_RANGE_MODE_20,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_MED_RANGE_MODE_20() (ESR_Track20.ESR_Track20.CAN_TX_TRACK_MED_RANGE_MODE_20)
#endif

/* Handle:  584,Name:       CAN_TX_TRACK_ONCOMING_19,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ONCOMING_19()    (ESR_Track19.ESR_Track19.CAN_TX_TRACK_ONCOMING_19)
#endif

/* Handle:  585,Name: CAN_TX_TRACK_GROUPING_CHANGED_19,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_GROUPING_CHANGED_19() (ESR_Track19.ESR_Track19.CAN_TX_TRACK_GROUPING_CHANGED_19)
#endif

/* Handle:  586,Name:       CAN_TX_TRACK_LAT_RATE_19,Size:  6,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_LAT_RATE_19()    (ESR_Track19.ESR_Track19.CAN_TX_TRACK_LAT_RATE_19)
#endif

/* Handle:  588,Name:         CAN_TX_TRACK_STATUS_19,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_STATUS_19()      (ESR_Track19.ESR_Track19.CAN_TX_TRACK_STATUS_19)
#endif

/* Handle:  591,Name:          CAN_TX_TRACK_WIDTH_19,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_WIDTH_19()       (ESR_Track19.ESR_Track19.CAN_TX_TRACK_WIDTH_19)
#endif

/* Handle:  592,Name:  CAN_TX_TRACK_ROLLING_COUNT_19,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ROLLING_COUNT_19() (ESR_Track19.ESR_Track19.CAN_TX_TRACK_ROLLING_COUNT_19)
#endif

/* Handle:  593,Name:  CAN_TX_TRACK_BRIDGE_OBJECT_19,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_BRIDGE_OBJECT_19() (ESR_Track19.ESR_Track19.CAN_TX_TRACK_BRIDGE_OBJECT_19)
#endif

/* Handle:  595,Name: CAN_TX_TRACK_MED_RANGE_MODE_19,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_MED_RANGE_MODE_19() (ESR_Track19.ESR_Track19.CAN_TX_TRACK_MED_RANGE_MODE_19)
#endif

/* Handle:  596,Name:       CAN_TX_TRACK_ONCOMING_18,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ONCOMING_18()    (ESR_Track18.ESR_Track18.CAN_TX_TRACK_ONCOMING_18)
#endif

/* Handle:  597,Name: CAN_TX_TRACK_GROUPING_CHANGED_18,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_GROUPING_CHANGED_18() (ESR_Track18.ESR_Track18.CAN_TX_TRACK_GROUPING_CHANGED_18)
#endif

/* Handle:  598,Name:       CAN_TX_TRACK_LAT_RATE_18,Size:  6,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_LAT_RATE_18()    (ESR_Track18.ESR_Track18.CAN_TX_TRACK_LAT_RATE_18)
#endif

/* Handle:  600,Name:         CAN_TX_TRACK_STATUS_18,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_STATUS_18()      (ESR_Track18.ESR_Track18.CAN_TX_TRACK_STATUS_18)
#endif

/* Handle:  603,Name:          CAN_TX_TRACK_WIDTH_18,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_WIDTH_18()       (ESR_Track18.ESR_Track18.CAN_TX_TRACK_WIDTH_18)
#endif

/* Handle:  604,Name:  CAN_TX_TRACK_ROLLING_COUNT_18,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ROLLING_COUNT_18() (ESR_Track18.ESR_Track18.CAN_TX_TRACK_ROLLING_COUNT_18)
#endif

/* Handle:  605,Name:  CAN_TX_TRACK_BRIDGE_OBJECT_18,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_BRIDGE_OBJECT_18() (ESR_Track18.ESR_Track18.CAN_TX_TRACK_BRIDGE_OBJECT_18)
#endif

/* Handle:  607,Name: CAN_TX_TRACK_MED_RANGE_MODE_18,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_MED_RANGE_MODE_18() (ESR_Track18.ESR_Track18.CAN_TX_TRACK_MED_RANGE_MODE_18)
#endif

/* Handle:  608,Name:       CAN_TX_TRACK_ONCOMING_17,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ONCOMING_17()    (ESR_Track17.ESR_Track17.CAN_TX_TRACK_ONCOMING_17)
#endif

/* Handle:  609,Name: CAN_TX_TRACK_GROUPING_CHANGED_17,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_GROUPING_CHANGED_17() (ESR_Track17.ESR_Track17.CAN_TX_TRACK_GROUPING_CHANGED_17)
#endif

/* Handle:  610,Name:       CAN_TX_TRACK_LAT_RATE_17,Size:  6,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_LAT_RATE_17()    (ESR_Track17.ESR_Track17.CAN_TX_TRACK_LAT_RATE_17)
#endif

/* Handle:  612,Name:         CAN_TX_TRACK_STATUS_17,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_STATUS_17()      (ESR_Track17.ESR_Track17.CAN_TX_TRACK_STATUS_17)
#endif

/* Handle:  615,Name:          CAN_TX_TRACK_WIDTH_17,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_WIDTH_17()       (ESR_Track17.ESR_Track17.CAN_TX_TRACK_WIDTH_17)
#endif

/* Handle:  616,Name:  CAN_TX_TRACK_ROLLING_COUNT_17,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ROLLING_COUNT_17() (ESR_Track17.ESR_Track17.CAN_TX_TRACK_ROLLING_COUNT_17)
#endif

/* Handle:  617,Name:  CAN_TX_TRACK_BRIDGE_OBJECT_17,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_BRIDGE_OBJECT_17() (ESR_Track17.ESR_Track17.CAN_TX_TRACK_BRIDGE_OBJECT_17)
#endif

/* Handle:  619,Name: CAN_TX_TRACK_MED_RANGE_MODE_17,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_MED_RANGE_MODE_17() (ESR_Track17.ESR_Track17.CAN_TX_TRACK_MED_RANGE_MODE_17)
#endif

/* Handle:  620,Name:       CAN_TX_TRACK_ONCOMING_16,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ONCOMING_16()    (ESR_Track16.ESR_Track16.CAN_TX_TRACK_ONCOMING_16)
#endif

/* Handle:  621,Name: CAN_TX_TRACK_GROUPING_CHANGED_16,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_GROUPING_CHANGED_16() (ESR_Track16.ESR_Track16.CAN_TX_TRACK_GROUPING_CHANGED_16)
#endif

/* Handle:  622,Name:       CAN_TX_TRACK_LAT_RATE_16,Size:  6,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_LAT_RATE_16()    (ESR_Track16.ESR_Track16.CAN_TX_TRACK_LAT_RATE_16)
#endif

/* Handle:  624,Name:         CAN_TX_TRACK_STATUS_16,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_STATUS_16()      (ESR_Track16.ESR_Track16.CAN_TX_TRACK_STATUS_16)
#endif

/* Handle:  627,Name:          CAN_TX_TRACK_WIDTH_16,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_WIDTH_16()       (ESR_Track16.ESR_Track16.CAN_TX_TRACK_WIDTH_16)
#endif

/* Handle:  628,Name:  CAN_TX_TRACK_ROLLING_COUNT_16,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ROLLING_COUNT_16() (ESR_Track16.ESR_Track16.CAN_TX_TRACK_ROLLING_COUNT_16)
#endif

/* Handle:  629,Name:  CAN_TX_TRACK_BRIDGE_OBJECT_16,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_BRIDGE_OBJECT_16() (ESR_Track16.ESR_Track16.CAN_TX_TRACK_BRIDGE_OBJECT_16)
#endif

/* Handle:  631,Name: CAN_TX_TRACK_MED_RANGE_MODE_16,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_MED_RANGE_MODE_16() (ESR_Track16.ESR_Track16.CAN_TX_TRACK_MED_RANGE_MODE_16)
#endif

/* Handle:  632,Name:       CAN_TX_TRACK_ONCOMING_15,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ONCOMING_15()    (ESR_Track15.ESR_Track15.CAN_TX_TRACK_ONCOMING_15)
#endif

/* Handle:  633,Name: CAN_TX_TRACK_GROUPING_CHANGED_15,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_GROUPING_CHANGED_15() (ESR_Track15.ESR_Track15.CAN_TX_TRACK_GROUPING_CHANGED_15)
#endif

/* Handle:  634,Name:       CAN_TX_TRACK_LAT_RATE_15,Size:  6,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_LAT_RATE_15()    (ESR_Track15.ESR_Track15.CAN_TX_TRACK_LAT_RATE_15)
#endif

/* Handle:  636,Name:         CAN_TX_TRACK_STATUS_15,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_STATUS_15()      (ESR_Track15.ESR_Track15.CAN_TX_TRACK_STATUS_15)
#endif

/* Handle:  639,Name:          CAN_TX_TRACK_WIDTH_15,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_WIDTH_15()       (ESR_Track15.ESR_Track15.CAN_TX_TRACK_WIDTH_15)
#endif

/* Handle:  640,Name:  CAN_TX_TRACK_ROLLING_COUNT_15,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ROLLING_COUNT_15() (ESR_Track15.ESR_Track15.CAN_TX_TRACK_ROLLING_COUNT_15)
#endif

/* Handle:  641,Name:  CAN_TX_TRACK_BRIDGE_OBJECT_15,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_BRIDGE_OBJECT_15() (ESR_Track15.ESR_Track15.CAN_TX_TRACK_BRIDGE_OBJECT_15)
#endif

/* Handle:  643,Name: CAN_TX_TRACK_MED_RANGE_MODE_15,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_MED_RANGE_MODE_15() (ESR_Track15.ESR_Track15.CAN_TX_TRACK_MED_RANGE_MODE_15)
#endif

/* Handle:  644,Name:       CAN_TX_TRACK_ONCOMING_14,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ONCOMING_14()    (ESR_Track14.ESR_Track14.CAN_TX_TRACK_ONCOMING_14)
#endif

/* Handle:  645,Name: CAN_TX_TRACK_GROUPING_CHANGED_14,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_GROUPING_CHANGED_14() (ESR_Track14.ESR_Track14.CAN_TX_TRACK_GROUPING_CHANGED_14)
#endif

/* Handle:  646,Name:       CAN_TX_TRACK_LAT_RATE_14,Size:  6,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_LAT_RATE_14()    (ESR_Track14.ESR_Track14.CAN_TX_TRACK_LAT_RATE_14)
#endif

/* Handle:  648,Name:         CAN_TX_TRACK_STATUS_14,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_STATUS_14()      (ESR_Track14.ESR_Track14.CAN_TX_TRACK_STATUS_14)
#endif

/* Handle:  651,Name:          CAN_TX_TRACK_WIDTH_14,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_WIDTH_14()       (ESR_Track14.ESR_Track14.CAN_TX_TRACK_WIDTH_14)
#endif

/* Handle:  652,Name:  CAN_TX_TRACK_ROLLING_COUNT_14,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ROLLING_COUNT_14() (ESR_Track14.ESR_Track14.CAN_TX_TRACK_ROLLING_COUNT_14)
#endif

/* Handle:  653,Name:  CAN_TX_TRACK_BRIDGE_OBJECT_14,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_BRIDGE_OBJECT_14() (ESR_Track14.ESR_Track14.CAN_TX_TRACK_BRIDGE_OBJECT_14)
#endif

/* Handle:  655,Name: CAN_TX_TRACK_MED_RANGE_MODE_14,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_MED_RANGE_MODE_14() (ESR_Track14.ESR_Track14.CAN_TX_TRACK_MED_RANGE_MODE_14)
#endif

/* Handle:  656,Name:       CAN_TX_TRACK_ONCOMING_13,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ONCOMING_13()    (ESR_Track13.ESR_Track13.CAN_TX_TRACK_ONCOMING_13)
#endif

/* Handle:  657,Name: CAN_TX_TRACK_GROUPING_CHANGED_13,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_GROUPING_CHANGED_13() (ESR_Track13.ESR_Track13.CAN_TX_TRACK_GROUPING_CHANGED_13)
#endif

/* Handle:  658,Name:       CAN_TX_TRACK_LAT_RATE_13,Size:  6,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_LAT_RATE_13()    (ESR_Track13.ESR_Track13.CAN_TX_TRACK_LAT_RATE_13)
#endif

/* Handle:  660,Name:         CAN_TX_TRACK_STATUS_13,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_STATUS_13()      (ESR_Track13.ESR_Track13.CAN_TX_TRACK_STATUS_13)
#endif

/* Handle:  663,Name:          CAN_TX_TRACK_WIDTH_13,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_WIDTH_13()       (ESR_Track13.ESR_Track13.CAN_TX_TRACK_WIDTH_13)
#endif

/* Handle:  664,Name:  CAN_TX_TRACK_ROLLING_COUNT_13,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ROLLING_COUNT_13() (ESR_Track13.ESR_Track13.CAN_TX_TRACK_ROLLING_COUNT_13)
#endif

/* Handle:  665,Name:  CAN_TX_TRACK_BRIDGE_OBJECT_13,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_BRIDGE_OBJECT_13() (ESR_Track13.ESR_Track13.CAN_TX_TRACK_BRIDGE_OBJECT_13)
#endif

/* Handle:  667,Name: CAN_TX_TRACK_MED_RANGE_MODE_13,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_MED_RANGE_MODE_13() (ESR_Track13.ESR_Track13.CAN_TX_TRACK_MED_RANGE_MODE_13)
#endif

/* Handle:  668,Name:       CAN_TX_TRACK_ONCOMING_12,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ONCOMING_12()    (ESR_Track12.ESR_Track12.CAN_TX_TRACK_ONCOMING_12)
#endif

/* Handle:  669,Name: CAN_TX_TRACK_GROUPING_CHANGED_12,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_GROUPING_CHANGED_12() (ESR_Track12.ESR_Track12.CAN_TX_TRACK_GROUPING_CHANGED_12)
#endif

/* Handle:  670,Name:       CAN_TX_TRACK_LAT_RATE_12,Size:  6,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_LAT_RATE_12()    (ESR_Track12.ESR_Track12.CAN_TX_TRACK_LAT_RATE_12)
#endif

/* Handle:  672,Name:         CAN_TX_TRACK_STATUS_12,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_STATUS_12()      (ESR_Track12.ESR_Track12.CAN_TX_TRACK_STATUS_12)
#endif

/* Handle:  675,Name:          CAN_TX_TRACK_WIDTH_12,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_WIDTH_12()       (ESR_Track12.ESR_Track12.CAN_TX_TRACK_WIDTH_12)
#endif

/* Handle:  676,Name:  CAN_TX_TRACK_ROLLING_COUNT_12,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ROLLING_COUNT_12() (ESR_Track12.ESR_Track12.CAN_TX_TRACK_ROLLING_COUNT_12)
#endif

/* Handle:  677,Name:  CAN_TX_TRACK_BRIDGE_OBJECT_12,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_BRIDGE_OBJECT_12() (ESR_Track12.ESR_Track12.CAN_TX_TRACK_BRIDGE_OBJECT_12)
#endif

/* Handle:  679,Name: CAN_TX_TRACK_MED_RANGE_MODE_12,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_MED_RANGE_MODE_12() (ESR_Track12.ESR_Track12.CAN_TX_TRACK_MED_RANGE_MODE_12)
#endif

/* Handle:  680,Name:       CAN_TX_TRACK_ONCOMING_11,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ONCOMING_11()    (ESR_Track11.ESR_Track11.CAN_TX_TRACK_ONCOMING_11)
#endif

/* Handle:  681,Name: CAN_TX_TRACK_GROUPING_CHANGED_11,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_GROUPING_CHANGED_11() (ESR_Track11.ESR_Track11.CAN_TX_TRACK_GROUPING_CHANGED_11)
#endif

/* Handle:  682,Name:       CAN_TX_TRACK_LAT_RATE_11,Size:  6,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_LAT_RATE_11()    (ESR_Track11.ESR_Track11.CAN_TX_TRACK_LAT_RATE_11)
#endif

/* Handle:  684,Name:         CAN_TX_TRACK_STATUS_11,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_STATUS_11()      (ESR_Track11.ESR_Track11.CAN_TX_TRACK_STATUS_11)
#endif

/* Handle:  687,Name:          CAN_TX_TRACK_WIDTH_11,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_WIDTH_11()       (ESR_Track11.ESR_Track11.CAN_TX_TRACK_WIDTH_11)
#endif

/* Handle:  688,Name:  CAN_TX_TRACK_ROLLING_COUNT_11,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ROLLING_COUNT_11() (ESR_Track11.ESR_Track11.CAN_TX_TRACK_ROLLING_COUNT_11)
#endif

/* Handle:  689,Name:  CAN_TX_TRACK_BRIDGE_OBJECT_11,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_BRIDGE_OBJECT_11() (ESR_Track11.ESR_Track11.CAN_TX_TRACK_BRIDGE_OBJECT_11)
#endif

/* Handle:  691,Name: CAN_TX_TRACK_MED_RANGE_MODE_11,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_MED_RANGE_MODE_11() (ESR_Track11.ESR_Track11.CAN_TX_TRACK_MED_RANGE_MODE_11)
#endif

/* Handle:  692,Name:       CAN_TX_TRACK_ONCOMING_10,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ONCOMING_10()    (ESR_Track10.ESR_Track10.CAN_TX_TRACK_ONCOMING_10)
#endif

/* Handle:  693,Name: CAN_TX_TRACK_GROUPING_CHANGED_10,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_GROUPING_CHANGED_10() (ESR_Track10.ESR_Track10.CAN_TX_TRACK_GROUPING_CHANGED_10)
#endif

/* Handle:  694,Name:       CAN_TX_TRACK_LAT_RATE_10,Size:  6,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_LAT_RATE_10()    (ESR_Track10.ESR_Track10.CAN_TX_TRACK_LAT_RATE_10)
#endif

/* Handle:  696,Name:         CAN_TX_TRACK_STATUS_10,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_STATUS_10()      (ESR_Track10.ESR_Track10.CAN_TX_TRACK_STATUS_10)
#endif

/* Handle:  699,Name:          CAN_TX_TRACK_WIDTH_10,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_WIDTH_10()       (ESR_Track10.ESR_Track10.CAN_TX_TRACK_WIDTH_10)
#endif

/* Handle:  700,Name:  CAN_TX_TRACK_ROLLING_COUNT_10,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ROLLING_COUNT_10() (ESR_Track10.ESR_Track10.CAN_TX_TRACK_ROLLING_COUNT_10)
#endif

/* Handle:  701,Name:  CAN_TX_TRACK_BRIDGE_OBJECT_10,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_BRIDGE_OBJECT_10() (ESR_Track10.ESR_Track10.CAN_TX_TRACK_BRIDGE_OBJECT_10)
#endif

/* Handle:  703,Name: CAN_TX_TRACK_MED_RANGE_MODE_10,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_MED_RANGE_MODE_10() (ESR_Track10.ESR_Track10.CAN_TX_TRACK_MED_RANGE_MODE_10)
#endif

/* Handle:  704,Name:       CAN_TX_TRACK_ONCOMING_09,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ONCOMING_09()    (ESR_Track09.ESR_Track09.CAN_TX_TRACK_ONCOMING_09)
#endif

/* Handle:  705,Name: CAN_TX_TRACK_GROUPING_CHANGED_09,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_GROUPING_CHANGED_09() (ESR_Track09.ESR_Track09.CAN_TX_TRACK_GROUPING_CHANGED_09)
#endif

/* Handle:  706,Name:       CAN_TX_TRACK_LAT_RATE_09,Size:  6,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_LAT_RATE_09()    (ESR_Track09.ESR_Track09.CAN_TX_TRACK_LAT_RATE_09)
#endif

/* Handle:  708,Name:         CAN_TX_TRACK_STATUS_09,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_STATUS_09()      (ESR_Track09.ESR_Track09.CAN_TX_TRACK_STATUS_09)
#endif

/* Handle:  711,Name:          CAN_TX_TRACK_WIDTH_09,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_WIDTH_09()       (ESR_Track09.ESR_Track09.CAN_TX_TRACK_WIDTH_09)
#endif

/* Handle:  712,Name:  CAN_TX_TRACK_ROLLING_COUNT_09,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ROLLING_COUNT_09() (ESR_Track09.ESR_Track09.CAN_TX_TRACK_ROLLING_COUNT_09)
#endif

/* Handle:  713,Name:  CAN_TX_TRACK_BRIDGE_OBJECT_09,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_BRIDGE_OBJECT_09() (ESR_Track09.ESR_Track09.CAN_TX_TRACK_BRIDGE_OBJECT_09)
#endif

/* Handle:  715,Name: CAN_TX_TRACK_MED_RANGE_MODE_09,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_MED_RANGE_MODE_09() (ESR_Track09.ESR_Track09.CAN_TX_TRACK_MED_RANGE_MODE_09)
#endif

/* Handle:  716,Name:       CAN_TX_TRACK_ONCOMING_08,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ONCOMING_08()    (ESR_Track08.ESR_Track08.CAN_TX_TRACK_ONCOMING_08)
#endif

/* Handle:  717,Name: CAN_TX_TRACK_GROUPING_CHANGED_08,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_GROUPING_CHANGED_08() (ESR_Track08.ESR_Track08.CAN_TX_TRACK_GROUPING_CHANGED_08)
#endif

/* Handle:  718,Name:       CAN_TX_TRACK_LAT_RATE_08,Size:  6,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_LAT_RATE_08()    (ESR_Track08.ESR_Track08.CAN_TX_TRACK_LAT_RATE_08)
#endif

/* Handle:  720,Name:         CAN_TX_TRACK_STATUS_08,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_STATUS_08()      (ESR_Track08.ESR_Track08.CAN_TX_TRACK_STATUS_08)
#endif

/* Handle:  723,Name:          CAN_TX_TRACK_WIDTH_08,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_WIDTH_08()       (ESR_Track08.ESR_Track08.CAN_TX_TRACK_WIDTH_08)
#endif

/* Handle:  724,Name:  CAN_TX_TRACK_ROLLING_COUNT_08,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ROLLING_COUNT_08() (ESR_Track08.ESR_Track08.CAN_TX_TRACK_ROLLING_COUNT_08)
#endif

/* Handle:  725,Name:  CAN_TX_TRACK_BRIDGE_OBJECT_08,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_BRIDGE_OBJECT_08() (ESR_Track08.ESR_Track08.CAN_TX_TRACK_BRIDGE_OBJECT_08)
#endif

/* Handle:  727,Name: CAN_TX_TRACK_MED_RANGE_MODE_08,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_MED_RANGE_MODE_08() (ESR_Track08.ESR_Track08.CAN_TX_TRACK_MED_RANGE_MODE_08)
#endif

/* Handle:  728,Name:       CAN_TX_TRACK_ONCOMING_07,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ONCOMING_07()    (ESR_Track07.ESR_Track07.CAN_TX_TRACK_ONCOMING_07)
#endif

/* Handle:  729,Name: CAN_TX_TRACK_GROUPING_CHANGED_07,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_GROUPING_CHANGED_07() (ESR_Track07.ESR_Track07.CAN_TX_TRACK_GROUPING_CHANGED_07)
#endif

/* Handle:  730,Name:       CAN_TX_TRACK_LAT_RATE_07,Size:  6,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_LAT_RATE_07()    (ESR_Track07.ESR_Track07.CAN_TX_TRACK_LAT_RATE_07)
#endif

/* Handle:  732,Name:         CAN_TX_TRACK_STATUS_07,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_STATUS_07()      (ESR_Track07.ESR_Track07.CAN_TX_TRACK_STATUS_07)
#endif

/* Handle:  735,Name:          CAN_TX_TRACK_WIDTH_07,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_WIDTH_07()       (ESR_Track07.ESR_Track07.CAN_TX_TRACK_WIDTH_07)
#endif

/* Handle:  736,Name:  CAN_TX_TRACK_ROLLING_COUNT_07,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ROLLING_COUNT_07() (ESR_Track07.ESR_Track07.CAN_TX_TRACK_ROLLING_COUNT_07)
#endif

/* Handle:  737,Name:  CAN_TX_TRACK_BRIDGE_OBJECT_07,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_BRIDGE_OBJECT_07() (ESR_Track07.ESR_Track07.CAN_TX_TRACK_BRIDGE_OBJECT_07)
#endif

/* Handle:  739,Name: CAN_TX_TRACK_MED_RANGE_MODE_07,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_MED_RANGE_MODE_07() (ESR_Track07.ESR_Track07.CAN_TX_TRACK_MED_RANGE_MODE_07)
#endif

/* Handle:  740,Name:       CAN_TX_TRACK_ONCOMING_06,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ONCOMING_06()    (ESR_Track06.ESR_Track06.CAN_TX_TRACK_ONCOMING_06)
#endif

/* Handle:  741,Name: CAN_TX_TRACK_GROUPING_CHANGED_06,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_GROUPING_CHANGED_06() (ESR_Track06.ESR_Track06.CAN_TX_TRACK_GROUPING_CHANGED_06)
#endif

/* Handle:  742,Name:       CAN_TX_TRACK_LAT_RATE_06,Size:  6,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_LAT_RATE_06()    (ESR_Track06.ESR_Track06.CAN_TX_TRACK_LAT_RATE_06)
#endif

/* Handle:  744,Name:         CAN_TX_TRACK_STATUS_06,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_STATUS_06()      (ESR_Track06.ESR_Track06.CAN_TX_TRACK_STATUS_06)
#endif

/* Handle:  747,Name:          CAN_TX_TRACK_WIDTH_06,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_WIDTH_06()       (ESR_Track06.ESR_Track06.CAN_TX_TRACK_WIDTH_06)
#endif

/* Handle:  748,Name:  CAN_TX_TRACK_ROLLING_COUNT_06,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ROLLING_COUNT_06() (ESR_Track06.ESR_Track06.CAN_TX_TRACK_ROLLING_COUNT_06)
#endif

/* Handle:  749,Name:  CAN_TX_TRACK_BRIDGE_OBJECT_06,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_BRIDGE_OBJECT_06() (ESR_Track06.ESR_Track06.CAN_TX_TRACK_BRIDGE_OBJECT_06)
#endif

/* Handle:  751,Name: CAN_TX_TRACK_MED_RANGE_MODE_06,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_MED_RANGE_MODE_06() (ESR_Track06.ESR_Track06.CAN_TX_TRACK_MED_RANGE_MODE_06)
#endif

/* Handle:  752,Name:       CAN_TX_TRACK_ONCOMING_05,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ONCOMING_05()    (ESR_Track05.ESR_Track05.CAN_TX_TRACK_ONCOMING_05)
#endif

/* Handle:  753,Name: CAN_TX_TRACK_GROUPING_CHANGED_05,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_GROUPING_CHANGED_05() (ESR_Track05.ESR_Track05.CAN_TX_TRACK_GROUPING_CHANGED_05)
#endif

/* Handle:  754,Name:       CAN_TX_TRACK_LAT_RATE_05,Size:  6,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_LAT_RATE_05()    (ESR_Track05.ESR_Track05.CAN_TX_TRACK_LAT_RATE_05)
#endif

/* Handle:  756,Name:         CAN_TX_TRACK_STATUS_05,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_STATUS_05()      (ESR_Track05.ESR_Track05.CAN_TX_TRACK_STATUS_05)
#endif

/* Handle:  759,Name:          CAN_TX_TRACK_WIDTH_05,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_WIDTH_05()       (ESR_Track05.ESR_Track05.CAN_TX_TRACK_WIDTH_05)
#endif

/* Handle:  760,Name:  CAN_TX_TRACK_ROLLING_COUNT_05,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ROLLING_COUNT_05() (ESR_Track05.ESR_Track05.CAN_TX_TRACK_ROLLING_COUNT_05)
#endif

/* Handle:  761,Name:  CAN_TX_TRACK_BRIDGE_OBJECT_05,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_BRIDGE_OBJECT_05() (ESR_Track05.ESR_Track05.CAN_TX_TRACK_BRIDGE_OBJECT_05)
#endif

/* Handle:  763,Name: CAN_TX_TRACK_MED_RANGE_MODE_05,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_MED_RANGE_MODE_05() (ESR_Track05.ESR_Track05.CAN_TX_TRACK_MED_RANGE_MODE_05)
#endif

/* Handle:  764,Name:       CAN_TX_TRACK_ONCOMING_04,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ONCOMING_04()    (ESR_Track04.ESR_Track04.CAN_TX_TRACK_ONCOMING_04)
#endif

/* Handle:  765,Name: CAN_TX_TRACK_GROUPING_CHANGED_04,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_GROUPING_CHANGED_04() (ESR_Track04.ESR_Track04.CAN_TX_TRACK_GROUPING_CHANGED_04)
#endif

/* Handle:  766,Name:       CAN_TX_TRACK_LAT_RATE_04,Size:  6,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_LAT_RATE_04()    (ESR_Track04.ESR_Track04.CAN_TX_TRACK_LAT_RATE_04)
#endif

/* Handle:  768,Name:         CAN_TX_TRACK_STATUS_04,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_STATUS_04()      (ESR_Track04.ESR_Track04.CAN_TX_TRACK_STATUS_04)
#endif

/* Handle:  771,Name:          CAN_TX_TRACK_WIDTH_04,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_WIDTH_04()       (ESR_Track04.ESR_Track04.CAN_TX_TRACK_WIDTH_04)
#endif

/* Handle:  772,Name:  CAN_TX_TRACK_ROLLING_COUNT_04,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ROLLING_COUNT_04() (ESR_Track04.ESR_Track04.CAN_TX_TRACK_ROLLING_COUNT_04)
#endif

/* Handle:  773,Name:  CAN_TX_TRACK_BRIDGE_OBJECT_04,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_BRIDGE_OBJECT_04() (ESR_Track04.ESR_Track04.CAN_TX_TRACK_BRIDGE_OBJECT_04)
#endif

/* Handle:  775,Name: CAN_TX_TRACK_MED_RANGE_MODE_04,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_MED_RANGE_MODE_04() (ESR_Track04.ESR_Track04.CAN_TX_TRACK_MED_RANGE_MODE_04)
#endif

/* Handle:  776,Name:       CAN_TX_TRACK_ONCOMING_03,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ONCOMING_03()    (ESR_Track03.ESR_Track03.CAN_TX_TRACK_ONCOMING_03)
#endif

/* Handle:  777,Name: CAN_TX_TRACK_GROUPING_CHANGED_03,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_GROUPING_CHANGED_03() (ESR_Track03.ESR_Track03.CAN_TX_TRACK_GROUPING_CHANGED_03)
#endif

/* Handle:  778,Name:       CAN_TX_TRACK_LAT_RATE_03,Size:  6,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_LAT_RATE_03()    (ESR_Track03.ESR_Track03.CAN_TX_TRACK_LAT_RATE_03)
#endif

/* Handle:  780,Name:         CAN_TX_TRACK_STATUS_03,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_STATUS_03()      (ESR_Track03.ESR_Track03.CAN_TX_TRACK_STATUS_03)
#endif

/* Handle:  783,Name:          CAN_TX_TRACK_WIDTH_03,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_WIDTH_03()       (ESR_Track03.ESR_Track03.CAN_TX_TRACK_WIDTH_03)
#endif

/* Handle:  784,Name:  CAN_TX_TRACK_ROLLING_COUNT_03,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ROLLING_COUNT_03() (ESR_Track03.ESR_Track03.CAN_TX_TRACK_ROLLING_COUNT_03)
#endif

/* Handle:  785,Name:  CAN_TX_TRACK_BRIDGE_OBJECT_03,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_BRIDGE_OBJECT_03() (ESR_Track03.ESR_Track03.CAN_TX_TRACK_BRIDGE_OBJECT_03)
#endif

/* Handle:  787,Name: CAN_TX_TRACK_MED_RANGE_MODE_03,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_MED_RANGE_MODE_03() (ESR_Track03.ESR_Track03.CAN_TX_TRACK_MED_RANGE_MODE_03)
#endif

/* Handle:  788,Name:       CAN_TX_TRACK_ONCOMING_02,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ONCOMING_02()    (ESR_Track02.ESR_Track02.CAN_TX_TRACK_ONCOMING_02)
#endif

/* Handle:  789,Name: CAN_TX_TRACK_GROUPING_CHANGED_02,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_GROUPING_CHANGED_02() (ESR_Track02.ESR_Track02.CAN_TX_TRACK_GROUPING_CHANGED_02)
#endif

/* Handle:  790,Name:       CAN_TX_TRACK_LAT_RATE_02,Size:  6,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_LAT_RATE_02()    (ESR_Track02.ESR_Track02.CAN_TX_TRACK_LAT_RATE_02)
#endif

/* Handle:  792,Name:         CAN_TX_TRACK_STATUS_02,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_STATUS_02()      (ESR_Track02.ESR_Track02.CAN_TX_TRACK_STATUS_02)
#endif

/* Handle:  795,Name:          CAN_TX_TRACK_WIDTH_02,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_WIDTH_02()       (ESR_Track02.ESR_Track02.CAN_TX_TRACK_WIDTH_02)
#endif

/* Handle:  796,Name:  CAN_TX_TRACK_ROLLING_COUNT_02,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ROLLING_COUNT_02() (ESR_Track02.ESR_Track02.CAN_TX_TRACK_ROLLING_COUNT_02)
#endif

/* Handle:  797,Name:  CAN_TX_TRACK_BRIDGE_OBJECT_02,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_BRIDGE_OBJECT_02() (ESR_Track02.ESR_Track02.CAN_TX_TRACK_BRIDGE_OBJECT_02)
#endif

/* Handle:  799,Name: CAN_TX_TRACK_MED_RANGE_MODE_02,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_MED_RANGE_MODE_02() (ESR_Track02.ESR_Track02.CAN_TX_TRACK_MED_RANGE_MODE_02)
#endif

/* Handle:  800,Name:       CAN_TX_TRACK_ONCOMING_01,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ONCOMING_01()    (ESR_Track01.ESR_Track01.CAN_TX_TRACK_ONCOMING_01)
#endif

/* Handle:  801,Name: CAN_TX_TRACK_GROUPING_CHANGED_01,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_GROUPING_CHANGED_01() (ESR_Track01.ESR_Track01.CAN_TX_TRACK_GROUPING_CHANGED_01)
#endif

/* Handle:  802,Name:       CAN_TX_TRACK_LAT_RATE_01,Size:  6,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_LAT_RATE_01()    (ESR_Track01.ESR_Track01.CAN_TX_TRACK_LAT_RATE_01)
#endif

/* Handle:  804,Name:         CAN_TX_TRACK_STATUS_01,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_STATUS_01()      (ESR_Track01.ESR_Track01.CAN_TX_TRACK_STATUS_01)
#endif

/* Handle:  807,Name:          CAN_TX_TRACK_WIDTH_01,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_WIDTH_01()       (ESR_Track01.ESR_Track01.CAN_TX_TRACK_WIDTH_01)
#endif

/* Handle:  808,Name:  CAN_TX_TRACK_ROLLING_COUNT_01,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_ROLLING_COUNT_01() (ESR_Track01.ESR_Track01.CAN_TX_TRACK_ROLLING_COUNT_01)
#endif

/* Handle:  809,Name:  CAN_TX_TRACK_BRIDGE_OBJECT_01,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_BRIDGE_OBJECT_01() (ESR_Track01.ESR_Track01.CAN_TX_TRACK_BRIDGE_OBJECT_01)
#endif

/* Handle:  811,Name: CAN_TX_TRACK_MED_RANGE_MODE_01,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRACK_MED_RANGE_MODE_01() (ESR_Track01.ESR_Track01.CAN_TX_TRACK_MED_RANGE_MODE_01)
#endif

/* Handle:  812,Name:         CAN_TX_ROLLING_COUNT_3,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_ROLLING_COUNT_3()      (ESR_Status4.ESR_Status4.CAN_TX_ROLLING_COUNT_3)
#endif

/* Handle:  813,Name:              CAN_TX_MR_LR_MODE,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_MR_LR_MODE()           (ESR_Status4.ESR_Status4.CAN_TX_MR_LR_MODE)
#endif

/* Handle:  814,Name:        CAN_TX_PARTIAL_BLOCKAGE,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_PARTIAL_BLOCKAGE()     (ESR_Status4.ESR_Status4.CAN_TX_PARTIAL_BLOCKAGE)
#endif

/* Handle:  815,Name:       CAN_TX_SIDELOBE_BLOCKAGE,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_SIDELOBE_BLOCKAGE()    (ESR_Status4.ESR_Status4.CAN_TX_SIDELOBE_BLOCKAGE)
#endif

/* Handle:  816,Name: CAN_TX_LR_ONLY_GRATING_LOBE_DET,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_LR_ONLY_GRATING_LOBE_DET() (ESR_Status4.ESR_Status4.CAN_TX_LR_ONLY_GRATING_LOBE_DET)
#endif

/* Handle:  817,Name:        CAN_TX_TRUCK_TARGET_DET,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TRUCK_TARGET_DET()     (ESR_Status4.ESR_Status4.CAN_TX_TRUCK_TARGET_DET)
#endif

/* Handle:  818,Name:             CAN_TX_PATH_ID_ACC,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_PATH_ID_ACC()          (ESR_Status4.ESR_Status4.CAN_TX_PATH_ID_ACC)
#endif

/* Handle:  819,Name:       CAN_TX_PATH_ID_CMBB_MOVE,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_PATH_ID_CMBB_MOVE()    (ESR_Status4.ESR_Status4.CAN_TX_PATH_ID_CMBB_MOVE)
#endif

/* Handle:  820,Name:       CAN_TX_PATH_ID_CMBB_STAT,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_PATH_ID_CMBB_STAT()    (ESR_Status4.ESR_Status4.CAN_TX_PATH_ID_CMBB_STAT)
#endif

/* Handle:  821,Name:        CAN_TX_PATH_ID_FCW_MOVE,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_PATH_ID_FCW_MOVE()     (ESR_Status4.ESR_Status4.CAN_TX_PATH_ID_FCW_MOVE)
#endif

/* Handle:  822,Name:        CAN_TX_PATH_ID_FCW_STAT,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_PATH_ID_FCW_STAT()     (ESR_Status4.ESR_Status4.CAN_TX_PATH_ID_FCW_STAT)
#endif

/* Handle:  823,Name:        CAN_TX_AUTO_ALIGN_ANGLE,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_AUTO_ALIGN_ANGLE()     (ESR_Status4.ESR_Status4.CAN_TX_AUTO_ALIGN_ANGLE)
#endif

/* Handle:  824,Name:        CAN_TX_PATH_ID_ACC_STAT,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_PATH_ID_ACC_STAT()     (ESR_Status4.ESR_Status4.CAN_TX_PATH_ID_ACC_STAT)
#endif

/* Handle:  825,Name:              CAN_TX_HW_VERSION,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_HW_VERSION()           (ESR_Status3.ESR_Status3.CAN_TX_HW_VERSION)
#endif

/* Handle:  826,Name:       CAN_TX_INTERFACE_VERSION,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_INTERFACE_VERSION()    (ESR_Status3.ESR_Status3.CAN_TX_INTERFACE_VERSION)
#endif

/* Handle:  829,Name:          CAN_TX_SW_VERSION_PLD,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_SW_VERSION_PLD()       (ESR_Status3.ESR_Status3.CAN_TX_SW_VERSION_PLD)
#endif

/* Handle:  830,Name:         CAN_TX_ROLLING_COUNT_2,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_ROLLING_COUNT_2()      (ESR_Status2.ESR_Status2.CAN_TX_ROLLING_COUNT_2)
#endif

/* Handle:  831,Name:      CAN_TX_MAXIMUM_TRACKS_ACK,Size:  6,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_MAXIMUM_TRACKS_ACK()   (ESR_Status2.ESR_Status2.CAN_TX_MAXIMUM_TRACKS_ACK)
#endif

/* Handle:  833,Name:           CAN_TX_RAW_DATA_MODE,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_RAW_DATA_MODE()        (ESR_Status2.ESR_Status2.CAN_TX_RAW_DATA_MODE)
#endif

/* Handle:  834,Name:        CAN_TX_XCVR_OPERATIONAL,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_XCVR_OPERATIONAL()     (ESR_Status2.ESR_Status2.CAN_TX_XCVR_OPERATIONAL)
#endif

/* Handle:  835,Name:          CAN_TX_INTERNAL_ERROR,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_INTERNAL_ERROR()       (ESR_Status2.ESR_Status2.CAN_TX_INTERNAL_ERROR)
#endif

/* Handle:  836,Name:        CAN_TX_RANGE_PERF_ERROR,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_RANGE_PERF_ERROR()     (ESR_Status2.ESR_Status2.CAN_TX_RANGE_PERF_ERROR)
#endif

/* Handle:  837,Name:          CAN_TX_OVERHEAT_ERROR,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_OVERHEAT_ERROR()       (ESR_Status2.ESR_Status2.CAN_TX_OVERHEAT_ERROR)
#endif

/* Handle:  838,Name:             CAN_TX_TEMPERATURE,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_TEMPERATURE()          (ESR_Status2.ESR_Status2.CAN_TX_TEMPERATURE)
#endif

/* Handle:  839,Name:           CAN_TX_GROUPING_MODE,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_GROUPING_MODE()        (ESR_Status2.ESR_Status2.CAN_TX_GROUPING_MODE)
#endif

/* Handle:  840,Name:     CAN_TX_VEH_SPD_COMP_FACTOR,Size:  6,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_VEH_SPD_COMP_FACTOR()  (ESR_Status2.ESR_Status2.CAN_TX_VEH_SPD_COMP_FACTOR)
#endif

/* Handle:  841,Name:           CAN_TX_YAW_RATE_BIAS,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_YAW_RATE_BIAS()        (ESR_Status2.ESR_Status2.CAN_TX_YAW_RATE_BIAS)
#endif

/* Handle:  844,Name:         CAN_TX_ROLLING_COUNT_1,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_ROLLING_COUNT_1()      (ESR_Status1.ESR_Status1.CAN_TX_ROLLING_COUNT_1)
#endif

/* Handle:  846,Name:              CAN_TX_COMM_ERROR,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxCAN_TX_COMM_ERROR()           (ESR_Status1.ESR_Status1.CAN_TX_COMM_ERROR)
#endif



/* -----------------------------------------------------------------------------
    &&&~ Get Rx Signal Access for signals greater 8bit and smaller or equal 32bit
 ----------------------------------------------------------------------------- */

/* Handle:    0,Name:          CAN_TX_AVG_PWR_CWBLKG,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_AVG_PWR_CWBLKG(void);
#endif

/* Handle:    1,Name:          CAN_TX_SIDESLIP_ANGLE,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_SIDESLIP_ANGLE(void);
#endif

/* Handle:    3,Name:  CAN_TX_FILTERED_XOHP_ACC_CIPV,Size:  9,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_FILTERED_XOHP_ACC_CIPV(void);
#endif

/* Handle:   47,Name:          CAN_TX_TRACK_ANGLE_64,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_ANGLE_64(void);
#endif

/* Handle:   49,Name:          CAN_TX_TRACK_RANGE_64,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_64(void);
#endif

/* Handle:   50,Name:    CAN_TX_TRACK_RANGE_ACCEL_64,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_64(void);
#endif

/* Handle:   54,Name:     CAN_TX_TRACK_RANGE_RATE_64,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_64(void);
#endif

/* Handle:   59,Name:          CAN_TX_TRACK_ANGLE_63,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_ANGLE_63(void);
#endif

/* Handle:   61,Name:          CAN_TX_TRACK_RANGE_63,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_63(void);
#endif

/* Handle:   62,Name:    CAN_TX_TRACK_RANGE_ACCEL_63,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_63(void);
#endif

/* Handle:   66,Name:     CAN_TX_TRACK_RANGE_RATE_63,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_63(void);
#endif

/* Handle:   71,Name:          CAN_TX_TRACK_ANGLE_62,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_ANGLE_62(void);
#endif

/* Handle:   73,Name:          CAN_TX_TRACK_RANGE_62,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_62(void);
#endif

/* Handle:   74,Name:    CAN_TX_TRACK_RANGE_ACCEL_62,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_62(void);
#endif

/* Handle:   78,Name:     CAN_TX_TRACK_RANGE_RATE_62,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_62(void);
#endif

/* Handle:   83,Name:          CAN_TX_TRACK_ANGLE_61,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_ANGLE_61(void);
#endif

/* Handle:   85,Name:          CAN_TX_TRACK_RANGE_61,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_61(void);
#endif

/* Handle:   86,Name:    CAN_TX_TRACK_RANGE_ACCEL_61,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_61(void);
#endif

/* Handle:   90,Name:     CAN_TX_TRACK_RANGE_RATE_61,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_61(void);
#endif

/* Handle:   95,Name:          CAN_TX_TRACK_ANGLE_60,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_ANGLE_60(void);
#endif

/* Handle:   97,Name:          CAN_TX_TRACK_RANGE_60,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_60(void);
#endif

/* Handle:   98,Name:    CAN_TX_TRACK_RANGE_ACCEL_60,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_60(void);
#endif

/* Handle:  102,Name:     CAN_TX_TRACK_RANGE_RATE_60,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_60(void);
#endif

/* Handle:  107,Name:          CAN_TX_TRACK_ANGLE_59,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_ANGLE_59(void);
#endif

/* Handle:  109,Name:          CAN_TX_TRACK_RANGE_59,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_59(void);
#endif

/* Handle:  110,Name:    CAN_TX_TRACK_RANGE_ACCEL_59,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_59(void);
#endif

/* Handle:  114,Name:     CAN_TX_TRACK_RANGE_RATE_59,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_59(void);
#endif

/* Handle:  119,Name:          CAN_TX_TRACK_ANGLE_58,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_ANGLE_58(void);
#endif

/* Handle:  121,Name:          CAN_TX_TRACK_RANGE_58,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_58(void);
#endif

/* Handle:  122,Name:    CAN_TX_TRACK_RANGE_ACCEL_58,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_58(void);
#endif

/* Handle:  126,Name:     CAN_TX_TRACK_RANGE_RATE_58,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_58(void);
#endif

/* Handle:  131,Name:          CAN_TX_TRACK_ANGLE_57,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_ANGLE_57(void);
#endif

/* Handle:  133,Name:          CAN_TX_TRACK_RANGE_57,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_57(void);
#endif

/* Handle:  134,Name:    CAN_TX_TRACK_RANGE_ACCEL_57,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_57(void);
#endif

/* Handle:  138,Name:     CAN_TX_TRACK_RANGE_RATE_57,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_57(void);
#endif

/* Handle:  143,Name:          CAN_TX_TRACK_ANGLE_56,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_ANGLE_56(void);
#endif

/* Handle:  145,Name:          CAN_TX_TRACK_RANGE_56,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_56(void);
#endif

/* Handle:  146,Name:    CAN_TX_TRACK_RANGE_ACCEL_56,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_56(void);
#endif

/* Handle:  150,Name:     CAN_TX_TRACK_RANGE_RATE_56,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_56(void);
#endif

/* Handle:  155,Name:          CAN_TX_TRACK_ANGLE_55,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_ANGLE_55(void);
#endif

/* Handle:  157,Name:          CAN_TX_TRACK_RANGE_55,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_55(void);
#endif

/* Handle:  158,Name:    CAN_TX_TRACK_RANGE_ACCEL_55,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_55(void);
#endif

/* Handle:  162,Name:     CAN_TX_TRACK_RANGE_RATE_55,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_55(void);
#endif

/* Handle:  167,Name:          CAN_TX_TRACK_ANGLE_54,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_ANGLE_54(void);
#endif

/* Handle:  169,Name:          CAN_TX_TRACK_RANGE_54,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_54(void);
#endif

/* Handle:  170,Name:    CAN_TX_TRACK_RANGE_ACCEL_54,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_54(void);
#endif

/* Handle:  174,Name:     CAN_TX_TRACK_RANGE_RATE_54,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_54(void);
#endif

/* Handle:  179,Name:          CAN_TX_TRACK_ANGLE_53,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_ANGLE_53(void);
#endif

/* Handle:  181,Name:          CAN_TX_TRACK_RANGE_53,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_53(void);
#endif

/* Handle:  182,Name:    CAN_TX_TRACK_RANGE_ACCEL_53,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_53(void);
#endif

/* Handle:  186,Name:     CAN_TX_TRACK_RANGE_RATE_53,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_53(void);
#endif

/* Handle:  191,Name:          CAN_TX_TRACK_ANGLE_52,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_ANGLE_52(void);
#endif

/* Handle:  193,Name:          CAN_TX_TRACK_RANGE_52,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_52(void);
#endif

/* Handle:  194,Name:    CAN_TX_TRACK_RANGE_ACCEL_52,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_52(void);
#endif

/* Handle:  198,Name:     CAN_TX_TRACK_RANGE_RATE_52,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_52(void);
#endif

/* Handle:  203,Name:          CAN_TX_TRACK_ANGLE_51,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_ANGLE_51(void);
#endif

/* Handle:  205,Name:          CAN_TX_TRACK_RANGE_51,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_51(void);
#endif

/* Handle:  206,Name:    CAN_TX_TRACK_RANGE_ACCEL_51,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_51(void);
#endif

/* Handle:  210,Name:     CAN_TX_TRACK_RANGE_RATE_51,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_51(void);
#endif

/* Handle:  215,Name:          CAN_TX_TRACK_ANGLE_50,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_ANGLE_50(void);
#endif

/* Handle:  217,Name:          CAN_TX_TRACK_RANGE_50,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_50(void);
#endif

/* Handle:  218,Name:    CAN_TX_TRACK_RANGE_ACCEL_50,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_50(void);
#endif

/* Handle:  222,Name:     CAN_TX_TRACK_RANGE_RATE_50,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_50(void);
#endif

/* Handle:  227,Name:          CAN_TX_TRACK_ANGLE_49,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_ANGLE_49(void);
#endif

/* Handle:  229,Name:          CAN_TX_TRACK_RANGE_49,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_49(void);
#endif

/* Handle:  230,Name:    CAN_TX_TRACK_RANGE_ACCEL_49,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_49(void);
#endif

/* Handle:  234,Name:     CAN_TX_TRACK_RANGE_RATE_49,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_49(void);
#endif

/* Handle:  239,Name:          CAN_TX_TRACK_ANGLE_48,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_ANGLE_48(void);
#endif

/* Handle:  241,Name:          CAN_TX_TRACK_RANGE_48,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_48(void);
#endif

/* Handle:  242,Name:    CAN_TX_TRACK_RANGE_ACCEL_48,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_48(void);
#endif

/* Handle:  246,Name:     CAN_TX_TRACK_RANGE_RATE_48,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_48(void);
#endif

/* Handle:  251,Name:          CAN_TX_TRACK_ANGLE_47,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_ANGLE_47(void);
#endif

/* Handle:  253,Name:          CAN_TX_TRACK_RANGE_47,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_47(void);
#endif

/* Handle:  254,Name:    CAN_TX_TRACK_RANGE_ACCEL_47,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_47(void);
#endif

/* Handle:  258,Name:     CAN_TX_TRACK_RANGE_RATE_47,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_47(void);
#endif

/* Handle:  263,Name:          CAN_TX_TRACK_ANGLE_46,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_ANGLE_46(void);
#endif

/* Handle:  265,Name:          CAN_TX_TRACK_RANGE_46,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_46(void);
#endif

/* Handle:  266,Name:    CAN_TX_TRACK_RANGE_ACCEL_46,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_46(void);
#endif

/* Handle:  270,Name:     CAN_TX_TRACK_RANGE_RATE_46,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_46(void);
#endif

/* Handle:  275,Name:          CAN_TX_TRACK_ANGLE_45,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_ANGLE_45(void);
#endif

/* Handle:  277,Name:          CAN_TX_TRACK_RANGE_45,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_45(void);
#endif

/* Handle:  278,Name:    CAN_TX_TRACK_RANGE_ACCEL_45,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_45(void);
#endif

/* Handle:  282,Name:     CAN_TX_TRACK_RANGE_RATE_45,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_45(void);
#endif

/* Handle:  287,Name:          CAN_TX_TRACK_ANGLE_44,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_ANGLE_44(void);
#endif

/* Handle:  289,Name:          CAN_TX_TRACK_RANGE_44,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_44(void);
#endif

/* Handle:  290,Name:    CAN_TX_TRACK_RANGE_ACCEL_44,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_44(void);
#endif

/* Handle:  294,Name:     CAN_TX_TRACK_RANGE_RATE_44,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_44(void);
#endif

/* Handle:  299,Name:          CAN_TX_TRACK_ANGLE_43,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_ANGLE_43(void);
#endif

/* Handle:  301,Name:          CAN_TX_TRACK_RANGE_43,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_43(void);
#endif

/* Handle:  302,Name:    CAN_TX_TRACK_RANGE_ACCEL_43,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_43(void);
#endif

/* Handle:  306,Name:     CAN_TX_TRACK_RANGE_RATE_43,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_43(void);
#endif

/* Handle:  311,Name:          CAN_TX_TRACK_ANGLE_42,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_ANGLE_42(void);
#endif

/* Handle:  313,Name:          CAN_TX_TRACK_RANGE_42,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_42(void);
#endif

/* Handle:  314,Name:    CAN_TX_TRACK_RANGE_ACCEL_42,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_42(void);
#endif

/* Handle:  318,Name:     CAN_TX_TRACK_RANGE_RATE_42,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_42(void);
#endif

/* Handle:  323,Name:          CAN_TX_TRACK_ANGLE_41,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_ANGLE_41(void);
#endif

/* Handle:  325,Name:          CAN_TX_TRACK_RANGE_41,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_41(void);
#endif

/* Handle:  326,Name:    CAN_TX_TRACK_RANGE_ACCEL_41,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_41(void);
#endif

/* Handle:  330,Name:     CAN_TX_TRACK_RANGE_RATE_41,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_41(void);
#endif

/* Handle:  335,Name:          CAN_TX_TRACK_ANGLE_40,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_ANGLE_40(void);
#endif

/* Handle:  337,Name:          CAN_TX_TRACK_RANGE_40,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_40(void);
#endif

/* Handle:  338,Name:    CAN_TX_TRACK_RANGE_ACCEL_40,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_40(void);
#endif

/* Handle:  342,Name:     CAN_TX_TRACK_RANGE_RATE_40,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_40(void);
#endif

/* Handle:  347,Name:          CAN_TX_TRACK_ANGLE_39,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_ANGLE_39(void);
#endif

/* Handle:  349,Name:          CAN_TX_TRACK_RANGE_39,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_39(void);
#endif

/* Handle:  350,Name:    CAN_TX_TRACK_RANGE_ACCEL_39,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_39(void);
#endif

/* Handle:  354,Name:     CAN_TX_TRACK_RANGE_RATE_39,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_39(void);
#endif

/* Handle:  359,Name:          CAN_TX_TRACK_ANGLE_38,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_ANGLE_38(void);
#endif

/* Handle:  361,Name:          CAN_TX_TRACK_RANGE_38,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_38(void);
#endif

/* Handle:  362,Name:    CAN_TX_TRACK_RANGE_ACCEL_38,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_38(void);
#endif

/* Handle:  366,Name:     CAN_TX_TRACK_RANGE_RATE_38,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_38(void);
#endif

/* Handle:  371,Name:          CAN_TX_TRACK_ANGLE_37,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_ANGLE_37(void);
#endif

/* Handle:  373,Name:          CAN_TX_TRACK_RANGE_37,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_37(void);
#endif

/* Handle:  374,Name:    CAN_TX_TRACK_RANGE_ACCEL_37,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_37(void);
#endif

/* Handle:  378,Name:     CAN_TX_TRACK_RANGE_RATE_37,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_37(void);
#endif

/* Handle:  383,Name:          CAN_TX_TRACK_ANGLE_36,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_ANGLE_36(void);
#endif

/* Handle:  385,Name:          CAN_TX_TRACK_RANGE_36,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_36(void);
#endif

/* Handle:  386,Name:    CAN_TX_TRACK_RANGE_ACCEL_36,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_36(void);
#endif

/* Handle:  390,Name:     CAN_TX_TRACK_RANGE_RATE_36,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_36(void);
#endif

/* Handle:  395,Name:          CAN_TX_TRACK_ANGLE_35,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_ANGLE_35(void);
#endif

/* Handle:  397,Name:          CAN_TX_TRACK_RANGE_35,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_35(void);
#endif

/* Handle:  398,Name:    CAN_TX_TRACK_RANGE_ACCEL_35,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_35(void);
#endif

/* Handle:  402,Name:     CAN_TX_TRACK_RANGE_RATE_35,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_35(void);
#endif

/* Handle:  407,Name:          CAN_TX_TRACK_ANGLE_34,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_ANGLE_34(void);
#endif

/* Handle:  409,Name:          CAN_TX_TRACK_RANGE_34,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_34(void);
#endif

/* Handle:  410,Name:    CAN_TX_TRACK_RANGE_ACCEL_34,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_34(void);
#endif

/* Handle:  414,Name:     CAN_TX_TRACK_RANGE_RATE_34,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_34(void);
#endif

/* Handle:  419,Name:          CAN_TX_TRACK_ANGLE_33,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_ANGLE_33(void);
#endif

/* Handle:  421,Name:          CAN_TX_TRACK_RANGE_33,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_33(void);
#endif

/* Handle:  422,Name:    CAN_TX_TRACK_RANGE_ACCEL_33,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_33(void);
#endif

/* Handle:  426,Name:     CAN_TX_TRACK_RANGE_RATE_33,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_33(void);
#endif

/* Handle:  431,Name:          CAN_TX_TRACK_ANGLE_32,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_ANGLE_32(void);
#endif

/* Handle:  433,Name:          CAN_TX_TRACK_RANGE_32,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_32(void);
#endif

/* Handle:  434,Name:    CAN_TX_TRACK_RANGE_ACCEL_32,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_32(void);
#endif

/* Handle:  438,Name:     CAN_TX_TRACK_RANGE_RATE_32,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_32(void);
#endif

/* Handle:  443,Name:          CAN_TX_TRACK_ANGLE_31,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_ANGLE_31(void);
#endif

/* Handle:  445,Name:          CAN_TX_TRACK_RANGE_31,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_31(void);
#endif

/* Handle:  446,Name:    CAN_TX_TRACK_RANGE_ACCEL_31,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_31(void);
#endif

/* Handle:  450,Name:     CAN_TX_TRACK_RANGE_RATE_31,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_31(void);
#endif

/* Handle:  455,Name:          CAN_TX_TRACK_ANGLE_30,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_ANGLE_30(void);
#endif

/* Handle:  457,Name:          CAN_TX_TRACK_RANGE_30,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_30(void);
#endif

/* Handle:  458,Name:    CAN_TX_TRACK_RANGE_ACCEL_30,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_30(void);
#endif

/* Handle:  462,Name:     CAN_TX_TRACK_RANGE_RATE_30,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_30(void);
#endif

/* Handle:  467,Name:          CAN_TX_TRACK_ANGLE_29,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_ANGLE_29(void);
#endif

/* Handle:  469,Name:          CAN_TX_TRACK_RANGE_29,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_29(void);
#endif

/* Handle:  470,Name:    CAN_TX_TRACK_RANGE_ACCEL_29,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_29(void);
#endif

/* Handle:  474,Name:     CAN_TX_TRACK_RANGE_RATE_29,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_29(void);
#endif

/* Handle:  479,Name:          CAN_TX_TRACK_ANGLE_28,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_ANGLE_28(void);
#endif

/* Handle:  481,Name:          CAN_TX_TRACK_RANGE_28,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_28(void);
#endif

/* Handle:  482,Name:    CAN_TX_TRACK_RANGE_ACCEL_28,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_28(void);
#endif

/* Handle:  486,Name:     CAN_TX_TRACK_RANGE_RATE_28,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_28(void);
#endif

/* Handle:  491,Name:          CAN_TX_TRACK_ANGLE_27,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_ANGLE_27(void);
#endif

/* Handle:  493,Name:          CAN_TX_TRACK_RANGE_27,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_27(void);
#endif

/* Handle:  494,Name:    CAN_TX_TRACK_RANGE_ACCEL_27,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_27(void);
#endif

/* Handle:  498,Name:     CAN_TX_TRACK_RANGE_RATE_27,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_27(void);
#endif

/* Handle:  503,Name:          CAN_TX_TRACK_ANGLE_26,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_ANGLE_26(void);
#endif

/* Handle:  505,Name:          CAN_TX_TRACK_RANGE_26,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_26(void);
#endif

/* Handle:  506,Name:    CAN_TX_TRACK_RANGE_ACCEL_26,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_26(void);
#endif

/* Handle:  510,Name:     CAN_TX_TRACK_RANGE_RATE_26,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_26(void);
#endif

/* Handle:  515,Name:          CAN_TX_TRACK_ANGLE_25,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_ANGLE_25(void);
#endif

/* Handle:  517,Name:          CAN_TX_TRACK_RANGE_25,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_25(void);
#endif

/* Handle:  518,Name:    CAN_TX_TRACK_RANGE_ACCEL_25,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_25(void);
#endif

/* Handle:  522,Name:     CAN_TX_TRACK_RANGE_RATE_25,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_25(void);
#endif

/* Handle:  527,Name:          CAN_TX_TRACK_ANGLE_24,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_ANGLE_24(void);
#endif

/* Handle:  529,Name:          CAN_TX_TRACK_RANGE_24,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_24(void);
#endif

/* Handle:  530,Name:    CAN_TX_TRACK_RANGE_ACCEL_24,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_24(void);
#endif

/* Handle:  534,Name:     CAN_TX_TRACK_RANGE_RATE_24,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_24(void);
#endif

/* Handle:  539,Name:          CAN_TX_TRACK_ANGLE_23,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_ANGLE_23(void);
#endif

/* Handle:  541,Name:          CAN_TX_TRACK_RANGE_23,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_23(void);
#endif

/* Handle:  542,Name:    CAN_TX_TRACK_RANGE_ACCEL_23,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_23(void);
#endif

/* Handle:  546,Name:     CAN_TX_TRACK_RANGE_RATE_23,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_23(void);
#endif

/* Handle:  551,Name:          CAN_TX_TRACK_ANGLE_22,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_ANGLE_22(void);
#endif

/* Handle:  553,Name:          CAN_TX_TRACK_RANGE_22,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_22(void);
#endif

/* Handle:  554,Name:    CAN_TX_TRACK_RANGE_ACCEL_22,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_22(void);
#endif

/* Handle:  558,Name:     CAN_TX_TRACK_RANGE_RATE_22,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_22(void);
#endif

/* Handle:  563,Name:          CAN_TX_TRACK_ANGLE_21,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_ANGLE_21(void);
#endif

/* Handle:  565,Name:          CAN_TX_TRACK_RANGE_21,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_21(void);
#endif

/* Handle:  566,Name:    CAN_TX_TRACK_RANGE_ACCEL_21,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_21(void);
#endif

/* Handle:  570,Name:     CAN_TX_TRACK_RANGE_RATE_21,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_21(void);
#endif

/* Handle:  575,Name:          CAN_TX_TRACK_ANGLE_20,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_ANGLE_20(void);
#endif

/* Handle:  577,Name:          CAN_TX_TRACK_RANGE_20,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_20(void);
#endif

/* Handle:  578,Name:    CAN_TX_TRACK_RANGE_ACCEL_20,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_20(void);
#endif

/* Handle:  582,Name:     CAN_TX_TRACK_RANGE_RATE_20,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_20(void);
#endif

/* Handle:  587,Name:          CAN_TX_TRACK_ANGLE_19,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_ANGLE_19(void);
#endif

/* Handle:  589,Name:          CAN_TX_TRACK_RANGE_19,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_19(void);
#endif

/* Handle:  590,Name:    CAN_TX_TRACK_RANGE_ACCEL_19,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_19(void);
#endif

/* Handle:  594,Name:     CAN_TX_TRACK_RANGE_RATE_19,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_19(void);
#endif

/* Handle:  599,Name:          CAN_TX_TRACK_ANGLE_18,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_ANGLE_18(void);
#endif

/* Handle:  601,Name:          CAN_TX_TRACK_RANGE_18,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_18(void);
#endif

/* Handle:  602,Name:    CAN_TX_TRACK_RANGE_ACCEL_18,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_18(void);
#endif

/* Handle:  606,Name:     CAN_TX_TRACK_RANGE_RATE_18,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_18(void);
#endif

/* Handle:  611,Name:          CAN_TX_TRACK_ANGLE_17,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_ANGLE_17(void);
#endif

/* Handle:  613,Name:          CAN_TX_TRACK_RANGE_17,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_17(void);
#endif

/* Handle:  614,Name:    CAN_TX_TRACK_RANGE_ACCEL_17,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_17(void);
#endif

/* Handle:  618,Name:     CAN_TX_TRACK_RANGE_RATE_17,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_17(void);
#endif

/* Handle:  623,Name:          CAN_TX_TRACK_ANGLE_16,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_ANGLE_16(void);
#endif

/* Handle:  625,Name:          CAN_TX_TRACK_RANGE_16,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_16(void);
#endif

/* Handle:  626,Name:    CAN_TX_TRACK_RANGE_ACCEL_16,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_16(void);
#endif

/* Handle:  630,Name:     CAN_TX_TRACK_RANGE_RATE_16,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_16(void);
#endif

/* Handle:  635,Name:          CAN_TX_TRACK_ANGLE_15,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_ANGLE_15(void);
#endif

/* Handle:  637,Name:          CAN_TX_TRACK_RANGE_15,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_15(void);
#endif

/* Handle:  638,Name:    CAN_TX_TRACK_RANGE_ACCEL_15,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_15(void);
#endif

/* Handle:  642,Name:     CAN_TX_TRACK_RANGE_RATE_15,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_15(void);
#endif

/* Handle:  647,Name:          CAN_TX_TRACK_ANGLE_14,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_ANGLE_14(void);
#endif

/* Handle:  649,Name:          CAN_TX_TRACK_RANGE_14,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_14(void);
#endif

/* Handle:  650,Name:    CAN_TX_TRACK_RANGE_ACCEL_14,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_14(void);
#endif

/* Handle:  654,Name:     CAN_TX_TRACK_RANGE_RATE_14,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_14(void);
#endif

/* Handle:  659,Name:          CAN_TX_TRACK_ANGLE_13,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_ANGLE_13(void);
#endif

/* Handle:  661,Name:          CAN_TX_TRACK_RANGE_13,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_13(void);
#endif

/* Handle:  662,Name:    CAN_TX_TRACK_RANGE_ACCEL_13,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_13(void);
#endif

/* Handle:  666,Name:     CAN_TX_TRACK_RANGE_RATE_13,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_13(void);
#endif

/* Handle:  671,Name:          CAN_TX_TRACK_ANGLE_12,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_ANGLE_12(void);
#endif

/* Handle:  673,Name:          CAN_TX_TRACK_RANGE_12,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_12(void);
#endif

/* Handle:  674,Name:    CAN_TX_TRACK_RANGE_ACCEL_12,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_12(void);
#endif

/* Handle:  678,Name:     CAN_TX_TRACK_RANGE_RATE_12,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_12(void);
#endif

/* Handle:  683,Name:          CAN_TX_TRACK_ANGLE_11,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_ANGLE_11(void);
#endif

/* Handle:  685,Name:          CAN_TX_TRACK_RANGE_11,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_11(void);
#endif

/* Handle:  686,Name:    CAN_TX_TRACK_RANGE_ACCEL_11,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_11(void);
#endif

/* Handle:  690,Name:     CAN_TX_TRACK_RANGE_RATE_11,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_11(void);
#endif

/* Handle:  695,Name:          CAN_TX_TRACK_ANGLE_10,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_ANGLE_10(void);
#endif

/* Handle:  697,Name:          CAN_TX_TRACK_RANGE_10,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_10(void);
#endif

/* Handle:  698,Name:    CAN_TX_TRACK_RANGE_ACCEL_10,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_10(void);
#endif

/* Handle:  702,Name:     CAN_TX_TRACK_RANGE_RATE_10,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_10(void);
#endif

/* Handle:  707,Name:          CAN_TX_TRACK_ANGLE_09,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_ANGLE_09(void);
#endif

/* Handle:  709,Name:          CAN_TX_TRACK_RANGE_09,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_09(void);
#endif

/* Handle:  710,Name:    CAN_TX_TRACK_RANGE_ACCEL_09,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_09(void);
#endif

/* Handle:  714,Name:     CAN_TX_TRACK_RANGE_RATE_09,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_09(void);
#endif

/* Handle:  719,Name:          CAN_TX_TRACK_ANGLE_08,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_ANGLE_08(void);
#endif

/* Handle:  721,Name:          CAN_TX_TRACK_RANGE_08,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_08(void);
#endif

/* Handle:  722,Name:    CAN_TX_TRACK_RANGE_ACCEL_08,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_08(void);
#endif

/* Handle:  726,Name:     CAN_TX_TRACK_RANGE_RATE_08,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_08(void);
#endif

/* Handle:  731,Name:          CAN_TX_TRACK_ANGLE_07,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_ANGLE_07(void);
#endif

/* Handle:  733,Name:          CAN_TX_TRACK_RANGE_07,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_07(void);
#endif

/* Handle:  734,Name:    CAN_TX_TRACK_RANGE_ACCEL_07,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_07(void);
#endif

/* Handle:  738,Name:     CAN_TX_TRACK_RANGE_RATE_07,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_07(void);
#endif

/* Handle:  743,Name:          CAN_TX_TRACK_ANGLE_06,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_ANGLE_06(void);
#endif

/* Handle:  745,Name:          CAN_TX_TRACK_RANGE_06,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_06(void);
#endif

/* Handle:  746,Name:    CAN_TX_TRACK_RANGE_ACCEL_06,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_06(void);
#endif

/* Handle:  750,Name:     CAN_TX_TRACK_RANGE_RATE_06,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_06(void);
#endif

/* Handle:  755,Name:          CAN_TX_TRACK_ANGLE_05,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_ANGLE_05(void);
#endif

/* Handle:  757,Name:          CAN_TX_TRACK_RANGE_05,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_05(void);
#endif

/* Handle:  758,Name:    CAN_TX_TRACK_RANGE_ACCEL_05,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_05(void);
#endif

/* Handle:  762,Name:     CAN_TX_TRACK_RANGE_RATE_05,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_05(void);
#endif

/* Handle:  767,Name:          CAN_TX_TRACK_ANGLE_04,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_ANGLE_04(void);
#endif

/* Handle:  769,Name:          CAN_TX_TRACK_RANGE_04,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_04(void);
#endif

/* Handle:  770,Name:    CAN_TX_TRACK_RANGE_ACCEL_04,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_04(void);
#endif

/* Handle:  774,Name:     CAN_TX_TRACK_RANGE_RATE_04,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_04(void);
#endif

/* Handle:  779,Name:          CAN_TX_TRACK_ANGLE_03,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_ANGLE_03(void);
#endif

/* Handle:  781,Name:          CAN_TX_TRACK_RANGE_03,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_03(void);
#endif

/* Handle:  782,Name:    CAN_TX_TRACK_RANGE_ACCEL_03,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_03(void);
#endif

/* Handle:  786,Name:     CAN_TX_TRACK_RANGE_RATE_03,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_03(void);
#endif

/* Handle:  791,Name:          CAN_TX_TRACK_ANGLE_02,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_ANGLE_02(void);
#endif

/* Handle:  793,Name:          CAN_TX_TRACK_RANGE_02,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_02(void);
#endif

/* Handle:  794,Name:    CAN_TX_TRACK_RANGE_ACCEL_02,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_02(void);
#endif

/* Handle:  798,Name:     CAN_TX_TRACK_RANGE_RATE_02,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_02(void);
#endif

/* Handle:  803,Name:          CAN_TX_TRACK_ANGLE_01,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_ANGLE_01(void);
#endif

/* Handle:  805,Name:          CAN_TX_TRACK_RANGE_01,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_01(void);
#endif

/* Handle:  806,Name:    CAN_TX_TRACK_RANGE_ACCEL_01,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_01(void);
#endif

/* Handle:  810,Name:     CAN_TX_TRACK_RANGE_RATE_01,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_01(void);
#endif

/* Handle:  827,Name:         CAN_TX_SW_VERSION_HOST,Size: 24,UsedBytes:  3,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint32 IlGetRxCAN_TX_SW_VERSION_HOST(void);
#endif

/* Handle:  828,Name:              CAN_TX_SERIAL_NUM,Size: 24,UsedBytes:  3,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint32 IlGetRxCAN_TX_SERIAL_NUM(void);
#endif

/* Handle:  832,Name:      CAN_TX_STEERING_ANGLE_ACK,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_STEERING_ANGLE_ACK(void);
#endif

/* Handle:  842,Name:          CAN_TX_SW_VERSION_DSP,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_SW_VERSION_DSP(void);
#endif

/* Handle:  843,Name:           CAN_TX_DSP_TIMESTAMP,Size:  7,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint8 IlGetRxCAN_TX_DSP_TIMESTAMP(void);
#endif

/* Handle:  845,Name:   CAN_TX_RADIUS_CURVATURE_CALC,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_RADIUS_CURVATURE_CALC(void);
#endif

/* Handle:  847,Name:              CAN_TX_SCAN_INDEX,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_SCAN_INDEX(void);
#endif

/* Handle:  848,Name:           CAN_TX_YAW_RATE_CALC,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_YAW_RATE_CALC(void);
#endif

/* Handle:  849,Name:      CAN_TX_VEHICLE_SPEED_CALC,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxCAN_TX_VEHICLE_SPEED_CALC(void);
#endif



/* -----------------------------------------------------------------------------
    &&&~ Set Tx Signal Access for signals smaller or equal 8bit, SendType cyclic or none
 ----------------------------------------------------------------------------- */

/* Handle:    0,Name:    Vision_only_Sign_Type_0x726,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxVision_only_Sign_Type_0x726(c) \
{ \
  IlEnterCriticalVision_only_Sign_Type_0x726(); \
  TSR_message_G.TSR_message_G.Vision_only_Sign_Type_0x726 = (c); \
  IlLeaveCriticalVision_only_Sign_Type_0x726(); \
}
#endif

/* Handle:    1,Name:  Supplementary_Sign_Type_0x726,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxSupplementary_Sign_Type_0x726(c) \
{ \
  IlEnterCriticalSupplementary_Sign_Type_0x726(); \
  TSR_message_G.TSR_message_G.Supplementary_Sign_Type_0x726 = (c); \
  IlLeaveCriticalSupplementary_Sign_Type_0x726(); \
}
#endif

/* Handle:    2,Name:          Sign_Position_X_0x726,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxSign_Position_X_0x726(c) \
{ \
  IlEnterCriticalSign_Position_X_0x726(); \
  TSR_message_G.TSR_message_G.Sign_Position_X_0x726 = (c); \
  IlLeaveCriticalSign_Position_X_0x726(); \
}
#endif

/* Handle:    3,Name:          Sign_Position_Y_0x726,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxSign_Position_Y_0x726(c) \
{ \
  IlEnterCriticalSign_Position_Y_0x726(); \
  TSR_message_G.TSR_message_G.Sign_Position_Y_0x726 = (c); \
  IlLeaveCriticalSign_Position_Y_0x726(); \
}
#endif

/* Handle:    4,Name:          Sign_Position_Z_0x726,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxSign_Position_Z_0x726(c) \
{ \
  IlEnterCriticalSign_Position_Z_0x726(); \
  TSR_message_G.TSR_message_G.Sign_Position_Z_0x726 = (c); \
  IlLeaveCriticalSign_Position_Z_0x726(); \
}
#endif

/* Handle:    5,Name:              Filter_Type_0x726,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxFilter_Type_0x726(c) \
{ \
  IlEnterCriticalFilter_Type_0x726(); \
  TSR_message_G.TSR_message_G.Filter_Type_0x726 = (c); \
  IlLeaveCriticalFilter_Type_0x726(); \
}
#endif

/* Handle:    8,Name:  View_range_availability_0x77B,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxView_range_availability_0x77B(c) \
{ \
  IlEnterCriticalView_range_availability_0x77B(); \
  Next_lane_Right_P.Next_lane_Right_P.View_range_availability_0x77B = (c); \
  IlLeaveCriticalView_range_availability_0x77B(); \
}
#endif

/* Handle:    9,Name:                Lane_type_0x77A,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxLane_type_0x77A(c) \
{ \
  IlEnterCriticalLane_type_0x77A(); \
  Next_lane_Right_O.Next_lane_Right_O.Lane_type_0x77A = (c); \
  IlLeaveCriticalLane_type_0x77A(); \
}
#endif

/* Handle:   10,Name:                  Quality_0x77A,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxQuality_0x77A(c) \
{ \
  IlEnterCriticalQuality_0x77A(); \
  Next_lane_Right_O.Next_lane_Right_O.Quality_0x77A = (c); \
  IlLeaveCriticalQuality_0x77A(); \
}
#endif

/* Handle:   11,Name:             Model_degree_0x77A,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxModel_degree_0x77A(c) \
{ \
  IlEnterCriticalModel_degree_0x77A(); \
  Next_lane_Right_O.Next_lane_Right_O.Model_degree_0x77A = (c); \
  IlLeaveCriticalModel_degree_0x77A(); \
}
#endif

/* Handle:   15,Name:          Lane_mark_width_0x77A,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxLane_mark_width_0x77A(c) \
{ \
  IlEnterCriticalLane_mark_width_0x77A(); \
  Next_lane_Right_O.Next_lane_Right_O.Lane_mark_width_0x77A = (c); \
  IlLeaveCriticalLane_mark_width_0x77A(); \
}
#endif

/* Handle:   18,Name:  View_range_availability_0x779,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxView_range_availability_0x779(c) \
{ \
  IlEnterCriticalView_range_availability_0x779(); \
  Next_lane_Left_N.Next_lane_Left_N.View_range_availability_0x779 = (c); \
  IlLeaveCriticalView_range_availability_0x779(); \
}
#endif

/* Handle:   19,Name:                Lane_type_0x778,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxLane_type_0x778(c) \
{ \
  IlEnterCriticalLane_type_0x778(); \
  Next_lane_Left_M.Next_lane_Left_M.Lane_type_0x778 = (c); \
  IlLeaveCriticalLane_type_0x778(); \
}
#endif

/* Handle:   20,Name:                  Quality_0x778,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxQuality_0x778(c) \
{ \
  IlEnterCriticalQuality_0x778(); \
  Next_lane_Left_M.Next_lane_Left_M.Quality_0x778 = (c); \
  IlLeaveCriticalQuality_0x778(); \
}
#endif

/* Handle:   21,Name:             Model_degree_0x778,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxModel_degree_0x778(c) \
{ \
  IlEnterCriticalModel_degree_0x778(); \
  Next_lane_Left_M.Next_lane_Left_M.Model_degree_0x778 = (c); \
  IlLeaveCriticalModel_degree_0x778(); \
}
#endif

/* Handle:   25,Name:          Lane_mark_width_0x778,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxLane_mark_width_0x778(c) \
{ \
  IlEnterCriticalLane_mark_width_0x778(); \
  Next_lane_Left_M.Next_lane_Left_M.Lane_mark_width_0x778 = (c); \
  IlLeaveCriticalLane_mark_width_0x778(); \
}
#endif

/* Handle:   28,Name:  View_range_availability_0x777,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxView_range_availability_0x777(c) \
{ \
  IlEnterCriticalView_range_availability_0x777(); \
  Next_lane_Right_L.Next_lane_Right_L.View_range_availability_0x777 = (c); \
  IlLeaveCriticalView_range_availability_0x777(); \
}
#endif

/* Handle:   29,Name:                Lane_type_0x776,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxLane_type_0x776(c) \
{ \
  IlEnterCriticalLane_type_0x776(); \
  Next_lane_Right_K.Next_lane_Right_K.Lane_type_0x776 = (c); \
  IlLeaveCriticalLane_type_0x776(); \
}
#endif

/* Handle:   30,Name:                  Quality_0x776,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxQuality_0x776(c) \
{ \
  IlEnterCriticalQuality_0x776(); \
  Next_lane_Right_K.Next_lane_Right_K.Quality_0x776 = (c); \
  IlLeaveCriticalQuality_0x776(); \
}
#endif

/* Handle:   31,Name:             Model_degree_0x776,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxModel_degree_0x776(c) \
{ \
  IlEnterCriticalModel_degree_0x776(); \
  Next_lane_Right_K.Next_lane_Right_K.Model_degree_0x776 = (c); \
  IlLeaveCriticalModel_degree_0x776(); \
}
#endif

/* Handle:   35,Name:          Lane_mark_width_0x776,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxLane_mark_width_0x776(c) \
{ \
  IlEnterCriticalLane_mark_width_0x776(); \
  Next_lane_Right_K.Next_lane_Right_K.Lane_mark_width_0x776 = (c); \
  IlLeaveCriticalLane_mark_width_0x776(); \
}
#endif

/* Handle:   38,Name:  View_range_availability_0x775,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxView_range_availability_0x775(c) \
{ \
  IlEnterCriticalView_range_availability_0x775(); \
  Next_lane_Left_J.Next_lane_Left_J.View_range_availability_0x775 = (c); \
  IlLeaveCriticalView_range_availability_0x775(); \
}
#endif

/* Handle:   39,Name:                Lane_type_0x774,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxLane_type_0x774(c) \
{ \
  IlEnterCriticalLane_type_0x774(); \
  Next_lane_Left_I.Next_lane_Left_I.Lane_type_0x774 = (c); \
  IlLeaveCriticalLane_type_0x774(); \
}
#endif

/* Handle:   40,Name:                  Quality_0x774,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxQuality_0x774(c) \
{ \
  IlEnterCriticalQuality_0x774(); \
  Next_lane_Left_I.Next_lane_Left_I.Quality_0x774 = (c); \
  IlLeaveCriticalQuality_0x774(); \
}
#endif

/* Handle:   41,Name:             Model_degree_0x774,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxModel_degree_0x774(c) \
{ \
  IlEnterCriticalModel_degree_0x774(); \
  Next_lane_Left_I.Next_lane_Left_I.Model_degree_0x774 = (c); \
  IlLeaveCriticalModel_degree_0x774(); \
}
#endif

/* Handle:   45,Name:          Lane_mark_width_0x774,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxLane_mark_width_0x774(c) \
{ \
  IlEnterCriticalLane_mark_width_0x774(); \
  Next_lane_Left_I.Next_lane_Left_I.Lane_mark_width_0x774 = (c); \
  IlLeaveCriticalLane_mark_width_0x774(); \
}
#endif

/* Handle:   48,Name:  View_range_availability_0x773,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxView_range_availability_0x773(c) \
{ \
  IlEnterCriticalView_range_availability_0x773(); \
  Next_lane_Right_H.Next_lane_Right_H.View_range_availability_0x773 = (c); \
  IlLeaveCriticalView_range_availability_0x773(); \
}
#endif

/* Handle:   49,Name:                Lane_type_0x772,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxLane_type_0x772(c) \
{ \
  IlEnterCriticalLane_type_0x772(); \
  Next_lane_Right_G.Next_lane_Right_G.Lane_type_0x772 = (c); \
  IlLeaveCriticalLane_type_0x772(); \
}
#endif

/* Handle:   50,Name:                  Quality_0x772,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxQuality_0x772(c) \
{ \
  IlEnterCriticalQuality_0x772(); \
  Next_lane_Right_G.Next_lane_Right_G.Quality_0x772 = (c); \
  IlLeaveCriticalQuality_0x772(); \
}
#endif

/* Handle:   51,Name:             Model_degree_0x772,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxModel_degree_0x772(c) \
{ \
  IlEnterCriticalModel_degree_0x772(); \
  Next_lane_Right_G.Next_lane_Right_G.Model_degree_0x772 = (c); \
  IlLeaveCriticalModel_degree_0x772(); \
}
#endif

/* Handle:   55,Name:          Lane_mark_width_0x772,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxLane_mark_width_0x772(c) \
{ \
  IlEnterCriticalLane_mark_width_0x772(); \
  Next_lane_Right_G.Next_lane_Right_G.Lane_mark_width_0x772 = (c); \
  IlLeaveCriticalLane_mark_width_0x772(); \
}
#endif

/* Handle:   58,Name:  View_range_availability_0x771,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxView_range_availability_0x771(c) \
{ \
  IlEnterCriticalView_range_availability_0x771(); \
  Next_lane_Left_F.Next_lane_Left_F.View_range_availability_0x771 = (c); \
  IlLeaveCriticalView_range_availability_0x771(); \
}
#endif

/* Handle:   59,Name:                Lane_type_0x770,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxLane_type_0x770(c) \
{ \
  IlEnterCriticalLane_type_0x770(); \
  Next_lane_Left_E.Next_lane_Left_E.Lane_type_0x770 = (c); \
  IlLeaveCriticalLane_type_0x770(); \
}
#endif

/* Handle:   60,Name:                  Quality_0x770,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxQuality_0x770(c) \
{ \
  IlEnterCriticalQuality_0x770(); \
  Next_lane_Left_E.Next_lane_Left_E.Quality_0x770 = (c); \
  IlLeaveCriticalQuality_0x770(); \
}
#endif

/* Handle:   61,Name:             Model_degree_0x770,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxModel_degree_0x770(c) \
{ \
  IlEnterCriticalModel_degree_0x770(); \
  Next_lane_Left_E.Next_lane_Left_E.Model_degree_0x770 = (c); \
  IlLeaveCriticalModel_degree_0x770(); \
}
#endif

/* Handle:   65,Name:          Lane_mark_width_0x770,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxLane_mark_width_0x770(c) \
{ \
  IlEnterCriticalLane_mark_width_0x770(); \
  Next_lane_Left_E.Next_lane_Left_E.Lane_mark_width_0x770 = (c); \
  IlLeaveCriticalLane_mark_width_0x770(); \
}
#endif

/* Handle:   68,Name:  View_range_availability_0x76F,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxView_range_availability_0x76F(c) \
{ \
  IlEnterCriticalView_range_availability_0x76F(); \
  Next_lane_Right_D.Next_lane_Right_D.View_range_availability_0x76F = (c); \
  IlLeaveCriticalView_range_availability_0x76F(); \
}
#endif

/* Handle:   69,Name:                Lane_type_0x76E,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxLane_type_0x76E(c) \
{ \
  IlEnterCriticalLane_type_0x76E(); \
  Next_lane_Right_C.Next_lane_Right_C.Lane_type_0x76E = (c); \
  IlLeaveCriticalLane_type_0x76E(); \
}
#endif

/* Handle:   70,Name:                  Quality_0x76E,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxQuality_0x76E(c) \
{ \
  IlEnterCriticalQuality_0x76E(); \
  Next_lane_Right_C.Next_lane_Right_C.Quality_0x76E = (c); \
  IlLeaveCriticalQuality_0x76E(); \
}
#endif

/* Handle:   71,Name:             Model_degree_0x76E,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxModel_degree_0x76E(c) \
{ \
  IlEnterCriticalModel_degree_0x76E(); \
  Next_lane_Right_C.Next_lane_Right_C.Model_degree_0x76E = (c); \
  IlLeaveCriticalModel_degree_0x76E(); \
}
#endif

/* Handle:   75,Name:          Lane_mark_width_0x76E,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxLane_mark_width_0x76E(c) \
{ \
  IlEnterCriticalLane_mark_width_0x76E(); \
  Next_lane_Right_C.Next_lane_Right_C.Lane_mark_width_0x76E = (c); \
  IlLeaveCriticalLane_mark_width_0x76E(); \
}
#endif

/* Handle:   78,Name:  View_range_availability_0x76D,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxView_range_availability_0x76D(c) \
{ \
  IlEnterCriticalView_range_availability_0x76D(); \
  Next_lane_Left_B.Next_lane_Left_B.View_range_availability_0x76D = (c); \
  IlLeaveCriticalView_range_availability_0x76D(); \
}
#endif

/* Handle:   79,Name:                Lane_type_0x76C,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxLane_type_0x76C(c) \
{ \
  IlEnterCriticalLane_type_0x76C(); \
  Next_lane_Left_A.Next_lane_Left_A.Lane_type_0x76C = (c); \
  IlLeaveCriticalLane_type_0x76C(); \
}
#endif

/* Handle:   80,Name:                  Quality_0x76C,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxQuality_0x76C(c) \
{ \
  IlEnterCriticalQuality_0x76C(); \
  Next_lane_Left_A.Next_lane_Left_A.Quality_0x76C = (c); \
  IlLeaveCriticalQuality_0x76C(); \
}
#endif

/* Handle:   81,Name:             Model_degree_0x76C,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxModel_degree_0x76C(c) \
{ \
  IlEnterCriticalModel_degree_0x76C(); \
  Next_lane_Left_A.Next_lane_Left_A.Model_degree_0x76C = (c); \
  IlLeaveCriticalModel_degree_0x76C(); \
}
#endif

/* Handle:   85,Name:          Lane_mark_width_0x76C,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxLane_mark_width_0x76C(c) \
{ \
  IlEnterCriticalLane_mark_width_0x76C(); \
  Next_lane_Left_A.Next_lane_Left_A.Lane_mark_width_0x76C = (c); \
  IlLeaveCriticalLane_mark_width_0x76C(); \
}
#endif

/* Handle:   86,Name: Number_lane_markers_reported_0x76B,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxNumber_lane_markers_reported_0x76B(c) \
{ \
  IlEnterCriticalNumber_lane_markers_reported_0x76B(); \
  Numebr_of_next_lane.Numebr_of_next_lane.Number_lane_markers_reported_0x76B = (c); \
  IlLeaveCriticalNumber_lane_markers_reported_0x76B(); \
}
#endif

/* Handle:   89,Name:     Ref_point_1_validity_0x76A,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxRef_point_1_validity_0x76A(c) \
{ \
  IlEnterCriticalRef_point_1_validity_0x76A(); \
  Reference_points.Reference_points.Ref_point_1_validity_0x76A = (c); \
  IlLeaveCriticalRef_point_1_validity_0x76A(); \
}
#endif

/* Handle:   92,Name:     Ref_point_2_validity_0x76A,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxRef_point_2_validity_0x76A(c) \
{ \
  IlEnterCriticalRef_point_2_validity_0x76A(); \
  Reference_points.Reference_points.Ref_point_2_validity_0x76A = (c); \
  IlLeaveCriticalRef_point_2_validity_0x76A(); \
}
#endif

/* Handle:   95,Name:  View_range_availability_0x769,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxView_range_availability_0x769(c) \
{ \
  IlEnterCriticalView_range_availability_0x769(); \
  LKA_right_lane_B.LKA_right_lane_B.View_range_availability_0x769 = (c); \
  IlLeaveCriticalView_range_availability_0x769(); \
}
#endif

/* Handle:   96,Name:                Lane_type_0x768,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxLane_type_0x768(c) \
{ \
  IlEnterCriticalLane_type_0x768(); \
  LKA_right_lane_A.LKA_right_lane_A.Lane_type_0x768 = (c); \
  IlLeaveCriticalLane_type_0x768(); \
}
#endif

/* Handle:   97,Name:                  Quality_0x768,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxQuality_0x768(c) \
{ \
  IlEnterCriticalQuality_0x768(); \
  LKA_right_lane_A.LKA_right_lane_A.Quality_0x768 = (c); \
  IlLeaveCriticalQuality_0x768(); \
}
#endif

/* Handle:   98,Name:             Model_degree_0x768,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxModel_degree_0x768(c) \
{ \
  IlEnterCriticalModel_degree_0x768(); \
  LKA_right_lane_A.LKA_right_lane_A.Model_degree_0x768 = (c); \
  IlLeaveCriticalModel_degree_0x768(); \
}
#endif

/* Handle:  102,Name:      Width_right_marking_0x768,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxWidth_right_marking_0x768(c) \
{ \
  IlEnterCriticalWidth_right_marking_0x768(); \
  LKA_right_lane_A.LKA_right_lane_A.Width_right_marking_0x768 = (c); \
  IlLeaveCriticalWidth_right_marking_0x768(); \
}
#endif

/* Handle:  105,Name:  View_range_availability_0x767,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxView_range_availability_0x767(c) \
{ \
  IlEnterCriticalView_range_availability_0x767(); \
  LKA_left_lane_B.LKA_left_lane_B.View_range_availability_0x767 = (c); \
  IlLeaveCriticalView_range_availability_0x767(); \
}
#endif

/* Handle:  106,Name:                Lane_type_0x766,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxLane_type_0x766(c) \
{ \
  IlEnterCriticalLane_type_0x766(); \
  LKA_left_lane_A.LKA_left_lane_A.Lane_type_0x766 = (c); \
  IlLeaveCriticalLane_type_0x766(); \
}
#endif

/* Handle:  107,Name:                  Quality_0x766,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxQuality_0x766(c) \
{ \
  IlEnterCriticalQuality_0x766(); \
  LKA_left_lane_A.LKA_left_lane_A.Quality_0x766 = (c); \
  IlLeaveCriticalQuality_0x766(); \
}
#endif

/* Handle:  108,Name:             Model_degree_0x766,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxModel_degree_0x766(c) \
{ \
  IlEnterCriticalModel_degree_0x766(); \
  LKA_left_lane_A.LKA_left_lane_A.Model_degree_0x766 = (c); \
  IlLeaveCriticalModel_degree_0x766(); \
}
#endif

/* Handle:  112,Name:       Width_left_marking_0x766,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxWidth_left_marking_0x766(c) \
{ \
  IlEnterCriticalWidth_left_marking_0x766(); \
  LKA_left_lane_A.LKA_left_lane_A.Width_left_marking_0x766 = (c); \
  IlLeaveCriticalWidth_left_marking_0x766(); \
}
#endif

/* Handle:  113,Name:                   Brakes_0x760,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxBrakes_0x760(c) \
{ \
  IlEnterCriticalBrakes_0x760(); \
  Car_Info.Car_Info.Brakes_0x760 = (c); \
  IlLeaveCriticalBrakes_0x760(); \
}
#endif

/* Handle:  114,Name:              Left_Signal_0x760,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxLeft_Signal_0x760(c) \
{ \
  IlEnterCriticalLeft_Signal_0x760(); \
  Car_Info.Car_Info.Left_Signal_0x760 = (c); \
  IlLeaveCriticalLeft_Signal_0x760(); \
}
#endif

/* Handle:  115,Name:             Right_Signal_0x760,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxRight_Signal_0x760(c) \
{ \
  IlEnterCriticalRight_Signal_0x760(); \
  Car_Info.Car_Info.Right_Signal_0x760 = (c); \
  IlLeaveCriticalRight_Signal_0x760(); \
}
#endif

/* Handle:  116,Name:                   Wipers_0x760,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxWipers_0x760(c) \
{ \
  IlEnterCriticalWipers_0x760(); \
  Car_Info.Car_Info.Wipers_0x760 = (c); \
  IlLeaveCriticalWipers_0x760(); \
}
#endif

/* Handle:  117,Name:                 Low_Beam_0x760,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxLow_Beam_0x760(c) \
{ \
  IlEnterCriticalLow_Beam_0x760(); \
  Car_Info.Car_Info.Low_Beam_0x760 = (c); \
  IlLeaveCriticalLow_Beam_0x760(); \
}
#endif

/* Handle:  118,Name:                High_Beam_0x760,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxHigh_Beam_0x760(c) \
{ \
  IlEnterCriticalHigh_Beam_0x760(); \
  Car_Info.Car_Info.High_Beam_0x760 = (c); \
  IlLeaveCriticalHigh_Beam_0x760(); \
}
#endif

/* Handle:  119,Name:         Wipers_available_0x760,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxWipers_available_0x760(c) \
{ \
  IlEnterCriticalWipers_available_0x760(); \
  Car_Info.Car_Info.Wipers_available_0x760 = (c); \
  IlLeaveCriticalWipers_available_0x760(); \
}
#endif

/* Handle:  120,Name:       Low_Beam_available_0x760,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxLow_Beam_available_0x760(c) \
{ \
  IlEnterCriticalLow_Beam_available_0x760(); \
  Car_Info.Car_Info.Low_Beam_available_0x760 = (c); \
  IlLeaveCriticalLow_Beam_available_0x760(); \
}
#endif

/* Handle:  121,Name:      High_Beam_Available_0x760,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxHigh_Beam_Available_0x760(c) \
{ \
  IlEnterCriticalHigh_Beam_Available_0x760(); \
  Car_Info.Car_Info.High_Beam_Available_0x760 = (c); \
  IlLeaveCriticalHigh_Beam_Available_0x760(); \
}
#endif

/* Handle:  122,Name:          Speed_Available_0x760,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxSpeed_Available_0x760(c) \
{ \
  IlEnterCriticalSpeed_Available_0x760(); \
  Car_Info.Car_Info.Speed_Available_0x760 = (c); \
  IlLeaveCriticalSpeed_Available_0x760(); \
}
#endif

/* Handle:  123,Name:                    Speed_0x760,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxSpeed_0x760(c) \
{ \
  IlEnterCriticalSpeed_0x760(); \
  Car_Info.Car_Info.Speed_0x760 = (c); \
  IlLeaveCriticalSpeed_0x760(); \
}
#endif

/* Handle:  127,Name:        Obstacle_Replaced_0x750,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxObstacle_Replaced_0x750(c) \
{ \
  IlEnterCriticalObstacle_Replaced_0x750(); \
  Obstacle_Data_X.Obstacle_Data_X.Obstacle_Replaced_0x750 = (c); \
  IlLeaveCriticalObstacle_Replaced_0x750(); \
}
#endif

/* Handle:  129,Name:          Obstacle_Legnth_0x74F,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxObstacle_Legnth_0x74F(c) \
{ \
  IlEnterCriticalObstacle_Legnth_0x74F(); \
  Obstacle_Data_W.Obstacle_Data_W.Obstacle_Legnth_0x74F = (c); \
  IlLeaveCriticalObstacle_Legnth_0x74F(); \
}
#endif

/* Handle:  132,Name:            Obstacle_Lane_0x74F,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxObstacle_Lane_0x74F(c) \
{ \
  IlEnterCriticalObstacle_Lane_0x74F(); \
  Obstacle_Data_W.Obstacle_Data_W.Obstacle_Lane_0x74F = (c); \
  IlLeaveCriticalObstacle_Lane_0x74F(); \
}
#endif

/* Handle:  133,Name:                CIPV_Flag_0x74F,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxCIPV_Flag_0x74F(c) \
{ \
  IlEnterCriticalCIPV_Flag_0x74F(); \
  Obstacle_Data_W.Obstacle_Data_W.CIPV_Flag_0x74F = (c); \
  IlLeaveCriticalCIPV_Flag_0x74F(); \
}
#endif

/* Handle:  136,Name:   Radar_Match_Confidence_0x74F,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxRadar_Match_Confidence_0x74F(c) \
{ \
  IlEnterCriticalRadar_Match_Confidence_0x74F(); \
  Obstacle_Data_W.Obstacle_Data_W.Radar_Match_Confidence_0x74F = (c); \
  IlLeaveCriticalRadar_Match_Confidence_0x74F(); \
}
#endif

/* Handle:  137,Name:         Matched_Radar_ID_0x74F,Size:  7,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxMatched_Radar_ID_0x74F(c) \
{ \
  IlEnterCriticalMatched_Radar_ID_0x74F(); \
  Obstacle_Data_W.Obstacle_Data_W.Matched_Radar_ID_0x74F = (c); \
  IlLeaveCriticalMatched_Radar_ID_0x74F(); \
}
#endif

/* Handle:  138,Name:              Obstacle_ID_0x74E,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxObstacle_ID_0x74E(c) \
{ \
  IlEnterCriticalObstacle_ID_0x74E(); \
  Obstacle_Data_V.Obstacle_Data_V.Obstacle_ID_0x74E = (c); \
  IlLeaveCriticalObstacle_ID_0x74E(); \
}
#endif

/* Handle:  141,Name:             Blinker_Info_0x74E,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxBlinker_Info_0x74E(c) \
{ \
  IlEnterCriticalBlinker_Info_0x74E(); \
  Obstacle_Data_V.Obstacle_Data_V.Blinker_Info_0x74E = (c); \
  IlLeaveCriticalBlinker_Info_0x74E(); \
}
#endif

/* Handle:  142,Name:           Cut_in_and_out_0x74E,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxCut_in_and_out_0x74E(c) \
{ \
  IlEnterCriticalCut_in_and_out_0x74E(); \
  Obstacle_Data_V.Obstacle_Data_V.Cut_in_and_out_0x74E = (c); \
  IlLeaveCriticalCut_in_and_out_0x74E(); \
}
#endif

/* Handle:  144,Name:            Obstacle_Type_0x74E,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxObstacle_Type_0x74E(c) \
{ \
  IlEnterCriticalObstacle_Type_0x74E(); \
  Obstacle_Data_V.Obstacle_Data_V.Obstacle_Type_0x74E = (c); \
  IlLeaveCriticalObstacle_Type_0x74E(); \
}
#endif

/* Handle:  145,Name:          Obstacle_Status_0x74E,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxObstacle_Status_0x74E(c) \
{ \
  IlEnterCriticalObstacle_Status_0x74E(); \
  Obstacle_Data_V.Obstacle_Data_V.Obstacle_Status_0x74E = (c); \
  IlLeaveCriticalObstacle_Status_0x74E(); \
}
#endif

/* Handle:  146,Name:     Obstacle_Brake_Light_0x74E,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxObstacle_Brake_Light_0x74E(c) \
{ \
  IlEnterCriticalObstacle_Brake_Light_0x74E(); \
  Obstacle_Data_V.Obstacle_Data_V.Obstacle_Brake_Light_0x74E = (c); \
  IlLeaveCriticalObstacle_Brake_Light_0x74E(); \
}
#endif

/* Handle:  147,Name:           Obstacle_Valid_0x74E,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxObstacle_Valid_0x74E(c) \
{ \
  IlEnterCriticalObstacle_Valid_0x74E(); \
  Obstacle_Data_V.Obstacle_Data_V.Obstacle_Valid_0x74E = (c); \
  IlLeaveCriticalObstacle_Valid_0x74E(); \
}
#endif

/* Handle:  151,Name:        Obstacle_Replaced_0x74D,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxObstacle_Replaced_0x74D(c) \
{ \
  IlEnterCriticalObstacle_Replaced_0x74D(); \
  Obstacle_Data_U.Obstacle_Data_U.Obstacle_Replaced_0x74D = (c); \
  IlLeaveCriticalObstacle_Replaced_0x74D(); \
}
#endif

/* Handle:  153,Name:          Obstacle_Legnth_0x74C,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxObstacle_Legnth_0x74C(c) \
{ \
  IlEnterCriticalObstacle_Legnth_0x74C(); \
  Obstacle_Data_T.Obstacle_Data_T.Obstacle_Legnth_0x74C = (c); \
  IlLeaveCriticalObstacle_Legnth_0x74C(); \
}
#endif

/* Handle:  156,Name:            Obstacle_Lane_0x74C,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxObstacle_Lane_0x74C(c) \
{ \
  IlEnterCriticalObstacle_Lane_0x74C(); \
  Obstacle_Data_T.Obstacle_Data_T.Obstacle_Lane_0x74C = (c); \
  IlLeaveCriticalObstacle_Lane_0x74C(); \
}
#endif

/* Handle:  157,Name:                CIPV_Flag_0x74C,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxCIPV_Flag_0x74C(c) \
{ \
  IlEnterCriticalCIPV_Flag_0x74C(); \
  Obstacle_Data_T.Obstacle_Data_T.CIPV_Flag_0x74C = (c); \
  IlLeaveCriticalCIPV_Flag_0x74C(); \
}
#endif

/* Handle:  160,Name:   Radar_Match_Confidence_0x74C,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxRadar_Match_Confidence_0x74C(c) \
{ \
  IlEnterCriticalRadar_Match_Confidence_0x74C(); \
  Obstacle_Data_T.Obstacle_Data_T.Radar_Match_Confidence_0x74C = (c); \
  IlLeaveCriticalRadar_Match_Confidence_0x74C(); \
}
#endif

/* Handle:  161,Name:         Matched_Radar_ID_0x74C,Size:  7,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxMatched_Radar_ID_0x74C(c) \
{ \
  IlEnterCriticalMatched_Radar_ID_0x74C(); \
  Obstacle_Data_T.Obstacle_Data_T.Matched_Radar_ID_0x74C = (c); \
  IlLeaveCriticalMatched_Radar_ID_0x74C(); \
}
#endif

/* Handle:  162,Name:              Obstacle_ID_0x74B,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxObstacle_ID_0x74B(c) \
{ \
  IlEnterCriticalObstacle_ID_0x74B(); \
  Obstacle_Data_S.Obstacle_Data_S.Obstacle_ID_0x74B = (c); \
  IlLeaveCriticalObstacle_ID_0x74B(); \
}
#endif

/* Handle:  165,Name:             Blinker_Info_0x74B,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxBlinker_Info_0x74B(c) \
{ \
  IlEnterCriticalBlinker_Info_0x74B(); \
  Obstacle_Data_S.Obstacle_Data_S.Blinker_Info_0x74B = (c); \
  IlLeaveCriticalBlinker_Info_0x74B(); \
}
#endif

/* Handle:  166,Name:           Cut_in_and_out_0x74B,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxCut_in_and_out_0x74B(c) \
{ \
  IlEnterCriticalCut_in_and_out_0x74B(); \
  Obstacle_Data_S.Obstacle_Data_S.Cut_in_and_out_0x74B = (c); \
  IlLeaveCriticalCut_in_and_out_0x74B(); \
}
#endif

/* Handle:  168,Name:            Obstacle_Type_0x74B,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxObstacle_Type_0x74B(c) \
{ \
  IlEnterCriticalObstacle_Type_0x74B(); \
  Obstacle_Data_S.Obstacle_Data_S.Obstacle_Type_0x74B = (c); \
  IlLeaveCriticalObstacle_Type_0x74B(); \
}
#endif

/* Handle:  169,Name:          Obstacle_Status_0x74B,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxObstacle_Status_0x74B(c) \
{ \
  IlEnterCriticalObstacle_Status_0x74B(); \
  Obstacle_Data_S.Obstacle_Data_S.Obstacle_Status_0x74B = (c); \
  IlLeaveCriticalObstacle_Status_0x74B(); \
}
#endif

/* Handle:  170,Name:     Obstacle_Brake_Light_0x74B,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxObstacle_Brake_Light_0x74B(c) \
{ \
  IlEnterCriticalObstacle_Brake_Light_0x74B(); \
  Obstacle_Data_S.Obstacle_Data_S.Obstacle_Brake_Light_0x74B = (c); \
  IlLeaveCriticalObstacle_Brake_Light_0x74B(); \
}
#endif

/* Handle:  171,Name:           Obstacle_Valid_0x74B,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxObstacle_Valid_0x74B(c) \
{ \
  IlEnterCriticalObstacle_Valid_0x74B(); \
  Obstacle_Data_S.Obstacle_Data_S.Obstacle_Valid_0x74B = (c); \
  IlLeaveCriticalObstacle_Valid_0x74B(); \
}
#endif

/* Handle:  175,Name:        Obstacle_Replaced_0x74A,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxObstacle_Replaced_0x74A(c) \
{ \
  IlEnterCriticalObstacle_Replaced_0x74A(); \
  Obstacle_Data_R.Obstacle_Data_R.Obstacle_Replaced_0x74A = (c); \
  IlLeaveCriticalObstacle_Replaced_0x74A(); \
}
#endif

/* Handle:  177,Name:          Obstacle_Legnth_0x749,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxObstacle_Legnth_0x749(c) \
{ \
  IlEnterCriticalObstacle_Legnth_0x749(); \
  Obstacle_Data_Q.Obstacle_Data_Q.Obstacle_Legnth_0x749 = (c); \
  IlLeaveCriticalObstacle_Legnth_0x749(); \
}
#endif

/* Handle:  180,Name:            Obstacle_Lane_0x749,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxObstacle_Lane_0x749(c) \
{ \
  IlEnterCriticalObstacle_Lane_0x749(); \
  Obstacle_Data_Q.Obstacle_Data_Q.Obstacle_Lane_0x749 = (c); \
  IlLeaveCriticalObstacle_Lane_0x749(); \
}
#endif

/* Handle:  181,Name:                CIPV_Flag_0x749,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxCIPV_Flag_0x749(c) \
{ \
  IlEnterCriticalCIPV_Flag_0x749(); \
  Obstacle_Data_Q.Obstacle_Data_Q.CIPV_Flag_0x749 = (c); \
  IlLeaveCriticalCIPV_Flag_0x749(); \
}
#endif

/* Handle:  184,Name:   Radar_Match_Confidence_0x749,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxRadar_Match_Confidence_0x749(c) \
{ \
  IlEnterCriticalRadar_Match_Confidence_0x749(); \
  Obstacle_Data_Q.Obstacle_Data_Q.Radar_Match_Confidence_0x749 = (c); \
  IlLeaveCriticalRadar_Match_Confidence_0x749(); \
}
#endif

/* Handle:  185,Name:         Matched_Radar_ID_0x749,Size:  7,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxMatched_Radar_ID_0x749(c) \
{ \
  IlEnterCriticalMatched_Radar_ID_0x749(); \
  Obstacle_Data_Q.Obstacle_Data_Q.Matched_Radar_ID_0x749 = (c); \
  IlLeaveCriticalMatched_Radar_ID_0x749(); \
}
#endif

/* Handle:  186,Name:              Obstacle_ID_0x748,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxObstacle_ID_0x748(c) \
{ \
  IlEnterCriticalObstacle_ID_0x748(); \
  Obstacle_Data_P.Obstacle_Data_P.Obstacle_ID_0x748 = (c); \
  IlLeaveCriticalObstacle_ID_0x748(); \
}
#endif

/* Handle:  189,Name:             Blinker_Info_0x748,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxBlinker_Info_0x748(c) \
{ \
  IlEnterCriticalBlinker_Info_0x748(); \
  Obstacle_Data_P.Obstacle_Data_P.Blinker_Info_0x748 = (c); \
  IlLeaveCriticalBlinker_Info_0x748(); \
}
#endif

/* Handle:  190,Name:           Cut_in_and_out_0x748,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxCut_in_and_out_0x748(c) \
{ \
  IlEnterCriticalCut_in_and_out_0x748(); \
  Obstacle_Data_P.Obstacle_Data_P.Cut_in_and_out_0x748 = (c); \
  IlLeaveCriticalCut_in_and_out_0x748(); \
}
#endif

/* Handle:  192,Name:            Obstacle_Type_0x748,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxObstacle_Type_0x748(c) \
{ \
  IlEnterCriticalObstacle_Type_0x748(); \
  Obstacle_Data_P.Obstacle_Data_P.Obstacle_Type_0x748 = (c); \
  IlLeaveCriticalObstacle_Type_0x748(); \
}
#endif

/* Handle:  193,Name:          Obstacle_Status_0x748,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxObstacle_Status_0x748(c) \
{ \
  IlEnterCriticalObstacle_Status_0x748(); \
  Obstacle_Data_P.Obstacle_Data_P.Obstacle_Status_0x748 = (c); \
  IlLeaveCriticalObstacle_Status_0x748(); \
}
#endif

/* Handle:  194,Name:     Obstacle_Brake_Light_0x748,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxObstacle_Brake_Light_0x748(c) \
{ \
  IlEnterCriticalObstacle_Brake_Light_0x748(); \
  Obstacle_Data_P.Obstacle_Data_P.Obstacle_Brake_Light_0x748 = (c); \
  IlLeaveCriticalObstacle_Brake_Light_0x748(); \
}
#endif

/* Handle:  195,Name:           Obstacle_Valid_0x748,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxObstacle_Valid_0x748(c) \
{ \
  IlEnterCriticalObstacle_Valid_0x748(); \
  Obstacle_Data_P.Obstacle_Data_P.Obstacle_Valid_0x748 = (c); \
  IlLeaveCriticalObstacle_Valid_0x748(); \
}
#endif

/* Handle:  199,Name:        Obstacle_Replaced_0x747,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxObstacle_Replaced_0x747(c) \
{ \
  IlEnterCriticalObstacle_Replaced_0x747(); \
  Obstacle_Data_O.Obstacle_Data_O.Obstacle_Replaced_0x747 = (c); \
  IlLeaveCriticalObstacle_Replaced_0x747(); \
}
#endif

/* Handle:  201,Name:          Obstacle_Legnth_0x746,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxObstacle_Legnth_0x746(c) \
{ \
  IlEnterCriticalObstacle_Legnth_0x746(); \
  Obstacle_Data_N.Obstacle_Data_N.Obstacle_Legnth_0x746 = (c); \
  IlLeaveCriticalObstacle_Legnth_0x746(); \
}
#endif

/* Handle:  204,Name:            Obstacle_Lane_0x746,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxObstacle_Lane_0x746(c) \
{ \
  IlEnterCriticalObstacle_Lane_0x746(); \
  Obstacle_Data_N.Obstacle_Data_N.Obstacle_Lane_0x746 = (c); \
  IlLeaveCriticalObstacle_Lane_0x746(); \
}
#endif

/* Handle:  205,Name:                CIPV_Flag_0x746,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxCIPV_Flag_0x746(c) \
{ \
  IlEnterCriticalCIPV_Flag_0x746(); \
  Obstacle_Data_N.Obstacle_Data_N.CIPV_Flag_0x746 = (c); \
  IlLeaveCriticalCIPV_Flag_0x746(); \
}
#endif

/* Handle:  208,Name:   Radar_Match_Confidence_0x746,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxRadar_Match_Confidence_0x746(c) \
{ \
  IlEnterCriticalRadar_Match_Confidence_0x746(); \
  Obstacle_Data_N.Obstacle_Data_N.Radar_Match_Confidence_0x746 = (c); \
  IlLeaveCriticalRadar_Match_Confidence_0x746(); \
}
#endif

/* Handle:  209,Name:         Matched_Radar_ID_0x746,Size:  7,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxMatched_Radar_ID_0x746(c) \
{ \
  IlEnterCriticalMatched_Radar_ID_0x746(); \
  Obstacle_Data_N.Obstacle_Data_N.Matched_Radar_ID_0x746 = (c); \
  IlLeaveCriticalMatched_Radar_ID_0x746(); \
}
#endif

/* Handle:  210,Name:              Obstacle_ID_0x745,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxObstacle_ID_0x745(c) \
{ \
  IlEnterCriticalObstacle_ID_0x745(); \
  Obstacle_Data_M.Obstacle_Data_M.Obstacle_ID_0x745 = (c); \
  IlLeaveCriticalObstacle_ID_0x745(); \
}
#endif

/* Handle:  213,Name:             Blinker_Info_0x745,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxBlinker_Info_0x745(c) \
{ \
  IlEnterCriticalBlinker_Info_0x745(); \
  Obstacle_Data_M.Obstacle_Data_M.Blinker_Info_0x745 = (c); \
  IlLeaveCriticalBlinker_Info_0x745(); \
}
#endif

/* Handle:  214,Name:           Cut_in_and_out_0x745,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxCut_in_and_out_0x745(c) \
{ \
  IlEnterCriticalCut_in_and_out_0x745(); \
  Obstacle_Data_M.Obstacle_Data_M.Cut_in_and_out_0x745 = (c); \
  IlLeaveCriticalCut_in_and_out_0x745(); \
}
#endif

/* Handle:  216,Name:            Obstacle_Type_0x745,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxObstacle_Type_0x745(c) \
{ \
  IlEnterCriticalObstacle_Type_0x745(); \
  Obstacle_Data_M.Obstacle_Data_M.Obstacle_Type_0x745 = (c); \
  IlLeaveCriticalObstacle_Type_0x745(); \
}
#endif

/* Handle:  217,Name:          Obstacle_Status_0x745,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxObstacle_Status_0x745(c) \
{ \
  IlEnterCriticalObstacle_Status_0x745(); \
  Obstacle_Data_M.Obstacle_Data_M.Obstacle_Status_0x745 = (c); \
  IlLeaveCriticalObstacle_Status_0x745(); \
}
#endif

/* Handle:  218,Name:     Obstacle_Brake_Light_0x745,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxObstacle_Brake_Light_0x745(c) \
{ \
  IlEnterCriticalObstacle_Brake_Light_0x745(); \
  Obstacle_Data_M.Obstacle_Data_M.Obstacle_Brake_Light_0x745 = (c); \
  IlLeaveCriticalObstacle_Brake_Light_0x745(); \
}
#endif

/* Handle:  219,Name:           Obstacle_Valid_0x745,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxObstacle_Valid_0x745(c) \
{ \
  IlEnterCriticalObstacle_Valid_0x745(); \
  Obstacle_Data_M.Obstacle_Data_M.Obstacle_Valid_0x745 = (c); \
  IlLeaveCriticalObstacle_Valid_0x745(); \
}
#endif

/* Handle:  223,Name:        Obstacle_Replaced_0x744,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxObstacle_Replaced_0x744(c) \
{ \
  IlEnterCriticalObstacle_Replaced_0x744(); \
  Obstacle_Data_L.Obstacle_Data_L.Obstacle_Replaced_0x744 = (c); \
  IlLeaveCriticalObstacle_Replaced_0x744(); \
}
#endif

/* Handle:  225,Name:          Obstacle_Legnth_0x743,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxObstacle_Legnth_0x743(c) \
{ \
  IlEnterCriticalObstacle_Legnth_0x743(); \
  Obstacle_Data_K.Obstacle_Data_K.Obstacle_Legnth_0x743 = (c); \
  IlLeaveCriticalObstacle_Legnth_0x743(); \
}
#endif

/* Handle:  228,Name:            Obstacle_Lane_0x743,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxObstacle_Lane_0x743(c) \
{ \
  IlEnterCriticalObstacle_Lane_0x743(); \
  Obstacle_Data_K.Obstacle_Data_K.Obstacle_Lane_0x743 = (c); \
  IlLeaveCriticalObstacle_Lane_0x743(); \
}
#endif

/* Handle:  229,Name:                CIPV_Flag_0x743,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxCIPV_Flag_0x743(c) \
{ \
  IlEnterCriticalCIPV_Flag_0x743(); \
  Obstacle_Data_K.Obstacle_Data_K.CIPV_Flag_0x743 = (c); \
  IlLeaveCriticalCIPV_Flag_0x743(); \
}
#endif

/* Handle:  232,Name:   Radar_Match_Confidence_0x743,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxRadar_Match_Confidence_0x743(c) \
{ \
  IlEnterCriticalRadar_Match_Confidence_0x743(); \
  Obstacle_Data_K.Obstacle_Data_K.Radar_Match_Confidence_0x743 = (c); \
  IlLeaveCriticalRadar_Match_Confidence_0x743(); \
}
#endif

/* Handle:  233,Name:         Matched_Radar_ID_0x743,Size:  7,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxMatched_Radar_ID_0x743(c) \
{ \
  IlEnterCriticalMatched_Radar_ID_0x743(); \
  Obstacle_Data_K.Obstacle_Data_K.Matched_Radar_ID_0x743 = (c); \
  IlLeaveCriticalMatched_Radar_ID_0x743(); \
}
#endif

/* Handle:  234,Name:              Obstacle_ID_0x742,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxObstacle_ID_0x742(c) \
{ \
  IlEnterCriticalObstacle_ID_0x742(); \
  Obstacle_Data_J.Obstacle_Data_J.Obstacle_ID_0x742 = (c); \
  IlLeaveCriticalObstacle_ID_0x742(); \
}
#endif

/* Handle:  237,Name:             Blinker_Info_0x742,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxBlinker_Info_0x742(c) \
{ \
  IlEnterCriticalBlinker_Info_0x742(); \
  Obstacle_Data_J.Obstacle_Data_J.Blinker_Info_0x742 = (c); \
  IlLeaveCriticalBlinker_Info_0x742(); \
}
#endif

/* Handle:  238,Name:           Cut_in_and_out_0x742,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxCut_in_and_out_0x742(c) \
{ \
  IlEnterCriticalCut_in_and_out_0x742(); \
  Obstacle_Data_J.Obstacle_Data_J.Cut_in_and_out_0x742 = (c); \
  IlLeaveCriticalCut_in_and_out_0x742(); \
}
#endif

/* Handle:  240,Name:            Obstacle_Type_0x742,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxObstacle_Type_0x742(c) \
{ \
  IlEnterCriticalObstacle_Type_0x742(); \
  Obstacle_Data_J.Obstacle_Data_J.Obstacle_Type_0x742 = (c); \
  IlLeaveCriticalObstacle_Type_0x742(); \
}
#endif

/* Handle:  241,Name:          Obstacle_Status_0x742,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxObstacle_Status_0x742(c) \
{ \
  IlEnterCriticalObstacle_Status_0x742(); \
  Obstacle_Data_J.Obstacle_Data_J.Obstacle_Status_0x742 = (c); \
  IlLeaveCriticalObstacle_Status_0x742(); \
}
#endif

/* Handle:  242,Name:     Obstacle_Brake_Light_0x742,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxObstacle_Brake_Light_0x742(c) \
{ \
  IlEnterCriticalObstacle_Brake_Light_0x742(); \
  Obstacle_Data_J.Obstacle_Data_J.Obstacle_Brake_Light_0x742 = (c); \
  IlLeaveCriticalObstacle_Brake_Light_0x742(); \
}
#endif

/* Handle:  243,Name:           Obstacle_Valid_0x742,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxObstacle_Valid_0x742(c) \
{ \
  IlEnterCriticalObstacle_Valid_0x742(); \
  Obstacle_Data_J.Obstacle_Data_J.Obstacle_Valid_0x742 = (c); \
  IlLeaveCriticalObstacle_Valid_0x742(); \
}
#endif

/* Handle:  247,Name:        Obstacle_Replaced_0x741,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxObstacle_Replaced_0x741(c) \
{ \
  IlEnterCriticalObstacle_Replaced_0x741(); \
  Obstacle_Data_I.Obstacle_Data_I.Obstacle_Replaced_0x741 = (c); \
  IlLeaveCriticalObstacle_Replaced_0x741(); \
}
#endif

/* Handle:  249,Name:          Obstacle_Legnth_0x740,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxObstacle_Legnth_0x740(c) \
{ \
  IlEnterCriticalObstacle_Legnth_0x740(); \
  Obstacle_Data_H.Obstacle_Data_H.Obstacle_Legnth_0x740 = (c); \
  IlLeaveCriticalObstacle_Legnth_0x740(); \
}
#endif

/* Handle:  252,Name:            Obstacle_Lane_0x740,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxObstacle_Lane_0x740(c) \
{ \
  IlEnterCriticalObstacle_Lane_0x740(); \
  Obstacle_Data_H.Obstacle_Data_H.Obstacle_Lane_0x740 = (c); \
  IlLeaveCriticalObstacle_Lane_0x740(); \
}
#endif

/* Handle:  253,Name:                CIPV_Flag_0x740,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxCIPV_Flag_0x740(c) \
{ \
  IlEnterCriticalCIPV_Flag_0x740(); \
  Obstacle_Data_H.Obstacle_Data_H.CIPV_Flag_0x740 = (c); \
  IlLeaveCriticalCIPV_Flag_0x740(); \
}
#endif

/* Handle:  256,Name:   Radar_Match_Confidence_0x740,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxRadar_Match_Confidence_0x740(c) \
{ \
  IlEnterCriticalRadar_Match_Confidence_0x740(); \
  Obstacle_Data_H.Obstacle_Data_H.Radar_Match_Confidence_0x740 = (c); \
  IlLeaveCriticalRadar_Match_Confidence_0x740(); \
}
#endif

/* Handle:  257,Name:         Matched_Radar_ID_0x740,Size:  7,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxMatched_Radar_ID_0x740(c) \
{ \
  IlEnterCriticalMatched_Radar_ID_0x740(); \
  Obstacle_Data_H.Obstacle_Data_H.Matched_Radar_ID_0x740 = (c); \
  IlLeaveCriticalMatched_Radar_ID_0x740(); \
}
#endif

/* Handle:  258,Name:              Obstacle_ID_0x73F,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxObstacle_ID_0x73F(c) \
{ \
  IlEnterCriticalObstacle_ID_0x73F(); \
  Obstacle_Data_G.Obstacle_Data_G.Obstacle_ID_0x73F = (c); \
  IlLeaveCriticalObstacle_ID_0x73F(); \
}
#endif

/* Handle:  261,Name:             Blinker_Info_0x73F,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxBlinker_Info_0x73F(c) \
{ \
  IlEnterCriticalBlinker_Info_0x73F(); \
  Obstacle_Data_G.Obstacle_Data_G.Blinker_Info_0x73F = (c); \
  IlLeaveCriticalBlinker_Info_0x73F(); \
}
#endif

/* Handle:  262,Name:           Cut_in_and_out_0x73F,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxCut_in_and_out_0x73F(c) \
{ \
  IlEnterCriticalCut_in_and_out_0x73F(); \
  Obstacle_Data_G.Obstacle_Data_G.Cut_in_and_out_0x73F = (c); \
  IlLeaveCriticalCut_in_and_out_0x73F(); \
}
#endif

/* Handle:  264,Name:            Obstacle_Type_0x73F,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxObstacle_Type_0x73F(c) \
{ \
  IlEnterCriticalObstacle_Type_0x73F(); \
  Obstacle_Data_G.Obstacle_Data_G.Obstacle_Type_0x73F = (c); \
  IlLeaveCriticalObstacle_Type_0x73F(); \
}
#endif

/* Handle:  265,Name:          Obstacle_Status_0x73F,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxObstacle_Status_0x73F(c) \
{ \
  IlEnterCriticalObstacle_Status_0x73F(); \
  Obstacle_Data_G.Obstacle_Data_G.Obstacle_Status_0x73F = (c); \
  IlLeaveCriticalObstacle_Status_0x73F(); \
}
#endif

/* Handle:  266,Name:     Obstacle_Brake_Light_0x73F,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxObstacle_Brake_Light_0x73F(c) \
{ \
  IlEnterCriticalObstacle_Brake_Light_0x73F(); \
  Obstacle_Data_G.Obstacle_Data_G.Obstacle_Brake_Light_0x73F = (c); \
  IlLeaveCriticalObstacle_Brake_Light_0x73F(); \
}
#endif

/* Handle:  267,Name:           Obstacle_Valid_0x73F,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxObstacle_Valid_0x73F(c) \
{ \
  IlEnterCriticalObstacle_Valid_0x73F(); \
  Obstacle_Data_G.Obstacle_Data_G.Obstacle_Valid_0x73F = (c); \
  IlLeaveCriticalObstacle_Valid_0x73F(); \
}
#endif

/* Handle:  271,Name:        Obstacle_Replaced_0x73E,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxObstacle_Replaced_0x73E(c) \
{ \
  IlEnterCriticalObstacle_Replaced_0x73E(); \
  Obstacle_Data_F.Obstacle_Data_F.Obstacle_Replaced_0x73E = (c); \
  IlLeaveCriticalObstacle_Replaced_0x73E(); \
}
#endif

/* Handle:  273,Name:          Obstacle_Legnth_0x73D,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxObstacle_Legnth_0x73D(c) \
{ \
  IlEnterCriticalObstacle_Legnth_0x73D(); \
  Obstacle_Data_E.Obstacle_Data_E.Obstacle_Legnth_0x73D = (c); \
  IlLeaveCriticalObstacle_Legnth_0x73D(); \
}
#endif

/* Handle:  276,Name:            Obstacle_Lane_0x73D,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxObstacle_Lane_0x73D(c) \
{ \
  IlEnterCriticalObstacle_Lane_0x73D(); \
  Obstacle_Data_E.Obstacle_Data_E.Obstacle_Lane_0x73D = (c); \
  IlLeaveCriticalObstacle_Lane_0x73D(); \
}
#endif

/* Handle:  277,Name:                CIPV_Flag_0x73D,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxCIPV_Flag_0x73D(c) \
{ \
  IlEnterCriticalCIPV_Flag_0x73D(); \
  Obstacle_Data_E.Obstacle_Data_E.CIPV_Flag_0x73D = (c); \
  IlLeaveCriticalCIPV_Flag_0x73D(); \
}
#endif

/* Handle:  280,Name:   Radar_Match_Confidence_0x73D,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxRadar_Match_Confidence_0x73D(c) \
{ \
  IlEnterCriticalRadar_Match_Confidence_0x73D(); \
  Obstacle_Data_E.Obstacle_Data_E.Radar_Match_Confidence_0x73D = (c); \
  IlLeaveCriticalRadar_Match_Confidence_0x73D(); \
}
#endif

/* Handle:  281,Name:         Matched_Radar_ID_0x73D,Size:  7,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxMatched_Radar_ID_0x73D(c) \
{ \
  IlEnterCriticalMatched_Radar_ID_0x73D(); \
  Obstacle_Data_E.Obstacle_Data_E.Matched_Radar_ID_0x73D = (c); \
  IlLeaveCriticalMatched_Radar_ID_0x73D(); \
}
#endif

/* Handle:  282,Name:              Obstacle_ID_0x73C,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxObstacle_ID_0x73C(c) \
{ \
  IlEnterCriticalObstacle_ID_0x73C(); \
  Obstacle_Data_D.Obstacle_Data_D.Obstacle_ID_0x73C = (c); \
  IlLeaveCriticalObstacle_ID_0x73C(); \
}
#endif

/* Handle:  285,Name:             Blinker_Info_0x73C,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxBlinker_Info_0x73C(c) \
{ \
  IlEnterCriticalBlinker_Info_0x73C(); \
  Obstacle_Data_D.Obstacle_Data_D.Blinker_Info_0x73C = (c); \
  IlLeaveCriticalBlinker_Info_0x73C(); \
}
#endif

/* Handle:  286,Name:           Cut_in_and_out_0x73C,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxCut_in_and_out_0x73C(c) \
{ \
  IlEnterCriticalCut_in_and_out_0x73C(); \
  Obstacle_Data_D.Obstacle_Data_D.Cut_in_and_out_0x73C = (c); \
  IlLeaveCriticalCut_in_and_out_0x73C(); \
}
#endif

/* Handle:  288,Name:            Obstacle_Type_0x73C,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxObstacle_Type_0x73C(c) \
{ \
  IlEnterCriticalObstacle_Type_0x73C(); \
  Obstacle_Data_D.Obstacle_Data_D.Obstacle_Type_0x73C = (c); \
  IlLeaveCriticalObstacle_Type_0x73C(); \
}
#endif

/* Handle:  289,Name:          Obstacle_Status_0x73C,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxObstacle_Status_0x73C(c) \
{ \
  IlEnterCriticalObstacle_Status_0x73C(); \
  Obstacle_Data_D.Obstacle_Data_D.Obstacle_Status_0x73C = (c); \
  IlLeaveCriticalObstacle_Status_0x73C(); \
}
#endif

/* Handle:  290,Name:     Obstacle_Brake_Light_0x73C,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxObstacle_Brake_Light_0x73C(c) \
{ \
  IlEnterCriticalObstacle_Brake_Light_0x73C(); \
  Obstacle_Data_D.Obstacle_Data_D.Obstacle_Brake_Light_0x73C = (c); \
  IlLeaveCriticalObstacle_Brake_Light_0x73C(); \
}
#endif

/* Handle:  291,Name:           Obstacle_Valid_0x73C,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxObstacle_Valid_0x73C(c) \
{ \
  IlEnterCriticalObstacle_Valid_0x73C(); \
  Obstacle_Data_D.Obstacle_Data_D.Obstacle_Valid_0x73C = (c); \
  IlLeaveCriticalObstacle_Valid_0x73C(); \
}
#endif

/* Handle:  295,Name:        Obstacle_Replaced_0x73B,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxObstacle_Replaced_0x73B(c) \
{ \
  IlEnterCriticalObstacle_Replaced_0x73B(); \
  Obstacle_Data_C.Obstacle_Data_C.Obstacle_Replaced_0x73B = (c); \
  IlLeaveCriticalObstacle_Replaced_0x73B(); \
}
#endif

/* Handle:  297,Name:          Obstacle_Legnth_0x73A,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxObstacle_Legnth_0x73A(c) \
{ \
  IlEnterCriticalObstacle_Legnth_0x73A(); \
  Obstacle_Data_B.Obstacle_Data_B.Obstacle_Legnth_0x73A = (c); \
  IlLeaveCriticalObstacle_Legnth_0x73A(); \
}
#endif

/* Handle:  300,Name:            Obstacle_Lane_0x73A,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxObstacle_Lane_0x73A(c) \
{ \
  IlEnterCriticalObstacle_Lane_0x73A(); \
  Obstacle_Data_B.Obstacle_Data_B.Obstacle_Lane_0x73A = (c); \
  IlLeaveCriticalObstacle_Lane_0x73A(); \
}
#endif

/* Handle:  301,Name:                CIPV_Flag_0x73A,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxCIPV_Flag_0x73A(c) \
{ \
  IlEnterCriticalCIPV_Flag_0x73A(); \
  Obstacle_Data_B.Obstacle_Data_B.CIPV_Flag_0x73A = (c); \
  IlLeaveCriticalCIPV_Flag_0x73A(); \
}
#endif

/* Handle:  304,Name:   Radar_Match_Confidence_0x73A,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxRadar_Match_Confidence_0x73A(c) \
{ \
  IlEnterCriticalRadar_Match_Confidence_0x73A(); \
  Obstacle_Data_B.Obstacle_Data_B.Radar_Match_Confidence_0x73A = (c); \
  IlLeaveCriticalRadar_Match_Confidence_0x73A(); \
}
#endif

/* Handle:  305,Name:         Matched_Radar_ID_0x73A,Size:  7,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxMatched_Radar_ID_0x73A(c) \
{ \
  IlEnterCriticalMatched_Radar_ID_0x73A(); \
  Obstacle_Data_B.Obstacle_Data_B.Matched_Radar_ID_0x73A = (c); \
  IlLeaveCriticalMatched_Radar_ID_0x73A(); \
}
#endif

/* Handle:  306,Name:              Obstacle_ID_0x739,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxObstacle_ID_0x739(c) \
{ \
  IlEnterCriticalObstacle_ID_0x739(); \
  Obstacle_Data_A.Obstacle_Data_A.Obstacle_ID_0x739 = (c); \
  IlLeaveCriticalObstacle_ID_0x739(); \
}
#endif

/* Handle:  309,Name:             Blinker_Info_0x739,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxBlinker_Info_0x739(c) \
{ \
  IlEnterCriticalBlinker_Info_0x739(); \
  Obstacle_Data_A.Obstacle_Data_A.Blinker_Info_0x739 = (c); \
  IlLeaveCriticalBlinker_Info_0x739(); \
}
#endif

/* Handle:  310,Name:           Cut_in_and_out_0x739,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxCut_in_and_out_0x739(c) \
{ \
  IlEnterCriticalCut_in_and_out_0x739(); \
  Obstacle_Data_A.Obstacle_Data_A.Cut_in_and_out_0x739 = (c); \
  IlLeaveCriticalCut_in_and_out_0x739(); \
}
#endif

/* Handle:  312,Name:            Obstacle_Type_0x739,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxObstacle_Type_0x739(c) \
{ \
  IlEnterCriticalObstacle_Type_0x739(); \
  Obstacle_Data_A.Obstacle_Data_A.Obstacle_Type_0x739 = (c); \
  IlLeaveCriticalObstacle_Type_0x739(); \
}
#endif

/* Handle:  313,Name:          Obstacle_Status_0x739,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxObstacle_Status_0x739(c) \
{ \
  IlEnterCriticalObstacle_Status_0x739(); \
  Obstacle_Data_A.Obstacle_Data_A.Obstacle_Status_0x739 = (c); \
  IlLeaveCriticalObstacle_Status_0x739(); \
}
#endif

/* Handle:  314,Name:     Obstacle_Brake_Light_0x739,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxObstacle_Brake_Light_0x739(c) \
{ \
  IlEnterCriticalObstacle_Brake_Light_0x739(); \
  Obstacle_Data_A.Obstacle_Data_A.Obstacle_Brake_Light_0x739 = (c); \
  IlLeaveCriticalObstacle_Brake_Light_0x739(); \
}
#endif

/* Handle:  315,Name:           Obstacle_Valid_0x739,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxObstacle_Valid_0x739(c) \
{ \
  IlEnterCriticalObstacle_Valid_0x739(); \
  Obstacle_Data_A.Obstacle_Data_A.Obstacle_Valid_0x739 = (c); \
  IlLeaveCriticalObstacle_Valid_0x739(); \
}
#endif

/* Handle:  316,Name:            Num_Obstacles_0x738,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxNum_Obstacles_0x738(c) \
{ \
  IlEnterCriticalNum_Obstacles_0x738(); \
  Obstacle_Status.Obstacle_Status.Num_Obstacles_0x738 = (c); \
  IlLeaveCriticalNum_Obstacles_0x738(); \
}
#endif

/* Handle:  317,Name:                Timestamp_0x738,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxTimestamp_0x738(c) \
{ \
  IlEnterCriticalTimestamp_0x738(); \
  Obstacle_Status.Obstacle_Status.Timestamp_0x738 = (c); \
  IlLeaveCriticalTimestamp_0x738(); \
}
#endif

/* Handle:  318,Name:      Application_Version_0x738,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxApplication_Version_0x738(c) \
{ \
  IlEnterCriticalApplication_Version_0x738(); \
  Obstacle_Status.Obstacle_Status.Application_Version_0x738 = (c); \
  IlLeaveCriticalApplication_Version_0x738(); \
}
#endif

/* Handle:  319,Name: Active_Version_Number_Section_0x738,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxActive_Version_Number_Section_0x738(c) \
{ \
  IlEnterCriticalActive_Version_Number_Section_0x738(); \
  Obstacle_Status.Obstacle_Status.Active_Version_Number_Section_0x738 = (c); \
  IlLeaveCriticalActive_Version_Number_Section_0x738(); \
}
#endif

/* Handle:  320,Name:   Left_close_rang_cut_in_0x738,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxLeft_close_rang_cut_in_0x738(c) \
{ \
  IlEnterCriticalLeft_close_rang_cut_in_0x738(); \
  Obstacle_Status.Obstacle_Status.Left_close_rang_cut_in_0x738 = (c); \
  IlLeaveCriticalLeft_close_rang_cut_in_0x738(); \
}
#endif

/* Handle:  321,Name:  Right_close_rang_cut_in_0x738,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxRight_close_rang_cut_in_0x738(c) \
{ \
  IlEnterCriticalRight_close_rang_cut_in_0x738(); \
  Obstacle_Status.Obstacle_Status.Right_close_rang_cut_in_0x738 = (c); \
  IlLeaveCriticalRight_close_rang_cut_in_0x738(); \
}
#endif

/* Handle:  322,Name:                       Go_0x738,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxGo_0x738(c) \
{ \
  IlEnterCriticalGo_0x738(); \
  Obstacle_Status.Obstacle_Status.Go_0x738 = (c); \
  IlLeaveCriticalGo_0x738(); \
}
#endif

/* Handle:  323,Name:         Protocol_Version_0x738,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxProtocol_Version_0x738(c) \
{ \
  IlEnterCriticalProtocol_Version_0x738(); \
  Obstacle_Status.Obstacle_Status.Protocol_Version_0x738 = (c); \
  IlLeaveCriticalProtocol_Version_0x738(); \
}
#endif

/* Handle:  324,Name:                Close_Car_0x738,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxClose_Car_0x738(c) \
{ \
  IlEnterCriticalClose_Car_0x738(); \
  Obstacle_Status.Obstacle_Status.Close_Car_0x738 = (c); \
  IlLeaveCriticalClose_Car_0x738(); \
}
#endif

/* Handle:  328,Name:                       CA_0x737,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxCA_0x737(c) \
{ \
  IlEnterCriticalCA_0x737(); \
  Lane.Lane.CA_0x737 = (c); \
  IlLeaveCriticalCA_0x737(); \
}
#endif

/* Handle:  329,Name:   Right_LDW_Availability_0x737,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxRight_LDW_Availability_0x737(c) \
{ \
  IlEnterCriticalRight_LDW_Availability_0x737(); \
  Lane.Lane.Right_LDW_Availability_0x737 = (c); \
  IlLeaveCriticalRight_LDW_Availability_0x737(); \
}
#endif

/* Handle:  330,Name:    Left_LDW_Availability_0x737,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxLeft_LDW_Availability_0x737(c) \
{ \
  IlEnterCriticalLeft_LDW_Availability_0x737(); \
  Lane.Lane.Left_LDW_Availability_0x737 = (c); \
  IlLeaveCriticalLeft_LDW_Availability_0x737(); \
}
#endif

/* Handle:  333,Name:      Boundary_bottom_HLB_0x729,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxBoundary_bottom_HLB_0x729(c) \
{ \
  IlEnterCriticalBoundary_bottom_HLB_0x729(); \
  AHBC_Gradual.AHBC_Gradual.Boundary_bottom_HLB_0x729 = (c); \
  IlLeaveCriticalBoundary_bottom_HLB_0x729(); \
}
#endif

/* Handle:  337,Name:        Status_Bottom_HLB_0x729,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxStatus_Bottom_HLB_0x729(c) \
{ \
  IlEnterCriticalStatus_Bottom_HLB_0x729(); \
  AHBC_Gradual.AHBC_Gradual.Status_Bottom_HLB_0x729 = (c); \
  IlLeaveCriticalStatus_Bottom_HLB_0x729(); \
}
#endif

/* Handle:  338,Name:     Status_Left_Hand_HLB_0x729,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxStatus_Left_Hand_HLB_0x729(c) \
{ \
  IlEnterCriticalStatus_Left_Hand_HLB_0x729(); \
  AHBC_Gradual.AHBC_Gradual.Status_Left_Hand_HLB_0x729 = (c); \
  IlLeaveCriticalStatus_Left_Hand_HLB_0x729(); \
}
#endif

/* Handle:  339,Name:    Status_Right_Hand_HLB_0x729,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxStatus_Right_Hand_HLB_0x729(c) \
{ \
  IlEnterCriticalStatus_Right_Hand_HLB_0x729(); \
  AHBC_Gradual.AHBC_Gradual.Status_Right_Hand_HLB_0x729 = (c); \
  IlLeaveCriticalStatus_Right_Hand_HLB_0x729(); \
}
#endif

/* Handle:  340,Name: Status_Object_Distance_HLB_0x729,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxStatus_Object_Distance_HLB_0x729(c) \
{ \
  IlEnterCriticalStatus_Object_Distance_HLB_0x729(); \
  AHBC_Gradual.AHBC_Gradual.Status_Object_Distance_HLB_0x729 = (c); \
  IlLeaveCriticalStatus_Object_Distance_HLB_0x729(); \
}
#endif

/* Handle:  341,Name:       Left_Target_Change_0x729,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxLeft_Target_Change_0x729(c) \
{ \
  IlEnterCriticalLeft_Target_Change_0x729(); \
  AHBC_Gradual.AHBC_Gradual.Left_Target_Change_0x729 = (c); \
  IlLeaveCriticalLeft_Target_Change_0x729(); \
}
#endif

/* Handle:  342,Name:      Right_Target_Change_0x729,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxRight_Target_Change_0x729(c) \
{ \
  IlEnterCriticalRight_Target_Change_0x729(); \
  AHBC_Gradual.AHBC_Gradual.Right_Target_Change_0x729 = (c); \
  IlLeaveCriticalRight_Target_Change_0x729(); \
}
#endif

/* Handle:  343,Name:            Too_Many_Cars_0x729,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxToo_Many_Cars_0x729(c) \
{ \
  IlEnterCriticalToo_Many_Cars_0x729(); \
  AHBC_Gradual.AHBC_Gradual.Too_Many_Cars_0x729 = (c); \
  IlLeaveCriticalToo_Many_Cars_0x729(); \
}
#endif

/* Handle:  344,Name:               Busy_Scene_0x729,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxBusy_Scene_0x729(c) \
{ \
  IlEnterCriticalBusy_Scene_0x729(); \
  AHBC_Gradual.AHBC_Gradual.Busy_Scene_0x729 = (c); \
  IlLeaveCriticalBusy_Scene_0x729(); \
}
#endif

/* Handle:  345,Name: Binary_high_low_beam_decision_0x728,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxBinary_high_low_beam_decision_0x728(c) \
{ \
  IlEnterCriticalBinary_high_low_beam_decision_0x728(); \
  AHBC_high_low_beam.AHBC_high_low_beam.Binary_high_low_beam_decision_0x728 = (c); \
  IlLeaveCriticalBinary_high_low_beam_decision_0x728(); \
}
#endif

/* Handle:  347,Name: Vision_only_Sign_Type_Display1_0x727,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxVision_only_Sign_Type_Display1_0x727(c) \
{ \
  IlEnterCriticalVision_only_Sign_Type_Display1_0x727(); \
  Sign_Type.Sign_Type.Vision_only_Sign_Type_Display1_0x727 = (c); \
  IlLeaveCriticalVision_only_Sign_Type_Display1_0x727(); \
}
#endif

/* Handle:  348,Name: Supplementary_Sign_Type_Display1_0x727,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxSupplementary_Sign_Type_Display1_0x727(c) \
{ \
  IlEnterCriticalSupplementary_Sign_Type_Display1_0x727(); \
  Sign_Type.Sign_Type.Supplementary_Sign_Type_Display1_0x727 = (c); \
  IlLeaveCriticalSupplementary_Sign_Type_Display1_0x727(); \
}
#endif

/* Handle:  349,Name: Vision_only_Sign_Type_Display2_0x727,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxVision_only_Sign_Type_Display2_0x727(c) \
{ \
  IlEnterCriticalVision_only_Sign_Type_Display2_0x727(); \
  Sign_Type.Sign_Type.Vision_only_Sign_Type_Display2_0x727 = (c); \
  IlLeaveCriticalVision_only_Sign_Type_Display2_0x727(); \
}
#endif

/* Handle:  350,Name: Supplementary_Sign_Type_Display2_0x727,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxSupplementary_Sign_Type_Display2_0x727(c) \
{ \
  IlEnterCriticalSupplementary_Sign_Type_Display2_0x727(); \
  Sign_Type.Sign_Type.Supplementary_Sign_Type_Display2_0x727 = (c); \
  IlLeaveCriticalSupplementary_Sign_Type_Display2_0x727(); \
}
#endif

/* Handle:  351,Name: Vision_only_Sign_Type_Display3_0x727,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxVision_only_Sign_Type_Display3_0x727(c) \
{ \
  IlEnterCriticalVision_only_Sign_Type_Display3_0x727(); \
  Sign_Type.Sign_Type.Vision_only_Sign_Type_Display3_0x727 = (c); \
  IlLeaveCriticalVision_only_Sign_Type_Display3_0x727(); \
}
#endif

/* Handle:  352,Name: Supplementary_Sign_Type_Display3_0x727,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxSupplementary_Sign_Type_Display3_0x727(c) \
{ \
  IlEnterCriticalSupplementary_Sign_Type_Display3_0x727(); \
  Sign_Type.Sign_Type.Supplementary_Sign_Type_Display3_0x727 = (c); \
  IlLeaveCriticalSupplementary_Sign_Type_Display3_0x727(); \
}
#endif

/* Handle:  353,Name: Vision_only_Sign_Type_Display4_0x727,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxVision_only_Sign_Type_Display4_0x727(c) \
{ \
  IlEnterCriticalVision_only_Sign_Type_Display4_0x727(); \
  Sign_Type.Sign_Type.Vision_only_Sign_Type_Display4_0x727 = (c); \
  IlLeaveCriticalVision_only_Sign_Type_Display4_0x727(); \
}
#endif

/* Handle:  354,Name: Supplementary_Sign_Type_Display4_0x727,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxSupplementary_Sign_Type_Display4_0x727(c) \
{ \
  IlEnterCriticalSupplementary_Sign_Type_Display4_0x727(); \
  Sign_Type.Sign_Type.Supplementary_Sign_Type_Display4_0x727 = (c); \
  IlLeaveCriticalSupplementary_Sign_Type_Display4_0x727(); \
}
#endif

/* Handle:  355,Name:    Vision_only_Sign_Type_0x725,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxVision_only_Sign_Type_0x725(c) \
{ \
  IlEnterCriticalVision_only_Sign_Type_0x725(); \
  TSR_message_F.TSR_message_F.Vision_only_Sign_Type_0x725 = (c); \
  IlLeaveCriticalVision_only_Sign_Type_0x725(); \
}
#endif

/* Handle:  356,Name:  Supplementary_Sign_Type_0x725,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxSupplementary_Sign_Type_0x725(c) \
{ \
  IlEnterCriticalSupplementary_Sign_Type_0x725(); \
  TSR_message_F.TSR_message_F.Supplementary_Sign_Type_0x725 = (c); \
  IlLeaveCriticalSupplementary_Sign_Type_0x725(); \
}
#endif

/* Handle:  357,Name:          Sign_Position_X_0x725,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxSign_Position_X_0x725(c) \
{ \
  IlEnterCriticalSign_Position_X_0x725(); \
  TSR_message_F.TSR_message_F.Sign_Position_X_0x725 = (c); \
  IlLeaveCriticalSign_Position_X_0x725(); \
}
#endif

/* Handle:  358,Name:          Sign_Position_Y_0x725,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxSign_Position_Y_0x725(c) \
{ \
  IlEnterCriticalSign_Position_Y_0x725(); \
  TSR_message_F.TSR_message_F.Sign_Position_Y_0x725 = (c); \
  IlLeaveCriticalSign_Position_Y_0x725(); \
}
#endif

/* Handle:  359,Name:          Sign_Position_Z_0x725,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxSign_Position_Z_0x725(c) \
{ \
  IlEnterCriticalSign_Position_Z_0x725(); \
  TSR_message_F.TSR_message_F.Sign_Position_Z_0x725 = (c); \
  IlLeaveCriticalSign_Position_Z_0x725(); \
}
#endif

/* Handle:  360,Name:              Filter_Type_0x725,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxFilter_Type_0x725(c) \
{ \
  IlEnterCriticalFilter_Type_0x725(); \
  TSR_message_F.TSR_message_F.Filter_Type_0x725 = (c); \
  IlLeaveCriticalFilter_Type_0x725(); \
}
#endif

/* Handle:  361,Name:    Vision_only_Sign_Type_0x724,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxVision_only_Sign_Type_0x724(c) \
{ \
  IlEnterCriticalVision_only_Sign_Type_0x724(); \
  TSR_message_E.TSR_message_E.Vision_only_Sign_Type_0x724 = (c); \
  IlLeaveCriticalVision_only_Sign_Type_0x724(); \
}
#endif

/* Handle:  362,Name:  Supplementary_Sign_Type_0x724,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxSupplementary_Sign_Type_0x724(c) \
{ \
  IlEnterCriticalSupplementary_Sign_Type_0x724(); \
  TSR_message_E.TSR_message_E.Supplementary_Sign_Type_0x724 = (c); \
  IlLeaveCriticalSupplementary_Sign_Type_0x724(); \
}
#endif

/* Handle:  363,Name:          Sign_Position_X_0x724,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxSign_Position_X_0x724(c) \
{ \
  IlEnterCriticalSign_Position_X_0x724(); \
  TSR_message_E.TSR_message_E.Sign_Position_X_0x724 = (c); \
  IlLeaveCriticalSign_Position_X_0x724(); \
}
#endif

/* Handle:  364,Name:          Sign_Position_Y_0x724,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxSign_Position_Y_0x724(c) \
{ \
  IlEnterCriticalSign_Position_Y_0x724(); \
  TSR_message_E.TSR_message_E.Sign_Position_Y_0x724 = (c); \
  IlLeaveCriticalSign_Position_Y_0x724(); \
}
#endif

/* Handle:  365,Name:          Sign_Position_Z_0x724,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxSign_Position_Z_0x724(c) \
{ \
  IlEnterCriticalSign_Position_Z_0x724(); \
  TSR_message_E.TSR_message_E.Sign_Position_Z_0x724 = (c); \
  IlLeaveCriticalSign_Position_Z_0x724(); \
}
#endif

/* Handle:  366,Name:              Filter_Type_0x724,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxFilter_Type_0x724(c) \
{ \
  IlEnterCriticalFilter_Type_0x724(); \
  TSR_message_E.TSR_message_E.Filter_Type_0x724 = (c); \
  IlLeaveCriticalFilter_Type_0x724(); \
}
#endif

/* Handle:  367,Name:    Vision_only_Sign_Type_0x723,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxVision_only_Sign_Type_0x723(c) \
{ \
  IlEnterCriticalVision_only_Sign_Type_0x723(); \
  TSR_message_D.TSR_message_D.Vision_only_Sign_Type_0x723 = (c); \
  IlLeaveCriticalVision_only_Sign_Type_0x723(); \
}
#endif

/* Handle:  368,Name:  Supplementary_Sign_Type_0x723,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxSupplementary_Sign_Type_0x723(c) \
{ \
  IlEnterCriticalSupplementary_Sign_Type_0x723(); \
  TSR_message_D.TSR_message_D.Supplementary_Sign_Type_0x723 = (c); \
  IlLeaveCriticalSupplementary_Sign_Type_0x723(); \
}
#endif

/* Handle:  369,Name:          Sign_Position_X_0x723,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxSign_Position_X_0x723(c) \
{ \
  IlEnterCriticalSign_Position_X_0x723(); \
  TSR_message_D.TSR_message_D.Sign_Position_X_0x723 = (c); \
  IlLeaveCriticalSign_Position_X_0x723(); \
}
#endif

/* Handle:  370,Name:          Sign_Position_Y_0x723,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxSign_Position_Y_0x723(c) \
{ \
  IlEnterCriticalSign_Position_Y_0x723(); \
  TSR_message_D.TSR_message_D.Sign_Position_Y_0x723 = (c); \
  IlLeaveCriticalSign_Position_Y_0x723(); \
}
#endif

/* Handle:  371,Name:          Sign_Position_Z_0x723,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxSign_Position_Z_0x723(c) \
{ \
  IlEnterCriticalSign_Position_Z_0x723(); \
  TSR_message_D.TSR_message_D.Sign_Position_Z_0x723 = (c); \
  IlLeaveCriticalSign_Position_Z_0x723(); \
}
#endif

/* Handle:  372,Name:              Filter_Type_0x723,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxFilter_Type_0x723(c) \
{ \
  IlEnterCriticalFilter_Type_0x723(); \
  TSR_message_D.TSR_message_D.Filter_Type_0x723 = (c); \
  IlLeaveCriticalFilter_Type_0x723(); \
}
#endif

/* Handle:  373,Name:    Vision_only_Sign_Type_0x722,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxVision_only_Sign_Type_0x722(c) \
{ \
  IlEnterCriticalVision_only_Sign_Type_0x722(); \
  TSR_message_C.TSR_message_C.Vision_only_Sign_Type_0x722 = (c); \
  IlLeaveCriticalVision_only_Sign_Type_0x722(); \
}
#endif

/* Handle:  374,Name:  Supplementary_Sign_Type_0x722,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxSupplementary_Sign_Type_0x722(c) \
{ \
  IlEnterCriticalSupplementary_Sign_Type_0x722(); \
  TSR_message_C.TSR_message_C.Supplementary_Sign_Type_0x722 = (c); \
  IlLeaveCriticalSupplementary_Sign_Type_0x722(); \
}
#endif

/* Handle:  375,Name:          Sign_Position_X_0x722,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxSign_Position_X_0x722(c) \
{ \
  IlEnterCriticalSign_Position_X_0x722(); \
  TSR_message_C.TSR_message_C.Sign_Position_X_0x722 = (c); \
  IlLeaveCriticalSign_Position_X_0x722(); \
}
#endif

/* Handle:  376,Name:          Sign_Position_Y_0x722,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxSign_Position_Y_0x722(c) \
{ \
  IlEnterCriticalSign_Position_Y_0x722(); \
  TSR_message_C.TSR_message_C.Sign_Position_Y_0x722 = (c); \
  IlLeaveCriticalSign_Position_Y_0x722(); \
}
#endif

/* Handle:  377,Name:          Sign_Position_Z_0x722,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxSign_Position_Z_0x722(c) \
{ \
  IlEnterCriticalSign_Position_Z_0x722(); \
  TSR_message_C.TSR_message_C.Sign_Position_Z_0x722 = (c); \
  IlLeaveCriticalSign_Position_Z_0x722(); \
}
#endif

/* Handle:  378,Name:              Filter_Type_0x722,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxFilter_Type_0x722(c) \
{ \
  IlEnterCriticalFilter_Type_0x722(); \
  TSR_message_C.TSR_message_C.Filter_Type_0x722 = (c); \
  IlLeaveCriticalFilter_Type_0x722(); \
}
#endif

/* Handle:  379,Name:    Vision_only_Sign_Type_0x721,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxVision_only_Sign_Type_0x721(c) \
{ \
  IlEnterCriticalVision_only_Sign_Type_0x721(); \
  TSR_message_B.TSR_message_B.Vision_only_Sign_Type_0x721 = (c); \
  IlLeaveCriticalVision_only_Sign_Type_0x721(); \
}
#endif

/* Handle:  380,Name:  Supplementary_Sign_Type_0x721,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxSupplementary_Sign_Type_0x721(c) \
{ \
  IlEnterCriticalSupplementary_Sign_Type_0x721(); \
  TSR_message_B.TSR_message_B.Supplementary_Sign_Type_0x721 = (c); \
  IlLeaveCriticalSupplementary_Sign_Type_0x721(); \
}
#endif

/* Handle:  381,Name:          Sign_Position_X_0x721,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxSign_Position_X_0x721(c) \
{ \
  IlEnterCriticalSign_Position_X_0x721(); \
  TSR_message_B.TSR_message_B.Sign_Position_X_0x721 = (c); \
  IlLeaveCriticalSign_Position_X_0x721(); \
}
#endif

/* Handle:  382,Name:          Sign_Position_Y_0x721,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxSign_Position_Y_0x721(c) \
{ \
  IlEnterCriticalSign_Position_Y_0x721(); \
  TSR_message_B.TSR_message_B.Sign_Position_Y_0x721 = (c); \
  IlLeaveCriticalSign_Position_Y_0x721(); \
}
#endif

/* Handle:  383,Name:          Sign_Position_Z_0x721,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxSign_Position_Z_0x721(c) \
{ \
  IlEnterCriticalSign_Position_Z_0x721(); \
  TSR_message_B.TSR_message_B.Sign_Position_Z_0x721 = (c); \
  IlLeaveCriticalSign_Position_Z_0x721(); \
}
#endif

/* Handle:  384,Name:              Filter_Type_0x721,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxFilter_Type_0x721(c) \
{ \
  IlEnterCriticalFilter_Type_0x721(); \
  TSR_message_B.TSR_message_B.Filter_Type_0x721 = (c); \
  IlLeaveCriticalFilter_Type_0x721(); \
}
#endif

/* Handle:  385,Name:    Vision_only_Sign_Type_0x720,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxVision_only_Sign_Type_0x720(c) \
{ \
  IlEnterCriticalVision_only_Sign_Type_0x720(); \
  TSR_message_A.TSR_message_A.Vision_only_Sign_Type_0x720 = (c); \
  IlLeaveCriticalVision_only_Sign_Type_0x720(); \
}
#endif

/* Handle:  386,Name:  Supplementary_Sign_Type_0x720,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxSupplementary_Sign_Type_0x720(c) \
{ \
  IlEnterCriticalSupplementary_Sign_Type_0x720(); \
  TSR_message_A.TSR_message_A.Supplementary_Sign_Type_0x720 = (c); \
  IlLeaveCriticalSupplementary_Sign_Type_0x720(); \
}
#endif

/* Handle:  387,Name:          Sign_Position_X_0x720,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxSign_Position_X_0x720(c) \
{ \
  IlEnterCriticalSign_Position_X_0x720(); \
  TSR_message_A.TSR_message_A.Sign_Position_X_0x720 = (c); \
  IlLeaveCriticalSign_Position_X_0x720(); \
}
#endif

/* Handle:  388,Name:          Sign_Position_Y_0x720,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxSign_Position_Y_0x720(c) \
{ \
  IlEnterCriticalSign_Position_Y_0x720(); \
  TSR_message_A.TSR_message_A.Sign_Position_Y_0x720 = (c); \
  IlLeaveCriticalSign_Position_Y_0x720(); \
}
#endif

/* Handle:  389,Name:          Sign_Position_Z_0x720,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxSign_Position_Z_0x720(c) \
{ \
  IlEnterCriticalSign_Position_Z_0x720(); \
  TSR_message_A.TSR_message_A.Sign_Position_Z_0x720 = (c); \
  IlLeaveCriticalSign_Position_Z_0x720(); \
}
#endif

/* Handle:  390,Name:              Filter_Type_0x720,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxFilter_Type_0x720(c) \
{ \
  IlEnterCriticalFilter_Type_0x720(); \
  TSR_message_A.TSR_message_A.Filter_Type_0x720 = (c); \
  IlLeaveCriticalFilter_Type_0x720(); \
}
#endif

/* Handle:  391,Name:               Sound_type_0x700,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxSound_type_0x700(c) \
{ \
  IlEnterCriticalSound_type_0x700(); \
  C2_Display_and_warning.C2_Display_and_warning.Sound_type_0x700 = (c); \
  IlLeaveCriticalSound_type_0x700(); \
}
#endif

/* Handle:  392,Name:      Dusk_Time_Indicator_0x700,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxDusk_Time_Indicator_0x700(c) \
{ \
  IlEnterCriticalDusk_Time_Indicator_0x700(); \
  C2_Display_and_warning.C2_Display_and_warning.Dusk_Time_Indicator_0x700 = (c); \
  IlLeaveCriticalDusk_Time_Indicator_0x700(); \
}
#endif

/* Handle:  393,Name:     Night_Time_Indicator_0x700,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxNight_Time_Indicator_0x700(c) \
{ \
  IlEnterCriticalNight_Time_Indicator_0x700(); \
  C2_Display_and_warning.C2_Display_and_warning.Night_Time_Indicator_0x700 = (c); \
  IlLeaveCriticalNight_Time_Indicator_0x700(); \
}
#endif

/* Handle:  394,Name:                 Suppress_0x700,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxSuppress_0x700(c) \
{ \
  IlEnterCriticalSuppress_0x700(); \
  C2_Display_and_warning.C2_Display_and_warning.Suppress_0x700 = (c); \
  IlLeaveCriticalSuppress_0x700(); \
}
#endif

/* Handle:  395,Name:            Headway_valid_0x700,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxHeadway_valid_0x700(c) \
{ \
  IlEnterCriticalHeadway_valid_0x700(); \
  C2_Display_and_warning.C2_Display_and_warning.Headway_valid_0x700 = (c); \
  IlLeaveCriticalHeadway_valid_0x700(); \
}
#endif

/* Handle:  396,Name:      Headway_measurement_0x700,Size:  7,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxHeadway_measurement_0x700(c) \
{ \
  IlEnterCriticalHeadway_measurement_0x700(); \
  C2_Display_and_warning.C2_Display_and_warning.Headway_measurement_0x700 = (c); \
  IlLeaveCriticalHeadway_measurement_0x700(); \
}
#endif

/* Handle:  397,Name:                 Lanes_On_0x700,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxLanes_On_0x700(c) \
{ \
  IlEnterCriticalLanes_On_0x700(); \
  C2_Display_and_warning.C2_Display_and_warning.Lanes_On_0x700 = (c); \
  IlLeaveCriticalLanes_On_0x700(); \
}
#endif

/* Handle:  398,Name:              Left_LDW_ON_0x700,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxLeft_LDW_ON_0x700(c) \
{ \
  IlEnterCriticalLeft_LDW_ON_0x700(); \
  C2_Display_and_warning.C2_Display_and_warning.Left_LDW_ON_0x700 = (c); \
  IlLeaveCriticalLeft_LDW_ON_0x700(); \
}
#endif

/* Handle:  399,Name:             Right_LDW_ON_0x700,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxRight_LDW_ON_0x700(c) \
{ \
  IlEnterCriticalRight_LDW_ON_0x700(); \
  C2_Display_and_warning.C2_Display_and_warning.Right_LDW_ON_0x700 = (c); \
  IlLeaveCriticalRight_LDW_ON_0x700(); \
}
#endif

/* Handle:  400,Name:                   FCW_on_0x700,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxFCW_on_0x700(c) \
{ \
  IlEnterCriticalFCW_on_0x700(); \
  C2_Display_and_warning.C2_Display_and_warning.FCW_on_0x700 = (c); \
  IlLeaveCriticalFCW_on_0x700(); \
}
#endif

/* Handle:  401,Name:            Left_Crossing_0x700,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxLeft_Crossing_0x700(c) \
{ \
  IlEnterCriticalLeft_Crossing_0x700(); \
  C2_Display_and_warning.C2_Display_and_warning.Left_Crossing_0x700 = (c); \
  IlLeaveCriticalLeft_Crossing_0x700(); \
}
#endif

/* Handle:  402,Name:           Right_Crossing_0x700,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxRight_Crossing_0x700(c) \
{ \
  IlEnterCriticalRight_Crossing_0x700(); \
  C2_Display_and_warning.C2_Display_and_warning.Right_Crossing_0x700 = (c); \
  IlLeaveCriticalRight_Crossing_0x700(); \
}
#endif

/* Handle:  403,Name:               Maintenanc_0x700,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxMaintenanc_0x700(c) \
{ \
  IlEnterCriticalMaintenanc_0x700(); \
  C2_Display_and_warning.C2_Display_and_warning.Maintenanc_0x700 = (c); \
  IlLeaveCriticalMaintenanc_0x700(); \
}
#endif

/* Handle:  404,Name:                 Failsafe_0x700,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxFailsafe_0x700(c) \
{ \
  IlEnterCriticalFailsafe_0x700(); \
  C2_Display_and_warning.C2_Display_and_warning.Failsafe_0x700 = (c); \
  IlLeaveCriticalFailsafe_0x700(); \
}
#endif

/* Handle:  405,Name:                 Peds_FCW_0x700,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxPeds_FCW_0x700(c) \
{ \
  IlEnterCriticalPeds_FCW_0x700(); \
  C2_Display_and_warning.C2_Display_and_warning.Peds_FCW_0x700 = (c); \
  IlLeaveCriticalPeds_FCW_0x700(); \
}
#endif

/* Handle:  406,Name:               Peds_in_DZ_0x700,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxPeds_in_DZ_0x700(c) \
{ \
  IlEnterCriticalPeds_in_DZ_0x700(); \
  C2_Display_and_warning.C2_Display_and_warning.Peds_in_DZ_0x700 = (c); \
  IlLeaveCriticalPeds_in_DZ_0x700(); \
}
#endif

/* Handle:  407,Name:    Headway_Warning_Level_0x700,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxHeadway_Warning_Level_0x700(c) \
{ \
  IlEnterCriticalHeadway_Warning_Level_0x700(); \
  C2_Display_and_warning.C2_Display_and_warning.Headway_Warning_Level_0x700 = (c); \
  IlLeaveCriticalHeadway_Warning_Level_0x700(); \
}
#endif

/* Handle:  408,Name:     Lane_Confidence_Left_0x669,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxLane_Confidence_Left_0x669(c) \
{ \
  IlEnterCriticalLane_Confidence_Left_0x669(); \
  Detils_Lane.Detils_Lane.Lane_Confidence_Left_0x669 = (c); \
  IlLeaveCriticalLane_Confidence_Left_0x669(); \
}
#endif

/* Handle:  409,Name:    LDW_Availability_Left_0x669,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxLDW_Availability_Left_0x669(c) \
{ \
  IlEnterCriticalLDW_Availability_Left_0x669(); \
  Detils_Lane.Detils_Lane.LDW_Availability_Left_0x669 = (c); \
  IlLeaveCriticalLDW_Availability_Left_0x669(); \
}
#endif

/* Handle:  410,Name:            Undocumented1_0x669,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxUndocumented1_0x669(c) \
{ \
  IlEnterCriticalUndocumented1_0x669(); \
  Detils_Lane.Detils_Lane.Undocumented1_0x669 = (c); \
  IlLeaveCriticalUndocumented1_0x669(); \
}
#endif

/* Handle:  411,Name:           Lane_Type_Left_0x669,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxLane_Type_Left_0x669(c) \
{ \
  IlEnterCriticalLane_Type_Left_0x669(); \
  Detils_Lane.Detils_Lane.Lane_Type_Left_0x669 = (c); \
  IlLeaveCriticalLane_Type_Left_0x669(); \
}
#endif

/* Handle:  413,Name:    Lane_Confidence_Right_0x669,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxLane_Confidence_Right_0x669(c) \
{ \
  IlEnterCriticalLane_Confidence_Right_0x669(); \
  Detils_Lane.Detils_Lane.Lane_Confidence_Right_0x669 = (c); \
  IlLeaveCriticalLane_Confidence_Right_0x669(); \
}
#endif

/* Handle:  414,Name:   LDW_Availability_Right_0x669,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxLDW_Availability_Right_0x669(c) \
{ \
  IlEnterCriticalLDW_Availability_Right_0x669(); \
  Detils_Lane.Detils_Lane.LDW_Availability_Right_0x669 = (c); \
  IlLeaveCriticalLDW_Availability_Right_0x669(); \
}
#endif

/* Handle:  415,Name:            Undocumented2_0x669,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxUndocumented2_0x669(c) \
{ \
  IlEnterCriticalUndocumented2_0x669(); \
  Detils_Lane.Detils_Lane.Undocumented2_0x669 = (c); \
  IlLeaveCriticalUndocumented2_0x669(); \
}
#endif

/* Handle:  416,Name:          Lane_Type_Right_0x669,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxLane_Type_Right_0x669(c) \
{ \
  IlEnterCriticalLane_Type_Right_0x669(); \
  Detils_Lane.Detils_Lane.Lane_Type_Right_0x669 = (c); \
  IlLeaveCriticalLane_Type_Right_0x669(); \
}
#endif



/* -----------------------------------------------------------------------------
    &&&~ Set Tx Signal Access extern decl
 ----------------------------------------------------------------------------- */

/* Handle:    6,Name: Heading_angle_Parameter_C1_0x77B,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxHeading_angle_Parameter_C1_0x77B(vuint16 sigData);
#endif

/* Handle:    7,Name:               View_range_0x77B,Size: 15,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxView_range_0x77B(vuint16 sigData);
#endif

/* Handle:   12,Name:    Position_Parameter_C0_0x77A,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxPosition_Parameter_C0_0x77A(vuint16 sigData);
#endif

/* Handle:   13,Name:   Curvature_Parameter_C2_0x77A,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxCurvature_Parameter_C2_0x77A(vuint16 sigData);
#endif

/* Handle:   14,Name:  Curvature_derivative_C3_0x77A,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxCurvature_derivative_C3_0x77A(vuint16 sigData);
#endif

/* Handle:   16,Name: Heading_angle_Parameter_C1_0x779,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxHeading_angle_Parameter_C1_0x779(vuint16 sigData);
#endif

/* Handle:   17,Name:               View_range_0x779,Size: 15,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxView_range_0x779(vuint16 sigData);
#endif

/* Handle:   22,Name:    Position_Parameter_C0_0x778,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxPosition_Parameter_C0_0x778(vuint16 sigData);
#endif

/* Handle:   23,Name:   Curvature_Parameter_C2_0x778,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxCurvature_Parameter_C2_0x778(vuint16 sigData);
#endif

/* Handle:   24,Name:  Curvature_derivative_C3_0x778,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxCurvature_derivative_C3_0x778(vuint16 sigData);
#endif

/* Handle:   26,Name: Heading_angle_Parameter_C1_0x777,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxHeading_angle_Parameter_C1_0x777(vuint16 sigData);
#endif

/* Handle:   27,Name:               View_range_0x777,Size: 15,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxView_range_0x777(vuint16 sigData);
#endif

/* Handle:   32,Name:    Position_Parameter_C0_0x776,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxPosition_Parameter_C0_0x776(vuint16 sigData);
#endif

/* Handle:   33,Name:   Curvature_Parameter_C2_0x776,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxCurvature_Parameter_C2_0x776(vuint16 sigData);
#endif

/* Handle:   34,Name:  Curvature_derivative_C3_0x776,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxCurvature_derivative_C3_0x776(vuint16 sigData);
#endif

/* Handle:   36,Name: Heading_angle_Parameter_C1_0x775,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxHeading_angle_Parameter_C1_0x775(vuint16 sigData);
#endif

/* Handle:   37,Name:               View_range_0x775,Size: 15,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxView_range_0x775(vuint16 sigData);
#endif

/* Handle:   42,Name:    Position_Parameter_C0_0x774,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxPosition_Parameter_C0_0x774(vuint16 sigData);
#endif

/* Handle:   43,Name:   Curvature_Parameter_C2_0x774,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxCurvature_Parameter_C2_0x774(vuint16 sigData);
#endif

/* Handle:   44,Name:  Curvature_derivative_C3_0x774,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxCurvature_derivative_C3_0x774(vuint16 sigData);
#endif

/* Handle:   46,Name: Heading_angle_Parameter_C1_0x773,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxHeading_angle_Parameter_C1_0x773(vuint16 sigData);
#endif

/* Handle:   47,Name:               View_range_0x773,Size: 15,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxView_range_0x773(vuint16 sigData);
#endif

/* Handle:   52,Name:    Position_Parameter_C0_0x772,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxPosition_Parameter_C0_0x772(vuint16 sigData);
#endif

/* Handle:   53,Name:   Curvature_Parameter_C2_0x772,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxCurvature_Parameter_C2_0x772(vuint16 sigData);
#endif

/* Handle:   54,Name:  Curvature_derivative_C3_0x772,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxCurvature_derivative_C3_0x772(vuint16 sigData);
#endif

/* Handle:   56,Name: Heading_angle_Parameter_C1_0x771,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxHeading_angle_Parameter_C1_0x771(vuint16 sigData);
#endif

/* Handle:   57,Name:               View_range_0x771,Size: 15,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxView_range_0x771(vuint16 sigData);
#endif

/* Handle:   62,Name:    Position_Parameter_C0_0x770,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxPosition_Parameter_C0_0x770(vuint16 sigData);
#endif

/* Handle:   63,Name:   Curvature_Parameter_C2_0x770,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxCurvature_Parameter_C2_0x770(vuint16 sigData);
#endif

/* Handle:   64,Name:  Curvature_derivative_C3_0x770,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxCurvature_derivative_C3_0x770(vuint16 sigData);
#endif

/* Handle:   66,Name: Heading_angle_Parameter_C1_0x76F,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxHeading_angle_Parameter_C1_0x76F(vuint16 sigData);
#endif

/* Handle:   67,Name:               View_range_0x76F,Size: 15,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxView_range_0x76F(vuint16 sigData);
#endif

/* Handle:   72,Name:    Position_Parameter_C0_0x76E,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxPosition_Parameter_C0_0x76E(vuint16 sigData);
#endif

/* Handle:   73,Name:   Curvature_Parameter_C2_0x76E,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxCurvature_Parameter_C2_0x76E(vuint16 sigData);
#endif

/* Handle:   74,Name:  Curvature_derivative_C3_0x76E,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxCurvature_derivative_C3_0x76E(vuint16 sigData);
#endif

/* Handle:   76,Name: Heading_angle_Parameter_C1_0x76D,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxHeading_angle_Parameter_C1_0x76D(vuint16 sigData);
#endif

/* Handle:   77,Name:               View_range_0x76D,Size: 15,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxView_range_0x76D(vuint16 sigData);
#endif

/* Handle:   82,Name:    Position_Parameter_C0_0x76C,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxPosition_Parameter_C0_0x76C(vuint16 sigData);
#endif

/* Handle:   83,Name:   Curvature_Parameter_C2_0x76C,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxCurvature_Parameter_C2_0x76C(vuint16 sigData);
#endif

/* Handle:   84,Name:  Curvature_derivative_C3_0x76C,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxCurvature_derivative_C3_0x76C(vuint16 sigData);
#endif

/* Handle:   87,Name:     Ref_point_1_Position_0x76A,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxRef_point_1_Position_0x76A(vuint16 sigData);
#endif

/* Handle:   88,Name:     Ref_point_1_Distance_0x76A,Size: 15,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxRef_point_1_Distance_0x76A(vuint16 sigData);
#endif

/* Handle:   90,Name:     Ref_point_2_Position_0x76A,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxRef_point_2_Position_0x76A(vuint16 sigData);
#endif

/* Handle:   91,Name:     Ref_point_2_Distance_0x76A,Size: 15,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxRef_point_2_Distance_0x76A(vuint16 sigData);
#endif

/* Handle:   93,Name: Heading_angle_Parameter_C1_0x769,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxHeading_angle_Parameter_C1_0x769(vuint16 sigData);
#endif

/* Handle:   94,Name:               View_range_0x769,Size: 15,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxView_range_0x769(vuint16 sigData);
#endif

/* Handle:   99,Name:    Position_Parameter_C0_0x768,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxPosition_Parameter_C0_0x768(vuint16 sigData);
#endif

/* Handle:  100,Name:   Curvature_Parameter_C2_0x768,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxCurvature_Parameter_C2_0x768(vuint16 sigData);
#endif

/* Handle:  101,Name:  Curvature_derivative_C3_0x768,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxCurvature_derivative_C3_0x768(vuint16 sigData);
#endif

/* Handle:  103,Name: Heading_angle_Parameter_C1_0x767,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxHeading_angle_Parameter_C1_0x767(vuint16 sigData);
#endif

/* Handle:  104,Name:               View_range_0x767,Size: 15,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxView_range_0x767(vuint16 sigData);
#endif

/* Handle:  109,Name:    Position_Parameter_C0_0x766,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxPosition_Parameter_C0_0x766(vuint16 sigData);
#endif

/* Handle:  110,Name:   Curvature_Parameter_C2_0x766,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxCurvature_Parameter_C2_0x766(vuint16 sigData);
#endif

/* Handle:  111,Name:  Curvature_derivative_C3_0x766,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxCurvature_derivative_C3_0x766(vuint16 sigData);
#endif

/* Handle:  124,Name:      Obstacle_Angle_Rate_0x750,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxObstacle_Angle_Rate_0x750(vuint16 sigData);
#endif

/* Handle:  125,Name:    Obstacle_Scale_Change_0x750,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxObstacle_Scale_Change_0x750(vuint16 sigData);
#endif

/* Handle:  126,Name:           Object_Accel_X_0x750,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxObject_Accel_X_0x750(vuint16 sigData);
#endif

/* Handle:  128,Name:           Obstacle_Angle_0x750,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxObstacle_Angle_0x750(vuint16 sigData);
#endif

/* Handle:  130,Name:           Obstacle_Width_0x74F,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxObstacle_Width_0x74F(vuint8 sigData);
#endif

/* Handle:  131,Name:             Obstacle_Age_0x74F,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxObstacle_Age_0x74F(vuint8 sigData);
#endif

/* Handle:  134,Name:              Radar_Pos_X_0x74F,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxRadar_Pos_X_0x74F(vuint16 sigData);
#endif

/* Handle:  135,Name:              Radar_Vel_X_0x74F,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxRadar_Vel_X_0x74F(vuint16 sigData);
#endif

/* Handle:  139,Name:           Obstacle_Pos_X_0x74E,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxObstacle_Pos_X_0x74E(vuint16 sigData);
#endif

/* Handle:  140,Name:           Obstacle_Pos_Y_0x74E,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxObstacle_Pos_Y_0x74E(vuint16 sigData);
#endif

/* Handle:  143,Name:       Obstacle_Rel_Vel_X_0x74E,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxObstacle_Rel_Vel_X_0x74E(vuint16 sigData);
#endif

/* Handle:  148,Name:      Obstacle_Angle_Rate_0x74D,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxObstacle_Angle_Rate_0x74D(vuint16 sigData);
#endif

/* Handle:  149,Name:    Obstacle_Scale_Change_0x74D,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxObstacle_Scale_Change_0x74D(vuint16 sigData);
#endif

/* Handle:  150,Name:           Object_Accel_X_0x74D,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxObject_Accel_X_0x74D(vuint16 sigData);
#endif

/* Handle:  152,Name:           Obstacle_Angle_0x74D,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxObstacle_Angle_0x74D(vuint16 sigData);
#endif

/* Handle:  154,Name:           Obstacle_Width_0x74C,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxObstacle_Width_0x74C(vuint8 sigData);
#endif

/* Handle:  155,Name:             Obstacle_Age_0x74C,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxObstacle_Age_0x74C(vuint8 sigData);
#endif

/* Handle:  158,Name:              Radar_Pos_X_0x74C,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxRadar_Pos_X_0x74C(vuint16 sigData);
#endif

/* Handle:  159,Name:              Radar_Vel_X_0x74C,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxRadar_Vel_X_0x74C(vuint16 sigData);
#endif

/* Handle:  163,Name:           Obstacle_Pos_X_0x74B,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxObstacle_Pos_X_0x74B(vuint16 sigData);
#endif

/* Handle:  164,Name:           Obstacle_Pos_Y_0x74B,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxObstacle_Pos_Y_0x74B(vuint16 sigData);
#endif

/* Handle:  167,Name:       Obstacle_Rel_Vel_X_0x74B,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxObstacle_Rel_Vel_X_0x74B(vuint16 sigData);
#endif

/* Handle:  172,Name:      Obstacle_Angle_Rate_0x74A,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxObstacle_Angle_Rate_0x74A(vuint16 sigData);
#endif

/* Handle:  173,Name:    Obstacle_Scale_Change_0x74A,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxObstacle_Scale_Change_0x74A(vuint16 sigData);
#endif

/* Handle:  174,Name:           Object_Accel_X_0x74A,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxObject_Accel_X_0x74A(vuint16 sigData);
#endif

/* Handle:  176,Name:           Obstacle_Angle_0x74A,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxObstacle_Angle_0x74A(vuint16 sigData);
#endif

/* Handle:  178,Name:           Obstacle_Width_0x749,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxObstacle_Width_0x749(vuint8 sigData);
#endif

/* Handle:  179,Name:             Obstacle_Age_0x749,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxObstacle_Age_0x749(vuint8 sigData);
#endif

/* Handle:  182,Name:              Radar_Pos_X_0x749,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxRadar_Pos_X_0x749(vuint16 sigData);
#endif

/* Handle:  183,Name:              Radar_Vel_X_0x749,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxRadar_Vel_X_0x749(vuint16 sigData);
#endif

/* Handle:  187,Name:           Obstacle_Pos_X_0x748,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxObstacle_Pos_X_0x748(vuint16 sigData);
#endif

/* Handle:  188,Name:           Obstacle_Pos_Y_0x748,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxObstacle_Pos_Y_0x748(vuint16 sigData);
#endif

/* Handle:  191,Name:       Obstacle_Rel_Vel_X_0x748,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxObstacle_Rel_Vel_X_0x748(vuint16 sigData);
#endif

/* Handle:  196,Name:      Obstacle_Angle_Rate_0x747,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxObstacle_Angle_Rate_0x747(vuint16 sigData);
#endif

/* Handle:  197,Name:    Obstacle_Scale_Change_0x747,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxObstacle_Scale_Change_0x747(vuint16 sigData);
#endif

/* Handle:  198,Name:           Object_Accel_X_0x747,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxObject_Accel_X_0x747(vuint16 sigData);
#endif

/* Handle:  200,Name:           Obstacle_Angle_0x747,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxObstacle_Angle_0x747(vuint16 sigData);
#endif

/* Handle:  202,Name:           Obstacle_Width_0x746,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxObstacle_Width_0x746(vuint8 sigData);
#endif

/* Handle:  203,Name:             Obstacle_Age_0x746,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxObstacle_Age_0x746(vuint8 sigData);
#endif

/* Handle:  206,Name:              Radar_Pos_X_0x746,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxRadar_Pos_X_0x746(vuint16 sigData);
#endif

/* Handle:  207,Name:              Radar_Vel_X_0x746,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxRadar_Vel_X_0x746(vuint16 sigData);
#endif

/* Handle:  211,Name:           Obstacle_Pos_X_0x745,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxObstacle_Pos_X_0x745(vuint16 sigData);
#endif

/* Handle:  212,Name:           Obstacle_Pos_Y_0x745,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxObstacle_Pos_Y_0x745(vuint16 sigData);
#endif

/* Handle:  215,Name:       Obstacle_Rel_Vel_X_0x745,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxObstacle_Rel_Vel_X_0x745(vuint16 sigData);
#endif

/* Handle:  220,Name:      Obstacle_Angle_Rate_0x744,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxObstacle_Angle_Rate_0x744(vuint16 sigData);
#endif

/* Handle:  221,Name:    Obstacle_Scale_Change_0x744,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxObstacle_Scale_Change_0x744(vuint16 sigData);
#endif

/* Handle:  222,Name:           Object_Accel_X_0x744,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxObject_Accel_X_0x744(vuint16 sigData);
#endif

/* Handle:  224,Name:           Obstacle_Angle_0x744,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxObstacle_Angle_0x744(vuint16 sigData);
#endif

/* Handle:  226,Name:           Obstacle_Width_0x743,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxObstacle_Width_0x743(vuint8 sigData);
#endif

/* Handle:  227,Name:             Obstacle_Age_0x743,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxObstacle_Age_0x743(vuint8 sigData);
#endif

/* Handle:  230,Name:              Radar_Pos_X_0x743,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxRadar_Pos_X_0x743(vuint16 sigData);
#endif

/* Handle:  231,Name:              Radar_Vel_X_0x743,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxRadar_Vel_X_0x743(vuint16 sigData);
#endif

/* Handle:  235,Name:           Obstacle_Pos_X_0x742,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxObstacle_Pos_X_0x742(vuint16 sigData);
#endif

/* Handle:  236,Name:           Obstacle_Pos_Y_0x742,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxObstacle_Pos_Y_0x742(vuint16 sigData);
#endif

/* Handle:  239,Name:       Obstacle_Rel_Vel_X_0x742,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxObstacle_Rel_Vel_X_0x742(vuint16 sigData);
#endif

/* Handle:  244,Name:      Obstacle_Angle_Rate_0x741,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxObstacle_Angle_Rate_0x741(vuint16 sigData);
#endif

/* Handle:  245,Name:    Obstacle_Scale_Change_0x741,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxObstacle_Scale_Change_0x741(vuint16 sigData);
#endif

/* Handle:  246,Name:           Object_Accel_X_0x741,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxObject_Accel_X_0x741(vuint16 sigData);
#endif

/* Handle:  248,Name:           Obstacle_Angle_0x741,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxObstacle_Angle_0x741(vuint16 sigData);
#endif

/* Handle:  250,Name:           Obstacle_Width_0x740,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxObstacle_Width_0x740(vuint8 sigData);
#endif

/* Handle:  251,Name:             Obstacle_Age_0x740,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxObstacle_Age_0x740(vuint8 sigData);
#endif

/* Handle:  254,Name:              Radar_Pos_X_0x740,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxRadar_Pos_X_0x740(vuint16 sigData);
#endif

/* Handle:  255,Name:              Radar_Vel_X_0x740,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxRadar_Vel_X_0x740(vuint16 sigData);
#endif

/* Handle:  259,Name:           Obstacle_Pos_X_0x73F,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxObstacle_Pos_X_0x73F(vuint16 sigData);
#endif

/* Handle:  260,Name:           Obstacle_Pos_Y_0x73F,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxObstacle_Pos_Y_0x73F(vuint16 sigData);
#endif

/* Handle:  263,Name:       Obstacle_Rel_Vel_X_0x73F,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxObstacle_Rel_Vel_X_0x73F(vuint16 sigData);
#endif

/* Handle:  268,Name:      Obstacle_Angle_Rate_0x73E,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxObstacle_Angle_Rate_0x73E(vuint16 sigData);
#endif

/* Handle:  269,Name:    Obstacle_Scale_Change_0x73E,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxObstacle_Scale_Change_0x73E(vuint16 sigData);
#endif

/* Handle:  270,Name:           Object_Accel_X_0x73E,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxObject_Accel_X_0x73E(vuint16 sigData);
#endif

/* Handle:  272,Name:           Obstacle_Angle_0x73E,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxObstacle_Angle_0x73E(vuint16 sigData);
#endif

/* Handle:  274,Name:           Obstacle_Width_0x73D,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxObstacle_Width_0x73D(vuint8 sigData);
#endif

/* Handle:  275,Name:             Obstacle_Age_0x73D,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxObstacle_Age_0x73D(vuint8 sigData);
#endif

/* Handle:  278,Name:              Radar_Pos_X_0x73D,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxRadar_Pos_X_0x73D(vuint16 sigData);
#endif

/* Handle:  279,Name:              Radar_Vel_X_0x73D,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxRadar_Vel_X_0x73D(vuint16 sigData);
#endif

/* Handle:  283,Name:           Obstacle_Pos_X_0x73C,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxObstacle_Pos_X_0x73C(vuint16 sigData);
#endif

/* Handle:  284,Name:           Obstacle_Pos_Y_0x73C,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxObstacle_Pos_Y_0x73C(vuint16 sigData);
#endif

/* Handle:  287,Name:       Obstacle_Rel_Vel_X_0x73C,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxObstacle_Rel_Vel_X_0x73C(vuint16 sigData);
#endif

/* Handle:  292,Name:      Obstacle_Angle_Rate_0x73B,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxObstacle_Angle_Rate_0x73B(vuint16 sigData);
#endif

/* Handle:  293,Name:    Obstacle_Scale_Change_0x73B,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxObstacle_Scale_Change_0x73B(vuint16 sigData);
#endif

/* Handle:  294,Name:           Object_Accel_X_0x73B,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxObject_Accel_X_0x73B(vuint16 sigData);
#endif

/* Handle:  296,Name:           Obstacle_Angle_0x73B,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxObstacle_Angle_0x73B(vuint16 sigData);
#endif

/* Handle:  298,Name:           Obstacle_Width_0x73A,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxObstacle_Width_0x73A(vuint8 sigData);
#endif

/* Handle:  299,Name:             Obstacle_Age_0x73A,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxObstacle_Age_0x73A(vuint8 sigData);
#endif

/* Handle:  302,Name:              Radar_Pos_X_0x73A,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxRadar_Pos_X_0x73A(vuint16 sigData);
#endif

/* Handle:  303,Name:              Radar_Vel_X_0x73A,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxRadar_Vel_X_0x73A(vuint16 sigData);
#endif

/* Handle:  307,Name:           Obstacle_Pos_X_0x739,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxObstacle_Pos_X_0x739(vuint16 sigData);
#endif

/* Handle:  308,Name:           Obstacle_Pos_Y_0x739,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxObstacle_Pos_Y_0x739(vuint16 sigData);
#endif

/* Handle:  311,Name:       Obstacle_Rel_Vel_X_0x739,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxObstacle_Rel_Vel_X_0x739(vuint16 sigData);
#endif

/* Handle:  325,Name:                 Failsafe_0x738,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxFailsafe_0x738(vuint8 sigData);
#endif

/* Handle:  326,Name:           Lane_Curvature_0x737,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxLane_Curvature_0x737(vuint16 sigData);
#endif

/* Handle:  327,Name:             Lane_Heading_0x737,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxLane_Heading_0x737(vuint16 sigData);
#endif

/* Handle:  331,Name:                Yaw_Angle_0x737,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxYaw_Angle_0x737(vuint16 sigData);
#endif

/* Handle:  332,Name:              Pitch_Angle_0x737,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxPitch_Angle_0x737(vuint16 sigData);
#endif

/* Handle:  334,Name:   Boundary_left_hand_HLB_0x729,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxBoundary_left_hand_HLB_0x729(vuint16 sigData);
#endif

/* Handle:  335,Name:  Boundary_right_hand_HLB_0x729,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxBoundary_right_hand_HLB_0x729(vuint16 sigData);
#endif

/* Handle:  336,Name:      Object_Distance_HLB_0x729,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxObject_Distance_HLB_0x729(vuint8 sigData);
#endif

/* Handle:  346,Name: Reasons_for_switch_to_low_beam_0x728,Size:  9,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxReasons_for_switch_to_low_beam_0x728(vuint16 sigData);
#endif

/* Handle:  412,Name:    Distance_To_Left_Lane_0x669,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxDistance_To_Left_Lane_0x669(vuint16 sigData);
#endif

/* Handle:  417,Name:   Distance_To_Right_Lane_0x669,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxDistance_To_Right_Lane_0x669(vuint16 sigData);
#endif

/* Handle:  418,Name:                Fixed_Yaw_0x650,Size: 32,UsedBytes:  4,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxFixed_Yaw_0x650(vuint32 sigData);
#endif

/* Handle:  419,Name:            Fixed_Horizon_0x650,Size: 32,UsedBytes:  4,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxFixed_Horizon_0x650(vuint32 sigData);
#endif




/* begin Fileversion check */
#ifndef SKIP_MAGIC_NUMBER
#ifdef MAGIC_NUMBER
  #if MAGIC_NUMBER != 297367898
      #error "The magic number of the generated file <D:\code\McuCode\GENy-IL-interfaceGenerator\tools\Geny\il_par.h> is different. Please check time and date of generated files!"
  #endif
#else
  #define MAGIC_NUMBER 297367898
#endif  /* MAGIC_NUMBER */
#endif  /* SKIP_MAGIC_NUMBER */

/* end Fileversion check */

#endif /* __IL_PAR_H__ */
