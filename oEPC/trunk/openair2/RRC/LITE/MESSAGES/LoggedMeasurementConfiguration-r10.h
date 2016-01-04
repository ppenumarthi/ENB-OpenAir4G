/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/phanik/oEPC/trunk/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_LoggedMeasurementConfiguration_r10_H_
#define	_LoggedMeasurementConfiguration_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LoggedMeasurementConfiguration-r10-IEs.h"
#include <NULL.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LoggedMeasurementConfiguration_r10__criticalExtensions_PR {
	LoggedMeasurementConfiguration_r10__criticalExtensions_PR_NOTHING,	/* No components present */
	LoggedMeasurementConfiguration_r10__criticalExtensions_PR_c1,
	LoggedMeasurementConfiguration_r10__criticalExtensions_PR_criticalExtensionsFuture
} LoggedMeasurementConfiguration_r10__criticalExtensions_PR;
typedef enum LoggedMeasurementConfiguration_r10__criticalExtensions__c1_PR {
	LoggedMeasurementConfiguration_r10__criticalExtensions__c1_PR_NOTHING,	/* No components present */
	LoggedMeasurementConfiguration_r10__criticalExtensions__c1_PR_loggedMeasurementConfiguration_r10,
	LoggedMeasurementConfiguration_r10__criticalExtensions__c1_PR_spare3,
	LoggedMeasurementConfiguration_r10__criticalExtensions__c1_PR_spare2,
	LoggedMeasurementConfiguration_r10__criticalExtensions__c1_PR_spare1
} LoggedMeasurementConfiguration_r10__criticalExtensions__c1_PR;

/* LoggedMeasurementConfiguration-r10 */
typedef struct LoggedMeasurementConfiguration_r10 {
	struct LoggedMeasurementConfiguration_r10__criticalExtensions {
		LoggedMeasurementConfiguration_r10__criticalExtensions_PR present;
		union LoggedMeasurementConfiguration_r10__criticalExtensions_u {
			struct LoggedMeasurementConfiguration_r10__criticalExtensions__c1 {
				LoggedMeasurementConfiguration_r10__criticalExtensions__c1_PR present;
				union LoggedMeasurementConfiguration_r10__criticalExtensions__c1_u {
					LoggedMeasurementConfiguration_r10_IEs_t	 loggedMeasurementConfiguration_r10;
					NULL_t	 spare3;
					NULL_t	 spare2;
					NULL_t	 spare1;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} c1;
			struct LoggedMeasurementConfiguration_r10__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LoggedMeasurementConfiguration_r10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LoggedMeasurementConfiguration_r10;

#ifdef __cplusplus
}
#endif

#endif	/* _LoggedMeasurementConfiguration_r10_H_ */
#include <asn_internal.h>
