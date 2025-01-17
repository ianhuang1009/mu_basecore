/*
 * WARNING: do not edit!
 * Generated from include/openssl/opensslconf.h.in
 *
 * Copyright 2016-2020 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the OpenSSL license (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */
#include <Library/PcdLib.h>
#include <openssl/opensslconf_generated.h>

#ifdef  __cplusplus
extern "C" {
#endif

/* Autogenerated conditional openssl feature list starts here */
// MU_CHANGE Removed no EC definitions as MU requires EC cryptography
/*#if !FixedPcdGetBool (PcdOpensslEcEnabled)
# ifndef OPENSSL_NO_EC
#  define OPENSSL_NO_EC
# endif
# ifndef OPENSSL_NO_ECDH
#  define OPENSSL_NO_ECDH
# endif
# ifndef OPENSSL_NO_ECDSA
#  define OPENSSL_NO_ECDSA
# endif
# ifndef OPENSSL_NO_TLS1_3
#  define OPENSSL_NO_TLS1_3
# endif
# ifndef OPENSSL_NO_SM2
#  define OPENSSL_NO_SM2
# endif
#endif*/
/* Autogenerated conditional openssl feature list ends here */

#ifdef  __cplusplus
}
#endif
