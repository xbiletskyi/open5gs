/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../support/s1ap-r16.7.0/36413-g70.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#include "S1AP_PC5FlowBitRates.h"

#include "S1AP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_S1AP_PC5FlowBitRates_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_PC5FlowBitRates, guaranteedFlowBitRate),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_BitRate,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"guaranteedFlowBitRate"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_PC5FlowBitRates, maximumFlowBitRate),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_BitRate,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"maximumFlowBitRate"
		},
	{ ATF_POINTER, 1, offsetof(struct S1AP_PC5FlowBitRates, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_ProtocolExtensionContainer_7898P105,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_S1AP_PC5FlowBitRates_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_S1AP_PC5FlowBitRates_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_S1AP_PC5FlowBitRates_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* guaranteedFlowBitRate */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* maximumFlowBitRate */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_S1AP_PC5FlowBitRates_specs_1 = {
	sizeof(struct S1AP_PC5FlowBitRates),
	offsetof(struct S1AP_PC5FlowBitRates, _asn_ctx),
	asn_MAP_S1AP_PC5FlowBitRates_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_S1AP_PC5FlowBitRates_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_S1AP_PC5FlowBitRates = {
	"PC5FlowBitRates",
	"PC5FlowBitRates",
	&asn_OP_SEQUENCE,
	asn_DEF_S1AP_PC5FlowBitRates_tags_1,
	sizeof(asn_DEF_S1AP_PC5FlowBitRates_tags_1)
		/sizeof(asn_DEF_S1AP_PC5FlowBitRates_tags_1[0]), /* 1 */
	asn_DEF_S1AP_PC5FlowBitRates_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1AP_PC5FlowBitRates_tags_1)
		/sizeof(asn_DEF_S1AP_PC5FlowBitRates_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_S1AP_PC5FlowBitRates_1,
	3,	/* Elements count */
	&asn_SPC_S1AP_PC5FlowBitRates_specs_1	/* Additional specs */
};

