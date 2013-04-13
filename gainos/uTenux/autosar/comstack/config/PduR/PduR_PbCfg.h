/*
* Configuration of module: PduR (PduR_PbCfg.h)
*
* Created by:              
* Copyright:               
*
* Configured for (MCU):    HCS12
*
* Module vendor:           ArcCore
* Generator version:       3.1.10
*
* Generated by Arctic Studio (http://arccore.com) 
*/


#if !(((PDUR_SW_MAJOR_VERSION == 2) && (PDUR_SW_MINOR_VERSION == 0)) )
#error PduR: Configuration file expected BSW module version to be 2.0.*
#endif


#if defined(USE_DCM)
#include "Dcm.h"
#endif
#if defined(USE_COM)
#include "Com.h"
#endif
#if defined(USE_CANIF)
#include "CanIf.h"
#endif
#if defined(USE_CANTP)
#include "CanTp.h"
#endif

extern const PduR_PBConfigType PduR_Config;

//  PduR Polite Defines.
/* PduR Rx NSdu Id */
#define PDUR_RX_vEcuC_Pdu0 0
#define PDUR_RX_vEcuC_Pdu1 1

/* PduR Tx NSdu Id */
#define PDUR_TX_vEcuC_Pdu0 2
#define PDUR_TX_vEcuC_Pdu1 3


