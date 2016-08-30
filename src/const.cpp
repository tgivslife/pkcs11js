#include "const.h"

void declare_attributes(Local<Object> target) {
	Nan::HandleScope();

	SET_CONST(target, CKA_CLASS);
	SET_CONST(target, CKA_TOKEN);
	SET_CONST(target, CKA_PRIVATE);
	SET_CONST(target, CKA_LABEL);
	SET_CONST(target, CKA_APPLICATION);
	SET_CONST(target, CKA_VALUE);
	SET_CONST(target, CKA_OBJECT_ID);
	SET_CONST(target, CKA_CERTIFICATE_TYPE);
	SET_CONST(target, CKA_ISSUER);
	SET_CONST(target, CKA_SERIAL_NUMBER);
	SET_CONST(target, CKA_AC_ISSUER);
	SET_CONST(target, CKA_OWNER);
	SET_CONST(target, CKA_ATTR_TYPES);
	SET_CONST(target, CKA_TRUSTED);
	SET_CONST(target, CKA_CERTIFICATE_CATEGORY);
	SET_CONST(target, CKA_JAVA_MIDP_SECURITY_DOMAIN);
	SET_CONST(target, CKA_URL);
	SET_CONST(target, CKA_HASH_OF_SUBJECT_PUBLIC_KEY);
	SET_CONST(target, CKA_HASH_OF_ISSUER_PUBLIC_KEY);
	SET_CONST(target, CKA_CHECK_VALUE);
	SET_CONST(target, CKA_KEY_TYPE);
	SET_CONST(target, CKA_SUBJECT);
	SET_CONST(target, CKA_ID);
	SET_CONST(target, CKA_SENSITIVE);
	SET_CONST(target, CKA_ENCRYPT);
	SET_CONST(target, CKA_DECRYPT);
	SET_CONST(target, CKA_WRAP);
	SET_CONST(target, CKA_UNWRAP);
	SET_CONST(target, CKA_SIGN);
	SET_CONST(target, CKA_SIGN_RECOVER);
	SET_CONST(target, CKA_VERIFY);
	SET_CONST(target, CKA_VERIFY_RECOVER);
	SET_CONST(target, CKA_DERIVE);
	SET_CONST(target, CKA_START_DATE);
	SET_CONST(target, CKA_END_DATE);
	SET_CONST(target, CKA_MODULUS);
	SET_CONST(target, CKA_MODULUS_BITS);
	SET_CONST(target, CKA_PUBLIC_EXPONENT);
	SET_CONST(target, CKA_PRIVATE_EXPONENT);
	SET_CONST(target, CKA_PRIME_1);
	SET_CONST(target, CKA_PRIME_2);
	SET_CONST(target, CKA_EXPONENT_1);
	SET_CONST(target, CKA_EXPONENT_2);
	SET_CONST(target, CKA_COEFFICIENT);
	SET_CONST(target, CKA_PRIME);
	SET_CONST(target, CKA_SUBPRIME);
	SET_CONST(target, CKA_BASE);
	SET_CONST(target, CKA_PRIME_BITS);
	SET_CONST(target, CKA_SUBPRIME_BITS);
	SET_CONST(target, CKA_SUB_PRIME_BITS);
	SET_CONST(target, CKA_VALUE_BITS);
	SET_CONST(target, CKA_VALUE_LEN);
	SET_CONST(target, CKA_EXTRACTABLE);
	SET_CONST(target, CKA_LOCAL);
	SET_CONST(target, CKA_NEVER_EXTRACTABLE);
	SET_CONST(target, CKA_ALWAYS_SENSITIVE);
	SET_CONST(target, CKA_KEY_GEN_MECHANISM);
	SET_CONST(target, CKA_MODIFIABLE);
	SET_CONST(target, CKA_ECDSA_PARAMS);
	SET_CONST(target, CKA_EC_PARAMS);
	SET_CONST(target, CKA_EC_POINT);
	SET_CONST(target, CKA_SECONDARY_AUTH);
	SET_CONST(target, CKA_AUTH_PIN_FLAGS);
	SET_CONST(target, CKA_ALWAYS_AUTHENTICATE);
	SET_CONST(target, CKA_WRAP_WITH_TRUSTED);
	SET_CONST(target, CKA_WRAP_TEMPLATE);
	SET_CONST(target, CKA_UNWRAP_TEMPLATE);
	SET_CONST(target, CKA_DERIVE_TEMPLATE);
	SET_CONST(target, CKA_OTP_FORMAT);
	SET_CONST(target, CKA_OTP_LENGTH);
	SET_CONST(target, CKA_OTP_TIME_INTERVAL);
	SET_CONST(target, CKA_OTP_USER_FRIENDLY_MODE);
	SET_CONST(target, CKA_OTP_CHALLENGE_REQUIREMENT);
	SET_CONST(target, CKA_OTP_TIME_REQUIREMENT);
	SET_CONST(target, CKA_OTP_COUNTER_REQUIREMENT);
	SET_CONST(target, CKA_OTP_PIN_REQUIREMENT);
	SET_CONST(target, CKA_OTP_COUNTER);
	SET_CONST(target, CKA_OTP_TIME);
	SET_CONST(target, CKA_OTP_USER_IDENTIFIER);
	SET_CONST(target, CKA_OTP_SERVICE_IDENTIFIER);
	SET_CONST(target, CKA_OTP_SERVICE_LOGO);
	SET_CONST(target, CKA_OTP_SERVICE_LOGO_TYPE);
	SET_CONST(target, CKA_GOSTR3410_PARAMS);
	SET_CONST(target, CKA_GOSTR3411_PARAMS);
	SET_CONST(target, CKA_GOST28147_PARAMS);
	SET_CONST(target, CKA_HW_FEATURE_TYPE);
	SET_CONST(target, CKA_RESET_ON_INIT);
	SET_CONST(target, CKA_HAS_RESET);
	SET_CONST(target, CKA_PIXEL_X);
	SET_CONST(target, CKA_PIXEL_Y);
	SET_CONST(target, CKA_RESOLUTION);
	SET_CONST(target, CKA_CHAR_ROWS);
	SET_CONST(target, CKA_CHAR_COLUMNS);
	SET_CONST(target, CKA_COLOR);
	SET_CONST(target, CKA_BITS_PER_PIXEL);
	SET_CONST(target, CKA_CHAR_SETS);
	SET_CONST(target, CKA_ENCODING_METHODS);
	SET_CONST(target, CKA_MIME_TYPES);
	SET_CONST(target, CKA_MECHANISM_TYPE);
	SET_CONST(target, CKA_REQUIRED_CMS_ATTRIBUTES);
	SET_CONST(target, CKA_DEFAULT_CMS_ATTRIBUTES);
	SET_CONST(target, CKA_SUPPORTED_CMS_ATTRIBUTES);
	SET_CONST(target, CKA_ALLOWED_MECHANISMS);
	SET_CONST(target, CKA_VENDOR_DEFINED);
}

