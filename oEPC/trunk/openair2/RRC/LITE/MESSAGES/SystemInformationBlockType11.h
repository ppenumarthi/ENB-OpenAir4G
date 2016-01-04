/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/phanik/oEPC/trunk/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_SystemInformationBlockType11_H_
#define	_SystemInformationBlockType11_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SystemInformationBlockType11__warningMessageSegmentType {
	SystemInformationBlockType11__warningMessageSegmentType_notLastSegment	= 0,
	SystemInformationBlockType11__warningMessageSegmentType_lastSegment	= 1
} e_SystemInformationBlockType11__warningMessageSegmentType;

/* SystemInformationBlockType11 */
typedef struct SystemInformationBlockType11 {
	BIT_STRING_t	 messageIdentifier;
	BIT_STRING_t	 serialNumber;
	long	 warningMessageSegmentType;
	long	 warningMessageSegmentNumber;
	OCTET_STRING_t	 warningMessageSegment;
	OCTET_STRING_t	*dataCodingScheme	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	OCTET_STRING_t	*lateNonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType11_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_warningMessageSegmentType_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType11;

#ifdef __cplusplus
}
#endif

#endif	/* _SystemInformationBlockType11_H_ */
#include <asn_internal.h>
