/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/phanik/oEPC/trunk/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_PLMN_IdentityInfo_H_
#define	_PLMN_IdentityInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PLMN-Identity.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PLMN_IdentityInfo__cellReservedForOperatorUse {
	PLMN_IdentityInfo__cellReservedForOperatorUse_reserved	= 0,
	PLMN_IdentityInfo__cellReservedForOperatorUse_notReserved	= 1
} e_PLMN_IdentityInfo__cellReservedForOperatorUse;

/* PLMN-IdentityInfo */
typedef struct PLMN_IdentityInfo {
	PLMN_Identity_t	 plmn_Identity;
	long	 cellReservedForOperatorUse;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PLMN_IdentityInfo_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_cellReservedForOperatorUse_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PLMN_IdentityInfo;

#ifdef __cplusplus
}
#endif

#endif	/* _PLMN_IdentityInfo_H_ */
#include <asn_internal.h>
