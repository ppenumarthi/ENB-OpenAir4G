/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/phanik/oEPC/trunk/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_UplinkPowerControlDedicated_v1020_H_
#define	_UplinkPowerControlDedicated_v1020_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct DeltaTxD_OffsetListPUCCH_r10;

/* UplinkPowerControlDedicated-v1020 */
typedef struct UplinkPowerControlDedicated_v1020 {
	struct DeltaTxD_OffsetListPUCCH_r10	*deltaTxD_OffsetListPUCCH_r10	/* OPTIONAL */;
	long	*pSRS_OffsetAp_r10	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UplinkPowerControlDedicated_v1020_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UplinkPowerControlDedicated_v1020;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "DeltaTxD-OffsetListPUCCH-r10.h"

#endif	/* _UplinkPowerControlDedicated_v1020_H_ */
#include <asn_internal.h>
