/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/martin/repos/LPP-Client/asn/LPP.asn"
 * 	`asn1c -fcompound-names -no-gen-OER -pdu=all -no-gen-example -S /home/martin/repos/LPP-Client/ASN1C/skeletons`
 */

#ifndef	_BDS_GridModelParameter_r12_H_
#define	_BDS_GridModelParameter_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "GridIonList-r12.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* BDS-GridModelParameter-r12 */
typedef struct BDS_GridModelParameter_r12 {
	long	 bds_RefTime_r12;
	GridIonList_r12_t	 gridIonList_r12;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BDS_GridModelParameter_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BDS_GridModelParameter_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_BDS_GridModelParameter_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_BDS_GridModelParameter_r12_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _BDS_GridModelParameter_r12_H_ */
#include <asn_internal.h>