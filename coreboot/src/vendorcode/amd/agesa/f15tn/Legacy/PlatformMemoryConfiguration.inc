; ****************************************************************************
; *
; * @file
; *
; * AMD Platform Specific Memory Configuration
; *
; * Contains AMD AGESA Memory Configuration Override Interface
; *
; * @xrefitem bom "File Content Label" "Release Content"
; * @e project:      AGESA
; * @e sub-project:  Include
; * @e \$Revision: 63425 $   @e \$Date: 2011-12-22 11:24:10 -0600 (Thu, 22 Dec 2011) $
;
; ****************************************************************************
; *
; * Copyright 2008 - 2012 ADVANCED MICRO DEVICES, INC.  All Rights Reserved.
; *
; * AMD is granting you permission to use this software (the Materials)
; * pursuant to the terms and conditions of your Software License Agreement
; * with AMD.  This header does *NOT* give you permission to use the Materials
; * or any rights under AMD's intellectual property.  Your use of any portion
; * of these Materials shall constitute your acceptance of those terms and
; * conditions.  If you do not agree to the terms and conditions of the Software
; * License Agreement, please do not use any portion of these Materials.
; *
; * CONFIDENTIALITY:  The Materials and all other information, identified as
; * confidential and provided to you by AMD shall be kept confidential in
; * accordance with the terms and conditions of the Software License Agreement.
; *
; * LIMITATION OF LIABILITY: THE MATERIALS AND ANY OTHER RELATED INFORMATION
; * PROVIDED TO YOU BY AMD ARE PROVIDED "AS IS" WITHOUT ANY EXPRESS OR IMPLIED
; * WARRANTY OF ANY KIND, INCLUDING BUT NOT LIMITED TO WARRANTIES OF
; * MERCHANTABILITY, NONINFRINGEMENT, TITLE, FITNESS FOR ANY PARTICULAR PURPOSE,
; * OR WARRANTIES ARISING FROM CONDUCT, COURSE OF DEALING, OR USAGE OF TRADE.
; * IN NO EVENT SHALL AMD OR ITS LICENSORS BE LIABLE FOR ANY DAMAGES WHATSOEVER
; * (INCLUDING, WITHOUT LIMITATION, DAMAGES FOR LOSS OF PROFITS, BUSINESS
; * INTERRUPTION, OR LOSS OF INFORMATION) ARISING OUT OF AMD'S NEGLIGENCE,
; * GROSS NEGLIGENCE, THE USE OF OR INABILITY TO USE THE MATERIALS OR ANY OTHER
; * RELATED INFORMATION PROVIDED TO YOU BY AMD, EVEN IF AMD HAS BEEN ADVISED OF
; * THE POSSIBILITY OF SUCH DAMAGES.  BECAUSE SOME JURISDICTIONS PROHIBIT THE
; * EXCLUSION OR LIMITATION OF LIABILITY FOR CONSEQUENTIAL OR INCIDENTAL DAMAGES,
; * THE ABOVE LIMITATION MAY NOT APPLY TO YOU.
; *
; * AMD does not assume any responsibility for any errors which may appear in
; * the Materials or any other related information provided to you by AMD, or
; * result from use of the Materials or any related information.
; *
; * You agree that you will not reverse engineer or decompile the Materials.
; *
; * NO SUPPORT OBLIGATION: AMD is not obligated to furnish, support, or make any
; * further information, software, technical information, know-how, or show-how
; * available to you.  Additionally, AMD retains the right to modify the
; * Materials at any time, without notice, and is not obligated to provide such
; * modified Materials to you.
; *
; * U.S. GOVERNMENT RESTRICTED RIGHTS: The Materials are provided with
; * "RESTRICTED RIGHTS." Use, duplication, or disclosure by the Government is
; * subject to the restrictions as set forth in FAR 52.227-14 and
; * DFAR252.227-7013, et seq., or its successor.  Use of the Materials by the
; * Government constitutes acknowledgement of AMD's proprietary rights in them.
; *
; * EXPORT ASSURANCE:  You agree and certify that neither the Materials, nor any
; * direct product thereof will be exported directly or indirectly, into any
; * country prohibited by the United States Export Administration Act and the
; * regulations thereunder, without the required authorization from the U.S.
; * government nor will be used for any purpose prohibited by the same.
; *
; **************************************************************************
IFNDEF PSO_ENTRY
  PSO_ENTRY           TEXTEQU    <UINT8>; < Platform Configuration Table Entry
