/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/martin/repos/LPP-Client/asn/LPP.asn"
 * 	`asn1c -fcompound-names -no-gen-OER -pdu=all -no-gen-example -S /home/martin/repos/LPP-Client/ASN1C/skeletons`
 */

#ifndef	_AdditionalPathList_r14_H_
#define	_AdditionalPathList_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct AdditionalPath_r14;

/* AdditionalPathList-r14 */
typedef struct AdditionalPathList_r14 {
	A_SEQUENCE_OF(struct AdditionalPath_r14) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AdditionalPathList_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AdditionalPathList_r14;
extern asn_SET_OF_specifics_t asn_SPC_AdditionalPathList_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_AdditionalPathList_r14_1[1];
extern asn_per_constraints_t asn_PER_type_AdditionalPathList_r14_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "AdditionalPath-r14.h"

#endif	/* _AdditionalPathList_r14_H_ */
#include <asn_internal.h>