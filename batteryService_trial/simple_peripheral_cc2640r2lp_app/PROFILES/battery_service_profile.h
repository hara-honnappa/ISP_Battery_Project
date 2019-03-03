/**********************************************************************************************
 * Filename:       battery_service_profile.h
 *
 * Description:    This file contains the batteryService service definitions and
 *                 prototypes.
 *
 * Copyright (c) 2015-2018, Texas Instruments Incorporated
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * *  Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * *  Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * *  Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 *************************************************************************************************/


#ifndef _BATTERYSERVICE_H_
#define _BATTERYSERVICE_H_

#ifdef __cplusplus
extern "C"
{
#endif

/*********************************************************************
 * INCLUDES
 */

/*********************************************************************
* CONSTANTS
*/

/*********************************************************************
 * TYPEDEFS
 */

/*********************************************************************
 * MACROS
 */
// Service UUID
#define BATTERYSERVICE_SERV_UUID            0xA0A0 // Primary Service UUID
#define BATTERYSERVICE_CHAR1_UUID           0xA0A1 // Battery Mode
#define BATTERYSERVICE_CHAR2_UUID           0xA0A2 // Temperature
#define BATTERYSERVICE_CHAR3_UUID           0xA0A3 // Voltage
#define BATTERYSERVICE_CHAR4_UUID           0xA0A4 // Current
#define BATTERYSERVICE_CHAR5_UUID           0xA0A5 // Remaining Capacity
#define BATTERYSERVICE_CHAR6_UUID           0xA0A6 // FullCharge Capacity
#define BATTERYSERVICE_CHAR7_UUID           0xA0A7 // Run Time to Empty
#define BATTERYSERVICE_CHAR8_UUID           0xA0A8 // Average time to empty
#define BATTERYSERVICE_CHAR9_UUID           0xA0A9 // Average time to full
#define BATTERYSERVICE_CHAR10_UUID          0xA0AA // Charging current
#define BATTERYSERVICE_CHAR11_UUID          0xA0AB // Charging voltage
#define BATTERYSERVICE_CHAR12_UUID          0xA0AC // Battery Status
#define BATTERYSERVICE_CHAR13_UUID          0xA0AD // Cycle count
#define BATTERYSERVICE_CHAR14_UUID          0xA0AE // Mfg Date
#define BATTERYSERVICE_CHAR15_UUID          0xA0AF // Serial number
#define BATTERYSERVICE_CHAR16_UUID          0xA0B0 // Mfg name
#define BATTERYSERVICE_CHAR17_UUID          0xA0B1 // Device name
#define BATTERYSERVICE_CHAR18_UUID          0xA0B2 // Device chemistry
#define BATTERYSERVICE_CHAR19_UUID          0xA0B3 // Cell voltage 1
#define BATTERYSERVICE_CHAR20_UUID          0xA0B4 // Cell voltage 2
#define BATTERYSERVICE_CHAR21_UUID          0xA0B5 // Cell voltage 3
#define BATTERYSERVICE_CHAR22_UUID          0xA0B6 // State of health
#define BATTERYSERVICE_CHAR23_UUID          0xA0B7 // Safety status
#define BATTERYSERVICE_CHAR24_UUID          0xA0B8 // Operation status
#define BATTERYSERVICE_CHAR25_UUID          0xA0B9 // Chrging status
#define BATTERYSERVICE_CHAR26_UUID          0xA0BA // Pack voltage
#define BATTERYSERVICE_CHAR27_UUID          0xA0BB // TS1 temperature
#define BATTERYSERVICE_CHAR28_UUID          0xA0BC // TS2 temperature


#define SBS_CMD_BATTERY_MODE				0x03
#define SBS_CMD_TEMPERATURE					0x08
#define SBS_CMD_VOLTAGE						0x09
#define SBS_CMD_CURRENT						0x0A
#define SBS_CMD_REMAINING_CAP				0x0F
#define SBS_CMD_FULLCHARGE_CAP				0x10
#define SBS_CMD_RUN_TIME_EMPTY				0x11
#define SBS_CMD_AVG_TIME_EMPTY				0x12
#define SBS_CMD_AVG_TIME_FULL				0x13
#define SBS_CMD_CHRGING_CURRENT				0x14
#define SBS_CMD_CHRGING_VOLT				0x15
#define SBS_CMD_BATTERY_STAT				0x16
#define SBS_CMD_CELL_VOLT_1					0x3F
#define SBS_CMD_CELL_VOLT_2					0x3E
#define SBS_CMD_CELL_VOLT_3					0x3D


/*********************************************************************
 * Profile Callbacks
 */

// Callback when a characteristic value has changed
typedef void (*batteryServiceChange_t)(uint16_t connHandle, uint8_t paramID, uint16_t len, uint8_t *pValue);

typedef struct
{
  batteryServiceChange_t        pfnChangeCb;  // Called when characteristic value changes
  batteryServiceChange_t        pfnCfgChangeCb;
} batteryServiceCBs_t;



/*********************************************************************
 * API FUNCTIONS
 */


/*
 * BatteryService_AddService- Initializes the BatteryService service by registering
 *          GATT attributes with the GATT server.
 *
 */
extern bStatus_t BatteryService_AddService( uint8_t rspTaskId);

/*
 * BatteryService_RegisterAppCBs - Registers the application callback function.
 *                    Only call this function once.
 *
 *    appCallbacks - pointer to application callbacks.
 */
extern bStatus_t BatteryService_RegisterAppCBs( batteryServiceCBs_t *appCallbacks );

/*
 * BatteryService_SetParameter - Set a BatteryService parameter.
 *
 *    param - Profile parameter ID
 *    len - length of data to right
 *    value - pointer to data to write.  This is dependent on
 *          the parameter ID and WILL be cast to the appropriate
 *          data type (example: data type of uint16 will be cast to
 *          uint16 pointer).
 */
extern bStatus_t BatteryService_SetParameter(uint32_t param, uint16_t len, void *value);

/*
 * BatteryService_GetParameter - Get a BatteryService parameter.
 *
 *    param - Profile parameter ID
 *    value - pointer to data to write.  This is dependent on
 *          the parameter ID and WILL be cast to the appropriate
 *          data type (example: data type of uint16 will be cast to
 *          uint16 pointer).
 */
extern bStatus_t BatteryService_GetParameter(uint32_t param, uint16_t len, void *value);

extern void updateChar1Val(uint16_t val);
/*
 * updateCharacteristic - Update a characteristic's value variable 
 *
 *    uuid		- Custom Characteristic ID
 *    val		- pointer to data to write.  This is dependent on
 *          the parameter ID and WILL be cast to the appropriate
 *          data type (example: data type of uint16 will be cast to
 *          uint16 pointer).
 */
extern void updateCharacteristic(uint16_t uuid, uint8_t *val);
/*********************************************************************
*********************************************************************/

#ifdef __cplusplus
}
#endif

#endif /* _BATTERYSERVICE_H_ */
