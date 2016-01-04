/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/phanik/oEPC/trunk/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#include "RRCConnectionSetupComplete-v1020-IEs.h"

static int
gummei_Type_r10_2_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
gummei_Type_r10_2_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	td->aper_decoder   = asn_DEF_NativeEnumerated.aper_decoder;
	td->aper_encoder   = asn_DEF_NativeEnumerated.aper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static void
gummei_Type_r10_2_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	gummei_Type_r10_2_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
gummei_Type_r10_2_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	gummei_Type_r10_2_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
gummei_Type_r10_2_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	gummei_Type_r10_2_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
gummei_Type_r10_2_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	gummei_Type_r10_2_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
gummei_Type_r10_2_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	gummei_Type_r10_2_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
gummei_Type_r10_2_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	gummei_Type_r10_2_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
gummei_Type_r10_2_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	gummei_Type_r10_2_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
gummei_Type_r10_2_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	gummei_Type_r10_2_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_enc_rval_t
gummei_Type_r10_2_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	gummei_Type_r10_2_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static asn_dec_rval_t
gummei_Type_r10_2_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	gummei_Type_r10_2_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static int
rlf_InfoAvailable_r10_5_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
rlf_InfoAvailable_r10_5_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	td->aper_decoder   = asn_DEF_NativeEnumerated.aper_decoder;
	td->aper_encoder   = asn_DEF_NativeEnumerated.aper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static void
rlf_InfoAvailable_r10_5_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	rlf_InfoAvailable_r10_5_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
rlf_InfoAvailable_r10_5_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	rlf_InfoAvailable_r10_5_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
rlf_InfoAvailable_r10_5_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	rlf_InfoAvailable_r10_5_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
rlf_InfoAvailable_r10_5_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	rlf_InfoAvailable_r10_5_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
rlf_InfoAvailable_r10_5_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	rlf_InfoAvailable_r10_5_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
rlf_InfoAvailable_r10_5_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	rlf_InfoAvailable_r10_5_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
rlf_InfoAvailable_r10_5_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	rlf_InfoAvailable_r10_5_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
rlf_InfoAvailable_r10_5_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	rlf_InfoAvailable_r10_5_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_enc_rval_t
rlf_InfoAvailable_r10_5_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	rlf_InfoAvailable_r10_5_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static asn_dec_rval_t
rlf_InfoAvailable_r10_5_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	rlf_InfoAvailable_r10_5_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static int
logMeasAvailable_r10_7_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
logMeasAvailable_r10_7_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	td->aper_decoder   = asn_DEF_NativeEnumerated.aper_decoder;
	td->aper_encoder   = asn_DEF_NativeEnumerated.aper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static void
logMeasAvailable_r10_7_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	logMeasAvailable_r10_7_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
logMeasAvailable_r10_7_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	logMeasAvailable_r10_7_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
logMeasAvailable_r10_7_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	logMeasAvailable_r10_7_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
logMeasAvailable_r10_7_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	logMeasAvailable_r10_7_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
logMeasAvailable_r10_7_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	logMeasAvailable_r10_7_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
logMeasAvailable_r10_7_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	logMeasAvailable_r10_7_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
logMeasAvailable_r10_7_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	logMeasAvailable_r10_7_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
logMeasAvailable_r10_7_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	logMeasAvailable_r10_7_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_enc_rval_t
logMeasAvailable_r10_7_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	logMeasAvailable_r10_7_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static asn_dec_rval_t
logMeasAvailable_r10_7_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	logMeasAvailable_r10_7_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static int
rn_SubframeConfigReq_r10_9_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
rn_SubframeConfigReq_r10_9_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	td->aper_decoder   = asn_DEF_NativeEnumerated.aper_decoder;
	td->aper_encoder   = asn_DEF_NativeEnumerated.aper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static void