void declare_flags(Local<Object> target) {
	Nan::HandleScope();

	SET_CONST(target, CKF_RW_SESSION);
	SET_CONST(target, CKF_SERIAL_SESSION);
	SET_CONST(target, CKF_HW);
	SET_CONST(target, CKF_ENCRYPT);
	SET_CONST(target, CKF_DECRYPT);
	SET_CONST(target, CKF_DIGEST);
	SET_CONST(target, CKF_SIGN);
	SET_CONST(target, CKF_SIGN_RECOVER);
	SET_CONST(target, CKF_VERIFY);
	SET_CONST(target, CKF_VERIFY_RECOVER);
	SET_CONST(target, CKF_GENERATE);
	SET_CONST(target, CKF_GENERATE_KEY_PAIR);
	SET_CONST(target, CKF_WRAP);
	SET_CONST(target, CKF_UNWRAP);
	SET_CONST(target, CKF_DERIVE);

	// Token Information Flags
	SET_CONST(target, CKF_RNG);
	SET_CONST(target, CKF_WRITE_PROTECTED);
	SET_CONST(target, CKF_LOGIN_REQUIRED);
	SET_CONST(target, CKF_USER_PIN_INITIALIZED);
	SET_CONST(target, CKF_RESTORE_KEY_NOT_NEEDED);
	SET_CONST(target, CKF_CLOCK_ON_TOKEN);
	SET_CONST(target, CKF_PROTECTED_AUTHENTICATION_PATH);
	SET_CONST(target, CKF_DUAL_CRYPTO_OPERATIONS);
	SET_CONST(target, CKF_TOKEN_INITIALIZED);
	SET_CONST(target, CKF_SECONDARY_AUTHENTICATION);
	SET_CONST(target, CKF_USER_PIN_COUNT_LOW);
	SET_CONST(target, CKF_USER_PIN_FINAL_TRY);
	SET_CONST(target, CKF_USER_PIN_LOCKED);
	SET_CONST(target, CKF_USER_PIN_TO_BE_CHANGED);
	SET_CONST(target, CKF_SO_PIN_COUNT_LOW);
	SET_CONST(target, CKF_SO_PIN_FINAL_TRY);
	SET_CONST(target, CKF_SO_PIN_LOCKED);
	SET_CONST(target, CKF_SO_PIN_TO_BE_CHANGED);
	SET_CONST(target, CKF_ERROR_STATE);

}