ENDIF
; *****************************************************************************************
; *
; *                 PLATFORM SPECIFIC MEMORY DEFINITIONS
; *
; *****************************************************************************************
; */
;
; < Memory Speed and DIMM Population Masks
;
; < DDR Speed Masks
;
ANY_SPEED     EQU     0FFFFFFFFh
DDR400        EQU     ( 1 SHL (DDR400_FREQUENCY   / 66))
DDR533        EQU     ( 1 SHL (DDR533_FREQUENCY   / 66))
DDR667        EQU     ( 1 SHL (DDR667_FREQUENCY   / 66))
DDR800        EQU     ( 1 SHL (DDR800_FREQUENCY   / 66))
DDR1066       EQU     ( 1 SHL (DDR1066_FREQUENCY  / 66))
DDR1333       EQU     ( 1 SHL (DDR1333_FREQUENCY  / 66))
DDR1600       EQU     ( 1 SHL (DDR1600_FREQUENCY  / 66))
DDR1866       EQU     ( 1 SHL (DDR1866_FREQUENCY  / 66))
DDR2133       EQU     ( 1 SHL (DDR2133_FREQUENCY  / 66))
DDR2400       EQU     ( 1 SHL (DDR2400_FREQUENCY  / 66))
; <
; <  DIMM POPULATION MASKS
;
ANY_        EQU      0FFh
SR_DIMM0    EQU     0001h
SR_DIMM1    EQU     0010h
SR_DIMM2    EQU     0100h
SR_DIMM3    EQU     1000h
DR_DIMM0    EQU     0002h
DR_DIMM1    EQU     0020h
DR_DIMM2    EQU     0200h
DR_DIMM3    EQU     2000h
QR_DIMM0    EQU     0004h
QR_DIMM1    EQU     0040h
QR_DIMM2    EQU     0400h
QR_DIMM3    EQU     4000h
LR_DIMM0    EQU     0001h
LR_DIMM1    EQU     0010h
LR_DIMM2    EQU     0100h
LR_DIMM3    EQU     1000h
ANY_DIMM0   EQU     000Fh
ANY_DIMM1   EQU     00F0h
ANY_DIMM2   EQU     0F00h
ANY_DIMM3   EQU    0F000h
; <
; <  CS POPULATION MASKS
;
CS_ANY_     EQU     0FFh
CS0_        EQU      01h
CS1_        EQU      02h
CS2_        EQU      04h
CS3_        EQU      08h
CS4_        EQU      10h
CS5_        EQU      20h
CS6_        EQU      40h
CS7_        EQU      80h
;
;  Number of Dimms
;
ANY_NUM      EQU    0FFh
NO_DIMM      EQU     00h
ONE_DIMM     EQU     01h
TWO_DIMM     EQU     02h
THREE_DIMM   EQU     04h
FOUR_DIMM    EQU     08h
;
;  DIMM VOLTAGE MASK
;
VOLT_ANY_    EQU    0FFh
VOLT1_5_     EQU     01h
VOLT1_35_    EQU     02h
VOLT1_25_    EQU     04h
;
;  NOT APPLICIABLE
;
NA_          EQU     00h
; *****************************************************************************************
; *
; * Platform Specific Override Definitions for Socket, Channel and Dimm
; * This indicates where a platform override will be applied.
; *
; *****************************************************************************************
;
;  SOCKET MASKS
;
ANY_SOCKET      EQU    0FFh
SOCKET0         EQU     01h
SOCKET1         EQU     02h
SOCKET2         EQU     04h
SOCKET3         EQU     08h
SOCKET4         EQU     10h
SOCKET5         EQU     20h
SOCKET6         EQU     40h
SOCKET7         EQU     80h
;
;  CHANNEL MASKS
;
ANY_CHANNEL     EQU    0FFh
CHANNEL_A       EQU     01h
CHANNEL_B       EQU     02h
CHANNEL_C       EQU     04h
CHANNEL_D       EQU     08h
;
;  DIMM MASKS
;
ALL_DIMMS       EQU    0FFh
DIMM0           EQU     01h
DIMM1           EQU     02h
DIMM2           EQU     04h
DIMM3           EQU     08h
;
;  REGISTER ACCESS MASKS
;
ACCESS_NB0      EQU      0h
ACCESS_NB1      EQU     01h
ACCESS_NB2      EQU     02h
ACCESS_NB3      EQU     03h
ACCESS_NB4      EQU     04h
ACCESS_PHY      EQU     05h
ACCESS_DCT_XT   EQU     06h
; *****************************************************************************************
; *
; * Platform Specific Overriding Table Definitions
; *
; *****************************************************************************************
PSO_END                EQU      0     ; < Table End
PSO_CKE_TRI            EQU      1     ; < CKE Tristate Map
PSO_ODT_TRI            EQU      2     ; < ODT Tristate Map
PSO_CS_TRI             EQU      3     ; < CS Tristate Map
PSO_MAX_DIMMS          EQU      4     ; < Max Dimms per channel
PSO_CLK_SPEED          EQU      5     ; < Clock Speed
PSO_DIMM_TYPE          EQU      6     ; < Dimm Type
PSO_MEMCLK_DIS         EQU      7     ; < MEMCLK Disable Map
PSO_MAX_CHNLS          EQU      8     ; < Max Channels per Socket
PSO_BUS_SPEED          EQU      9     ; < Max Memory Bus Speed
PSO_MAX_CHIPSELS       EQU     10     ; < Max Chipsel per Channel
PSO_MEM_TECH           EQU     11     ; < Channel Memory Type
PSO_WL_SEED            EQU     12     ; < DDR3 Write Levelization Seed delay
PSO_RXEN_SEED          EQU     13     ; < Hardwared based RxEn seed
PSO_NO_LRDIMM_CS67_ROUTING          EQU    14     ; < CS6 and CS7 are not Routed to all Memoy slots on a channel for LRDIMMs
PSO_SOLDERED_DOWN_SODIMM_TYPE       EQU    15     ; < Soldered down SODIMM type
PSO_LVDIMM_VOLT1_5_SUPPORT          EQU    16     ; < Force LvDimm voltage to 1.5V
PSO_MIN_RD_WR_DATAEYE_WIDTH         EQU    17     ; < Min RD/WR dataeye width
PSO_CPU_FAMILY_TO_OVERRIDE          EQU    18     ; < CPU family signature to tell following PSO macros are CPU family dependent
PSO_MAX_SOLDERED_DOWN_DIMMS         EQU    19     ; < Max Soldered-down Dimms per channel
PSO_MEMORY_POWER_POLICY             EQU    20     ; < Memory power policy override
; **********************************
; * CONDITIONAL PSO SPECIFIC ENTRIES
; **********************************
;  Condition Types
CONDITIONAL_PSO_MIN   EQU     100     ; < Start of Conditional Entry Types
PSO_CONDITION_AND     EQU     100     ; < And Block - Start of Conditional block
PSO_CONDITION_LOC     EQU     101     ; < Location - Specify Socket, Channel, Dimms to be affected
PSO_CONDITION_SPD     EQU     102     ; < SPD - Specify a specific SPD value on a Dimm on the channel
PSO_CONDITION_REG     EQU     103     ;    Reserved
PSO_CONDITION_MAX     EQU     103     ; < End Of Condition Entry Types
;  Action Types
PSO_ACTION_MIN        EQU     120     ; < Start of Action Entry Types
PSO_ACTION_ODT        EQU     120     ; < ODT values to override
PSO_ACTION_ADDRTMG    EQU     121     ; < Address/Timing values to override
PSO_ACTION_ODCCONTROL EQU     122     ; < ODC Control values to override
PSO_ACTION_SLEWRATE   EQU     123     ; < Slew Rate value to override
PSO_ACTION_REG        EQU     124     ;    Reserved
PSO_ACTION_SPEEDLIMIT EQU     125     ; < Memory Bus speed Limit based on configuration
PSO_ACTION_MAX        EQU     125     ; < End of Action Entry Types
CONDITIONAL_PSO_MAX   EQU     139     ; < End of Conditional Entry Types
; **********************************
; * TABLE DRIVEN PSO SPECIFIC ENTRIES
; **********************************
;  Condition descriptor
PSO_TBLDRV_CONFIG       EQU     200     ; < Configuration Descriptor

