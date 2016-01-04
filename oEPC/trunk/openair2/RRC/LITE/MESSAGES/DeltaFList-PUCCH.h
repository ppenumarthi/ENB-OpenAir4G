/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/phanik/oEPC/trunk/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_DeltaFList_PUCCH_H_
#define	_DeltaFList_PUCCH_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DeltaFList_PUCCH__deltaF_PUCCH_Format1 {
	DeltaFList_PUCCH__deltaF_PUCCH_Format1_deltaF_2	= 0,
	DeltaFList_PUCCH__deltaF_PUCCH_Format1_deltaF0	= 1,
	DeltaFList_PUCCH__deltaF_PUCCH_Format1_deltaF2	= 2
} e_DeltaFList_PUCCH__deltaF_PUCCH_Format1;
typedef enum DeltaFList_PUCCH__deltaF_PUCCH_Format1b {
	DeltaFList_PUCCH__deltaF_PUCCH_Format1b_deltaF1	= 0,
	DeltaFList_PUCCH__deltaF_PUCCH_Format1b_deltaF3	= 1,
	DeltaFList_PUCCH__deltaF_PUCCH_Format1b_deltaF5	= 2
} e_DeltaFList_PUCCH__deltaF_PUCCH_Format1b;
typedef enum DeltaFList_PUCCH__deltaF_PUCCH_Format2 {
	DeltaFList_PUCCH__deltaF_PUCCH_Format2_deltaF_2	= 0,
	DeltaFList_PUCCH__deltaF_PUCCH_Format2_deltaF0	= 1,
	DeltaFList_PUCCH__deltaF_PUCCH_Format2_deltaF1	= 2,
	DeltaFList_PUCCH__deltaF_PUCCH_Format2_deltaF2	= 3
} e_DeltaFList_PUCCH__deltaF_PUCCH_Format2;
typedef enum DeltaFList_PUCCH__deltaF_PUCCH_Format2a {
	DeltaFList_PUCCH__deltaF_PUCCH_Format2a_deltaF_2	= 0,
	DeltaFList_PUCCH__deltaF_PUCCH_Format2a_deltaF0	= 1,
	DeltaFList_PUCCH__deltaF_PUCCH_Format2a_deltaF2	= 2
} e_DeltaFList_PUCCH__deltaF_PUCCH_Format2a;
typedef enum DeltaFList_PUCCH__deltaF_PUCCH_Format2b {
	DeltaFList_PUCCH__deltaF_PUCCH_Format2b_deltaF_2	= 0,
	DeltaFList_PUCCH__deltaF_PUCCH_Format2b_deltaF0	= 1,
	DeltaFList_PUCCH__deltaF_PUCCH_Format2b_deltaF2	= 2
} e_DeltaFList_PUCCH__deltaF_PUCCH_Format2b;

/* DeltaFList-PUCCH */
typedef struct DeltaFList_PUCCH {
	long	 deltaF_PUCCH_Format1;
	long	 deltaF_PUCCH_Format1b;
	long	 deltaF_PUCCH_Format2;
	long	 deltaF_PUCCH_Format2a;
	long	 deltaF_PUCCH_Format2b;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DeltaFList_PUCCH_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_deltaF_PUCCH_Format1_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_deltaF_PUCCH_Format1b_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_deltaF_PUCCH_Format2_10;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_deltaF_PUCCH_Format2a_15;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_deltaF_PUCCH_Format2b_19;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_DeltaFList_PUCCH;

#ifdef __cplusplus
}
#endif

#endif	/* _DeltaFList_PUCCH_H_ */
#include <asn_internal.h>
