/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/phanik/oEPC/trunk/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_AntennaInfoDedicated_H_
#define	_AntennaInfoDedicated_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <BIT_STRING.h>
#include <constr_CHOICE.h>
#include <NULL.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum AntennaInfoDedicated__transmissionMode {
	AntennaInfoDedicated__transmissionMode_tm1	= 0,
	AntennaInfoDedicated__transmissionMode_tm2	= 1,
	AntennaInfoDedicated__transmissionMode_tm3	= 2,
	AntennaInfoDedicated__transmissionMode_tm4	= 3,
	AntennaInfoDedicated__transmissionMode_tm5	= 4,
	AntennaInfoDedicated__transmissionMode_tm6	= 5,
	AntennaInfoDedicated__transmissionMode_tm7	= 6,
	AntennaInfoDedicated__transmissionMode_tm8_v920	= 7
} e_AntennaInfoDedicated__transmissionMode;
typedef enum AntennaInfoDedicated__codebookSubsetRestriction_PR {
	AntennaInfoDedicated__codebookSubsetRestriction_PR_NOTHING,	/* No components present */
	AntennaInfoDedicated__codebookSubsetRestriction_PR_n2TxAntenna_tm3,
	AntennaInfoDedicated__codebookSubsetRestriction_PR_n4TxAntenna_tm3,
	AntennaInfoDedicated__codebookSubsetRestriction_PR_n2TxAntenna_tm4,
	AntennaInfoDedicated__codebookSubsetRestriction_PR_n4TxAntenna_tm4,
	AntennaInfoDedicated__codebookSubsetRestriction_PR_n2TxAntenna_tm5,
	AntennaInfoDedicated__codebookSubsetRestriction_PR_n4TxAntenna_tm5,
	AntennaInfoDedicated__codebookSubsetRestriction_PR_n2TxAntenna_tm6,
	AntennaInfoDedicated__codebookSubsetRestriction_PR_n4TxAntenna_tm6
} AntennaInfoDedicated__codebookSubsetRestriction_PR;
typedef enum AntennaInfoDedicated__ue_TransmitAntennaSelection_PR {
	AntennaInfoDedicated__ue_TransmitAntennaSelection_PR_NOTHING,	/* No components present */
	AntennaInfoDedicated__ue_TransmitAntennaSelection_PR_release,
	AntennaInfoDedicated__ue_TransmitAntennaSelection_PR_setup
} AntennaInfoDedicated__ue_TransmitAntennaSelection_PR;
typedef enum AntennaInfoDedicated__ue_TransmitAntennaSelection__setup {
	AntennaInfoDedicated__ue_TransmitAntennaSelection__setup_closedLoop	= 0,
	AntennaInfoDedicated__ue_TransmitAntennaSelection__setup_openLoop	= 1
} e_AntennaInfoDedicated__ue_TransmitAntennaSelection__setup;

/* AntennaInfoDedicated */
typedef struct AntennaInfoDedicated {
	long	 transmissionMode;
	struct AntennaInfoDedicated__codebookSubsetRestriction {
		AntennaInfoDedicated__codebookSubsetRestriction_PR present;
		union AntennaInfoDedicated__codebookSubsetRestriction_u {
			BIT_STRING_t	 n2TxAntenna_tm3;
			BIT_STRING_t	 n4TxAntenna_tm3;
			BIT_STRING_t	 n2TxAntenna_tm4;
			BIT_STRING_t	 n4TxAntenna_tm4;
			BIT_STRING_t	 n2TxAntenna_tm5;
			BIT_STRING_t	 n4TxAntenna_tm5;
			BIT_STRING_t	 n2TxAntenna_tm6;
			BIT_STRING_t	 n4TxAntenna_tm6;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *codebookSubsetRestriction;
	struct AntennaInfoDedicated__ue_TransmitAntennaSelection {
		AntennaInfoDedicated__ue_TransmitAntennaSelection_PR present;
		union AntennaInfoDedicated__ue_TransmitAntennaSelection_u {
			NULL_t	 release;
			long	 setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} ue_TransmitAntennaSelection;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AntennaInfoDedicated_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_transmissionMode_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_setup_22;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_AntennaInfoDedicated;

#ifdef __cplusplus
}
#endif

#endif	/* _AntennaInfoDedicated_H_ */
#include <asn_internal.h>