;  Overriding entry types
PSO_TBLDRV_START        EQU     210     ; < Start of Table Driven Overriding Entry Types
PSO_TBLDRV_SPEEDLIMIT   EQU     210     ; < Speed Limit
PSO_TBLDRV_ODT_RTTNOM   EQU     211     ; < RttNom
PSO_TBLDRV_ODT_RTTWR    EQU     212     ; < RttWr
PSO_TBLDRV_ODTPATTERN   EQU     213     ; < Odt Patterns
PSO_TBLDRV_ADDRTMG      EQU     214     ; < Address/Timing values
PSO_TBLDRV_ODCCTRL      EQU     215     ; < ODC Control values
PSO_TBLDRV_SLOWACCMODE  EQU     216     ; < Slow Access Mode
PSO_TBLDRV_MR0_CL       EQU     217     ; < MR0[CL]
PSO_TBLDRV_MR0_WR       EQU     218     ; < MR0[WR]
PSO_TBLDRV_RC2_IBT      EQU     219     ; < RC2[IBT]
PSO_TBLDRV_RC10_OPSPEED EQU     220     ; < RC10[Opearting Speed]
PSO_TBLDRV_LRDIMM_IBT   EQU     221     ; < LrDIMM IBT
;del PSO_TBLDRV_2D_TRAINING   EQU     222    ; < 2D training
PSO_TBLDRV_INVALID_TYPE EQU     223     ; < Invalid Type
PSO_TBLDRV_END          EQU     223     ; < End of Table Driven Overriding Entry Types


