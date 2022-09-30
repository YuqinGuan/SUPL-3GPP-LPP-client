/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/martin/repos/LPP-Client/asn/LPP.asn"
 * 	`asn1c -fcompound-names -no-gen-OER -pdu=all -no-gen-example -S /home/martin/repos/LPP-Client/ASN1C/skeletons`
 */

#ifndef	_Initiator_H_
#define	_Initiator_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Initiator {
	Initiator_locationServer	= 0,
	Initiator_targetDevice	= 1
	/*
	 * Enumeration is extensible
	 */
} e_Initiator;

/* Initiator */
typedef long	 Initiator_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_Initiator_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_Initiator;
extern const asn_INTEGER_specifics_t asn_SPC_Initiator_specs_1;
asn_struct_free_f Initiator_free;
asn_struct_print_f Initiator_print;
asn_constr_check_f Initiator_constraint;
ber_type_decoder_f Initiator_decode_ber;
der_type_encoder_f Initiator_encode_der;
xer_type_decoder_f Initiator_decode_xer;
xer_type_encoder_f Initiator_encode_xer;
per_type_decoder_f Initiator_decode_uper;
per_type_encoder_f Initiator_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _Initiator_H_ */
#include <asn_internal.h>