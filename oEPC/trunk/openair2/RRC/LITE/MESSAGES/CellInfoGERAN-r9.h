/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/phanik/oEPC/trunk/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_CellInfoGERAN_r9_H_
#define	_CellInfoGERAN_r9_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PhysCellIdGERAN.h"
#include "CarrierFreqGERAN.h"
#include "SystemInfoListGERAN.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CellInfoGERAN-r9 */
typedef struct CellInfoGERAN_r9 {
	PhysCellIdGERAN_t	 physCellId_r9;
	CarrierFreqGERAN_t	 carrierFreq_r9;
	SystemInfoListGERAN_t	 systemInformation_r9;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellInfoGERAN_r9_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CellInfoGERAN_r9;

#ifdef __cplusplus
}
#endif

#endif	/* _CellInfoGERAN_r9_H_ */
#include <asn_internal.h>