; *****************************************************************************************
; *
; *                 CONDITIONAL OVERRIDE TABLE MACROS
; *
; *****************************************************************************************
CPU_FAMILY_TO_OVERRIDE     MACRO     CpuFamilyRevision:REQ
 DB PSO_CPU_FAMILY_TO_OVERRIDE
 DB 4
 DD CpuFamilyRevision
ENDM

MEMCLK_DIS_MAP    MACRO SocketID:REQ, ChannelID:REQ, Bit0Map:REQ, Bit1Map:REQ, Bit2Map:REQ, Bit3Map:REQ, Bit4Map:REQ, Bit5Map:REQ, Bit6Map:REQ, Bit7Map:REQ
 DB PSO_MEMCLK_DIS
 DB 11
 DB SocketID
 DB ChannelID
 DB ALL_DIMMS
 DB Bit0Map
 DB Bit1Map
 DB Bit2Map
 DB Bit3Map
 DB Bit4Map
 DB Bit5Map
 DB Bit6Map
 DB Bit7Map
ENDM

CKE_TRI_MAP     MACRO     SocketID:REQ, ChannelID:REQ, Bit0Map:REQ, Bit1Map:REQ
 DB PSO_CKE_TRI
 DB 5
 DB SocketID
 DB ChannelID
 DB ALL_DIMMS
 DB Bit0Map
 DB Bit1Map
