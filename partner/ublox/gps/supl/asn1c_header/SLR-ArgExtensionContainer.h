/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-ExtensionDataTypes"
 * 	found in "MAP-ExtensionDataTypes.asn"
 * 	`asn1c -gen-PER -fnative-types`
 */

#ifndef	_SLR_ArgExtensionContainer_H_
#define	_SLR_ArgExtensionContainer_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PrivateExtensionList;
struct SLR_Arg_PCS_Extensions;

/* SLR-ArgExtensionContainer */
typedef struct SLR_ArgExtensionContainer {
	struct PrivateExtensionList	*privateExtensionList	/* OPTIONAL */;
	struct SLR_Arg_PCS_Extensions	*slr_Arg_PCS_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SLR_ArgExtensionContainer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SLR_ArgExtensionContainer;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PrivateExtensionList.h"
#include "SLR-Arg-PCS-Extensions.h"

#endif	/* _SLR_ArgExtensionContainer_H_ */
#include <asn_internal.h>