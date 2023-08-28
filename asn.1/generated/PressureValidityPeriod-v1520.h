/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/martin/repos/LPP-Client/asn/LPP.asn"
 * 	`asn1c -fcompound-names -no-gen-OER -pdu=all -no-gen-example -S /home/martin/repos/LPP-Client/ASN1C/skeletons`
 */

#ifndef	_PressureValidityPeriod_v1520_H_
#define	_PressureValidityPeriod_v1520_H_


#include <asn_application.h>

/* Including external dependencies */
#include "GNSS-SystemTime.h"
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PressureValidityPeriod-v1520 */
typedef struct PressureValidityPeriod_v1520 {
	GNSS_SystemTime_t	 beginTime_v1520;
	long	*beginTimeAlt_v1520	/* OPTIONAL */;
	long	 duration_v1520;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PressureValidityPeriod_v1520_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PressureValidityPeriod_v1520;
extern asn_SEQUENCE_specifics_t asn_SPC_PressureValidityPeriod_v1520_specs_1;
extern asn_TYPE_member_t asn_MBR_PressureValidityPeriod_v1520_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _PressureValidityPeriod_v1520_H_ */
#include <asn_internal.h>