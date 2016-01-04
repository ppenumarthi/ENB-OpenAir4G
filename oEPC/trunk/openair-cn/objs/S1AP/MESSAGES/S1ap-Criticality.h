/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-CommonDataTypes"
 * 	found in "../../../S1AP/MESSAGES/ASN1/R10.5/S1AP-CommonDataTypes.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_S1ap_Criticality_H_
#define	_S1ap_Criticality_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1ap_Criticality {
	S1ap_Criticality_reject	= 0,
	S1ap_Criticality_ignore	= 1,
	S1ap_Criticality_notify	= 2
} e_S1ap_Criticality;

/* S1ap-Criticality */
typedef long	 S1ap_Criticality_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1ap_Criticality;
asn_struct_free_f S1ap_Criticality_free;
asn_struct_print_f S1ap_Criticality_print;
asn_constr_check_f S1ap_Criticality_constraint;
ber_type_decoder_f S1ap_Criticality_decode_ber;
der_type_encoder_f S1ap_Criticality_encode_der;
xer_type_decoder_f S1ap_Criticality_decode_xer;
xer_type_encoder_f S1ap_Criticality_encode_xer;
per_type_decoder_f S1ap_Criticality_decode_uper;
per_type_encoder_f S1ap_Criticality_encode_uper;
per_type_decoder_f S1ap_Criticality_decode_aper;
per_type_encoder_f S1ap_Criticality_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _S1ap_Criticality_H_ */
#include <asn_internal.h>
