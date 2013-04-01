#ifndef _CANIF_CFG_H_
#define _CANIF_CFG_H_

#include "Can.h"


#define CANIF_VERSION_INFO_API              STD_ON
#define CANIF_DEV_ERROR_DETECT			    STD_OFF
#define CANIF_DLC_CHECK                     STD_ON
#define CANIF_ARC_RUNTIME_PDU_CONFIGURATION	STD_OFF
#define CANIF_MULITPLE_DRIVER_SUPPORT       STD_OFF  // Not supported
#define CANIF_READRXPDU_DATA_API			STD_OFF  // Not supported
#define CANIF_READRXPDU_NOTIFY_STATUS_API	STD_OFF  // Not supported
#define CANIF_READTXPDU_NOTIFY_STATUS_API	STD_OFF  // Not supported
#define CANIF_SETDYNAMICTXID_API            STD_OFF  // Not supported
#define CANIF_WAKEUP_EVENT_API			    STD_OFF  // Not supported
#define CANIF_TRANSCEIVER_API               STD_OFF  // Not supported
#define CANIF_TRANSMIT_CANCELLATION         STD_OFF  // Not supported


#define CANIF_PDU_ID_CanDB_Message_1		0

#define CANIF_PDU_ID_CanDB_Message_2		0

// Identifiers for the elements in CanIfControllerConfig[]
// This is the ConfigurationIndex in CanIf_InitController()
typedef enum {
	CANIF_Controller_A_CONFIG_0,
	CANIF_CHANNEL_CONFIGURATION_CNT
} CanIf_Arc_ConfigurationIndexType;

typedef enum {
	CANIF_Controller_A,
	CANIF_CHANNEL_CNT
} CanIf_Arc_ChannelIdType;

#define CANIF_CONTROLLER_ID_Controller_A	CANIF_Controller_A

#include "CanIf_ConfigTypes.h"


#endif /* _CANIF_CFG_H_ */
