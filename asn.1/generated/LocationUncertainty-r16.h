/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/martin/repos/LPP-Client/asn/LPP.asn"
 * 	`asn1c -fcompound-names -no-gen-OER -pdu=all -no-gen-example -S /home/martin/repos/LPP-Client/ASN1C/skeletons`
 */

#ifndef	_LocationUncertainty_r16_H_
#define	_LocationUncertainty_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LocationUncertainty-r16 */
typedef struct LocationUncertainty_r16 {
	long	 horizontalUncertainty_r15;
	long	 horizontalConfidence_r15;
	long	 verticalUncertainty_r15;
	long	 verticalConfidence_r15;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LocationUncertainty_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LocationUncertainty_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_LocationUncertainty_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_LocationUncertainty_r16_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _LocationUncertainty_r16_H_ */
#include <asn_internal.h>