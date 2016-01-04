/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/phanik/oEPC/trunk/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_SPS_Config_H_
#define	_SPS_Config_H_


#include <asn_application.h>

/* Including external dependencies */
#include "C-RNTI.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SPS_ConfigDL;
struct SPS_ConfigUL;

/* SPS-Config */
typedef struct SPS_Config {
	C_RNTI_t	*semiPersistSchedC_RNTI	/* OPTIONAL */;
	struct SPS_ConfigDL	*sps_ConfigDL	/* OPTIONAL */;
	struct SPS_ConfigUL	*sps_ConfigUL	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SPS_Config_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SPS_Config;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SPS-ConfigDL.h"
#include "SPS-ConfigUL.h"

#endif	/* _SPS_Config_H_ */
#include <asn_internal.h>