ENDM

ODT_TRI_MAP     MACRO     SocketID:REQ, ChannelID:REQ, Bit0Map:REQ, Bit1Map:REQ, Bit2Map:REQ, Bit3Map:REQ
 DB PSO_ODT_TRI
 DB 7
 DB SocketID
 DB ChannelID
 DB ALL_DIMMS
 DB Bit0Map
 DB Bit1Map
 DB Bit2Map
 DB Bit3Map
ENDM

CS_TRI_MAP     MACRO     SocketID:REQ, ChannelID:REQ, Bit0Map:REQ, Bit1Map:REQ, Bit2Map:REQ, Bit3Map:REQ, Bit4Map:REQ, Bit5Map:REQ, Bit6Map:REQ, Bit7Map:REQ
 DB PSO_CS_TRI
 DB 11
 DB SocketID
 DB ChannelID
 DB ALL_DIMMS
 DB Bit0Map
 DB Bit1Map
 DB Bit2Map
 DB Bit3Map
 DB Bit4Map
 DB Bit5Map
 DB Bit6Map
 DB Bit7Map
ENDM

NUMBER_OF_DIMMS_SUPPORTED     MACRO     SocketID:REQ, ChannelID:REQ, NumberOfDimmSlotsPerChannel:REQ
 DB PSO_MAX_DIMMS
 DB 4
 DB SocketID
 DB ChannelID
 DB ALL_DIMMS
 DB NumberOfDimmSlotsPerChannel
ENDM

NUMBER_OF_SOLDERED_DOWN_DIMMS_SUPPORTED     MACRO     SocketID:REQ, ChannelID:REQ, NumberOfSolderedDownDimmsPerChannel:REQ
 DB PSO_MAX_SOLDERED_DOWN_DIMMS
 DB 4
 DB SocketID
 DB ChannelID
 DB ALL_DIMMS
 DB NumberOfSolderedDownDimmsPerChannel
ENDM

NUMBER_OF_CHIP_SELECTS_SUPPORTED     MACRO     SocketID:REQ, ChannelID:REQ, NumberOfChipSelectsPerChannel:REQ
 DB PSO_MAX_CHIPSELS
 DB 4
 DB SocketID
 DB ChannelID
 DB ALL_DIMMS
 DB NumberOfChipSelectsPerChannel
ENDM

NUMBER_OF_CHANNELS_SUPPORTED     MACRO     SocketID:REQ, NumberOfChannelsPerSocket:REQ
 DB PSO_MAX_CHNLS
 DB 4
 DB SocketID
 DB ANY_CHANNEL
 DB ALL_DIMMS
 DB NumberOfChannelsPerSocket
ENDM

OVERRIDE_DDR_BUS_SPEED     MACRO     SocketID:REQ, ChannelID:REQ, TimingMode:REQ, BusSpeed:REQ
 PSO_BUS_SPEED
 DB 11
 DB SocketID
 DB ChannelID
 DB ALL_DIMMS
 DD TimingMode
 DD BusSpeed
ENDM

DRAM_TECHNOLOGY           MACRO SocketID:REQ, MemTechType:REQ
 DB PSO_MEM_TECH
 DB 7
 DB SocketID
 DB ANY_CHANNEL
 DB ALL_DIMMS
 DD MemTechType
ENDM

WRITE_LEVELING_SEED     MACRO SocketID:REQ, ChannelID:REQ, DimmID:REQ, Byte0Seed:REQ, Byte1Seed:REQ, Byte2Seed:REQ, Byte3Seed:REQ, Byte4Seed:REQ, Byte5Seed:REQ, \
Byte6Seed:REQ, Byte7Seed:REQ, ByteEccSeed:REQ
 DB PSO_WL_SEED
 DB 12
 DB SocketID
 DB ChannelID
 DB DimmID
 DB Byte0Seed
 DB Byte1Seed
 DB Byte2Seed
 DB Byte3Seed
 DB Byte4Seed
 DB Byte5Seed
 DB Byte6Seed
 DB Byte7Seed
 DB ByteEccSeed
