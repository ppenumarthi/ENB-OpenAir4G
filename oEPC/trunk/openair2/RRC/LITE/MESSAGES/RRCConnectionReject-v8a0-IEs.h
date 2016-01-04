/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/phanik/oEPC/trunk/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_RRCConnectionReject_v8a0_IEs_H_
#define	_RRCConnectionReject_v8a0_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RRCConnectionReject_v1020_IEs;

/* RRCConnectionReject-v8a0-IEs */
typedef struct RRCConnectionReject_v8a0_IEs {
	OCTET_STRING_t	*lateNonCriticalExtension	/* OPTIONAL */;
	struct RRCConnectionReject_v1020_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionReject_v8a0_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionReject_v8a0_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RRCConnectionReject-v1020-IEs.h"

#endif	/* _RRCConnectionReject_v8a0_IEs_H_ */
#include <asn_internal.h>
