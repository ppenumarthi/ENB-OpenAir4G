/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../../../S1AP/MESSAGES/ASN1/R10.5/S1AP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#include "S1ap-S-TMSI.h"

static asn_TYPE_member_t asn_MBR_S1ap_S_TMSI_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct S1ap_S_TMSI, mMEC),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_MME_Code,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"mMEC"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1ap_S_TMSI, m_TMSI),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_M_TMSI,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"m-TMSI"
		},
	{ ATF_POINTER, 1, offsetof(struct S1ap_S_TMSI, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_IE_Extensions,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"iE-Extensions"
		},
};
static int asn_MAP_S1ap_S_TMSI_oms_1[] = { 2 };
static ber_tlv_tag_t asn_DEF_S1ap_S_TMSI_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_S1ap_S_TMSI_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mMEC at 1169 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* m-TMSI at 1170 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions at 1172 */
};
static asn_SEQUENCE_specifics_t asn_SPC_S1ap_S_TMSI_specs_1 = {
	sizeof(struct S1ap_S_TMSI),
	offsetof(struct S1ap_S_TMSI, _asn_ctx),
	asn_MAP_S1ap_S_TMSI_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_S1ap_S_TMSI_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* Start extensions */
	4	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_S1ap_S_TMSI = {
	"S1ap-S-TMSI",
	"S1ap-S-TMSI",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	SEQUENCE_decode_aper,
	SEQUENCE_encode_aper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_S1ap_S_TMSI_tags_1,
	sizeof(asn_DEF_S1ap_S_TMSI_tags_1)
		/sizeof(asn_DEF_S1ap_S_TMSI_tags_1[0]), /* 1 */
	asn_DEF_S1ap_S_TMSI_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1ap_S_TMSI_tags_1)
		/sizeof(asn_DEF_S1ap_S_TMSI_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_S1ap_S_TMSI_1,
	3,	/* Elements count */
	&asn_SPC_S1ap_S_TMSI_specs_1	/* Additional specs */
};

