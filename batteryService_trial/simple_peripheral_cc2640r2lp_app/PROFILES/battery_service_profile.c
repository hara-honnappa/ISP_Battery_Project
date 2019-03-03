/**********************************************************************************************
 * Filename:       battery_service_profile.c
 *
 * Description:    This file contains the implementation of the service.
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


/*********************************************************************
 * INCLUDES
 */
#include <string.h>

#include <icall.h>

/* This Header file contains all BLE API and icall structure definition */
#include "icall_ble_api.h"

#include "battery_service_profile.h"

/*********************************************************************
 * MACROS
 */

/*********************************************************************
 * CONSTANTS
 */

/*********************************************************************
 * TYPEDEFS
 */

/*********************************************************************
* GLOBAL VARIABLES
*/

// ICall taskID
uint8_t responseTaskID = INVALID_TASK_ID;
// batteryService Service UUID
CONST uint8_t batteryServiceUUID[ATT_BT_UUID_SIZE] =
{
  LO_UINT16(BATTERYSERVICE_SERV_UUID), HI_UINT16(BATTERYSERVICE_SERV_UUID)
};

// batteryService Characteristic1 UUID
CONST uint8_t batteryServiceChar1UUID[ATT_BT_UUID_SIZE] =
{
  LO_UINT16(BATTERYSERVICE_CHAR1_UUID), HI_UINT16(BATTERYSERVICE_CHAR1_UUID)
};

// batteryService Characteristic2 UUID
CONST uint8_t batteryServiceChar2UUID[ATT_BT_UUID_SIZE] =
{
  LO_UINT16(BATTERYSERVICE_CHAR2_UUID), HI_UINT16(BATTERYSERVICE_CHAR2_UUID)
};

// batteryService Characteristic3 UUID
CONST uint8_t batteryServiceChar3UUID[ATT_BT_UUID_SIZE] =
{
  LO_UINT16(BATTERYSERVICE_CHAR3_UUID), HI_UINT16(BATTERYSERVICE_CHAR3_UUID)
};

// batteryService Characteristic4 UUID
CONST uint8_t batteryServiceChar4UUID[ATT_BT_UUID_SIZE] =
{
  LO_UINT16(BATTERYSERVICE_CHAR4_UUID), HI_UINT16(BATTERYSERVICE_CHAR4_UUID)
};

// batteryService Characteristic5 UUID
CONST uint8_t batteryServiceChar5UUID[ATT_BT_UUID_SIZE] =
{
  LO_UINT16(BATTERYSERVICE_CHAR5_UUID), HI_UINT16(BATTERYSERVICE_CHAR5_UUID)
};

// batteryService Characteristic6 UUID
CONST uint8_t batteryServiceChar6UUID[ATT_BT_UUID_SIZE] =
{
  LO_UINT16(BATTERYSERVICE_CHAR6_UUID), HI_UINT16(BATTERYSERVICE_CHAR6_UUID)
};

// batteryService Characteristic7 UUID
CONST uint8_t batteryServiceChar7UUID[ATT_BT_UUID_SIZE] =
{
  LO_UINT16(BATTERYSERVICE_CHAR7_UUID), HI_UINT16(BATTERYSERVICE_CHAR7_UUID)
};

// batteryService Characteristic8 UUID
CONST uint8_t batteryServiceChar8UUID[ATT_BT_UUID_SIZE] =
{
  LO_UINT16(BATTERYSERVICE_CHAR8_UUID), HI_UINT16(BATTERYSERVICE_CHAR8_UUID)
};

// batteryService Characteristic9 UUID
CONST uint8_t batteryServiceChar9UUID[ATT_BT_UUID_SIZE] =
{
  LO_UINT16(BATTERYSERVICE_CHAR9_UUID), HI_UINT16(BATTERYSERVICE_CHAR9_UUID)
};

// batteryService Characteristic10 UUID
CONST uint8_t batteryServiceChar10UUID[ATT_BT_UUID_SIZE] =
{
  LO_UINT16(BATTERYSERVICE_CHAR10_UUID), HI_UINT16(BATTERYSERVICE_CHAR10_UUID)
};

// batteryService Characteristic11 UUID
CONST uint8_t batteryServiceChar11UUID[ATT_BT_UUID_SIZE] =
{
  LO_UINT16(BATTERYSERVICE_CHAR11_UUID), HI_UINT16(BATTERYSERVICE_CHAR11_UUID)
};

// batteryService Characteristic12 UUID
CONST uint8_t batteryServiceChar12UUID[ATT_BT_UUID_SIZE] =
{
  LO_UINT16(BATTERYSERVICE_CHAR12_UUID), HI_UINT16(BATTERYSERVICE_CHAR12_UUID)
};

// batteryService Characteristic13 UUID
CONST uint8_t batteryServiceChar13UUID[ATT_BT_UUID_SIZE] =
{
  LO_UINT16(BATTERYSERVICE_CHAR13_UUID), HI_UINT16(BATTERYSERVICE_CHAR13_UUID)
};

// batteryService Characteristic14 UUID
CONST uint8_t batteryServiceChar14UUID[ATT_BT_UUID_SIZE] =
{
  LO_UINT16(BATTERYSERVICE_CHAR14_UUID), HI_UINT16(BATTERYSERVICE_CHAR14_UUID)
};

// batteryService Characteristic15 UUID
CONST uint8_t batteryServiceChar15UUID[ATT_BT_UUID_SIZE] =
{
  LO_UINT16(BATTERYSERVICE_CHAR15_UUID), HI_UINT16(BATTERYSERVICE_CHAR15_UUID)
};

// batteryService Characteristic16 UUID
CONST uint8_t batteryServiceChar16UUID[ATT_BT_UUID_SIZE] =
{
  LO_UINT16(BATTERYSERVICE_CHAR16_UUID), HI_UINT16(BATTERYSERVICE_CHAR16_UUID)
};

// batteryService Characteristic17 UUID
CONST uint8_t batteryServiceChar17UUID[ATT_BT_UUID_SIZE] =
{
  LO_UINT16(BATTERYSERVICE_CHAR17_UUID), HI_UINT16(BATTERYSERVICE_CHAR17_UUID)
};

// batteryService Characteristic18 UUID
CONST uint8_t batteryServiceChar18UUID[ATT_BT_UUID_SIZE] =
{
  LO_UINT16(BATTERYSERVICE_CHAR18_UUID), HI_UINT16(BATTERYSERVICE_CHAR18_UUID)
};

// batteryService Characteristic19 UUID
CONST uint8_t batteryServiceChar19UUID[ATT_BT_UUID_SIZE] =
{
  LO_UINT16(BATTERYSERVICE_CHAR19_UUID), HI_UINT16(BATTERYSERVICE_CHAR19_UUID)
};

// batteryService Characteristic20 UUID
CONST uint8_t batteryServiceChar20UUID[ATT_BT_UUID_SIZE] =
{
  LO_UINT16(BATTERYSERVICE_CHAR20_UUID), HI_UINT16(BATTERYSERVICE_CHAR20_UUID)
};

// batteryService Characteristic21 UUID
CONST uint8_t batteryServiceChar21UUID[ATT_BT_UUID_SIZE] =
{
  LO_UINT16(BATTERYSERVICE_CHAR21_UUID), HI_UINT16(BATTERYSERVICE_CHAR21_UUID)
};

// batteryService Characteristic22 UUID
CONST uint8_t batteryServiceChar22UUID[ATT_BT_UUID_SIZE] =
{
  LO_UINT16(BATTERYSERVICE_CHAR22_UUID), HI_UINT16(BATTERYSERVICE_CHAR22_UUID)
};

// batteryService Characteristic23 UUID
CONST uint8_t batteryServiceChar23UUID[ATT_BT_UUID_SIZE] =
{
  LO_UINT16(BATTERYSERVICE_CHAR23_UUID), HI_UINT16(BATTERYSERVICE_CHAR23_UUID)
};

// batteryService Characteristic24 UUID
CONST uint8_t batteryServiceChar24UUID[ATT_BT_UUID_SIZE] =
{
  LO_UINT16(BATTERYSERVICE_CHAR24_UUID), HI_UINT16(BATTERYSERVICE_CHAR24_UUID)
};

