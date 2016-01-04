/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/phanik/oEPC/trunk/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#include "SystemInformationBlockType4.h"

static asn_TYPE_member_t asn_MBR_SystemInformationBlockType4_1[] = {
	{ ATF_POINTER, 4, offsetof(struct SystemInformationBlockType4, intraFreqNeighCellList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IntraFreqNeighCellList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"intraFreqNeighCellList"
		},
	{ ATF_POINTER, 3, offsetof(struct SystemInformationBlockType4, intraFreqBlackCellList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IntraFreqBlackCellList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"intraFreqBlackCellList"
		},
	{ ATF_POINTER, 2, offsetof(struct SystemInformationBlockType4, csg_PhysCellIdRange),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysCellIdRange,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"csg-PhysCellIdRange"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType4, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"lateNonCriticalExtension"
		},
};
static int asn_MAP_SystemInformationBlockType4_oms_1[] = { 0, 1, 2, 3 };
static ber_tlv_tag_t asn_DEF_SystemInformationBlockType4_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_SystemInformationBlockType4_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* intraFreqNeighCellList at 1550 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* intraFreqBlackCellList at 1551 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* csg-PhysCellIdRange at 1552 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* lateNonCriticalExtension at 1554 */
};
static asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType4_specs_1 = {
	sizeof(struct SystemInformationBlockType4),
	offsetof(struct SystemInformationBlockType4, _asn_ctx),
	asn_MAP_SystemInformationBlockType4_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_SystemInformationBlockType4_oms_1,	/* Optional members */
	3, 1,	/* Root/Additions */
	2,	/* Start extensions */
	5	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType4 = {
	"SystemInformationBlockType4",
	"SystemInformationBlockType4",
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
	asn_DEF_SystemInformationBlockType4_tags_1,
	sizeof(asn_DEF_SystemInformationBlockType4_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType4_tags_1[0]), /* 1 */
	asn_DEF_SystemInformationBlockType4_tags_1,	/* Same as above */
	sizeof(asn_DEF_SystemInformationBlockType4_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType4_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_SystemInformationBlockType4_1,
	4,	/* Elements count */
	&asn_SPC_SystemInformationBlockType4_specs_1	/* Additional specs */
};

