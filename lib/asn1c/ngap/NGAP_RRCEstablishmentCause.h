/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../support/ngap-r16.7.0/38413-g70.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_NGAP_RRCEstablishmentCause_H_
#define	_NGAP_RRCEstablishmentCause_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NGAP_RRCEstablishmentCause {
	NGAP_RRCEstablishmentCause_emergency	= 0,
	NGAP_RRCEstablishmentCause_highPriorityAccess	= 1,
	NGAP_RRCEstablishmentCause_mt_Access	= 2,
	NGAP_RRCEstablishmentCause_mo_Signalling	= 3,
	NGAP_RRCEstablishmentCause_mo_Data	= 4,
	NGAP_RRCEstablishmentCause_mo_VoiceCall	= 5,
	NGAP_RRCEstablishmentCause_mo_VideoCall	= 6,
	NGAP_RRCEstablishmentCause_mo_SMS	= 7,
	NGAP_RRCEstablishmentCause_mps_PriorityAccess	= 8,
	NGAP_RRCEstablishmentCause_mcs_PriorityAccess	= 9,
	/*
	 * Enumeration is extensible
	 */
	NGAP_RRCEstablishmentCause_notAvailable	= 10,
	NGAP_RRCEstablishmentCause_mo_ExceptionData	= 11
} e_NGAP_RRCEstablishmentCause;

/* NGAP_RRCEstablishmentCause */
typedef long	 NGAP_RRCEstablishmentCause_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_RRCEstablishmentCause;
asn_struct_free_f NGAP_RRCEstablishmentCause_free;
asn_struct_print_f NGAP_RRCEstablishmentCause_print;
asn_constr_check_f NGAP_RRCEstablishmentCause_constraint;
per_type_decoder_f NGAP_RRCEstablishmentCause_decode_aper;
per_type_encoder_f NGAP_RRCEstablishmentCause_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_RRCEstablishmentCause_H_ */
#include <asn_internal.h>
