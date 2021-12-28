/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../support/s1ap-r16.7.0/36413-g70.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_S1AP_ConcurrentWarningMessageIndicator_H_
#define	_S1AP_ConcurrentWarningMessageIndicator_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1AP_ConcurrentWarningMessageIndicator {
	S1AP_ConcurrentWarningMessageIndicator_true	= 0
} e_S1AP_ConcurrentWarningMessageIndicator;

/* S1AP_ConcurrentWarningMessageIndicator */
typedef long	 S1AP_ConcurrentWarningMessageIndicator_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ConcurrentWarningMessageIndicator;
asn_struct_free_f S1AP_ConcurrentWarningMessageIndicator_free;
asn_struct_print_f S1AP_ConcurrentWarningMessageIndicator_print;
asn_constr_check_f S1AP_ConcurrentWarningMessageIndicator_constraint;
per_type_decoder_f S1AP_ConcurrentWarningMessageIndicator_decode_aper;
per_type_encoder_f S1AP_ConcurrentWarningMessageIndicator_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_ConcurrentWarningMessageIndicator_H_ */
#include <asn_internal.h>
