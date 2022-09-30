/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/martin/repos/LPP-Client/asn/LPP.asn"
 * 	`asn1c -fcompound-names -no-gen-OER -pdu=all -no-gen-example -S /home/martin/repos/LPP-Client/ASN1C/skeletons`
 */

#ifndef	_GNSS_GenericAssistDataReqElement_H_
#define	_GNSS_GenericAssistDataReqElement_H_


#include <asn_application.h>

/* Including external dependencies */
#include "GNSS-ID.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SBAS_ID;
struct GNSS_TimeModelListReq;
struct GNSS_DifferentialCorrectionsReq;
struct GNSS_NavigationModelReq;
struct GNSS_RealTimeIntegrityReq;
struct GNSS_DataBitAssistanceReq;
struct GNSS_AcquisitionAssistanceReq;
struct GNSS_AlmanacReq;
struct GNSS_UTC_ModelReq;
struct GNSS_AuxiliaryInformationReq;
struct BDS_DifferentialCorrectionsReq_r12;
struct BDS_GridModelReq_r12;
struct GNSS_RTK_ObservationsReq_r15;
struct GLO_RTK_BiasInformationReq_r15;
struct GNSS_RTK_MAC_CorrectionDifferencesReq_r15;
struct GNSS_RTK_ResidualsReq_r15;
struct GNSS_RTK_FKP_GradientsReq_r15;
struct GNSS_SSR_OrbitCorrectionsReq_r15;
struct GNSS_SSR_ClockCorrectionsReq_r15;
struct GNSS_SSR_CodeBiasReq_r15;
struct GNSS_SSR_URA_Req_r16;
struct GNSS_SSR_PhaseBiasReq_r16;
struct GNSS_SSR_STEC_CorrectionReq_r16;
struct GNSS_SSR_GriddedCorrectionReq_r16;
struct NavIC_DifferentialCorrectionsReq_r16;
struct NavIC_GridModelReq_r16;

/* GNSS-GenericAssistDataReqElement */
typedef struct GNSS_GenericAssistDataReqElement {
	GNSS_ID_t	 gnss_ID;
	struct SBAS_ID	*sbas_ID	/* OPTIONAL */;
	struct GNSS_TimeModelListReq	*gnss_TimeModelsReq	/* OPTIONAL */;
	struct GNSS_DifferentialCorrectionsReq	*gnss_DifferentialCorrectionsReq	/* OPTIONAL */;
	struct GNSS_NavigationModelReq	*gnss_NavigationModelReq	/* OPTIONAL */;
	struct GNSS_RealTimeIntegrityReq	*gnss_RealTimeIntegrityReq	/* OPTIONAL */;
	struct GNSS_DataBitAssistanceReq	*gnss_DataBitAssistanceReq	/* OPTIONAL */;
	struct GNSS_AcquisitionAssistanceReq	*gnss_AcquisitionAssistanceReq	/* OPTIONAL */;
	struct GNSS_AlmanacReq	*gnss_AlmanacReq	/* OPTIONAL */;
	struct GNSS_UTC_ModelReq	*gnss_UTCModelReq	/* OPTIONAL */;
	struct GNSS_AuxiliaryInformationReq	*gnss_AuxiliaryInformationReq	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct GNSS_GenericAssistDataReqElement__ext1 {
		struct BDS_DifferentialCorrectionsReq_r12	*bds_DifferentialCorrectionsReq_r12	/* OPTIONAL */;
		struct BDS_GridModelReq_r12	*bds_GridModelReq_r12	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct GNSS_GenericAssistDataReqElement__ext2 {
		struct GNSS_RTK_ObservationsReq_r15	*gnss_RTK_ObservationsReq_r15	/* OPTIONAL */;
		struct GLO_RTK_BiasInformationReq_r15	*glo_RTK_BiasInformationReq_r15	/* OPTIONAL */;
		struct GNSS_RTK_MAC_CorrectionDifferencesReq_r15	*gnss_RTK_MAC_CorrectionDifferencesReq_r15	/* OPTIONAL */;
		struct GNSS_RTK_ResidualsReq_r15	*gnss_RTK_ResidualsReq_r15	/* OPTIONAL */;
		struct GNSS_RTK_FKP_GradientsReq_r15	*gnss_RTK_FKP_GradientsReq_r15	/* OPTIONAL */;
		struct GNSS_SSR_OrbitCorrectionsReq_r15	*gnss_SSR_OrbitCorrectionsReq_r15	/* OPTIONAL */;
		struct GNSS_SSR_ClockCorrectionsReq_r15	*gnss_SSR_ClockCorrectionsReq_r15	/* OPTIONAL */;
		struct GNSS_SSR_CodeBiasReq_r15	*gnss_SSR_CodeBiasReq_r15	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	struct GNSS_GenericAssistDataReqElement__ext3 {
		struct GNSS_SSR_URA_Req_r16	*gnss_SSR_URA_Req_r16	/* OPTIONAL */;
		struct GNSS_SSR_PhaseBiasReq_r16	*gnss_SSR_PhaseBiasReq_r16	/* OPTIONAL */;
		struct GNSS_SSR_STEC_CorrectionReq_r16	*gnss_SSR_STEC_CorrectionReq_r16	/* OPTIONAL */;
		struct GNSS_SSR_GriddedCorrectionReq_r16	*gnss_SSR_GriddedCorrectionReq_r16	/* OPTIONAL */;
		struct NavIC_DifferentialCorrectionsReq_r16	*navic_DifferentialCorrectionsReq_r16	/* OPTIONAL */;
		struct NavIC_GridModelReq_r16	*navic_GridModelReq_r16	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext3;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GNSS_GenericAssistDataReqElement_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GNSS_GenericAssistDataReqElement;
extern asn_SEQUENCE_specifics_t asn_SPC_GNSS_GenericAssistDataReqElement_specs_1;
extern asn_TYPE_member_t asn_MBR_GNSS_GenericAssistDataReqElement_1[14];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SBAS-ID.h"
#include "GNSS-TimeModelListReq.h"
#include "GNSS-DifferentialCorrectionsReq.h"
#include "GNSS-NavigationModelReq.h"
#include "GNSS-RealTimeIntegrityReq.h"
#include "GNSS-DataBitAssistanceReq.h"
#include "GNSS-AcquisitionAssistanceReq.h"
#include "GNSS-AlmanacReq.h"
#include "GNSS-UTC-ModelReq.h"
#include "GNSS-AuxiliaryInformationReq.h"
#include "BDS-DifferentialCorrectionsReq-r12.h"
#include "BDS-GridModelReq-r12.h"
#include "GNSS-RTK-ObservationsReq-r15.h"
#include "GLO-RTK-BiasInformationReq-r15.h"
#include "GNSS-RTK-MAC-CorrectionDifferencesReq-r15.h"
#include "GNSS-RTK-ResidualsReq-r15.h"
#include "GNSS-RTK-FKP-GradientsReq-r15.h"
#include "GNSS-SSR-OrbitCorrectionsReq-r15.h"
#include "GNSS-SSR-ClockCorrectionsReq-r15.h"
#include "GNSS-SSR-CodeBiasReq-r15.h"
#include "GNSS-SSR-URA-Req-r16.h"
#include "GNSS-SSR-PhaseBiasReq-r16.h"
#include "GNSS-SSR-STEC-CorrectionReq-r16.h"
#include "GNSS-SSR-GriddedCorrectionReq-r16.h"
#include "NavIC-DifferentialCorrectionsReq-r16.h"
#include "NavIC-GridModelReq-r16.h"

#endif	/* _GNSS_GenericAssistDataReqElement_H_ */
#include <asn_internal.h>