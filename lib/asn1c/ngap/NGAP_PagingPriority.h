/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../support/ngap-r16.7.0/38413-g70.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_NGAP_PagingPriority_H_
#define	_NGAP_PagingPriority_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NGAP_PagingPriority {
	NGAP_PagingPriority_priolevel1	= 0,
	NGAP_PagingPriority_priolevel2	= 1,
	NGAP_PagingPriority_priolevel3	= 2,
	NGAP_PagingPriority_priolevel4	= 3,
	NGAP_PagingPriority_priolevel5	= 4,
	NGAP_PagingPriority_priolevel6	= 5,
	NGAP_PagingPriority_priolevel7	= 6,
	NGAP_PagingPriority_priolevel8	= 7
	/*
	 * Enumeration is extensible
	 */
} e_NGAP_PagingPriority;

/* NGAP_PagingPriority */
typedef long	 NGAP_PagingPriority_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_PagingPriority;
asn_struct_free_f NGAP_PagingPriority_free;
asn_struct_print_f NGAP_PagingPriority_print;
asn_constr_check_f NGAP_PagingPriority_constraint;
per_type_decoder_f NGAP_PagingPriority_decode_aper;
per_type_encoder_f NGAP_PagingPriority_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_PagingPriority_H_ */
#include <asn_internal.h>
