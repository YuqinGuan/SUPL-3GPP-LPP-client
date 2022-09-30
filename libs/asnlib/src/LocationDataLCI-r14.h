/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/martin/repos/LPP-Client/asn/LPP.asn"
 * 	`asn1c -fcompound-names -no-gen-OER -pdu=all -no-gen-example -S /home/martin/repos/LPP-Client/ASN1C/skeletons`
 */

#ifndef	_LocationDataLCI_r14_H_
#define	_LocationDataLCI_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LocationDataLCI-r14 */
typedef struct LocationDataLCI_r14 {
	BIT_STRING_t	 latitudeUncertainty_r14;
	BIT_STRING_t	 latitude_r14;
	BIT_STRING_t	 longitudeUncertainty_r14;
	BIT_STRING_t	 longitude_r14;
	BIT_STRING_t	*altitudeUncertainty_r14	/* OPTIONAL */;
	BIT_STRING_t	*altitude_r14	/* OPTIONAL */;
	BIT_STRING_t	 datum_r14;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LocationDataLCI_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LocationDataLCI_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_LocationDataLCI_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_LocationDataLCI_r14_1[7];

#ifdef __cplusplus
}
#endif

#endif	/* _LocationDataLCI_r14_H_ */
#include <asn_internal.h>