void declare_objects(Local<Object> target) {
	Nan::HandleScope();

	SET_CONST(target, CKO_DATA);
	SET_CONST(target, CKO_CERTIFICATE);
	SET_CONST(target, CKO_PUBLIC_KEY);
	SET_CONST(target, CKO_PRIVATE_KEY);
	SET_CONST(target, CKO_SECRET_KEY);
	SET_CONST(target, CKO_HW_FEATURE);
	SET_CONST(target, CKO_DOMAIN_PARAMETERS);
	SET_CONST(target, CKO_MECHANISM);
	SET_CONST(target, CKO_OTP_KEY);
	SET_CONST(target, CKO_VENDOR_DEFINED);
}

void declare_ket_types(Local<Object> target) {
	Nan::HandleScope();
	SET_CONST(target, CKK_RSA);
	SET_CONST(target, CKK_DSA);
	SET_CONST(target, CKK_DH);
	SET_CONST(target, CKK_ECDSA);
	SET_CONST(target, CKK_EC);
	SET_CONST(target, CKK_X9_42_DH);
	SET_CONST(target, CKK_KEA);
	SET_CONST(target, CKK_GENERIC_SECRET);
	SET_CONST(target, CKK_RC2);
	SET_CONST(target, CKK_RC4);
	SET_CONST(target, CKK_DES);
	SET_CONST(target, CKK_DES2);
	SET_CONST(target, CKK_DES3);
	SET_CONST(target, CKK_CAST);
	SET_CONST(target, CKK_CAST3);
	SET_CONST(target, CKK_CAST5);
	SET_CONST(target, CKK_CAST128);
	SET_CONST(target, CKK_RC5);
	SET_CONST(target, CKK_IDEA);
	SET_CONST(target, CKK_SKIPJACK);
	SET_CONST(target, CKK_BATON);
	SET_CONST(target, CKK_JUNIPER);
	SET_CONST(target, CKK_CDMF);
	SET_CONST(target, CKK_AES);
	SET_CONST(target, CKK_BLOWFISH);
	SET_CONST(target, CKK_TWOFISH);
	SET_CONST(target, CKK_SECURID);
	SET_CONST(target, CKK_HOTP);
	SET_CONST(target, CKK_ACTI);
	SET_CONST(target, CKK_CAMELLIA);
	SET_CONST(target, CKK_ARIA);
	SET_CONST(target, CKK_MD5_HMAC);
	SET_CONST(target, CKK_SHA_1_HMAC);
	SET_CONST(target, CKK_RIPEMD128_HMAC);
	SET_CONST(target, CKK_RIPEMD160_HMAC);
	SET_CONST(target, CKK_SHA256_HMAC);
	SET_CONST(target, CKK_SHA384_HMAC);
	SET_CONST(target, CKK_SHA512_HMAC);
	SET_CONST(target, CKK_SHA224_HMAC);
	SET_CONST(target, CKK_SEED);
	SET_CONST(target, CKK_GOSTR3410);
	SET_CONST(target, CKK_GOSTR3411);
	SET_CONST(target, CKK_GOST28147);
	SET_CONST(target, CKK_VENDOR_DEFINED);
}