ENDM

HW_RXEN_SEED     MACRO SocketID:REQ, ChannelID:REQ, DimmID: REQ, Byte0Seed:REQ, Byte1Seed:REQ, Byte2Seed:REQ, Byte3Seed:REQ, Byte4Seed:REQ, Byte5Seed:REQ, \
Byte6Seed:REQ, Byte7Seed:REQ, ByteEccSeed:REQ
  DB PSO_RXEN_SEED
  DB 21
  DB SocketID
  DB ChannelID
  DB DimmID
  DW Byte0Seed
  DW Byte1Seed
  DW Byte2Seed
  DW Byte3Seed
  DW Byte4Seed
  DW Byte5Seed
  DW Byte6Seed
  DW Byte7Seed
  DW ByteEccSeed
ENDM

NO_LRDIMM_CS67_ROUTING     MACRO SocketID:REQ, ChannelID:REQ
  DB PSO_NO_LRDIMM_CS67_ROUTING
  DB 4
  DB SocketID
  DB ChannelID
  DB ALL_DIMMS
  DB 1
ENDM

SOLDERED_DOWN_SODIMM_TYPE     MACRO SocketID:REQ, ChannelID:REQ
  DB PSO_SOLDERED_DOWN_SODIMM_TYPE
  DB 4
  DB SocketID
  DB ChannelID
  DB ALL_DIMMS
  DB 1
ENDM

LVDIMM_FORCE_VOLT1_5_FOR_D0    MACRO
 DB PSO_LVDIMM_VOLT1_5_SUPPORT
 DB 4
 DB ANY_SOCKET
 DB ANY_CHANNEL
 DB ALL_DIMMS
 DB 1
ENDM

MIN_RD_WR_DATAEYE_WIDTH        MACRO     SocketID:REQ, ChannelID:REQ, MinRdDataeyeWidth:REQ, MinWrDataeyeWidth:REQ
  DB PSO_MIN_RD_WR_DATAEYE_WIDTH
  DB 5
  DB SocketID
  DB ChannelID
  DB ALL_DIMMS
  DB MinRdDataeyeWidth
  DB MinWrDataeyeWidth
ENDM

MEMORY_POWER_POLICY_OVERRIDE   MACRO     PowerPolicy:REQ
  DB PSO_MEMORY_POWER_POLICY
  DB 4
  DB ANY_SOCKET
  DB ANY_CHANNEL
  DB ALL_DIMMS
  DB PowerPolicy
ENDM
; *****************************************************************************************
; *
; *                 CONDITIONAL OVERRIDE TABLE MACROS
; *
; *****************************************************************************************
CONDITION_AND      MACRO
 DB PSO_CONDITION_AND
 DB 0
ENDM

COND_LOC     MACRO     SocketMsk:REQ, ChannelMsk:REQ, DimmMsk:REQ
 DB PSO_CONDITION_LOC
 DB 3
 DB SocketMsk
 DB ChannelMsk
 DB DimmMsk
ENDM

COND_SPD     MACRO     Byte:REQ, Mask:REQ, Value:REQ
 DB PSO_CONDITION_SPD
 DB 3
 DB Byte
 DB Mask
 DB Value
ENDM

COND_REG     MACRO     Access:REQ, Offset:REQ, Mask:REQ, Value:REQ
 DB PSO_CONDITION_REG
 DB 11
 DB Access
 DW Offset
 DD Mask
 DD Value
ENDM

ACTION_ODT     MACRO     Frequency:REQ, Dimms:REQ, QrDimms:REQ, DramOdt:REQ, QrDramOdt:REQ, DramDynOdt:REQ
 DB PSO_ACTION_ODT
 DB 9
 DD Frequency
 DB Dimms
 DB QrDimms
 DB DramOdt
 DB QrDramOdt
 DB DramDynOdt