// batteryService Characteristic25 UUID
CONST uint8_t batteryServiceChar25UUID[ATT_BT_UUID_SIZE] =
{
  LO_UINT16(BATTERYSERVICE_CHAR25_UUID), HI_UINT16(BATTERYSERVICE_CHAR25_UUID)
};

// batteryService Characteristic26 UUID
CONST uint8_t batteryServiceChar26UUID[ATT_BT_UUID_SIZE] =
{
  LO_UINT16(BATTERYSERVICE_CHAR26_UUID), HI_UINT16(BATTERYSERVICE_CHAR26_UUID)
};

// batteryService Characteristic27 UUID
CONST uint8_t batteryServiceChar27UUID[ATT_BT_UUID_SIZE] =
{
  LO_UINT16(BATTERYSERVICE_CHAR27_UUID), HI_UINT16(BATTERYSERVICE_CHAR27_UUID)
};

// batteryService Characteristic28 UUID
CONST uint8_t batteryServiceChar28UUID[ATT_BT_UUID_SIZE] =
{
  LO_UINT16(BATTERYSERVICE_CHAR28_UUID), HI_UINT16(BATTERYSERVICE_CHAR28_UUID)
};



/*********************************************************************
 * LOCAL VARIABLES
 */

static batteryServiceCBs_t *pAppCBs = NULL;

/*********************************************************************
* Profile Attributes - variables
*/

// Service declaration
static CONST gattAttrType_t batteryServiceDecl = { ATT_BT_UUID_SIZE, batteryServiceUUID };

// Characteristic 1 - Battery Mode Properties
static uint8_t batteryServiceChar1Props = GATT_PROP_READ|GATT_PROP_INDICATE;

// Characteristic 1 - Battery Mode Value
static uint16_t batteryServiceChar1Val = 0;

// Characteristic 1 Voltage Configuration
// Each client has its own instantiation of the Client Characteristic
// Configuration. Reads of the Client Characteristic Configuration
// only shows the configuration for that client and writes only affect
// the configuration of that client.

static gattCharCfg_t *batteryServiceChar1Config;

// Characteristic 1 - Battery Mode User Description
static uint8_t batteryServiceChar1String[13] = "Battery Mode";

// Characteristic 2 Temperature Properties
static uint8_t batteryServiceChar2Props = GATT_PROP_READ|GATT_PROP_INDICATE;

// Characteristic 2 Temperature Value
static uint16_t batteryServiceChar2Val = 0;

// Characteristic 2 Voltage Configuration
static gattCharCfg_t *batteryServiceChar2Config;

// Characteristic 2 Temperature User Description
static uint8_t batteryServiceChar2String[13] = "Temperature";

// Characteristic 3 Voltage Properties
static uint8_t batteryServiceChar3Props = GATT_PROP_READ | GATT_PROP_INDICATE;

// Characteristic 3 Voltage Value
static uint16_t batteryServiceChar3Val = 0;

// Characteristic 3 Voltage Configuration
// Each client has its own instantiation of the Client Characteristic
// Configuration. Reads of the Client Characteristic Configuration
// only shows the configuration for that client and writes only affect
// the configuration of that client.

static gattCharCfg_t *batteryServiceChar3Config;

// Characteristic 3 Voltage User Description
static uint8_t batteryServiceChar3String[13] = "Voltage";

// Characteristic 4 Current Properties
static uint8_t batteryServiceChar4Props = GATT_PROP_READ|GATT_PROP_INDICATE;

// Characteristic 4 CurrentValue
static uint16_t batteryServiceChar4Val = 0;

// Characteristic 4 Voltage Configuration
static gattCharCfg_t *batteryServiceChar4Config;

// Characteristic 4 Current User Description
static uint8_t batteryServiceChar4String[13] = "Current";

// Characteristic 5 Remaining Capacity Properties
static uint8_t batteryServiceChar5Props = GATT_PROP_READ|GATT_PROP_INDICATE;

// Characteristic 5 Remaining Capacity Value
static uint16_t batteryServiceChar5Val = 0;

// Characteristic 5 Voltage Configuration
static gattCharCfg_t *batteryServiceChar5Config;

// Characteristic 5 Remaining Capacity User Description
static uint8_t batteryServiceChar5String[19] = "Remaining Capacity";

// Characteristic 6 FullCharge Capacity Properties
static uint8_t batteryServiceChar6Props = GATT_PROP_READ|GATT_PROP_INDICATE;

// Characteristic 6 FullCharge Capacity Value
static uint16_t batteryServiceChar6Val = 0;

// Characteristic 6 Voltage Configuration
static gattCharCfg_t *batteryServiceChar6Config;

// Characteristic 6 FullCharge Capacity User Description
static uint8_t batteryServiceChar6String[20] = "FullCharge Capacity";

// Characteristic 7 Run Time to Empty Properties
static uint8_t batteryServiceChar7Props = GATT_PROP_READ|GATT_PROP_INDICATE;

// Characteristic 7 Run Time to Empty Value
static uint16_t batteryServiceChar7Val = 0;

// Characteristic 7 Voltage Configuration
static gattCharCfg_t *batteryServiceChar7Config;

// Characteristic 7 Run Time to Empty User Description
static uint8_t batteryServiceChar7String[18] = "Run Time to Empty";

// Characteristic 8 Average time to empty Properties
static uint8_t batteryServiceChar8Props = GATT_PROP_READ|GATT_PROP_INDICATE;

// Characteristic 8 Average time to empty Value
static uint16_t batteryServiceChar8Val = 0;

// Characteristic 8 Voltage Configuration
static gattCharCfg_t *batteryServiceChar8Config;

// Characteristic 8 Average time to empty User Description
static uint8_t batteryServiceChar8String[22] = "Average time to empty";

// Characteristic 9 Average time to full Properties
static uint8_t batteryServiceChar9Props = GATT_PROP_READ|GATT_PROP_INDICATE;

// Characteristic 9 Average time to full Value
static uint16_t batteryServiceChar9Val = 0;

// Characteristic 9 Voltage Configuration
static gattCharCfg_t *batteryServiceChar9Config;

// Characteristic 9 Average time to full User Description
static uint8_t batteryServiceChar9String[21] = "Average time to full";

// Characteristic 10 Charging current Properties
static uint8_t batteryServiceChar10Props = GATT_PROP_READ|GATT_PROP_INDICATE;

// Characteristic 10 Charging current Value
static uint16_t batteryServiceChar10Val = 0;

// Characteristic 10 Voltage Configuration
static gattCharCfg_t *batteryServiceChar10Config;

// Characteristic 10 Charging current User Description
static uint8_t batteryServiceChar10String[17] = "Charging current";

// Characteristic 11 Charging voltage Properties
static uint8_t batteryServiceChar11Props = GATT_PROP_READ|GATT_PROP_INDICATE;

// Characteristic 11 Charging voltage Value
static uint16_t batteryServiceChar11Val = 0;

// Characteristic 11 Voltage Configuration
static gattCharCfg_t *batteryServiceChar11Config;

// Characteristic 11 Charging voltage User Description
static uint8_t batteryServiceChar11String[17] = "Charging voltage";

// Characteristic 12 Battery Status Properties
static uint8_t batteryServiceChar12Props = GATT_PROP_READ|GATT_PROP_INDICATE;

// Characteristic 12 Battery Status Value
static uint16_t batteryServiceChar12Val = 0;

// Characteristic 12 Voltage Configuration
static gattCharCfg_t *batteryServiceChar12Config;

// Characteristic 12 Battery Status User Description
static uint8_t batteryServiceChar12String[15] = "Battery Status";

// Characteristic 13 Cycle count Properties
static uint8_t batteryServiceChar13Props = GATT_PROP_READ;

// Characteristic 13 Cycle count Value
static uint16_t batteryServiceChar13Val = 0;

// Characteristic 13 Cycle count User Description
static uint8_t batteryServiceChar13String[12] = "Cycle count";