void declare_mechanisms(Local<Object> target) {
	Nan::HandleScope();
	SET_CONST(target, CKM_RSA_PKCS_KEY_PAIR_GEN);
	SET_CONST(target, CKM_RSA_PKCS);
	SET_CONST(target, CKM_RSA_9796);
	SET_CONST(target, CKM_RSA_X_509);
	SET_CONST(target, CKM_MD2_RSA_PKCS);
	SET_CONST(target, CKM_MD5_RSA_PKCS);
	SET_CONST(target, CKM_SHA1_RSA_PKCS);
	SET_CONST(target, CKM_RIPEMD128_RSA_PKCS);
	SET_CONST(target, CKM_RIPEMD160_RSA_PKCS);
	SET_CONST(target, CKM_RSA_PKCS_OAEP);
	SET_CONST(target, CKM_RSA_X9_31_KEY_PAIR_GEN);
	SET_CONST(target, CKM_RSA_X9_31);
	SET_CONST(target, CKM_SHA1_RSA_X9_31);
	SET_CONST(target, CKM_RSA_PKCS_PSS);
	SET_CONST(target, CKM_SHA1_RSA_PKCS_PSS);
	SET_CONST(target, CKM_DSA_KEY_PAIR_GEN);
	SET_CONST(target, CKM_DSA);
	SET_CONST(target, CKM_DSA_SHA1);
	SET_CONST(target, CKM_DSA_SHA224);
	SET_CONST(target, CKM_DSA_SHA256);
	SET_CONST(target, CKM_DSA_SHA384);
	SET_CONST(target, CKM_DSA_SHA512);
	SET_CONST(target, CKM_DH_PKCS_KEY_PAIR_GEN);
	SET_CONST(target, CKM_DH_PKCS_DERIVE);
	SET_CONST(target, CKM_X9_42_DH_KEY_PAIR_GEN);
	SET_CONST(target, CKM_X9_42_DH_DERIVE);
	SET_CONST(target, CKM_X9_42_DH_HYBRID_DERIVE);
	SET_CONST(target, CKM_X9_42_MQV_DERIVE);
	SET_CONST(target, CKM_SHA256_RSA_PKCS);
	SET_CONST(target, CKM_SHA384_RSA_PKCS);
	SET_CONST(target, CKM_SHA512_RSA_PKCS);
	SET_CONST(target, CKM_SHA256_RSA_PKCS_PSS);
	SET_CONST(target, CKM_SHA384_RSA_PKCS_PSS);
	SET_CONST(target, CKM_SHA512_RSA_PKCS_PSS);
	SET_CONST(target, CKM_SHA224_RSA_PKCS);
	SET_CONST(target, CKM_SHA224_RSA_PKCS_PSS);
	SET_CONST(target, CKM_RC2_KEY_GEN);
	SET_CONST(target, CKM_RC2_ECB);
	SET_CONST(target, CKM_RC2_CBC);
	SET_CONST(target, CKM_RC2_MAC);
	SET_CONST(target, CKM_RC2_MAC_GENERAL);
	SET_CONST(target, CKM_RC2_CBC_PAD);
	SET_CONST(target, CKM_RC4_KEY_GEN);
	SET_CONST(target, CKM_RC4);
	SET_CONST(target, CKM_DES_KEY_GEN);
	SET_CONST(target, CKM_DES_ECB);
	SET_CONST(target, CKM_DES_CBC);
	SET_CONST(target, CKM_DES_MAC);
	SET_CONST(target, CKM_DES_MAC_GENERAL);
	SET_CONST(target, CKM_DES_CBC_PAD);
	SET_CONST(target, CKM_DES2_KEY_GEN);
	SET_CONST(target, CKM_DES3_KEY_GEN);
	SET_CONST(target, CKM_DES3_ECB);
	SET_CONST(target, CKM_DES3_CBC);
	SET_CONST(target, CKM_DES3_MAC);
	SET_CONST(target, CKM_DES3_MAC_GENERAL);
	SET_CONST(target, CKM_DES3_CBC_PAD);
	SET_CONST(target, CKM_DES3_CMAC_GENERAL);
	SET_CONST(target, CKM_DES3_CMAC);
	SET_CONST(target, CKM_CDMF_KEY_GEN);
	SET_CONST(target, CKM_CDMF_ECB);
	SET_CONST(target, CKM_CDMF_CBC);
	SET_CONST(target, CKM_CDMF_MAC);
	SET_CONST(target, CKM_CDMF_MAC_GENERAL);
	SET_CONST(target, CKM_CDMF_CBC_PAD);
	SET_CONST(target, CKM_DES_OFB64);
	SET_CONST(target, CKM_DES_OFB8);
	SET_CONST(target, CKM_DES_CFB64);
	SET_CONST(target, CKM_DES_CFB8);
	SET_CONST(target, CKM_MD2);
	SET_CONST(target, CKM_MD2_HMAC);
	SET_CONST(target, CKM_MD2_HMAC_GENERAL);
	SET_CONST(target, CKM_MD5);
	SET_CONST(target, CKM_MD5_HMAC);
	SET_CONST(target, CKM_MD5_HMAC_GENERAL);
	SET_CONST(target, CKM_SHA_1);
	SET_CONST(target, CKM_SHA_1_HMAC);
	SET_CONST(target, CKM_SHA_1_HMAC_GENERAL);
	SET_CONST(target, CKM_RIPEMD128);
	SET_CONST(target, CKM_RIPEMD128_HMAC);
	SET_CONST(target, CKM_RIPEMD128_HMAC_GENERAL);
	SET_CONST(target, CKM_RIPEMD160);
	SET_CONST(target, CKM_RIPEMD160_HMAC);
	SET_CONST(target, CKM_RIPEMD160_HMAC_GENERAL);
	SET_CONST(target, CKM_SHA256);
	SET_CONST(target, CKM_SHA256_HMAC);
	SET_CONST(target, CKM_SHA256_HMAC_GENERAL);
	SET_CONST(target, CKM_SHA224);
	SET_CONST(target, CKM_SHA224_HMAC);
	SET_CONST(target, CKM_SHA224_HMAC_GENERAL);
	SET_CONST(target, CKM_SHA384);
	SET_CONST(target, CKM_SHA384_HMAC);
	SET_CONST(target, CKM_SHA384_HMAC_GENERAL);
	SET_CONST(target, CKM_SHA512);
	SET_CONST(target, CKM_SHA512_HMAC);
	SET_CONST(target, CKM_SHA512_HMAC_GENERAL);
	SET_CONST(target, CKM_SECURID_KEY_GEN);
	SET_CONST(target, CKM_SECURID);
	SET_CONST(target, CKM_HOTP_KEY_GEN);
	SET_CONST(target, CKM_HOTP);
	SET_CONST(target, CKM_ACTI);
	SET_CONST(target, CKM_ACTI_KEY_GEN);
	SET_CONST(target, CKM_CAST_KEY_GEN);
	SET_CONST(target, CKM_CAST_ECB);
	SET_CONST(target, CKM_CAST_CBC);
	SET_CONST(target, CKM_CAST_MAC);
	SET_CONST(target, CKM_CAST_MAC_GENERAL);
	SET_CONST(target, CKM_CAST_CBC_PAD);
	SET_CONST(target, CKM_CAST3_KEY_GEN);
	SET_CONST(target, CKM_CAST3_ECB);
	SET_CONST(target, CKM_CAST3_CBC);
	SET_CONST(target, CKM_CAST3_MAC);
	SET_CONST(target, CKM_CAST3_MAC_GENERAL);
	SET_CONST(target, CKM_CAST3_CBC_PAD);
	SET_CONST(target, CKM_CAST5_KEY_GEN);
	SET_CONST(target, CKM_CAST128_KEY_GEN);
	SET_CONST(target, CKM_CAST5_ECB);
	SET_CONST(target, CKM_CAST128_ECB);
	SET_CONST(target, CKM_CAST5_CBC);
	SET_CONST(target, CKM_CAST128_CBC);
	SET_CONST(target, CKM_CAST5_MAC);
	SET_CONST(target, CKM_CAST128_MAC);
	SET_CONST(target, CKM_CAST5_MAC_GENERAL);
	SET_CONST(target, CKM_CAST128_MAC_GENERAL);
	SET_CONST(target, CKM_CAST5_CBC_PAD);
	SET_CONST(target, CKM_CAST128_CBC_PAD);
	SET_CONST(target, CKM_RC5_KEY_GEN);
	SET_CONST(target, CKM_RC5_ECB);
	SET_CONST(target, CKM_RC5_CBC);
	SET_CONST(target, CKM_RC5_MAC);
	SET_CONST(target, CKM_RC5_MAC_GENERAL);
	SET_CONST(target, CKM_RC5_CBC_PAD);
	SET_CONST(target, CKM_IDEA_KEY_GEN);
	SET_CONST(target, CKM_IDEA_ECB);
	SET_CONST(target, CKM_IDEA_CBC);
	SET_CONST(target, CKM_IDEA_MAC);
	SET_CONST(target, CKM_IDEA_MAC_GENERAL);
	SET_CONST(target, CKM_IDEA_CBC_PAD);
	SET_CONST(target, CKM_GENERIC_SECRET_KEY_GEN);
	SET_CONST(target, CKM_CONCATENATE_BASE_AND_KEY);
	SET_CONST(target, CKM_CONCATENATE_BASE_AND_DATA);
	SET_CONST(target, CKM_CONCATENATE_DATA_AND_BASE);
	SET_CONST(target, CKM_XOR_BASE_AND_DATA);
	SET_CONST(target, CKM_EXTRACT_KEY_FROM_KEY);
	SET_CONST(target, CKM_SSL3_PRE_MASTER_KEY_GEN);
	SET_CONST(target, CKM_SSL3_MASTER_KEY_DERIVE);
	SET_CONST(target, CKM_SSL3_KEY_AND_MAC_DERIVE);
	SET_CONST(target, CKM_SSL3_MASTER_KEY_DERIVE_DH);
	SET_CONST(target, CKM_TLS_PRE_MASTER_KEY_GEN);
	SET_CONST(target, CKM_TLS_MASTER_KEY_DERIVE);
	SET_CONST(target, CKM_TLS_KEY_AND_MAC_DERIVE);
	SET_CONST(target, CKM_TLS_MASTER_KEY_DERIVE_DH);
	SET_CONST(target, CKM_TLS_PRF);
	SET_CONST(target, CKM_SSL3_MD5_MAC);
	SET_CONST(target, CKM_SSL3_SHA1_MAC);
	SET_CONST(target, CKM_MD5_KEY_DERIVATION);
	SET_CONST(target, CKM_MD2_KEY_DERIVATION);
	SET_CONST(target, CKM_SHA1_KEY_DERIVATION);
	SET_CONST(target, CKM_SHA256_KEY_DERIVATION);
	SET_CONST(target, CKM_SHA384_KEY_DERIVATION);
	SET_CONST(target, CKM_SHA512_KEY_DERIVATION);
	SET_CONST(target, CKM_SHA224_KEY_DERIVATION);
	SET_CONST(target, CKM_PBE_MD2_DES_CBC);
	SET_CONST(target, CKM_PBE_MD5_DES_CBC);
	SET_CONST(target, CKM_PBE_MD5_CAST_CBC);
	SET_CONST(target, CKM_PBE_MD5_CAST3_CBC);
	SET_CONST(target, CKM_PBE_MD5_CAST5_CBC);
	SET_CONST(target, CKM_PBE_MD5_CAST128_CBC);
	SET_CONST(target, CKM_PBE_SHA1_CAST5_CBC);
	SET_CONST(target, CKM_PBE_SHA1_CAST128_CBC);
	SET_CONST(target, CKM_PBE_SHA1_RC4_128);
	SET_CONST(target, CKM_PBE_SHA1_RC4_40);
	SET_CONST(target, CKM_PBE_SHA1_DES3_EDE_CBC);
	SET_CONST(target, CKM_PBE_SHA1_DES2_EDE_CBC);
	SET_CONST(target, CKM_PBE_SHA1_RC2_128_CBC);
	SET_CONST(target, CKM_PBE_SHA1_RC2_40_CBC);
	SET_CONST(target, CKM_PKCS5_PBKD2);
	SET_CONST(target, CKM_PBA_SHA1_WITH_SHA1_HMAC);
	SET_CONST(target, CKM_WTLS_PRE_MASTER_KEY_GEN);
	SET_CONST(target, CKM_WTLS_MASTER_KEY_DERIVE);
	SET_CONST(target, CKM_WTLS_MASTER_KEY_DERIVE_DH_ECC);
	SET_CONST(target, CKM_WTLS_PRF);
	SET_CONST(target, CKM_WTLS_SERVER_KEY_AND_MAC_DERIVE);
	SET_CONST(target, CKM_WTLS_CLIENT_KEY_AND_MAC_DERIVE);
	SET_CONST(target, CKM_KEY_WRAP_LYNKS);
	SET_CONST(target, CKM_KEY_WRAP_SET_OAEP);
	SET_CONST(target, CKM_CAMELLIA_KEY_GEN);
	SET_CONST(target, CKM_CAMELLIA_ECB);
	SET_CONST(target, CKM_CAMELLIA_CBC);
	SET_CONST(target, CKM_CAMELLIA_MAC);
	SET_CONST(target, CKM_CAMELLIA_MAC_GENERAL);
	SET_CONST(target, CKM_CAMELLIA_CBC_PAD);
	SET_CONST(target, CKM_CAMELLIA_ECB_ENCRYPT_DATA);
	SET_CONST(target, CKM_CAMELLIA_CBC_ENCRYPT_DATA);
	SET_CONST(target, CKM_CAMELLIA_CTR);
	SET_CONST(target, CKM_ARIA_KEY_GEN);
	SET_CONST(target, CKM_ARIA_ECB);
	SET_CONST(target, CKM_ARIA_CBC);
	SET_CONST(target, CKM_ARIA_MAC);
	SET_CONST(target, CKM_ARIA_MAC_GENERAL);
	SET_CONST(target, CKM_ARIA_CBC_PAD);
	SET_CONST(target, CKM_ARIA_ECB_ENCRYPT_DATA);
	SET_CONST(target, CKM_ARIA_CBC_ENCRYPT_DATA);
	SET_CONST(target, CKM_SEED_KEY_GEN);
	SET_CONST(target, CKM_SEED_ECB);
	SET_CONST(target, CKM_SEED_CBC);
	SET_CONST(target, CKM_SEED_MAC);
	SET_CONST(target, CKM_SEED_MAC_GENERAL);
	SET_CONST(target, CKM_SEED_CBC_PAD);
	SET_CONST(target, CKM_SEED_ECB_ENCRYPT_DATA);
	SET_CONST(target, CKM_SEED_CBC_ENCRYPT_DATA);
	SET_CONST(target, CKM_SKIPJACK_KEY_GEN);
	SET_CONST(target, CKM_SKIPJACK_ECB64);
	SET_CONST(target, CKM_SKIPJACK_CBC64);
	SET_CONST(target, CKM_SKIPJACK_OFB64);
	SET_CONST(target, CKM_SKIPJACK_CFB64);
	SET_CONST(target, CKM_SKIPJACK_CFB32);
	SET_CONST(target, CKM_SKIPJACK_CFB16);
	SET_CONST(target, CKM_SKIPJACK_CFB8);
	SET_CONST(target, CKM_SKIPJACK_WRAP);
	SET_CONST(target, CKM_SKIPJACK_PRIVATE_WRAP);
	SET_CONST(target, CKM_SKIPJACK_RELAYX);
	SET_CONST(target, CKM_KEA_KEY_PAIR_GEN);
	SET_CONST(target, CKM_KEA_KEY_DERIVE);
	SET_CONST(target, CKM_FORTEZZA_TIMESTAMP);
	SET_CONST(target, CKM_BATON_KEY_GEN);
	SET_CONST(target, CKM_BATON_ECB128);
	SET_CONST(target, CKM_BATON_ECB96);
	SET_CONST(target, CKM_BATON_CBC128);
	SET_CONST(target, CKM_BATON_COUNTER);
	SET_CONST(target, CKM_BATON_SHUFFLE);
	SET_CONST(target, CKM_BATON_WRAP);
	SET_CONST(target, CKM_ECDSA_KEY_PAIR_GEN);
	SET_CONST(target, CKM_EC_KEY_PAIR_GEN);
	SET_CONST(target, CKM_ECDSA);
	SET_CONST(target, CKM_ECDSA_SHA1);
	SET_CONST(target, CKM_ECDSA_SHA224);
	SET_CONST(target, CKM_ECDSA_SHA256);
	SET_CONST(target, CKM_ECDSA_SHA384);
	SET_CONST(target, CKM_ECDSA_SHA512);
	SET_CONST(target, CKM_ECDH1_DERIVE);
	SET_CONST(target, CKM_ECDH1_COFACTOR_DERIVE);
	SET_CONST(target, CKM_ECMQV_DERIVE);
	SET_CONST(target, CKM_JUNIPER_KEY_GEN);
	SET_CONST(target, CKM_JUNIPER_ECB128);
	SET_CONST(target, CKM_JUNIPER_CBC128);
	SET_CONST(target, CKM_JUNIPER_COUNTER);
	SET_CONST(target, CKM_JUNIPER_SHUFFLE);
	SET_CONST(target, CKM_JUNIPER_WRAP);
	SET_CONST(target, CKM_FASTHASH);
	SET_CONST(target, CKM_AES_KEY_GEN);
	SET_CONST(target, CKM_AES_ECB);
	SET_CONST(target, CKM_AES_CBC);
	SET_CONST(target, CKM_AES_MAC);
	SET_CONST(target, CKM_AES_MAC_GENERAL);
	SET_CONST(target, CKM_AES_CBC_PAD);
	SET_CONST(target, CKM_AES_CTR);
	SET_CONST(target, CKM_AES_CTS);
	SET_CONST(target, CKM_AES_CMAC);
	SET_CONST(target, CKM_AES_CMAC_GENERAL);
	SET_CONST(target, CKM_BLOWFISH_KEY_GEN);
	SET_CONST(target, CKM_BLOWFISH_CBC);
	SET_CONST(target, CKM_TWOFISH_KEY_GEN);
	SET_CONST(target, CKM_TWOFISH_CBC);
	SET_CONST(target, CKM_AES_GCM);
	SET_CONST(target, CKM_AES_CCM);
	SET_CONST(target, CKM_AES_KEY_WRAP);
	SET_CONST(target, CKM_AES_KEY_WRAP_PAD);
	SET_CONST(target, CKM_BLOWFISH_CBC_PAD);
	SET_CONST(target, CKM_TWOFISH_CBC_PAD);
	SET_CONST(target, CKM_DES_ECB_ENCRYPT_DATA);
	SET_CONST(target, CKM_DES_CBC_ENCRYPT_DATA);
	SET_CONST(target, CKM_DES3_ECB_ENCRYPT_DATA);
	SET_CONST(target, CKM_DES3_CBC_ENCRYPT_DATA);
	SET_CONST(target, CKM_AES_ECB_ENCRYPT_DATA);
	SET_CONST(target, CKM_AES_CBC_ENCRYPT_DATA);
	SET_CONST(target, CKM_GOSTR3410_KEY_PAIR_GEN);
	SET_CONST(target, CKM_GOSTR3410);
	SET_CONST(target, CKM_GOSTR3410_WITH_GOSTR3411);
	SET_CONST(target, CKM_GOSTR3410_KEY_WRAP);
	SET_CONST(target, CKM_GOSTR3410_DERIVE);
	SET_CONST(target, CKM_GOSTR3411);
	SET_CONST(target, CKM_GOSTR3411_HMAC);
	SET_CONST(target, CKM_GOST28147_KEY_GEN);
	SET_CONST(target, CKM_GOST28147_ECB);
	SET_CONST(target, CKM_GOST28147);
	SET_CONST(target, CKM_GOST28147_MAC);
	SET_CONST(target, CKM_GOST28147_KEY_WRAP);
	SET_CONST(target, CKM_DSA_PARAMETER_GEN);
	SET_CONST(target, CKM_DH_PKCS_PARAMETER_GEN);
	SET_CONST(target, CKM_X9_42_DH_PARAMETER_GEN);
	SET_CONST(target, CKM_AES_OFB);
	SET_CONST(target, CKM_AES_CFB64);
	SET_CONST(target, CKM_AES_CFB8);
	SET_CONST(target, CKM_AES_CFB128);
	SET_CONST(target, CKM_RSA_PKCS_TPM_1_1);
	SET_CONST(target, CKM_RSA_PKCS_OAEP_TPM_1_1);
	SET_CONST(target, CKM_VENDOR_DEFINED);
}

