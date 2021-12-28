/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../support/ngap-r16.7.0/38413-g70.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_NGAP_NB_IoT_Paging_TimeWindow_H_
#define	_NGAP_NB_IoT_Paging_TimeWindow_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NGAP_NB_IoT_Paging_TimeWindow {
	NGAP_NB_IoT_Paging_TimeWindow_s1	= 0,
	NGAP_NB_IoT_Paging_TimeWindow_s2	= 1,
	NGAP_NB_IoT_Paging_TimeWindow_s3	= 2,
	NGAP_NB_IoT_Paging_TimeWindow_s4	= 3,
	NGAP_NB_IoT_Paging_TimeWindow_s5	= 4,
	NGAP_NB_IoT_Paging_TimeWindow_s6	= 5,
	NGAP_NB_IoT_Paging_TimeWindow_s7	= 6,
	NGAP_NB_IoT_Paging_TimeWindow_s8	= 7,
	NGAP_NB_IoT_Paging_TimeWindow_s9	= 8,
	NGAP_NB_IoT_Paging_TimeWindow_s10	= 9,
	NGAP_NB_IoT_Paging_TimeWindow_s11	= 10,
	NGAP_NB_IoT_Paging_TimeWindow_s12	= 11,
	NGAP_NB_IoT_Paging_TimeWindow_s13	= 12,
	NGAP_NB_IoT_Paging_TimeWindow_s14	= 13,
	NGAP_NB_IoT_Paging_TimeWindow_s15	= 14,
	NGAP_NB_IoT_Paging_TimeWindow_s16	= 15
	/*
	 * Enumeration is extensible
	 */
} e_NGAP_NB_IoT_Paging_TimeWindow;

/* NGAP_NB-IoT-Paging-TimeWindow */
typedef long	 NGAP_NB_IoT_Paging_TimeWindow_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_NGAP_NB_IoT_Paging_TimeWindow_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_NGAP_NB_IoT_Paging_TimeWindow;
extern const asn_INTEGER_specifics_t asn_SPC_NB_IoT_Paging_TimeWindow_specs_1;
asn_struct_free_f NB_IoT_Paging_TimeWindow_free;
asn_struct_print_f NB_IoT_Paging_TimeWindow_print;
asn_constr_check_f NB_IoT_Paging_TimeWindow_constraint;
per_type_decoder_f NB_IoT_Paging_TimeWindow_decode_aper;
per_type_encoder_f NB_IoT_Paging_TimeWindow_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_NB_IoT_Paging_TimeWindow_H_ */
#include <asn_internal.h>