// Characteristic 14 Mfg Date Properties
static uint8_t batteryServiceChar14Props = GATT_PROP_READ;

// Characteristic 14 Mfg Date Value
static uint16_t batteryServiceChar14Val = 0;

// Characteristic 14 Mfg Date User Description
static uint8_t batteryServiceChar14String[9] = "Mfg Date";

// Characteristic 15 Serial number Properties
static uint8_t batteryServiceChar15Props = GATT_PROP_READ;

// Characteristic 15 Serial number Value
static uint16_t batteryServiceChar15Val = 0;

// Characteristic 15 Serial number User Description
static uint8_t batteryServiceChar15String[14] = "Serial number";

// Characteristic 16 Mfg name Properties
static uint8_t batteryServiceChar16Props = GATT_PROP_READ;

// Characteristic 16 Mfg name Value
static uint16_t batteryServiceChar16Val = 0;

// Characteristic 16 Mfg name User Description
static uint8_t batteryServiceChar16String[9] = "Mfg name";

// Characteristic 17 Device name Properties
static uint8_t batteryServiceChar17Props = GATT_PROP_READ;

// Characteristic 17 Device name Value
static uint16_t batteryServiceChar17Val = 0;

// Characteristic 17 Device name User Description
static uint8_t batteryServiceChar17String[12] = "Device name";

// Characteristic 18 Device chemistry Properties
static uint8_t batteryServiceChar18Props = GATT_PROP_READ;

// Characteristic 18 Device chemistry Value
static uint16_t batteryServiceChar18Val = 0;

// Characteristic 18 Device chemistry User Description
static uint8_t batteryServiceChar18String[17] = "Device chemistry";

// Characteristic 19 Cell voltage 1 Properties
static uint8_t batteryServiceChar19Props = GATT_PROP_READ|GATT_PROP_INDICATE;

// Characteristic 19 Cell voltage 1 Value
static uint16_t batteryServiceChar19Val = 0;

// Characteristic 19 Voltage Configuration
static gattCharCfg_t *batteryServiceChar19Config;

// Characteristic 19 Cell voltage 1 User Description
static uint8_t batteryServiceChar19String[15] = "Cell voltage 1";

// Characteristic 20 Cell voltage 2 Properties
static uint8_t batteryServiceChar20Props = GATT_PROP_READ|GATT_PROP_INDICATE;

// Characteristic 20 Cell voltage 2 Value
static uint16_t batteryServiceChar20Val = 0;

// Characteristic 20 Voltage Configuration
static gattCharCfg_t *batteryServiceChar20Config;

// Characteristic 20 Cell voltage 2 User Description
static uint8_t batteryServiceChar20String[15] = "Cell voltage 2";

// Characteristic 21 Cell voltage 3 Properties
static uint8_t batteryServiceChar21Props = GATT_PROP_READ|GATT_PROP_INDICATE;

// Characteristic 21 Cell voltage 3 Value
static uint16_t batteryServiceChar21Val = 0;

// Characteristic 21 Voltage Configuration
static gattCharCfg_t *batteryServiceChar21Config;

// Characteristic 21 Cell voltage 3 User Description
static uint8_t batteryServiceChar21String[15] = "Cell voltage 3";

// Characteristic 22 State of health Properties
static uint8_t batteryServiceChar22Props = GATT_PROP_READ;

// Characteristic 22 State of health Value
static uint16_t batteryServiceChar22Val = 0;

// Characteristic 22 State of health User Description
static uint8_t batteryServiceChar22String[16] = "State of health";

// Characteristic 23 Safety status Properties
static uint8_t batteryServiceChar23Props = GATT_PROP_READ;

// Characteristic 23 Safety status Value
static uint16_t batteryServiceChar23Val = 0;

// Characteristic 23 Safety status User Description
static uint8_t batteryServiceChar23String[14] = "Safety status";

// Characteristic 24 Operation status Properties
static uint8_t batteryServiceChar24Props = GATT_PROP_READ;

// Characteristic 24 Operation status Value
static uint16_t batteryServiceChar24Val = 0;

// Characteristic 24 Operation status User Description
static uint8_t batteryServiceChar24String[17] = "Operation status";

// Characteristic 25 Chrging status Properties
static uint8_t batteryServiceChar25Props = GATT_PROP_READ;

// Characteristic 25 Chrging status Value
static uint16_t batteryServiceChar25Val = 0;

// Characteristic 25 Chrging status User Description
static uint8_t batteryServiceChar25String[15] = "Chrging status";

// Characteristic 26 Pack voltage Properties
static uint8_t batteryServiceChar26Props = GATT_PROP_READ;

// Characteristic 26 Pack voltage Value
static uint16_t batteryServiceChar26Val = 0;

// Characteristic 26 Pack voltage User Description
static uint8_t batteryServiceChar26String[13] = "Pack voltage";

// Characteristic 27 TS1 temperature Properties
static uint8_t batteryServiceChar27Props = GATT_PROP_READ;

// Characteristic 27 TS1 temperature Value
static uint16_t batteryServiceChar27Val = 0;

// Characteristic 27 TS1 temperature User Description
static uint8_t batteryServiceChar27String[16] = "TS1 temperature";

// Characteristic 28 TS2 temperature Properties
static uint8_t batteryServiceChar28Props = GATT_PROP_READ;

// Characteristic 28 TS2 temperature Value
static uint16_t batteryServiceChar28Val = 0;

// Characteristic 28 TS2 temperature User Description
static uint8_t batteryServiceChar28String[16] = "TS2 temperature";


/*********************************************************************
* Profile Attributes - Table
*/