rn_SubframeConfigReq_r10_9_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	rn_SubframeConfigReq_r10_9_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
rn_SubframeConfigReq_r10_9_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	rn_SubframeConfigReq_r10_9_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
rn_SubframeConfigReq_r10_9_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	rn_SubframeConfigReq_r10_9_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
rn_SubframeConfigReq_r10_9_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	rn_SubframeConfigReq_r10_9_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
rn_SubframeConfigReq_r10_9_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	rn_SubframeConfigReq_r10_9_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
rn_SubframeConfigReq_r10_9_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	rn_SubframeConfigReq_r10_9_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
rn_SubframeConfigReq_r10_9_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	rn_SubframeConfigReq_r10_9_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
rn_SubframeConfigReq_r10_9_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	rn_SubframeConfigReq_r10_9_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_enc_rval_t
rn_SubframeConfigReq_r10_9_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	rn_SubframeConfigReq_r10_9_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static asn_dec_rval_t
rn_SubframeConfigReq_r10_9_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	rn_SubframeConfigReq_r10_9_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_per_constraints_t asn_PER_type_gummei_Type_r10_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_rlf_InfoAvailable_r10_constr_5 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_logMeasAvailable_r10_constr_7 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_rn_SubframeConfigReq_r10_constr_9 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_gummei_Type_r10_value2enum_2[] = {
	{ 0,	6,	"native" },
	{ 1,	6,	"mapped" }
};
static unsigned int asn_MAP_gummei_Type_r10_enum2value_2[] = {
	1,	/* mapped(1) */
	0	/* native(0) */
};
static asn_INTEGER_specifics_t asn_SPC_gummei_Type_r10_specs_2 = {
	asn_MAP_gummei_Type_r10_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_gummei_Type_r10_enum2value_2,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_gummei_Type_r10_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_gummei_Type_r10_2 = {
	"gummei-Type-r10",
	"gummei-Type-r10",
	gummei_Type_r10_2_free,
	gummei_Type_r10_2_print,
	gummei_Type_r10_2_constraint,
	gummei_Type_r10_2_decode_ber,
	gummei_Type_r10_2_encode_der,
	gummei_Type_r10_2_decode_xer,
	gummei_Type_r10_2_encode_xer,
	gummei_Type_r10_2_decode_uper,
	gummei_Type_r10_2_encode_uper,
	gummei_Type_r10_2_decode_aper,
	gummei_Type_r10_2_encode_aper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_gummei_Type_r10_tags_2,
	sizeof(asn_DEF_gummei_Type_r10_tags_2)
		/sizeof(asn_DEF_gummei_Type_r10_tags_2[0]) - 1, /* 1 */
	asn_DEF_gummei_Type_r10_tags_2,	/* Same as above */
	sizeof(asn_DEF_gummei_Type_r10_tags_2)
		/sizeof(asn_DEF_gummei_Type_r10_tags_2[0]), /* 2 */
	&asn_PER_type_gummei_Type_r10_constr_2,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_gummei_Type_r10_specs_2	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_rlf_InfoAvailable_r10_value2enum_5[] = {
	{ 0,	4,	"true" }
};
static unsigned int asn_MAP_rlf_InfoAvailable_r10_enum2value_5[] = {
	0	/* true(0) */
};
static asn_INTEGER_specifics_t asn_SPC_rlf_InfoAvailable_r10_specs_5 = {
	asn_MAP_rlf_InfoAvailable_r10_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_rlf_InfoAvailable_r10_enum2value_5,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_rlf_InfoAvailable_r10_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_rlf_InfoAvailable_r10_5 = {
	"rlf-InfoAvailable-r10",
	"rlf-InfoAvailable-r10",
	rlf_InfoAvailable_r10_5_free,
	rlf_InfoAvailable_r10_5_print,
	rlf_InfoAvailable_r10_5_constraint,
	rlf_InfoAvailable_r10_5_decode_ber,
	rlf_InfoAvailable_r10_5_encode_der,
	rlf_InfoAvailable_r10_5_decode_xer,
	rlf_InfoAvailable_r10_5_encode_xer,
	rlf_InfoAvailable_r10_5_decode_uper,
	rlf_InfoAvailable_r10_5_encode_uper,
	rlf_InfoAvailable_r10_5_decode_aper,
	rlf_InfoAvailable_r10_5_encode_aper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_rlf_InfoAvailable_r10_tags_5,
	sizeof(asn_DEF_rlf_InfoAvailable_r10_tags_5)
		/sizeof(asn_DEF_rlf_InfoAvailable_r10_tags_5[0]) - 1, /* 1 */
	asn_DEF_rlf_InfoAvailable_r10_tags_5,	/* Same as above */
	sizeof(asn_DEF_rlf_InfoAvailable_r10_tags_5)
		/sizeof(asn_DEF_rlf_InfoAvailable_r10_tags_5[0]), /* 2 */
	&asn_PER_type_rlf_InfoAvailable_r10_constr_5,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_rlf_InfoAvailable_r10_specs_5	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_logMeasAvailable_r10_value2enum_7[] = {
	{ 0,	4,	"true" }
};
static unsigned int asn_MAP_logMeasAvailable_r10_enum2value_7[] = {
	0	/* true(0) */
};
static asn_INTEGER_specifics_t asn_SPC_logMeasAvailable_r10_specs_7 = {
	asn_MAP_logMeasAvailable_r10_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_logMeasAvailable_r10_enum2value_7,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_logMeasAvailable_r10_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_logMeasAvailable_r10_7 = {
	"logMeasAvailable-r10",
	"logMeasAvailable-r10",
	logMeasAvailable_r10_7_free,
	logMeasAvailable_r10_7_print,
	logMeasAvailable_r10_7_constraint,
	logMeasAvailable_r10_7_decode_ber,
	logMeasAvailable_r10_7_encode_der,
	logMeasAvailable_r10_7_decode_xer,
	logMeasAvailable_r10_7_encode_xer,
	logMeasAvailable_r10_7_decode_uper,
	logMeasAvailable_r10_7_encode_uper,
	logMeasAvailable_r10_7_decode_aper,
	logMeasAvailable_r10_7_encode_aper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_logMeasAvailable_r10_tags_7,
	sizeof(asn_DEF_logMeasAvailable_r10_tags_7)
		/sizeof(asn_DEF_logMeasAvailable_r10_tags_7[0]) - 1, /* 1 */
	asn_DEF_logMeasAvailable_r10_tags_7,	/* Same as above */
	sizeof(asn_DEF_logMeasAvailable_r10_tags_7)
		/sizeof(asn_DEF_logMeasAvailable_r10_tags_7[0]), /* 2 */
	&asn_PER_type_logMeasAvailable_r10_constr_7,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_logMeasAvailable_r10_specs_7	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_rn_SubframeConfigReq_r10_value2enum_9[] = {
	{ 0,	8,	"required" },
	{ 1,	11,	"notRequired" }
};
static unsigned int asn_MAP_rn_SubframeConfigReq_r10_enum2value_9[] = {
	1,	/* notRequired(1) */
	0	/* required(0) */
};
static asn_INTEGER_specifics_t asn_SPC_rn_SubframeConfigReq_r10_specs_9 = {
	asn_MAP_rn_SubframeConfigReq_r10_value2enum_9,	/* "tag" => N; sorted by tag */
	asn_MAP_rn_SubframeConfigReq_r10_enum2value_9,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_rn_SubframeConfigReq_r10_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_rn_SubframeConfigReq_r10_9 = {
	"rn-SubframeConfigReq-r10",
	"rn-SubframeConfigReq-r10",
	rn_SubframeConfigReq_r10_9_free,
	rn_SubframeConfigReq_r10_9_print,
	rn_SubframeConfigReq_r10_9_constraint,
	rn_SubframeConfigReq_r10_9_decode_ber,
	rn_SubframeConfigReq_r10_9_encode_der,
	rn_SubframeConfigReq_r10_9_decode_xer,
	rn_SubframeConfigReq_r10_9_encode_xer,
	rn_SubframeConfigReq_r10_9_decode_uper,
	rn_SubframeConfigReq_r10_9_encode_uper,
	rn_SubframeConfigReq_r10_9_decode_aper,
	rn_SubframeConfigReq_r10_9_encode_aper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_rn_SubframeConfigReq_r10_tags_9,
	sizeof(asn_DEF_rn_SubframeConfigReq_r10_tags_9)
		/sizeof(asn_DEF_rn_SubframeConfigReq_r10_tags_9[0]) - 1, /* 1 */
	asn_DEF_rn_SubframeConfigReq_r10_tags_9,	/* Same as above */
	sizeof(asn_DEF_rn_SubframeConfigReq_r10_tags_9)
		/sizeof(asn_DEF_rn_SubframeConfigReq_r10_tags_9[0]), /* 2 */
	&asn_PER_type_rn_SubframeConfigReq_r10_constr_9,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_rn_SubframeConfigReq_r10_specs_9	/* Additional specs */
};

static ber_tlv_tag_t asn_DEF_nonCriticalExtension_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtension_specs_12 = {
	sizeof(struct RRCConnectionSetupComplete_v1020_IEs__nonCriticalExtension),
	offsetof(struct RRCConnectionSetupComplete_v1020_IEs__nonCriticalExtension, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtension_12 = {
	"nonCriticalExtension",
	"nonCriticalExtension",
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
	asn_DEF_nonCriticalExtension_tags_12,
	sizeof(asn_DEF_nonCriticalExtension_tags_12)
		/sizeof(asn_DEF_nonCriticalExtension_tags_12[0]) - 1, /* 1 */
	asn_DEF_nonCriticalExtension_tags_12,	/* Same as above */
	sizeof(asn_DEF_nonCriticalExtension_tags_12)
		/sizeof(asn_DEF_nonCriticalExtension_tags_12[0]), /* 2 */
	0,	/* No PER visible constraints */
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtension_specs_12	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_RRCConnectionSetupComplete_v1020_IEs_1[] = {
	{ ATF_POINTER, 5, offsetof(struct RRCConnectionSetupComplete_v1020_IEs, gummei_Type_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_gummei_Type_r10_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"gummei-Type-r10"
		},
	{ ATF_POINTER, 4, offsetof(struct RRCConnectionSetupComplete_v1020_IEs, rlf_InfoAvailable_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_rlf_InfoAvailable_r10_5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rlf-InfoAvailable-r10"
		},
	{ ATF_POINTER, 3, offsetof(struct RRCConnectionSetupComplete_v1020_IEs, logMeasAvailable_r10),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_logMeasAvailable_r10_7,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"logMeasAvailable-r10"
		},
	{ ATF_POINTER, 2, offsetof(struct RRCConnectionSetupComplete_v1020_IEs, rn_SubframeConfigReq_r10),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_rn_SubframeConfigReq_r10_9,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rn-SubframeConfigReq-r10"
		},
	{ ATF_POINTER, 1, offsetof(struct RRCConnectionSetupComplete_v1020_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_nonCriticalExtension_12,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"nonCriticalExtension"
		},
};
static int asn_MAP_RRCConnectionSetupComplete_v1020_IEs_oms_1[] = { 0, 1, 2, 3, 4 };
static ber_tlv_tag_t asn_DEF_RRCConnectionSetupComplete_v1020_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_RRCConnectionSetupComplete_v1020_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* gummei-Type-r10 at 1060 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rlf-InfoAvailable-r10 at 1061 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* logMeasAvailable-r10 at 1062 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* rn-SubframeConfigReq-r10 at 1063 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* nonCriticalExtension at 1064 */
};
static asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionSetupComplete_v1020_IEs_specs_1 = {
	sizeof(struct RRCConnectionSetupComplete_v1020_IEs),
	offsetof(struct RRCConnectionSetupComplete_v1020_IEs, _asn_ctx),
	asn_MAP_RRCConnectionSetupComplete_v1020_IEs_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_RRCConnectionSetupComplete_v1020_IEs_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_RRCConnectionSetupComplete_v1020_IEs = {
	"RRCConnectionSetupComplete-v1020-IEs",
	"RRCConnectionSetupComplete-v1020-IEs",
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
	asn_DEF_RRCConnectionSetupComplete_v1020_IEs_tags_1,
	sizeof(asn_DEF_RRCConnectionSetupComplete_v1020_IEs_tags_1)
		/sizeof(asn_DEF_RRCConnectionSetupComplete_v1020_IEs_tags_1[0]), /* 1 */
	asn_DEF_RRCConnectionSetupComplete_v1020_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRCConnectionSetupComplete_v1020_IEs_tags_1)
		/sizeof(asn_DEF_RRCConnectionSetupComplete_v1020_IEs_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_RRCConnectionSetupComplete_v1020_IEs_1,
	5,	/* Elements count */
	&asn_SPC_RRCConnectionSetupComplete_v1020_IEs_specs_1	/* Additional specs */
};

