/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/martin/repos/LPP-Client/asn/LPP.asn"
 * 	`asn1c -fcompound-names -no-gen-OER -pdu=all -no-gen-example -S /home/martin/repos/LPP-Client/ASN1C/skeletons`
 */

#ifndef	_GNSS_UTC_ModelSupport_H_
#define	_GNSS_UTC_ModelSupport_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum GNSS_UTC_ModelSupport__utc_Model {
	GNSS_UTC_ModelSupport__utc_Model_model_1	= 0,
	GNSS_UTC_ModelSupport__utc_Model_model_2	= 1,
	GNSS_UTC_ModelSupport__utc_Model_model_3	= 2,
	GNSS_UTC_ModelSupport__utc_Model_model_4	= 3,
	GNSS_UTC_ModelSupport__utc_Model_model_5	= 4
} e_GNSS_UTC_ModelSupport__utc_Model;

/* GNSS-UTC-ModelSupport */
typedef struct GNSS_UTC_ModelSupport {
	BIT_STRING_t	*utc_Model	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GNSS_UTC_ModelSupport_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GNSS_UTC_ModelSupport;
extern asn_SEQUENCE_specifics_t asn_SPC_GNSS_UTC_ModelSupport_specs_1;
extern asn_TYPE_member_t asn_MBR_GNSS_UTC_ModelSupport_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _GNSS_UTC_ModelSupport_H_ */
#include <asn_internal.h>