static gattAttribute_t batteryServiceAttrTbl[] =
{
  // batteryService Service Declaration
  {
    { ATT_BT_UUID_SIZE, primaryServiceUUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceDecl
  },

  // batteryService characteristic1 declaration
  {
    { ATT_BT_UUID_SIZE, characterUUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar1Props
  },
  // batteryService characteristic1 value
  {
    { ATT_BT_UUID_SIZE, batteryServiceChar1UUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar1Val
  },
  // batteryService characteristic 3 configuration
  {
    { ATT_BT_UUID_SIZE, clientCharCfgUUID },
    GATT_PERMIT_READ|GATT_PERMIT_WRITE,
    0,
    (uint8_t *)&batteryServiceChar1Config
  },
  // batteryService characteristic1 description
  {
    { ATT_BT_UUID_SIZE, charUserDescUUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar1String
  },

  // batteryService characteristic2 declaration
  {
    { ATT_BT_UUID_SIZE, characterUUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar2Props
  },
  // batteryService characteristic2 value
  {
    { ATT_BT_UUID_SIZE, batteryServiceChar2UUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar2Val
  },
  // batteryService characteristic 3 configuration
  {
    { ATT_BT_UUID_SIZE, clientCharCfgUUID },
    GATT_PERMIT_READ|GATT_PERMIT_WRITE,
    0,
    (uint8_t *)&batteryServiceChar2Config
  },
  // batteryService characteristic2 description
  {
    { ATT_BT_UUID_SIZE, charUserDescUUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar2String
  },

  // batteryService characteristic3 declaration
  {
    { ATT_BT_UUID_SIZE, characterUUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar3Props
  },
  // batteryService characteristic3 value
  {
    { ATT_BT_UUID_SIZE, batteryServiceChar3UUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar3Val
  },
  // batteryService characteristic 3 configuration
  {
    { ATT_BT_UUID_SIZE, clientCharCfgUUID },
    GATT_PERMIT_READ|GATT_PERMIT_WRITE,
    0,
    (uint8_t *)&batteryServiceChar3Config
  },
  // batteryService characteristic3 description
  {
    { ATT_BT_UUID_SIZE, charUserDescUUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar3String
  },

  // batteryService characteristic4 declaration
  {
    { ATT_BT_UUID_SIZE, characterUUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar4Props
  },
  // batteryService characteristic4 value
  {
    { ATT_BT_UUID_SIZE, batteryServiceChar4UUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar4Val
  },
  // batteryService characteristic 4 configuration
  {
    { ATT_BT_UUID_SIZE, clientCharCfgUUID },
    GATT_PERMIT_READ|GATT_PERMIT_WRITE,
    0,
    (uint8_t *)&batteryServiceChar4Config
  },
  // batteryService characteristic4 description
  {
    { ATT_BT_UUID_SIZE, charUserDescUUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar4String
  },


  // batteryService characteristic5 declaration
  {
    { ATT_BT_UUID_SIZE, characterUUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar5Props
  },
  // batteryService characteristic5 value
  {
    { ATT_BT_UUID_SIZE, batteryServiceChar5UUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar5Val
  },
  // batteryService characteristic 5 configuration
  {
    { ATT_BT_UUID_SIZE, clientCharCfgUUID },
    GATT_PERMIT_READ|GATT_PERMIT_WRITE,
    0,
    (uint8_t *)&batteryServiceChar5Config
  },
  // batteryService characteristic5 description
  {
    { ATT_BT_UUID_SIZE, charUserDescUUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar5String
  },

  // batteryService characteristic6 declaration
  {
    { ATT_BT_UUID_SIZE, characterUUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar6Props
  },
  // batteryService characteristic6 value
  {
    { ATT_BT_UUID_SIZE, batteryServiceChar6UUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar6Val
  },
  // batteryService characteristic 6 configuration
  {
    { ATT_BT_UUID_SIZE, clientCharCfgUUID },
    GATT_PERMIT_READ|GATT_PERMIT_WRITE,
    0,
    (uint8_t *)&batteryServiceChar6Config
  },
  // batteryService characteristic6 description
  {
    { ATT_BT_UUID_SIZE, charUserDescUUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar6String
  },


  // batteryService characteristic7 declaration
  {
    { ATT_BT_UUID_SIZE, characterUUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar7Props
  },
  // batteryService characteristic7 value
  {
    { ATT_BT_UUID_SIZE, batteryServiceChar7UUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar7Val
  },
  // batteryService characteristic 7 configuration
  {
    { ATT_BT_UUID_SIZE, clientCharCfgUUID },
    GATT_PERMIT_READ|GATT_PERMIT_WRITE,
    0,
    (uint8_t *)&batteryServiceChar7Config
  },
  // batteryService characteristic7 description
  {
    { ATT_BT_UUID_SIZE, charUserDescUUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar7String
  },


  // batteryService characteristic8 declaration
  {
    { ATT_BT_UUID_SIZE, characterUUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar8Props
  },
  // batteryService characteristic8 value
  {
    { ATT_BT_UUID_SIZE, batteryServiceChar8UUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar8Val
  },
  // batteryService characteristic 8 configuration
  {
    { ATT_BT_UUID_SIZE, clientCharCfgUUID },
    GATT_PERMIT_READ|GATT_PERMIT_WRITE,
    0,
    (uint8_t *)&batteryServiceChar8Config
  },
  // batteryService characteristic8 description
  {
    { ATT_BT_UUID_SIZE, charUserDescUUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar8String
  },


  // batteryService characteristic9 declaration
  {
    { ATT_BT_UUID_SIZE, characterUUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar9Props
  },
  // batteryService characteristic9 value
  {
    { ATT_BT_UUID_SIZE, batteryServiceChar9UUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar9Val
  },
  // batteryService characteristic 9 configuration
  {
    { ATT_BT_UUID_SIZE, clientCharCfgUUID },
    GATT_PERMIT_READ|GATT_PERMIT_WRITE,
    0,
    (uint8_t *)&batteryServiceChar9Config
  },
  // batteryService characteristic9 description
  {
    { ATT_BT_UUID_SIZE, charUserDescUUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar9String
  },


  // batteryService characteristic10 declaration
  {
    { ATT_BT_UUID_SIZE, characterUUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar10Props
  },
  // batteryService characteristic10 value
  {
    { ATT_BT_UUID_SIZE, batteryServiceChar10UUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar10Val
  },
  // batteryService characteristic 10 configuration
  {
    { ATT_BT_UUID_SIZE, clientCharCfgUUID },
    GATT_PERMIT_READ|GATT_PERMIT_WRITE,
    0,
    (uint8_t *)&batteryServiceChar10Config
  },
  // batteryService characteristic10 description
  {
    { ATT_BT_UUID_SIZE, charUserDescUUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar10String
  },


  // batteryService characteristic11 declaration
  {
    { ATT_BT_UUID_SIZE, characterUUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar11Props
  },
  // batteryService characteristic11 value
  {
    { ATT_BT_UUID_SIZE, batteryServiceChar11UUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar11Val
  },
  // batteryService characteristic 11 configuration
  {
    { ATT_BT_UUID_SIZE, clientCharCfgUUID },
    GATT_PERMIT_READ|GATT_PERMIT_WRITE,
    0,
    (uint8_t *)&batteryServiceChar11Config
  },
  // batteryService characteristic11 description
  {
    { ATT_BT_UUID_SIZE, charUserDescUUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar11String
  },


  // batteryService characteristic12 declaration
  {
    { ATT_BT_UUID_SIZE, characterUUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar12Props
  },
  // batteryService characteristic12 value
  {
    { ATT_BT_UUID_SIZE, batteryServiceChar12UUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar12Val
  },
  // batteryService characteristic 12 configuration
  {
    { ATT_BT_UUID_SIZE, clientCharCfgUUID },
    GATT_PERMIT_READ|GATT_PERMIT_WRITE,
    0,
    (uint8_t *)&batteryServiceChar12Config
  },
  // batteryService characteristic12 description
  {
    { ATT_BT_UUID_SIZE, charUserDescUUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar12String
  },


  // batteryService characteristic13 declaration
  {
    { ATT_BT_UUID_SIZE, characterUUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar13Props
  },
  // batteryService characteristic13 value
  {
    { ATT_BT_UUID_SIZE, batteryServiceChar13UUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar13Val
  },
  // batteryService characteristic13 description
  {
    { ATT_BT_UUID_SIZE, charUserDescUUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar13String
  },


  // batteryService characteristic14 declaration
  {
    { ATT_BT_UUID_SIZE, characterUUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar14Props
  },
  // batteryService characteristic14 value
  {
    { ATT_BT_UUID_SIZE, batteryServiceChar14UUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar14Val
  },
  // batteryService characteristic14 description
  {
    { ATT_BT_UUID_SIZE, charUserDescUUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar14String
  },


  // batteryService characteristic15 declaration
  {
    { ATT_BT_UUID_SIZE, characterUUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar15Props
  },
  // batteryService characteristic15 value
  {
    { ATT_BT_UUID_SIZE, batteryServiceChar15UUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar15Val
  },
  // batteryService characteristic15 description
  {
    { ATT_BT_UUID_SIZE, charUserDescUUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar15String
  },


  // batteryService characteristic16 declaration
  {
    { ATT_BT_UUID_SIZE, characterUUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar16Props
  },
  // batteryService characteristic16 value
  {
    { ATT_BT_UUID_SIZE, batteryServiceChar16UUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar16Val
  },
  // batteryService characteristic16 description
  {
    { ATT_BT_UUID_SIZE, charUserDescUUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar16String
  },


  // batteryService characteristic17 declaration
  {
    { ATT_BT_UUID_SIZE, characterUUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar17Props
  },
  // batteryService characteristic17 value
  {
    { ATT_BT_UUID_SIZE, batteryServiceChar17UUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar17Val
  },
  // batteryService characteristic17 description
  {
    { ATT_BT_UUID_SIZE, charUserDescUUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar17String
  },


  // batteryService characteristic18 declaration
  {
    { ATT_BT_UUID_SIZE, characterUUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar18Props
  },
  // batteryService characteristic18 value
  {
    { ATT_BT_UUID_SIZE, batteryServiceChar18UUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar18Val
  },
  // batteryService characteristic18description
  {
    { ATT_BT_UUID_SIZE, charUserDescUUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar18String
  },


  // batteryService characteristic19 declaration
  {
    { ATT_BT_UUID_SIZE, characterUUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar19Props
  },
  // batteryService characteristic19 value
  {
    { ATT_BT_UUID_SIZE, batteryServiceChar19UUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar19Val
  },
  // batteryService characteristic 19 configuration
  {
    { ATT_BT_UUID_SIZE, clientCharCfgUUID },
    GATT_PERMIT_READ|GATT_PERMIT_WRITE,
    0,
    (uint8_t *)&batteryServiceChar19Config
  },
  // batteryService characteristic19 description
  {
    { ATT_BT_UUID_SIZE, charUserDescUUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar19String
  },


  // batteryService characteristic20 declaration
  {
    { ATT_BT_UUID_SIZE, characterUUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar20Props
  },
  // batteryService characteristic20 value
  {
    { ATT_BT_UUID_SIZE, batteryServiceChar20UUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar20Val
  },
  // batteryService characteristic 20 configuration
  {
    { ATT_BT_UUID_SIZE, clientCharCfgUUID },
    GATT_PERMIT_READ|GATT_PERMIT_WRITE,
    0,
    (uint8_t *)&batteryServiceChar20Config
  },
  // batteryService characteristic20 description
  {
    { ATT_BT_UUID_SIZE, charUserDescUUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar20String
  },


  // batteryService characteristic21 declaration
  {
    { ATT_BT_UUID_SIZE, characterUUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar21Props
  },
  // batteryService characteristic21 value
  {
    { ATT_BT_UUID_SIZE, batteryServiceChar21UUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar21Val
  },
  // batteryService characteristic 21 configuration
  {
    { ATT_BT_UUID_SIZE, clientCharCfgUUID },
    GATT_PERMIT_READ|GATT_PERMIT_WRITE,
    0,
    (uint8_t *)&batteryServiceChar21Config
  },
  // batteryService characteristic21 description
  {
    { ATT_BT_UUID_SIZE, charUserDescUUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar21String
  },


  // batteryService characteristic22 declaration
  {
    { ATT_BT_UUID_SIZE, characterUUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar22Props
  },
  // batteryService characteristic22 value
  {
    { ATT_BT_UUID_SIZE, batteryServiceChar22UUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar22Val
  },
  // batteryService characteristic22 description
  {
    { ATT_BT_UUID_SIZE, charUserDescUUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar22String
  },


  // batteryService characteristic23 declaration
  {
    { ATT_BT_UUID_SIZE, characterUUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar23Props
  },
  // batteryService characteristic23 value
  {
    { ATT_BT_UUID_SIZE, batteryServiceChar23UUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar23Val
  },
  // batteryService characteristic23 description
  {
    { ATT_BT_UUID_SIZE, charUserDescUUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar23String
  },


  // batteryService characteristic24 declaration
  {
    { ATT_BT_UUID_SIZE, characterUUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar24Props
  },
  // batteryService characteristic24 value
  {
    { ATT_BT_UUID_SIZE, batteryServiceChar24UUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar24Val
  },
  // batteryService characteristic24 description
  {
    { ATT_BT_UUID_SIZE, charUserDescUUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar24String
  },


  // batteryService characteristic25 declaration
  {
    { ATT_BT_UUID_SIZE, characterUUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar25Props
  },
  // batteryService characteristic25 value
  {
    { ATT_BT_UUID_SIZE, batteryServiceChar25UUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar25Val
  },
  // batteryService characteristic25 description
  {
    { ATT_BT_UUID_SIZE, charUserDescUUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar25String
  },


  // batteryService characteristic26 declaration
  {
    { ATT_BT_UUID_SIZE, characterUUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar26Props
  },
  // batteryService characteristic26 value
  {
    { ATT_BT_UUID_SIZE, batteryServiceChar26UUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar26Val
  },
  // batteryService characteristic26 description
  {
    { ATT_BT_UUID_SIZE, charUserDescUUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar26String
  },


  // batteryService characteristic27 declaration
  {
    { ATT_BT_UUID_SIZE, characterUUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar27Props
  },
  // batteryService characteristic27 value
  {
    { ATT_BT_UUID_SIZE, batteryServiceChar27UUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar27Val
  },
  // batteryService characteristic27 description
  {
    { ATT_BT_UUID_SIZE, charUserDescUUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar27String
  },


  // batteryService characteristic28 declaration
  {
    { ATT_BT_UUID_SIZE, characterUUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar28Props
  },
  // batteryService characteristic28 value
  {
    { ATT_BT_UUID_SIZE, batteryServiceChar28UUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar28Val
  },
  // batteryService characteristic28 description
  {
    { ATT_BT_UUID_SIZE, charUserDescUUID },
    GATT_PERMIT_READ,
    0,
    (uint8_t *)&batteryServiceChar28String
  },
};
;

/*********************************************************************
 * LOCAL FUNCTIONS
 */
static bStatus_t batteryService_ReadAttrCB( uint16_t connHandle, gattAttribute_t *pAttr,
                                           uint8_t *pValue, uint16_t *pLen, uint16_t offset,
                                           uint16_t maxLen, uint8_t method );
static bStatus_t batteryService_WriteAttrCB( uint16_t connHandle, gattAttribute_t *pAttr,
                                            uint8_t *pValue, uint16_t len, uint16_t offset,
                                            uint8_t method );

/*********************************************************************
 * PROFILE CALLBACKS
 */
// Simple Profile Service Callbacks
CONST gattServiceCBs_t batteryServiceCBs =
{
  batteryService_ReadAttrCB,  // Read callback function pointer
  batteryService_WriteAttrCB, // Write callback function pointer
  NULL                       // Authorization callback function pointer
};

/*********************************************************************
* PUBLIC FUNCTIONS
*/
void updateChar1Val(uint16_t val)
{
    batteryServiceChar1Val = val;
}

/*
 * updateCharacteristic - Update a characteristic's value variable 
 *
 *    uuid		- Custom Characteristic ID
 *    val		- pointer to data to write.  This is dependent on
 *          the parameter ID and WILL be cast to the appropriate
 *          data type (example: data type of uint16 will be cast to
 *          uint16 pointer).
 */
extern void updateCharacteristic(uint16_t uuid, uint8_t *val)
{
    switch(uuid)
    {
    case BATTERYSERVICE_CHAR1_UUID:
        memcpy(&batteryServiceChar1Val, val, 2);
        break;
    case BATTERYSERVICE_CHAR2_UUID:
        memcpy(&batteryServiceChar2Val, val, 2);
        break;
    case BATTERYSERVICE_CHAR3_UUID:
        memcpy(&batteryServiceChar3Val, val, 2);
        break;
    case BATTERYSERVICE_CHAR4_UUID:
        memcpy(&batteryServiceChar4Val, val, 2);
        break;
    case BATTERYSERVICE_CHAR5_UUID:
        memcpy(&batteryServiceChar5Val, val, 2);
        break;
    case BATTERYSERVICE_CHAR6_UUID:
        memcpy(&batteryServiceChar6Val, val, 2);
        break;
    case BATTERYSERVICE_CHAR7_UUID:
        memcpy(&batteryServiceChar7Val, val, 2);
        break;
    case BATTERYSERVICE_CHAR8_UUID:
        memcpy(&batteryServiceChar8Val, val, 2);
        break;
    case BATTERYSERVICE_CHAR9_UUID:
        memcpy(&batteryServiceChar9Val, val, 2);
        break;
    case BATTERYSERVICE_CHAR10_UUID:
        memcpy(&batteryServiceChar10Val, val, 2);
        break;
    case BATTERYSERVICE_CHAR11_UUID:
        memcpy(&batteryServiceChar11Val, val, 2);
        break;
    case BATTERYSERVICE_CHAR12_UUID:
        memcpy(&batteryServiceChar12Val, val, 2);
        break;
    case BATTERYSERVICE_CHAR19_UUID:
        memcpy(&batteryServiceChar19Val, val, 2);
        break;
    case BATTERYSERVICE_CHAR20_UUID:
        memcpy(&batteryServiceChar20Val, val, 2);
        break;
    case BATTERYSERVICE_CHAR21_UUID:
        memcpy(&batteryServiceChar21Val, val, 2);
        break;
    default:
        break;
    }
}
/*
 * BatteryService_AddService- Initializes the BatteryService service by registering
 *          GATT attributes with the GATT server.
 *
 */
extern bStatus_t BatteryService_AddService( uint8_t rspTaskId )
{
  uint8_t status;

  // Allocate Client Characteristic Configuration table
  batteryServiceChar1Config = (gattCharCfg_t *)ICall_malloc( sizeof(gattCharCfg_t) *
                                                            linkDBNumConns );
  if ( batteryServiceChar1Config == NULL )
  {
    return ( bleMemAllocError );
  }

  // Initialize Client Characteristic Configuration attributes
  GATTServApp_InitCharCfg( INVALID_CONNHANDLE, batteryServiceChar1Config );

  // Allocate Client Characteristic Configuration table
  batteryServiceChar2Config = (gattCharCfg_t *)ICall_malloc( sizeof(gattCharCfg_t) *
                                                            linkDBNumConns );
  if ( batteryServiceChar2Config == NULL )
  {
    return ( bleMemAllocError );
  }

  // Initialize Client Characteristic Configuration attributes
  GATTServApp_InitCharCfg( INVALID_CONNHANDLE, batteryServiceChar2Config );

  // Allocate Client Characteristic Configuration table
  batteryServiceChar3Config = (gattCharCfg_t *)ICall_malloc( sizeof(gattCharCfg_t) *
                                                            linkDBNumConns );
  if ( batteryServiceChar3Config == NULL )
  {
    return ( bleMemAllocError );
  }

  // Initialize Client Characteristic Configuration attributes
  GATTServApp_InitCharCfg( INVALID_CONNHANDLE, batteryServiceChar3Config );

  // Allocate Client Characteristic Configuration table
  batteryServiceChar4Config = (gattCharCfg_t *)ICall_malloc( sizeof(gattCharCfg_t) *
                                                            linkDBNumConns );
  if ( batteryServiceChar4Config == NULL )
  {
    return ( bleMemAllocError );
  }

  // Initialize Client Characteristic Configuration attributes
  GATTServApp_InitCharCfg( INVALID_CONNHANDLE, batteryServiceChar4Config );

  // Allocate Client Characteristic Configuration table
  batteryServiceChar5Config = (gattCharCfg_t *)ICall_malloc( sizeof(gattCharCfg_t) *
                                                            linkDBNumConns );
  if ( batteryServiceChar5Config == NULL )
  {
    return ( bleMemAllocError );
  }

  // Initialize Client Characteristic Configuration attributes
  GATTServApp_InitCharCfg( INVALID_CONNHANDLE, batteryServiceChar5Config );

  // Allocate Client Characteristic Configuration table
  batteryServiceChar6Config = (gattCharCfg_t *)ICall_malloc( sizeof(gattCharCfg_t) *
                                                            linkDBNumConns );
  if ( batteryServiceChar6Config == NULL )
  {
    return ( bleMemAllocError );
  }

  // Initialize Client Characteristic Configuration attributes
  GATTServApp_InitCharCfg( INVALID_CONNHANDLE, batteryServiceChar6Config );

  // Allocate Client Characteristic Configuration table
  batteryServiceChar7Config = (gattCharCfg_t *)ICall_malloc( sizeof(gattCharCfg_t) *
                                                            linkDBNumConns );
  if ( batteryServiceChar7Config == NULL )
  {
    return ( bleMemAllocError );
  }

  // Initialize Client Characteristic Configuration attributes
  GATTServApp_InitCharCfg( INVALID_CONNHANDLE, batteryServiceChar7Config );

  // Allocate Client Characteristic Configuration table
  batteryServiceChar8Config = (gattCharCfg_t *)ICall_malloc( sizeof(gattCharCfg_t) *
                                                            linkDBNumConns );
  if ( batteryServiceChar8Config == NULL )
  {
    return ( bleMemAllocError );
  }

  // Initialize Client Characteristic Configuration attributes
  GATTServApp_InitCharCfg( INVALID_CONNHANDLE, batteryServiceChar8Config );

  // Allocate Client Characteristic Configuration table
  batteryServiceChar9Config = (gattCharCfg_t *)ICall_malloc( sizeof(gattCharCfg_t) *
                                                            linkDBNumConns );
  if ( batteryServiceChar9Config == NULL )
  {
    return ( bleMemAllocError );
  }

  // Initialize Client Characteristic Configuration attributes
  GATTServApp_InitCharCfg( INVALID_CONNHANDLE, batteryServiceChar9Config );

  // Allocate Client Characteristic Configuration table
  batteryServiceChar10Config = (gattCharCfg_t *)ICall_malloc( sizeof(gattCharCfg_t) *
                                                            linkDBNumConns );
  if ( batteryServiceChar10Config == NULL )
  {
    return ( bleMemAllocError );
  }

  // Initialize Client Characteristic Configuration attributes
  GATTServApp_InitCharCfg( INVALID_CONNHANDLE, batteryServiceChar10Config );

  // Allocate Client Characteristic Configuration table
  batteryServiceChar11Config = (gattCharCfg_t *)ICall_malloc( sizeof(gattCharCfg_t) *
                                                            linkDBNumConns );
  if ( batteryServiceChar11Config == NULL )
  {
    return ( bleMemAllocError );
  }

  // Initialize Client Characteristic Configuration attributes
  GATTServApp_InitCharCfg( INVALID_CONNHANDLE, batteryServiceChar11Config );

  // Allocate Client Characteristic Configuration table
  batteryServiceChar12Config = (gattCharCfg_t *)ICall_malloc( sizeof(gattCharCfg_t) *
                                                            linkDBNumConns );
  if ( batteryServiceChar12Config == NULL )
  {
    return ( bleMemAllocError );
  }

  // Initialize Client Characteristic Configuration attributes
  GATTServApp_InitCharCfg( INVALID_CONNHANDLE, batteryServiceChar12Config );

  // Allocate Client Characteristic Configuration table
  batteryServiceChar19Config = (gattCharCfg_t *)ICall_malloc( sizeof(gattCharCfg_t) *
                                                            linkDBNumConns );
  if ( batteryServiceChar19Config == NULL )
  {
    return ( bleMemAllocError );
  }

  // Initialize Client Characteristic Configuration attributes
  GATTServApp_InitCharCfg( INVALID_CONNHANDLE, batteryServiceChar19Config );

  // Allocate Client Characteristic Configuration table
  batteryServiceChar20Config = (gattCharCfg_t *)ICall_malloc( sizeof(gattCharCfg_t) *
                                                            linkDBNumConns );
  if ( batteryServiceChar20Config == NULL )
  {
    return ( bleMemAllocError );
  }

  // Initialize Client Characteristic Configuration attributes
  GATTServApp_InitCharCfg( INVALID_CONNHANDLE, batteryServiceChar20Config );

  // Allocate Client Characteristic Configuration table
  batteryServiceChar21Config = (gattCharCfg_t *)ICall_malloc( sizeof(gattCharCfg_t) *
                                                            linkDBNumConns );
  if ( batteryServiceChar21Config == NULL )
  {
    return ( bleMemAllocError );
  }

  // Initialize Client Characteristic Configuration attributes
  GATTServApp_InitCharCfg( INVALID_CONNHANDLE, batteryServiceChar21Config );

  // Register GATT attribute list and CBs with GATT Server App
  status = GATTServApp_RegisterService( batteryServiceAttrTbl,
                                        GATT_NUM_ATTRS( batteryServiceAttrTbl ),
                                        GATT_MAX_ENCRYPT_KEY_SIZE,
                                        &batteryServiceCBs );

  responseTaskID = rspTaskId;
  return ( status );
}

/*
 * BatteryService_RegisterAppCBs - Registers the application callback function.
 *                    Only call this function once.
 *
 *    appCallbacks - pointer to application callbacks.
 */
bStatus_t BatteryService_RegisterAppCBs( batteryServiceCBs_t *appCallbacks )
{
  if ( appCallbacks )
  {
    pAppCBs = appCallbacks;

    return ( SUCCESS );
  }
  else
  {
    return ( bleAlreadyInRequestedMode );
  }
}

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
bStatus_t BatteryService_SetParameter( uint32_t param, uint16_t len, void *value )
{
  bStatus_t ret = SUCCESS;
  switch ( param )
  {
  case BATTERYSERVICE_CHAR1_UUID:
      batteryServiceChar1Val = *(uint16_t*)value;
      // Send Notification if it has been enabled
      ret = GATTServApp_ProcessCharCfg( batteryServiceChar1Config, (uint8_t*)&batteryServiceChar1Val, FALSE,
                                  batteryServiceAttrTbl, GATT_NUM_ATTRS( batteryServiceAttrTbl ),
                                  responseTaskID, batteryService_ReadAttrCB );
      break;
	case BATTERYSERVICE_CHAR2_UUID:
		batteryServiceChar2Val = *(uint16_t*)value;
		// Send Notification if it has been enabled
		ret = GATTServApp_ProcessCharCfg( batteryServiceChar2Config, (uint8_t*)&batteryServiceChar2Val, FALSE,
									batteryServiceAttrTbl, GATT_NUM_ATTRS( batteryServiceAttrTbl ),
									responseTaskID, batteryService_ReadAttrCB );
		break;
	case BATTERYSERVICE_CHAR3_UUID:
		batteryServiceChar3Val = *(uint16_t*)value;
		// Send Notification if it has been enabled
		ret = GATTServApp_ProcessCharCfg( batteryServiceChar3Config, (uint8_t*)&batteryServiceChar3Val, FALSE,
									batteryServiceAttrTbl, GATT_NUM_ATTRS( batteryServiceAttrTbl ),
									responseTaskID, batteryService_ReadAttrCB );
		break;
	case BATTERYSERVICE_CHAR4_UUID:
		batteryServiceChar4Val = *(uint16_t*)value;
		// Send Notification if it has been enabled
		ret = GATTServApp_ProcessCharCfg( batteryServiceChar4Config, (uint8_t*)&batteryServiceChar4Val, FALSE,
									batteryServiceAttrTbl, GATT_NUM_ATTRS( batteryServiceAttrTbl ),
									responseTaskID, batteryService_ReadAttrCB );
		break;
	case BATTERYSERVICE_CHAR5_UUID:
		batteryServiceChar5Val = *(uint16_t*)value;
		// Send Notification if it has been enabled
		ret = GATTServApp_ProcessCharCfg( batteryServiceChar5Config, (uint8_t*)&batteryServiceChar5Val, FALSE,
									batteryServiceAttrTbl, GATT_NUM_ATTRS( batteryServiceAttrTbl ),
									responseTaskID, batteryService_ReadAttrCB );
		break;
	case BATTERYSERVICE_CHAR6_UUID:
		batteryServiceChar6Val = *(uint16_t*)value;
		// Send Notification if it has been enabled
		ret = GATTServApp_ProcessCharCfg( batteryServiceChar6Config, (uint8_t*)&batteryServiceChar6Val, FALSE,
									batteryServiceAttrTbl, GATT_NUM_ATTRS( batteryServiceAttrTbl ),
									responseTaskID, batteryService_ReadAttrCB );
		break;
	case BATTERYSERVICE_CHAR7_UUID:
		batteryServiceChar7Val = *(uint16_t*)value;
		// Send Notification if it has been enabled
		ret = GATTServApp_ProcessCharCfg( batteryServiceChar7Config, (uint8_t*)&batteryServiceChar7Val, FALSE,
									batteryServiceAttrTbl, GATT_NUM_ATTRS( batteryServiceAttrTbl ),
									responseTaskID, batteryService_ReadAttrCB );
		break;
	case BATTERYSERVICE_CHAR8_UUID:
		batteryServiceChar8Val = *(uint16_t*)value;
		// Send Notification if it has been enabled
		ret = GATTServApp_ProcessCharCfg( batteryServiceChar8Config, (uint8_t*)&batteryServiceChar8Val, FALSE,
									batteryServiceAttrTbl, GATT_NUM_ATTRS( batteryServiceAttrTbl ),
									responseTaskID, batteryService_ReadAttrCB );
		break;
	case BATTERYSERVICE_CHAR9_UUID:
		batteryServiceChar9Val = *(uint16_t*)value;
		// Send Notification if it has been enabled
		ret = GATTServApp_ProcessCharCfg( batteryServiceChar9Config, (uint8_t*)&batteryServiceChar9Val, FALSE,
									batteryServiceAttrTbl, GATT_NUM_ATTRS( batteryServiceAttrTbl ),
									responseTaskID, batteryService_ReadAttrCB );
		break;
	case BATTERYSERVICE_CHAR10_UUID:
		batteryServiceChar10Val = *(uint16_t*)value;
		// Send Notification if it has been enabled
		ret = GATTServApp_ProcessCharCfg( batteryServiceChar10Config, (uint8_t*)&batteryServiceChar10Val, FALSE,
									batteryServiceAttrTbl, GATT_NUM_ATTRS( batteryServiceAttrTbl ),
									responseTaskID, batteryService_ReadAttrCB );
		break;
	case BATTERYSERVICE_CHAR11_UUID:
		batteryServiceChar11Val = *(uint16_t*)value;
		// Send Notification if it has been enabled
		ret = GATTServApp_ProcessCharCfg( batteryServiceChar11Config, (uint8_t*)&batteryServiceChar11Val, FALSE,
									batteryServiceAttrTbl, GATT_NUM_ATTRS( batteryServiceAttrTbl ),
									responseTaskID, batteryService_ReadAttrCB );
		break;
	case BATTERYSERVICE_CHAR12_UUID:
		batteryServiceChar12Val = *(uint16_t*)value;
		// Send Notification if it has been enabled
		ret = GATTServApp_ProcessCharCfg( batteryServiceChar12Config, (uint8_t*)&batteryServiceChar12Val, FALSE,
									batteryServiceAttrTbl, GATT_NUM_ATTRS( batteryServiceAttrTbl ),
									responseTaskID, batteryService_ReadAttrCB );
		break;
	case BATTERYSERVICE_CHAR19_UUID:
		batteryServiceChar19Val = *(uint16_t*)value;
		// Send Notification if it has been enabled
		ret = GATTServApp_ProcessCharCfg( batteryServiceChar19Config, (uint8_t*)&batteryServiceChar19Val, FALSE,
									batteryServiceAttrTbl, GATT_NUM_ATTRS( batteryServiceAttrTbl ),
									responseTaskID, batteryService_ReadAttrCB );
		break;
	case BATTERYSERVICE_CHAR20_UUID:
		batteryServiceChar20Val = *(uint16_t*)value;
		// Send Notification if it has been enabled
		ret = GATTServApp_ProcessCharCfg( batteryServiceChar20Config, (uint8_t*)&batteryServiceChar20Val, FALSE,
									batteryServiceAttrTbl, GATT_NUM_ATTRS( batteryServiceAttrTbl ),
									responseTaskID, batteryService_ReadAttrCB );
		break;
	case BATTERYSERVICE_CHAR21_UUID:
		batteryServiceChar21Val = *(uint16_t*)value;
		// Send Notification if it has been enabled
		ret = GATTServApp_ProcessCharCfg( batteryServiceChar21Config, (uint8_t*)&batteryServiceChar21Val, FALSE,
									batteryServiceAttrTbl, GATT_NUM_ATTRS( batteryServiceAttrTbl ),
									responseTaskID, batteryService_ReadAttrCB );
		break;
    default:
      ret = INVALIDPARAMETER;
      break;
  }
  return ret;
}


/*
 * BatteryService_GetParameter - Get a BatteryService parameter.
 *
 *    param - Profile parameter ID
 *    value - pointer to data to write.  This is dependent on
 *          the parameter ID and WILL be cast to the appropriate
 *          data type (example: data type of uint16 will be cast to
 *          uint16 pointer).
 */
bStatus_t BatteryService_GetParameter( uint32_t param, uint16_t len, void *value )
{
  bStatus_t ret = SUCCESS;
  switch ( param )
  {
    case BATTERYSERVICE_CHAR1_UUID:
      memcpy(value, &batteryServiceChar1Val, len);
      break;
    case BATTERYSERVICE_CHAR2_UUID:
      memcpy(value, &batteryServiceChar2Val, len);
      break;
    case BATTERYSERVICE_CHAR3_UUID:
      memcpy(value, &batteryServiceChar3Val, len);
      break;
    case BATTERYSERVICE_CHAR4_UUID:
      memcpy(value, &batteryServiceChar4Val, len);
      break;
    case BATTERYSERVICE_CHAR5_UUID:
      memcpy(value, &batteryServiceChar5Val, len);
      break;
    case BATTERYSERVICE_CHAR6_UUID:
      memcpy(value, &batteryServiceChar6Val, len);
      break;
    case BATTERYSERVICE_CHAR7_UUID:
      memcpy(value, &batteryServiceChar7Val, len);
      break;
    case BATTERYSERVICE_CHAR8_UUID:
      memcpy(value, &batteryServiceChar8Val, len);
      break;
    case BATTERYSERVICE_CHAR9_UUID:
      memcpy(value, &batteryServiceChar9Val, len);
      break;
    case BATTERYSERVICE_CHAR10_UUID:
      memcpy(value, &batteryServiceChar10Val, len);
      break;
    case BATTERYSERVICE_CHAR11_UUID:
      memcpy(value, &batteryServiceChar11Val, len);
      break;
    case BATTERYSERVICE_CHAR12_UUID:
      memcpy(value, &batteryServiceChar12Val, len);
      break;
    case BATTERYSERVICE_CHAR13_UUID:
      memcpy(value, &batteryServiceChar13Val, len);
      break;
    case BATTERYSERVICE_CHAR14_UUID:
      memcpy(value, &batteryServiceChar14Val, len);
      break;
    case BATTERYSERVICE_CHAR15_UUID:
      memcpy(value, &batteryServiceChar15Val, len);
      break;
    case BATTERYSERVICE_CHAR16_UUID:
      memcpy(value, &batteryServiceChar16Val, len);
      break;
    case BATTERYSERVICE_CHAR17_UUID:
      memcpy(value, &batteryServiceChar17Val, len);
      break;
    case BATTERYSERVICE_CHAR18_UUID:
      memcpy(value, &batteryServiceChar18Val, len);
      break;
    case BATTERYSERVICE_CHAR19_UUID:
      memcpy(value, &batteryServiceChar19Val, len);
      break;
    case BATTERYSERVICE_CHAR20_UUID:
      memcpy(value, &batteryServiceChar20Val, len);
      break;
    case BATTERYSERVICE_CHAR21_UUID:
      memcpy(value, &batteryServiceChar21Val, len);
      break;
    case BATTERYSERVICE_CHAR22_UUID:
      memcpy(value, &batteryServiceChar22Val, len);
      break;
    case BATTERYSERVICE_CHAR23_UUID:
      memcpy(value, &batteryServiceChar23Val, len);
      break;
    case BATTERYSERVICE_CHAR24_UUID:
      memcpy(value, &batteryServiceChar24Val, len);
      break;
    case BATTERYSERVICE_CHAR25_UUID:
      memcpy(value, &batteryServiceChar25Val, len);
      break;
    case BATTERYSERVICE_CHAR26_UUID:
      memcpy(value, &batteryServiceChar26Val, len);
      break;
    case BATTERYSERVICE_CHAR27_UUID:
      memcpy(value, &batteryServiceChar27Val, len);
      break;
    default:
      ret = INVALIDPARAMETER;
      break;
  }
  return ret;
}


/*********************************************************************
 * @fn          batteryService_ReadAttrCB
 *
 * @brief       Read an attribute.
 *
 * @param       connHandle - connection message was received on
 * @param       pAttr - pointer to attribute
 * @param       pValue - pointer to data to be read
 * @param       pLen - length of data to be read
 * @param       offset - offset of the first octet to be read
 * @param       maxLen - maximum length of data to be read
 * @param       method - type of read message
 *
 * @return      SUCCESS, blePending or Failure
 */
static bStatus_t batteryService_ReadAttrCB( uint16_t connHandle, gattAttribute_t *pAttr,
                                       uint8_t *pValue, uint16_t *pLen, uint16_t offset,
                                       uint16_t maxLen, uint8_t method )
{
  bStatus_t status = SUCCESS;

  if(offset > 0)
  {
      // no attributes are long enough to require a offset
      *pLen = 0;
      status = ATT_ERR_ATTR_NOT_FOUND;

  }

  if(pAttr->type.len == ATT_BT_UUID_SIZE)
  {
      uint16 uuid = BUILD_UINT16( pAttr->type.uuid[0], pAttr->type.uuid[1]);
      switch(uuid)
      {
      case BATTERYSERVICE_CHAR1_UUID:
	  case BATTERYSERVICE_CHAR2_UUID:
	  case BATTERYSERVICE_CHAR3_UUID:
	  case BATTERYSERVICE_CHAR4_UUID:
	  case BATTERYSERVICE_CHAR5_UUID:
	  case BATTERYSERVICE_CHAR6_UUID:
	  case BATTERYSERVICE_CHAR7_UUID:
	  case BATTERYSERVICE_CHAR8_UUID:
	  case BATTERYSERVICE_CHAR9_UUID:
	  case BATTERYSERVICE_CHAR10_UUID:
	  case BATTERYSERVICE_CHAR11_UUID:
	  case BATTERYSERVICE_CHAR12_UUID:
	  case BATTERYSERVICE_CHAR19_UUID:
	  case BATTERYSERVICE_CHAR20_UUID:
	  case BATTERYSERVICE_CHAR21_UUID:
          *pLen = 2;
          memcpy(pValue, pAttr->pValue, *pLen);
          break;
      default:
          *pLen = 0;
          status = ATT_ERR_ATTR_NOT_FOUND;
          break;
      }
  }
  else
  {
    // If we get here, that means you've forgotten to add an if clause for a
    // characteristic value attribute in the attribute table that has READ permissions.
    *pLen = 0;
    status = ATT_ERR_ATTR_NOT_FOUND;
  }

  return status;
}


/*********************************************************************
 * @fn      batteryService_WriteAttrCB
 *
 * @brief   Validate attribute data prior to a write operation
 *
 * @param   connHandle - connection message was received on
 * @param   pAttr - pointer to attribute
 * @param   pValue - pointer to data to be written
 * @param   len - length of data
 * @param   offset - offset of the first octet to be written
 * @param   method - type of write message
 *
 * @return  SUCCESS, blePending or Failure
 */
static bStatus_t batteryService_WriteAttrCB( uint16_t connHandle, gattAttribute_t *pAttr,
                                        uint8_t *pValue, uint16_t len, uint16_t offset,
                                        uint8_t method )
{
  bStatus_t status  = SUCCESS;
  uint8_t   paramID = 0xFF;

  // See if request is regarding a Client Characterisic Configuration
  if ( ! memcmp(pAttr->type.uuid, clientCharCfgUUID, pAttr->type.len) )
  {
    // Update notification/indication configuration for the corresponding characteristic
    status = GATTServApp_ProcessCCCWriteReq( connHandle, pAttr, pValue, len,
                                             offset, GATT_CLIENT_CFG_NOTIFY|GATT_CLIENT_CFG_INDICATE);
  }
  else
  {
    // If we get here, that means you've forgotten to add an if clause for a
    // characteristic value attribute in the attribute table that has WRITE permissions.
    status = ATT_ERR_ATTR_NOT_FOUND;
  }

  // Let the application know something changed (if it did) by using the
  // callback it registered earlier (if it did).
  if (paramID != 0xFF)
    if ( pAppCBs && pAppCBs->pfnChangeCb )
      pAppCBs->pfnChangeCb(connHandle, paramID, len, pValue); // Call app function from stack task context.

  return status;
}