void declare_certificates(Local<Object> target) {
	Nan::HandleScope();
	SET_CONST(target, CKC_WTLS);
	SET_CONST(target, CKC_X_509);
	SET_CONST(target, CKC_X_509_ATTR_CERT);
}

void declare_mgf(Local<Object> target) {
	Nan::HandleScope();
	SET_CONST(target, CKG_MGF1_SHA1);
	SET_CONST(target, CKG_MGF1_SHA256);
	SET_CONST(target, CKG_MGF1_SHA384);
	SET_CONST(target, CKG_MGF1_SHA512);
	SET_CONST(target, CKG_MGF1_SHA224);
}

void declare_kdf(Local<Object> target) {
	Nan::HandleScope();
	SET_CONST(target, CKD_NULL);
	SET_CONST(target, CKD_SHA1_KDF);
	SET_CONST(target, CKD_SHA1_KDF_ASN1);
	SET_CONST(target, CKD_SHA1_KDF_CONCATENATE);
	SET_CONST(target, CKD_SHA224_KDF);
	SET_CONST(target, CKD_SHA256_KDF);
	SET_CONST(target, CKD_SHA384_KDF);
	SET_CONST(target, CKD_SHA512_KDF);
	SET_CONST(target, CKD_CPDIVERSIFY_KDF);
}

void declare_params(Local<Object> target) {
	Nan::HandleScope();
	SET_CONST(target, CK_PARAMS_AES_CBC);
	SET_CONST(target, CK_PARAMS_AES_CCM);
	SET_CONST(target, CK_PARAMS_AES_GCM);
	SET_CONST(target, CK_PARAMS_RSA_OAEP);
	SET_CONST(target, CK_PARAMS_RSA_PSS);
	SET_CONST(target, CK_PARAMS_EC_DH);
}
