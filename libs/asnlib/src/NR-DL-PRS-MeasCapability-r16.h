/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/martin/repos/LPP-Client/asn/LPP.asn"
 * 	`asn1c -fcompound-names -no-gen-OER -pdu=all -no-gen-example -S /home/martin/repos/LPP-Client/ASN1C/skeletons`
 */

#ifndef	_NR_DL_PRS_MeasCapability_r16_H_
#define	_NR_DL_PRS_MeasCapability_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SupportedBandNR_r16;

/* NR-DL-PRS-MeasCapability-r16 */
typedef struct NR_DL_PRS_MeasCapability_r16 {
	struct NR_DL_PRS_MeasCapability_r16__supportedBandListNR_r16 {
		A_SEQUENCE_OF(struct SupportedBandNR_r16) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *supportedBandListNR_r16;
	long	 maxNumDL_PRS_Resources_r16;
	long	 numDL_PRS_RSRPMeasurementsPerTRP_r16;
	long	 numPositioningFrequencyLayers_r16;
	long	 numTrpPerPositioningFrequencyLayer_r16;
	long	 numDL_PRS_ResourceSetsPerTRP_r16;
	long	 numDL_PRS_ResourcesPerSet_r16;
	long	 totalNum_DL_PRS_Resources_r16;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_DL_PRS_MeasCapability_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_DL_PRS_MeasCapability_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_DL_PRS_MeasCapability_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_DL_PRS_MeasCapability_r16_1[8];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SupportedBandNR-r16.h"

#endif	/* _NR_DL_PRS_MeasCapability_r16_H_ */
#include <asn_internal.h>