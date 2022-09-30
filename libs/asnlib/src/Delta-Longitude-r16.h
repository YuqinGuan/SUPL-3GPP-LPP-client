/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/martin/repos/LPP-Client/asn/LPP.asn"
 * 	`asn1c -fcompound-names -no-gen-OER -pdu=all -no-gen-example -S /home/martin/repos/LPP-Client/ASN1C/skeletons`
 */

#ifndef	_Delta_Longitude_r16_H_
#define	_Delta_Longitude_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Delta-Longitude-r16 */
typedef struct Delta_Longitude_r16 {
	long	 delta_Longitude_r16;
	long	*coarse_delta_Longitude_r16	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Delta_Longitude_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Delta_Longitude_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_Delta_Longitude_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_Delta_Longitude_r16_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _Delta_Longitude_r16_H_ */
#include <asn_internal.h>