ENDM

ACTION_ADDRTMG     MACRO     Frequency:REQ, DimmConfig:REQ, AddrTmg:REQ
 DB PSO_ACTION_ADDRTMG
 DB 10
 DD Frequency
 DW DimmConfig
 DD AddrTmg
ENDM

ACTION_ODCCTRL     MACRO     Frequency:REQ, DimmConfig:REQ, OdcCtrl:REQ
 DB PSO_ACTION_ODCCONTROL
 DB 10
 DD Frequency
 DW DimmConfig
 DD OdcCtrl
ENDM

ACTION_SLEWRATE     MACRO     Frequency:REQ, DimmConfig:REQ, SlewRate:REQ
 DB PSO_ACTION_SLEWRATE
 DB 10
 DD Frequency
 DW DimmConfig
 DD SlewRate
ENDM

ACTION_SPEEDLIMIT     MACRO     DimmConfig:REQ, Dimms:REQ, SpeedLimit15:REQ, SpeedLimit135:REQ, SpeedLimit125:REQ
 DB PSO_ACTION_SPEEDLIMIT
 DB 9
 DW DimmConfig
 DB Dimms
 DW SpeedLimit15
 DW SpeedLimit135
 DW SpeedLimit125
ENDM

; *****************************************************************************************
; *
; *                 END OF CONDITIONAL OVERRIDE TABLE MACROS
; *
; *****************************************************************************************
; *****************************************************************************************
; *
; *                 TABLE DRIVEN OVERRIDE  MACROS
; *
; *****************************************************************************************
; Configuration sub-descriptors
CONFIG_GENERAL        EQU   0
CONFIG_SPEEDLIMIT     EQU   1
CONFIG_RC2IBT         EQU   2
CONFIG_DONT_CARE      EQU   3
Config_Type  TEXTEQU  <DWORD>
;
; Configuration Macros
;
TBLDRV_CONFIG_TO_OVERRIDE     MACRO     DimmPerCH:REQ, Frequency:REQ, DimmVolt:REQ, DimmConfig:REQ
 DB PSO_TBLDRV_CONFIG
 DB 9
 DB CONFIG_GENERAL
 DB DimmPerCH
 DB DimmVolt
 DD Frequency
 DW DimmConfig
ENDM

TBLDRV_SPEEDLIMIT_CONFIG_TO_OVERRIDE     MACRO     DimmPerCH:REQ, Dimms:REQ, NumOfSR:REQ, NumOfDR:REQ, NumOfQR:REQ,  NumOfLRDimm:REQ
 DB PSO_TBLDRV_CONFIG
 DB 7
 DB CONFIG_SPEEDLIMIT
 DB DimmPerCH
 DB Dimms
 DB NumOfSR
 DB NumOfDR
 DB NumOfQR
 DB NumOfLRDimm
ENDM

TBLDRV_RC2IBT_CONFIG_TO_OVERRIDE     MACRO     DimmPerCH:REQ, Frequency:REQ, DimmVolt:REQ, DimmConfig:REQ, NumOfReg:REQ
 DB PSO_TBLDRV_CONFIG
 DB 10
 DB CONFIG_RC2IBT
 DB DimmPerCH
 DB DimmVolt
 DD Frequency
 DW DimmConfig
 DB NumOfReg
ENDM
;
; Overriding Macros
;
TBLDRV_CONFIG_ENTRY_SPEEDLIMIT     MACRO     SpeedLimit1_5:REQ, SpeedLimit1_35:REQ, SpeedLimit1_25:REQ
 DB PSO_TBLDRV_SPEEDLIMIT
 DB 6
 DW SpeedLimit1_5
 DW SpeedLimit1_35
 DW SpeedLimit1_25
ENDM

TBLDRV_CONFIG_ENTRY_ODT_RTTNOM     MACRO     TgtCS:REQ, RttNom:REQ
 DB PSO_TBLDRV_ODT_RTTNOM
 DB 2
 DB TgtCS
 DB RttNom
