/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/phanik/oEPC/trunk/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#include "CellGlobalIdEUTRA.h"

static asn_TYPE_member_t asn_MBR_CellGlobalIdEUTRA_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CellGlobalIdEUTRA, plmn_Identity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PLMN_Identity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"plmn-Identity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CellGlobalIdEUTRA, cellIdentity),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellIdentity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cellIdentity"
		},
};
static ber_tlv_tag_t asn_DEF_CellGlobalIdEUTRA_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_CellGlobalIdEUTRA_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* plmn-Identity at 2976 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* cellIdentity at 2978 */
};
static asn_SEQUENCE_specifics_t asn_SPC_CellGlobalIdEUTRA_specs_1 = {
	sizeof(struct CellGlobalIdEUTRA),
	offsetof(struct CellGlobalIdEUTRA, _asn_ctx),
	asn_MAP_CellGlobalIdEUTRA_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_CellGlobalIdEUTRA = {
	"CellGlobalIdEUTRA",
	"CellGlobalIdEUTRA",
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
	asn_DEF_CellGlobalIdEUTRA_tags_1,
	sizeof(asn_DEF_CellGlobalIdEUTRA_tags_1)
		/sizeof(asn_DEF_CellGlobalIdEUTRA_tags_1[0]), /* 1 */
	asn_DEF_CellGlobalIdEUTRA_tags_1,	/* Same as above */
	sizeof(asn_DEF_CellGlobalIdEUTRA_tags_1)
		/sizeof(asn_DEF_CellGlobalIdEUTRA_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_CellGlobalIdEUTRA_1,
	2,	/* Elements count */
	&asn_SPC_CellGlobalIdEUTRA_specs_1	/* Additional specs */
};

