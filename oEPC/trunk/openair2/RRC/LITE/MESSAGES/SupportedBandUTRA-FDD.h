/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/phanik/oEPC/trunk/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_SupportedBandUTRA_FDD_H_
#define	_SupportedBandUTRA_FDD_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SupportedBandUTRA_FDD {
	SupportedBandUTRA_FDD_bandI	= 0,
	SupportedBandUTRA_FDD_bandII	= 1,
	SupportedBandUTRA_FDD_bandIII	= 2,
	SupportedBandUTRA_FDD_bandIV	= 3,
	SupportedBandUTRA_FDD_bandV	= 4,
	SupportedBandUTRA_FDD_bandVI	= 5,
	SupportedBandUTRA_FDD_bandVII	= 6,
	SupportedBandUTRA_FDD_bandVIII	= 7,
	SupportedBandUTRA_FDD_bandIX	= 8,
	SupportedBandUTRA_FDD_bandX	= 9,
	SupportedBandUTRA_FDD_bandXI	= 10,
	SupportedBandUTRA_FDD_bandXII	= 11,
	SupportedBandUTRA_FDD_bandXIII	= 12,
	SupportedBandUTRA_FDD_bandXIV	= 13,
	SupportedBandUTRA_FDD_bandXV	= 14,
	SupportedBandUTRA_FDD_bandXVI	= 15,
	/*
	 * Enumeration is extensible
	 */
	SupportedBandUTRA_FDD_bandXVII_8a0	= 16,
	SupportedBandUTRA_FDD_bandXVIII_8a0	= 17,
	SupportedBandUTRA_FDD_bandXIX_8a0	= 18,
	SupportedBandUTRA_FDD_bandXX_8a0	= 19,
	SupportedBandUTRA_FDD_bandXXI_8a0	= 20,
	SupportedBandUTRA_FDD_bandXXII_8a0	= 21,
	SupportedBandUTRA_FDD_bandXXIII_8a0	= 22,
	SupportedBandUTRA_FDD_bandXXIV_8a0	= 23,
	SupportedBandUTRA_FDD_bandXXV_8a0	= 24,
	SupportedBandUTRA_FDD_bandXXVI_8a0	= 25,
	SupportedBandUTRA_FDD_bandXXVII_8a0	= 26,
	SupportedBandUTRA_FDD_bandXXVIII_8a0	= 27,
	SupportedBandUTRA_FDD_bandXXIX_8a0	= 28,
	SupportedBandUTRA_FDD_bandXXX_8a0	= 29,
	SupportedBandUTRA_FDD_bandXXXI_8a0	= 30,
	SupportedBandUTRA_FDD_bandXXXII_8a0	= 31
} e_SupportedBandUTRA_FDD;

/* SupportedBandUTRA-FDD */
typedef long	 SupportedBandUTRA_FDD_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SupportedBandUTRA_FDD;
asn_struct_free_f SupportedBandUTRA_FDD_free;
asn_struct_print_f SupportedBandUTRA_FDD_print;
asn_constr_check_f SupportedBandUTRA_FDD_constraint;
ber_type_decoder_f SupportedBandUTRA_FDD_decode_ber;
der_type_encoder_f SupportedBandUTRA_FDD_encode_der;
xer_type_decoder_f SupportedBandUTRA_FDD_decode_xer;
xer_type_encoder_f SupportedBandUTRA_FDD_encode_xer;
per_type_decoder_f SupportedBandUTRA_FDD_decode_uper;
per_type_encoder_f SupportedBandUTRA_FDD_encode_uper;
per_type_decoder_f SupportedBandUTRA_FDD_decode_aper;
per_type_encoder_f SupportedBandUTRA_FDD_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _SupportedBandUTRA_FDD_H_ */
#include <asn_internal.h>
