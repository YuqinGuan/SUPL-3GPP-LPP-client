/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SUPL-TRIGGERED-START"
 * 	found in "/home/martin/repos/LPP-Client/asn/SUPL.asn"
 * 	`asn1c -fcompound-names -no-gen-OER -pdu=all -no-gen-example -S /home/martin/repos/LPP-Client/ASN1C/skeletons`
 */

#include "PeriodicParams.h"

static int
memb_numberOfFixes_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 8639999)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_intervalBetweenFixes_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 8639999)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_startTime_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 2678400)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_numberOfFixes_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 24, -1,  1,  8639999 }	/* (1..8639999) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_intervalBetweenFixes_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 24, -1,  1,  8639999 }	/* (1..8639999) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_startTime_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 22, -1,  0,  2678400 }	/* (0..2678400) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_PeriodicParams_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PeriodicParams, numberOfFixes),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_numberOfFixes_constr_2,  memb_numberOfFixes_constraint_1 },
		0, 0, /* No default value */
		"numberOfFixes"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PeriodicParams, intervalBetweenFixes),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_intervalBetweenFixes_constr_3,  memb_intervalBetweenFixes_constraint_1 },
		0, 0, /* No default value */
		"intervalBetweenFixes"
		},
	{ ATF_POINTER, 1, offsetof(struct PeriodicParams, startTime),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_startTime_constr_4,  memb_startTime_constraint_1 },
		0, 0, /* No default value */
		"startTime"
		},
};
static const int asn_MAP_PeriodicParams_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_PeriodicParams_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PeriodicParams_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* numberOfFixes */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* intervalBetweenFixes */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* startTime */
};
asn_SEQUENCE_specifics_t asn_SPC_PeriodicParams_specs_1 = {
	sizeof(struct PeriodicParams),
	offsetof(struct PeriodicParams, _asn_ctx),
	asn_MAP_PeriodicParams_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_PeriodicParams_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PeriodicParams = {
	"PeriodicParams",
	"PeriodicParams",
	&asn_OP_SEQUENCE,
	asn_DEF_PeriodicParams_tags_1,
	sizeof(asn_DEF_PeriodicParams_tags_1)
		/sizeof(asn_DEF_PeriodicParams_tags_1[0]), /* 1 */
	asn_DEF_PeriodicParams_tags_1,	/* Same as above */
	sizeof(asn_DEF_PeriodicParams_tags_1)
		/sizeof(asn_DEF_PeriodicParams_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PeriodicParams_1,
	3,	/* Elements count */
	&asn_SPC_PeriodicParams_specs_1	/* Additional specs */
};