ENDM

TBLDRV_CONFIG_ENTRY_ODT_RTTWR     MACRO     TgtCS:REQ, RttWr:REQ
 DB PSO_TBLDRV_ODT_RTTWR
 DB 2
 DB TgtCS
 DB RttWr
ENDM

TBLDRV_CONFIG_ENTRY_ODTPATTERN     MACRO     RdODTCSHigh:REQ, RdODTCSLow:REQ, WrODTCSHigh:REQ, WrODTCSLow:REQ
 DB PSO_TBLDRV_ODTPATTERN
 DB 16
 DD RdODTCSHigh
 DD RdODTCSLow
 DD WrODTCSHigh
 DD WrODTCSLow
ENDM

TBLDRV_CONFIG_ENTRY_ADDRTMG     MACRO     AddrTmg:REQ
 DB PSO_TBLDRV_ADDRTMG
 DB 4
 DD AddrTmg
ENDM

TBLDRV_CONFIG_ENTRY_ODCCTRL     MACRO     OdcCtrl:REQ
 DB PSO_TBLDRV_ODCCTRL
 DB 4
 DD OdcCtrl
ENDM

TBLDRV_CONFIG_ENTRY_SLOWACCMODE     MACRO     SlowAccMode:REQ
 DB PSO_TBLDRV_SLOWACCMODE
 DB 1
 DB SlowAccMode
ENDM

TBLDRV_CONFIG_ENTRY_RC2_IBT     MACRO     TgtDimm:REQ, IBT:REQ
 DB PSO_TBLDRV_RC2_IBT
 DB 2
 DB TgtDimm
 DB IBT
ENDM

TBLDRV_OVERRIDE_MR0_CL     MACRO     RegValOfTcl:REQ, MR0CL13:REQ, MR0CL0:REQ
 DB PSO_TBLDRV_CONFIG
 DB 1
 DB CONFIG_DONT_CARE
 DB PSO_TBLDRV_MR0_CL
 DB 3
 DB RegValOfTcl
 DB MR0CL13
 DB MR0CL0
ENDM

TBLDRV_OVERRIDE_MR0_WR     MACRO     RegValOfTwr:REQ, MR0WR:REQ
 DB PSO_TBLDRV_CONFIG
 DB 1
 DB CONFIG_DONT_CARE
 DB PSO_TBLDRV_MR0_WR
 DB 2
 DB RegValOfTcl
 DB MR0WR
ENDM

TBLDRV_OVERRIDE_RC10_OPSPEED     MACRO     Frequency:REQ, MR10OPSPEED:REQ
 DB PSO_TBLDRV_CONFIG
 DB 1
 DB CONFIG_DONT_CARE
 DB PSO_TBLDRV_RC10_OPSPEED
 DB 5
 DD Frequency
 DB MR10OPSPEED
ENDM

TBLDRV_CONFIG_ENTRY_LRDMM_IBT     MACRO     F0RC8:REQ, F1RC0:REQ, F1RC1:REQ, F1RC2:REQ
 DB PSO_TBLDRV_LRDIMM_IBT
 DB 4
 DB F0RC8
 DB F1RC0
 DB F1RC1
 DB F1RC2
ENDM

;del TBLDRV_CONFIG_ENTRY_2D_TRAINING     MACRO     Training2dMode:REQ
;del  DB PSO_TBLDRV_2D_TRAINING
;del  DB 1
;del  DB Training2dMode
;del ENDM

;
; Macros for removing entries
;
INVALID_CONFIG_FLAG   EQU   8000h

TBLDRV_INVALID_CONFIG     MACRO
 DB PSO_TBLDRV_INVALID_TYPE
 DB 0
ENDM
; *****************************************************************************************
; *
; *                 END OF TABLE DRIVEN OVERRIDE  MACROS
; *
; *****************************************************************************************
