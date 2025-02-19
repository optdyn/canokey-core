/* SPDX-License-Identifier: Apache-2.0 */
#ifndef CANOKEY_CORE_FIDO2_SECRET_H_
#define CANOKEY_CORE_FIDO2_SECRET_H_

#include "ctap-internal.h"
#include <ctap.h>

int increase_counter(uint32_t *counter);
int generate_key_handle(CredentialId *kh, uint8_t *pubkey, int32_t alg_type);
size_t sign_with_device_key(const uint8_t *input, size_t input_len, uint8_t *sig);
int sign_with_private_key(int32_t alg_type, ecc_key_t *key, const uint8_t *input, size_t len, uint8_t *sig);
int verify_key_handle(const CredentialId *kh, ecc_key_t *key);
int get_cert(uint8_t *buf);
int has_pin(void);
int set_pin(uint8_t *buf, uint8_t length);
int verify_pin_hash(uint8_t *buf);
int get_pin_retries(void);
int set_pin_retries(uint8_t ctr);
int make_hmac_secret_output(uint8_t *nonce, uint8_t *salt, uint8_t len, uint8_t *output);

#endif // CANOKEY_CORE_FIDO2_SECRET_H_
