/**
 * @file const.cpp
 * @brief Constants for PKCS11JS module.
 *
 * This file contains functions to set constant values in the exports object for the PKCS11JS module.
 * The constants include CKR_* (Cryptoki Return Codes), CKP_* (Cryptoki Parameters), CKF_* (Cryptoki Flags),
 * CKA_* (Cryptoki Attributes), CKO_* (Cryptoki Object Classes), and CKM_* (Cryptoki Mechanisms).
 */

#include "common.h"

/**
 * @brief Sets a constant value in the exports object.
 *
 * This function sets a constant value with the specified name and value in the exports object.
 *
 * @param env The N-API environment.
 * @param exports The N-API exports object.
 * @param name The name of the constant.
 * @param value The value of the constant.
 */
void set_const(napi_env env, napi_value exports, const char *name, uint32_t value)
{
  napi_value constant;
  napi_create_uint32(env, value, &constant);
  napi_set_named_property(env, exports, name, constant);
}

/**
 * @brief Macro to simplify setting a constant value in the exports object.
 * This macro expands to a call to the `set_const` function with the specified constant name.
 *
 * @param name The name of the constant.
 */
#define SET_CONST(name) set_const(env, exports, #name, name)

/**
 * @brief Set CKR_* constants on the exports object.
 *
 * @param env The N-API environment.
 * @param exports The N-API exports object.
 */
void set_ckr(napi_env env, napi_value exports)
{
  SET_CONST(CKR_OK);
  SET_CONST(CKR_CANCEL);
  SET_CONST(CKR_HOST_MEMORY);
  SET_CONST(CKR_SLOT_ID_INVALID);
  SET_CONST(CKR_GENERAL_ERROR);
  SET_CONST(CKR_FUNCTION_FAILED);
  SET_CONST(CKR_ARGUMENTS_BAD);
  SET_CONST(CKR_NO_EVENT);
  SET_CONST(CKR_NEED_TO_CREATE_THREADS);
  SET_CONST(CKR_CANT_LOCK);
  SET_CONST(CKR_ATTRIBUTE_READ_ONLY);
  SET_CONST(CKR_ATTRIBUTE_SENSITIVE);
  SET_CONST(CKR_ATTRIBUTE_TYPE_INVALID);
  SET_CONST(CKR_ATTRIBUTE_VALUE_INVALID);
  SET_CONST(CKR_DATA_INVALID);
  SET_CONST(CKR_DATA_LEN_RANGE);
  SET_CONST(CKR_DEVICE_ERROR);
  SET_CONST(CKR_DEVICE_MEMORY);
  SET_CONST(CKR_DEVICE_REMOVED);
  SET_CONST(CKR_ENCRYPTED_DATA_INVALID);
  SET_CONST(CKR_ENCRYPTED_DATA_LEN_RANGE);
  SET_CONST(CKR_FUNCTION_CANCELED);
  SET_CONST(CKR_FUNCTION_NOT_PARALLEL);
  SET_CONST(CKR_FUNCTION_NOT_SUPPORTED);
  SET_CONST(CKR_KEY_HANDLE_INVALID);
  SET_CONST(CKR_KEY_SIZE_RANGE);
  SET_CONST(CKR_KEY_TYPE_INCONSISTENT);
  SET_CONST(CKR_KEY_NOT_NEEDED);
  SET_CONST(CKR_KEY_CHANGED);
  SET_CONST(CKR_KEY_NEEDED);
  SET_CONST(CKR_KEY_INDIGESTIBLE);
  SET_CONST(CKR_KEY_FUNCTION_NOT_PERMITTED);
  SET_CONST(CKR_KEY_NOT_WRAPPABLE);
  SET_CONST(CKR_KEY_UNEXTRACTABLE);
  SET_CONST(CKR_MECHANISM_INVALID);
  SET_CONST(CKR_MECHANISM_PARAM_INVALID);
  SET_CONST(CKR_OBJECT_HANDLE_INVALID);
  SET_CONST(CKR_OPERATION_ACTIVE);
  SET_CONST(CKR_OPERATION_NOT_INITIALIZED);
  SET_CONST(CKR_PIN_INCORRECT);
  SET_CONST(CKR_PIN_INVALID);
  SET_CONST(CKR_PIN_LEN_RANGE);
  SET_CONST(CKR_PIN_EXPIRED);
  SET_CONST(CKR_PIN_LOCKED);
  SET_CONST(CKR_SESSION_CLOSED);
  SET_CONST(CKR_SESSION_COUNT);
  SET_CONST(CKR_SESSION_HANDLE_INVALID);
  SET_CONST(CKR_SESSION_PARALLEL_NOT_SUPPORTED);
  SET_CONST(CKR_SESSION_READ_ONLY);
  SET_CONST(CKR_SESSION_EXISTS);
  SET_CONST(CKR_SESSION_READ_ONLY_EXISTS);
  SET_CONST(CKR_SESSION_READ_WRITE_SO_EXISTS);
  SET_CONST(CKR_SIGNATURE_INVALID);
  SET_CONST(CKR_SIGNATURE_LEN_RANGE);
  SET_CONST(CKR_TEMPLATE_INCOMPLETE);
  SET_CONST(CKR_TEMPLATE_INCONSISTENT);
  SET_CONST(CKR_TOKEN_NOT_PRESENT);
  SET_CONST(CKR_TOKEN_NOT_RECOGNIZED);
  SET_CONST(CKR_TOKEN_WRITE_PROTECTED);
  SET_CONST(CKR_UNWRAPPING_KEY_HANDLE_INVALID);
  SET_CONST(CKR_UNWRAPPING_KEY_SIZE_RANGE);
  SET_CONST(CKR_UNWRAPPING_KEY_TYPE_INCONSISTENT);
  SET_CONST(CKR_USER_ALREADY_LOGGED_IN);
  SET_CONST(CKR_USER_NOT_LOGGED_IN);
  SET_CONST(CKR_USER_PIN_NOT_INITIALIZED);
  SET_CONST(CKR_USER_TYPE_INVALID);
  SET_CONST(CKR_USER_ANOTHER_ALREADY_LOGGED_IN);
  SET_CONST(CKR_USER_TOO_MANY_TYPES);
  SET_CONST(CKR_WRAPPED_KEY_INVALID);
  SET_CONST(CKR_WRAPPED_KEY_LEN_RANGE);
  SET_CONST(CKR_WRAPPING_KEY_HANDLE_INVALID);
  SET_CONST(CKR_WRAPPING_KEY_SIZE_RANGE);
  SET_CONST(CKR_WRAPPING_KEY_TYPE_INCONSISTENT);
  SET_CONST(CKR_RANDOM_SEED_NOT_SUPPORTED);
  SET_CONST(CKR_RANDOM_NO_RNG);
  SET_CONST(CKR_DOMAIN_PARAMS_INVALID);
  SET_CONST(CKR_BUFFER_TOO_SMALL);
  SET_CONST(CKR_SAVED_STATE_INVALID);
  SET_CONST(CKR_INFORMATION_SENSITIVE);
  SET_CONST(CKR_STATE_UNSAVEABLE);
  SET_CONST(CKR_CRYPTOKI_NOT_INITIALIZED);
  SET_CONST(CKR_CRYPTOKI_ALREADY_INITIALIZED);
  SET_CONST(CKR_MUTEX_BAD);
  SET_CONST(CKR_MUTEX_NOT_LOCKED);
  SET_CONST(CKR_NEW_PIN_MODE);
  SET_CONST(CKR_NEXT_OTP);
  SET_CONST(CKR_EXCEEDED_MAX_ITERATIONS);
  SET_CONST(CKR_FIPS_SELF_TEST_FAILED);
  SET_CONST(CKR_LIBRARY_LOAD_FAILED);
  SET_CONST(CKR_PIN_TOO_WEAK);
  SET_CONST(CKR_PUBLIC_KEY_INVALID);
  SET_CONST(CKR_FUNCTION_REJECTED);
}

/**
 * @brief Set CKP_* constants on the exports object.
 *
 * @param env The N-API environment.
 * @param exports The N-API exports object.
 */
void set_ckp(napi_env env, napi_value exports)
{
  SET_CONST(CK_PARAMS_BUFFER);
  SET_CONST(CK_PARAMS_AES_CBC);
  SET_CONST(CK_PARAMS_AES_CCM);
  SET_CONST(CK_PARAMS_AES_GCM);
  SET_CONST(CK_PARAMS_RSA_OAEP);
  SET_CONST(CK_PARAMS_RSA_PSS);
  SET_CONST(CK_PARAMS_EC_DH);
  SET_CONST(CK_PARAMS_AES_GCM_v240);
  SET_CONST(CK_PARAMS_ECDH2_DERIVE);
  SET_CONST(CK_PARAMS_ECMQV_DERIVE);
  SET_CONST(CK_PARAMS_X9_42_DH1_DERIVE);
  SET_CONST(CK_PARAMS_X9_42_DH2_DERIVE);
  SET_CONST(CK_PARAMS_X9_42_MQV_DERIVE);
  SET_CONST(CK_PARAMS_KEA_DERIVE);
  SET_CONST(CK_PARAMS_RC2);
  SET_CONST(CK_PARAMS_RC2_CBC);
  SET_CONST(CK_PARAMS_RC2_MAC_GENERAL);
  SET_CONST(CK_PARAMS_RC5);
  SET_CONST(CK_PARAMS_RC5_CBC);
  SET_CONST(CK_PARAMS_RC5_MAC_GENERAL);
  SET_CONST(CK_PARAMS_DES_CBC_ENCRYPT_DATA);
  SET_CONST(CK_PARAMS_SKIPJACK_PRIVATE_WRAP);
  SET_CONST(CK_PARAMS_SKIPJACK_RELAYX);
  SET_CONST(CK_PARAMS_PBE);
}

/**
 * @brief Set CKF_* constants on the exports object.
 *
 * @param env The N-API environment.
 * @param exports The N-API exports object.
 */
void set_ckf(napi_env env, napi_value exports)
{
  // Slot flags
  SET_CONST(CKF_TOKEN_PRESENT);
  SET_CONST(CKF_REMOVABLE_DEVICE);
  SET_CONST(CKF_HW_SLOT);

  // Token flags
  SET_CONST(CKF_RNG);
  SET_CONST(CKF_WRITE_PROTECTED);
  SET_CONST(CKF_LOGIN_REQUIRED);
  SET_CONST(CKF_USER_PIN_INITIALIZED);
  SET_CONST(CKF_RESTORE_KEY_NOT_NEEDED);
  SET_CONST(CKF_CLOCK_ON_TOKEN);
  SET_CONST(CKF_PROTECTED_AUTHENTICATION_PATH);
  SET_CONST(CKF_DUAL_CRYPTO_OPERATIONS);
  SET_CONST(CKF_TOKEN_INITIALIZED);
  SET_CONST(CKF_SECONDARY_AUTHENTICATION);
  SET_CONST(CKF_USER_PIN_COUNT_LOW);
  SET_CONST(CKF_USER_PIN_FINAL_TRY);
  SET_CONST(CKF_USER_PIN_LOCKED);
  SET_CONST(CKF_USER_PIN_TO_BE_CHANGED);
  SET_CONST(CKF_SO_PIN_COUNT_LOW);
  SET_CONST(CKF_SO_PIN_FINAL_TRY);
  SET_CONST(CKF_SO_PIN_LOCKED);
  SET_CONST(CKF_SO_PIN_TO_BE_CHANGED);
  SET_CONST(CKF_ERROR_STATE);

  // Session flags
  SET_CONST(CKF_RW_SESSION);
  SET_CONST(CKF_SERIAL_SESSION);

  // Attribute flags
  SET_CONST(CKF_ARRAY_ATTRIBUTE);

  // Mechanism flags
  SET_CONST(CKF_HW);
  SET_CONST(CKF_ENCRYPT);
  SET_CONST(CKF_DECRYPT);
  SET_CONST(CKF_DIGEST);
  SET_CONST(CKF_SIGN);
  SET_CONST(CKF_SIGN_RECOVER);
  SET_CONST(CKF_VERIFY);
  SET_CONST(CKF_VERIFY_RECOVER);
  SET_CONST(CKF_GENERATE);
  SET_CONST(CKF_GENERATE_KEY_PAIR);
  SET_CONST(CKF_WRAP);
  SET_CONST(CKF_UNWRAP);
  SET_CONST(CKF_DERIVE);
  SET_CONST(CKF_EC_F_P);
  SET_CONST(CKF_EC_F_2M);
  SET_CONST(CKF_EC_ECPARAMETERS);
  SET_CONST(CKF_EC_NAMEDCURVE);
  SET_CONST(CKF_EC_UNCOMPRESS);
  SET_CONST(CKF_EC_COMPRESS);
  SET_CONST(CKF_EXTENSION);

  // Initialization flags
  SET_CONST(CKF_LIBRARY_CANT_CREATE_OS_THREADS);
  SET_CONST(CKF_OS_LOCKING_OK);

  // Wait flags
  SET_CONST(CKF_DONT_BLOCK);

  // OTP flags
  SET_CONST(CKF_NEXT_OTP);
  SET_CONST(CKF_EXCLUDE_TIME);
  SET_CONST(CKF_EXCLUDE_COUNTER);
  SET_CONST(CKF_EXCLUDE_CHALLENGE);
  SET_CONST(CKF_EXCLUDE_PIN);
  SET_CONST(CKF_USER_FRIENDLY_OTP);
}

/**
 * @brief Set CKA_* constants on the exports object.
 *
 * @param env The N-API environment.
 * @param exports The N-API exports object.
 */
void set_cka(napi_env env, napi_value exports)
{
  SET_CONST(CKA_CLASS);
  SET_CONST(CKA_TOKEN);
  SET_CONST(CKA_PRIVATE);
  SET_CONST(CKA_LABEL);
  SET_CONST(CKA_APPLICATION);
  SET_CONST(CKA_VALUE);
  SET_CONST(CKA_OBJECT_ID);
  SET_CONST(CKA_CERTIFICATE_TYPE);
  SET_CONST(CKA_ISSUER);
  SET_CONST(CKA_SERIAL_NUMBER);
  SET_CONST(CKA_AC_ISSUER);
  SET_CONST(CKA_OWNER);
  SET_CONST(CKA_ATTR_TYPES);
  SET_CONST(CKA_TRUSTED);
  SET_CONST(CKA_CERTIFICATE_CATEGORY);
  SET_CONST(CKA_JAVA_MIDP_SECURITY_DOMAIN);
  SET_CONST(CKA_URL);
  SET_CONST(CKA_HASH_OF_SUBJECT_PUBLIC_KEY);
  SET_CONST(CKA_HASH_OF_ISSUER_PUBLIC_KEY);
  SET_CONST(CKA_NAME_HASH_ALGORITHM);
  SET_CONST(CKA_CHECK_VALUE);
  SET_CONST(CKA_KEY_TYPE);
  SET_CONST(CKA_SUBJECT);
  SET_CONST(CKA_ID);
  SET_CONST(CKA_SENSITIVE);
  SET_CONST(CKA_ENCRYPT);
  SET_CONST(CKA_DECRYPT);
  SET_CONST(CKA_WRAP);
  SET_CONST(CKA_UNWRAP);
  SET_CONST(CKA_SIGN);
  SET_CONST(CKA_SIGN_RECOVER);
  SET_CONST(CKA_VERIFY);
  SET_CONST(CKA_VERIFY_RECOVER);
  SET_CONST(CKA_DERIVE);
  SET_CONST(CKA_START_DATE);
  SET_CONST(CKA_END_DATE);
  SET_CONST(CKA_MODULUS);
  SET_CONST(CKA_MODULUS_BITS);
  SET_CONST(CKA_PUBLIC_EXPONENT);
  SET_CONST(CKA_PRIVATE_EXPONENT);
  SET_CONST(CKA_PRIME_1);
  SET_CONST(CKA_PRIME_2);
  SET_CONST(CKA_EXPONENT_1);
  SET_CONST(CKA_EXPONENT_2);
  SET_CONST(CKA_COEFFICIENT);
  SET_CONST(CKA_PRIME);
  SET_CONST(CKA_SUBPRIME);
  SET_CONST(CKA_BASE);
  SET_CONST(CKA_PRIME_BITS);
  SET_CONST(CKA_SUBPRIME_BITS);
  SET_CONST(CKA_SUB_PRIME_BITS);
  SET_CONST(CKA_VALUE_BITS);
  SET_CONST(CKA_VALUE_LEN);
  SET_CONST(CKA_EXTRACTABLE);
  SET_CONST(CKA_LOCAL);
  SET_CONST(CKA_NEVER_EXTRACTABLE);
  SET_CONST(CKA_ALWAYS_SENSITIVE);
  SET_CONST(CKA_KEY_GEN_MECHANISM);
  SET_CONST(CKA_MODIFIABLE);
  SET_CONST(CKA_COPYABLE);
  SET_CONST(CKA_DESTROYABLE);
  SET_CONST(CKA_ECDSA_PARAMS);
  SET_CONST(CKA_EC_PARAMS);
  SET_CONST(CKA_EC_POINT);
  SET_CONST(CKA_SECONDARY_AUTH);
  SET_CONST(CKA_AUTH_PIN_FLAGS);
  SET_CONST(CKA_ALWAYS_AUTHENTICATE);
  SET_CONST(CKA_WRAP_WITH_TRUSTED);
  SET_CONST(CKA_WRAP_TEMPLATE);
  SET_CONST(CKA_UNWRAP_TEMPLATE);
  SET_CONST(CKA_DERIVE_TEMPLATE);
  SET_CONST(CKA_OTP_FORMAT);
  SET_CONST(CKA_OTP_LENGTH);
  SET_CONST(CKA_OTP_TIME_INTERVAL);
  SET_CONST(CKA_OTP_USER_FRIENDLY_MODE);
  SET_CONST(CKA_OTP_CHALLENGE_REQUIREMENT);
  SET_CONST(CKA_OTP_TIME_REQUIREMENT);
  SET_CONST(CKA_OTP_COUNTER_REQUIREMENT);
  SET_CONST(CKA_OTP_PIN_REQUIREMENT);
  SET_CONST(CKA_OTP_COUNTER);
  SET_CONST(CKA_OTP_TIME);
  SET_CONST(CKA_OTP_USER_IDENTIFIER);
  SET_CONST(CKA_OTP_SERVICE_IDENTIFIER);
  SET_CONST(CKA_OTP_SERVICE_LOGO);
  SET_CONST(CKA_OTP_SERVICE_LOGO_TYPE);
  SET_CONST(CKA_GOSTR3410_PARAMS);
  SET_CONST(CKA_GOSTR3411_PARAMS);
  SET_CONST(CKA_GOST28147_PARAMS);
  SET_CONST(CKA_HW_FEATURE_TYPE);
  SET_CONST(CKA_RESET_ON_INIT);
  SET_CONST(CKA_HAS_RESET);
  SET_CONST(CKA_PIXEL_X);
  SET_CONST(CKA_PIXEL_Y);
  SET_CONST(CKA_RESOLUTION);
  SET_CONST(CKA_CHAR_ROWS);
  SET_CONST(CKA_CHAR_COLUMNS);
  SET_CONST(CKA_COLOR);
  SET_CONST(CKA_BITS_PER_PIXEL);
  SET_CONST(CKA_CHAR_SETS);
  SET_CONST(CKA_ENCODING_METHODS);
  SET_CONST(CKA_MIME_TYPES);
  SET_CONST(CKA_MECHANISM_TYPE);
  SET_CONST(CKA_REQUIRED_CMS_ATTRIBUTES);
  SET_CONST(CKA_DEFAULT_CMS_ATTRIBUTES);
  SET_CONST(CKA_SUPPORTED_CMS_ATTRIBUTES);
  SET_CONST(CKA_ALLOWED_MECHANISMS);
  SET_CONST(CKA_VENDOR_DEFINED);
}

/**
 * @brief Set CKO_* constants on the exports object.
 *
 * @param env The N-API environment.
 * @param exports The N-API exports object.
 */
void set_cko(napi_env env, napi_value exports)
{
  SET_CONST(CKO_DATA);
  SET_CONST(CKO_CERTIFICATE);
  SET_CONST(CKO_PUBLIC_KEY);
  SET_CONST(CKO_PRIVATE_KEY);
  SET_CONST(CKO_SECRET_KEY);
  SET_CONST(CKO_HW_FEATURE);
  SET_CONST(CKO_DOMAIN_PARAMETERS);
  SET_CONST(CKO_MECHANISM);
  SET_CONST(CKO_OTP_KEY);
  SET_CONST(CKO_VENDOR_DEFINED);
}

/**
 * @brief Set CKM_* constants on the exports object.
 *
 * @param env The N-API environment.
 * @param exports The N-API exports object.
 */
void set_ckm(napi_env env, napi_value exports)
{
  SET_CONST(CKM_RSA_PKCS_KEY_PAIR_GEN);
  SET_CONST(CKM_RSA_PKCS);
  SET_CONST(CKM_RSA_9796);
  SET_CONST(CKM_RSA_X_509);
  SET_CONST(CKM_MD2_RSA_PKCS);
  SET_CONST(CKM_MD5_RSA_PKCS);
  SET_CONST(CKM_SHA1_RSA_PKCS);
  SET_CONST(CKM_RIPEMD128_RSA_PKCS);
  SET_CONST(CKM_RIPEMD160_RSA_PKCS);
  SET_CONST(CKM_RSA_PKCS_OAEP);
  SET_CONST(CKM_RSA_X9_31_KEY_PAIR_GEN);
  SET_CONST(CKM_RSA_X9_31);
  SET_CONST(CKM_SHA1_RSA_X9_31);
  SET_CONST(CKM_RSA_PKCS_PSS);
  SET_CONST(CKM_SHA1_RSA_PKCS_PSS);
  SET_CONST(CKM_DSA_KEY_PAIR_GEN);
  SET_CONST(CKM_DSA);
  SET_CONST(CKM_DSA_SHA1);
  SET_CONST(CKM_DSA_SHA224);
  SET_CONST(CKM_DSA_SHA256);
  SET_CONST(CKM_DSA_SHA384);
  SET_CONST(CKM_DSA_SHA512);
  SET_CONST(CKM_DH_PKCS_KEY_PAIR_GEN);
  SET_CONST(CKM_DH_PKCS_DERIVE);
  SET_CONST(CKM_X9_42_DH_KEY_PAIR_GEN);
  SET_CONST(CKM_X9_42_DH_DERIVE);
  SET_CONST(CKM_X9_42_DH_HYBRID_DERIVE);
  SET_CONST(CKM_X9_42_MQV_DERIVE);
  SET_CONST(CKM_SHA256_RSA_PKCS);
  SET_CONST(CKM_SHA384_RSA_PKCS);
  SET_CONST(CKM_SHA512_RSA_PKCS);
  SET_CONST(CKM_SHA256_RSA_PKCS_PSS);
  SET_CONST(CKM_SHA384_RSA_PKCS_PSS);
  SET_CONST(CKM_SHA512_RSA_PKCS_PSS);
  SET_CONST(CKM_SHA224_RSA_PKCS);
  SET_CONST(CKM_SHA224_RSA_PKCS_PSS);
  SET_CONST(CKM_RC2_KEY_GEN);
  SET_CONST(CKM_RC2_ECB);
  SET_CONST(CKM_RC2_CBC);
  SET_CONST(CKM_RC2_MAC);
  SET_CONST(CKM_RC2_MAC_GENERAL);
  SET_CONST(CKM_RC2_CBC_PAD);
  SET_CONST(CKM_RC4_KEY_GEN);
  SET_CONST(CKM_RC4);
  SET_CONST(CKM_DES_KEY_GEN);
  SET_CONST(CKM_DES_ECB);
  SET_CONST(CKM_DES_CBC);
  SET_CONST(CKM_DES_MAC);
  SET_CONST(CKM_DES_MAC_GENERAL);
  SET_CONST(CKM_DES_CBC_PAD);
  SET_CONST(CKM_DES2_KEY_GEN);
  SET_CONST(CKM_DES3_KEY_GEN);
  SET_CONST(CKM_DES3_ECB);
  SET_CONST(CKM_DES3_CBC);
  SET_CONST(CKM_DES3_MAC);
  SET_CONST(CKM_DES3_MAC_GENERAL);
  SET_CONST(CKM_DES3_CBC_PAD);
  SET_CONST(CKM_DES3_CMAC_GENERAL);
  SET_CONST(CKM_DES3_CMAC);
  SET_CONST(CKM_CDMF_KEY_GEN);
  SET_CONST(CKM_CDMF_ECB);
  SET_CONST(CKM_CDMF_CBC);
  SET_CONST(CKM_CDMF_MAC);
  SET_CONST(CKM_CDMF_MAC_GENERAL);
  SET_CONST(CKM_CDMF_CBC_PAD);
  SET_CONST(CKM_DES_OFB64);
  SET_CONST(CKM_DES_OFB8);
  SET_CONST(CKM_DES_CFB64);
  SET_CONST(CKM_DES_CFB8);
  SET_CONST(CKM_MD2);
  SET_CONST(CKM_MD2_HMAC);
  SET_CONST(CKM_MD2_HMAC_GENERAL);
  SET_CONST(CKM_MD5);
  SET_CONST(CKM_MD5_HMAC);
  SET_CONST(CKM_MD5_HMAC_GENERAL);
  SET_CONST(CKM_SHA_1);
  SET_CONST(CKM_SHA_1_HMAC);
  SET_CONST(CKM_SHA_1_HMAC_GENERAL);
  SET_CONST(CKM_RIPEMD128);
  SET_CONST(CKM_RIPEMD128_HMAC);
  SET_CONST(CKM_RIPEMD128_HMAC_GENERAL);
  SET_CONST(CKM_RIPEMD160);
  SET_CONST(CKM_RIPEMD160_HMAC);
  SET_CONST(CKM_RIPEMD160_HMAC_GENERAL);
  SET_CONST(CKM_SHA256);
  SET_CONST(CKM_SHA256_HMAC);
  SET_CONST(CKM_SHA256_HMAC_GENERAL);
  SET_CONST(CKM_SHA224);
  SET_CONST(CKM_SHA224_HMAC);
  SET_CONST(CKM_SHA224_HMAC_GENERAL);
  SET_CONST(CKM_SHA384);
  SET_CONST(CKM_SHA384_HMAC);
  SET_CONST(CKM_SHA384_HMAC_GENERAL);
  SET_CONST(CKM_SHA512);
  SET_CONST(CKM_SHA512_HMAC);
  SET_CONST(CKM_SHA512_HMAC_GENERAL);
  SET_CONST(CKM_SECURID_KEY_GEN);
  SET_CONST(CKM_SECURID);
  SET_CONST(CKM_HOTP_KEY_GEN);
  SET_CONST(CKM_HOTP);
  SET_CONST(CKM_ACTI);
  SET_CONST(CKM_ACTI_KEY_GEN);
  SET_CONST(CKM_CAST_KEY_GEN);
  SET_CONST(CKM_CAST_ECB);
  SET_CONST(CKM_CAST_CBC);
  SET_CONST(CKM_CAST_MAC);
  SET_CONST(CKM_CAST_MAC_GENERAL);
  SET_CONST(CKM_CAST_CBC_PAD);
  SET_CONST(CKM_CAST3_KEY_GEN);
  SET_CONST(CKM_CAST3_ECB);
  SET_CONST(CKM_CAST3_CBC);
  SET_CONST(CKM_CAST3_MAC);
  SET_CONST(CKM_CAST3_MAC_GENERAL);
  SET_CONST(CKM_CAST3_CBC_PAD);
  SET_CONST(CKM_CAST5_KEY_GEN);
  SET_CONST(CKM_CAST128_KEY_GEN);
  SET_CONST(CKM_CAST5_ECB);
  SET_CONST(CKM_CAST128_ECB);
  SET_CONST(CKM_CAST5_CBC);
  SET_CONST(CKM_CAST128_CBC);
  SET_CONST(CKM_CAST5_MAC);
  SET_CONST(CKM_CAST128_MAC);
  SET_CONST(CKM_CAST5_MAC_GENERAL);
  SET_CONST(CKM_CAST128_MAC_GENERAL);
  SET_CONST(CKM_CAST5_CBC_PAD);
  SET_CONST(CKM_CAST128_CBC_PAD);
  SET_CONST(CKM_RC5_KEY_GEN);
  SET_CONST(CKM_RC5_ECB);
  SET_CONST(CKM_RC5_CBC);
  SET_CONST(CKM_RC5_MAC);
  SET_CONST(CKM_RC5_MAC_GENERAL);
  SET_CONST(CKM_RC5_CBC_PAD);
  SET_CONST(CKM_IDEA_KEY_GEN);
  SET_CONST(CKM_IDEA_ECB);
  SET_CONST(CKM_IDEA_CBC);
  SET_CONST(CKM_IDEA_MAC);
  SET_CONST(CKM_IDEA_MAC_GENERAL);
  SET_CONST(CKM_IDEA_CBC_PAD);
  SET_CONST(CKM_GENERIC_SECRET_KEY_GEN);
  SET_CONST(CKM_CONCATENATE_BASE_AND_KEY);
  SET_CONST(CKM_CONCATENATE_BASE_AND_DATA);
  SET_CONST(CKM_CONCATENATE_DATA_AND_BASE);
  SET_CONST(CKM_XOR_BASE_AND_DATA);
  SET_CONST(CKM_EXTRACT_KEY_FROM_KEY);
  SET_CONST(CKM_SSL3_PRE_MASTER_KEY_GEN);
  SET_CONST(CKM_SSL3_MASTER_KEY_DERIVE);
  SET_CONST(CKM_SSL3_KEY_AND_MAC_DERIVE);
  SET_CONST(CKM_SSL3_MASTER_KEY_DERIVE_DH);
  SET_CONST(CKM_TLS_PRE_MASTER_KEY_GEN);
  SET_CONST(CKM_TLS_MASTER_KEY_DERIVE);
  SET_CONST(CKM_TLS_KEY_AND_MAC_DERIVE);
  SET_CONST(CKM_TLS_MASTER_KEY_DERIVE_DH);
  SET_CONST(CKM_TLS_PRF);
  SET_CONST(CKM_SSL3_MD5_MAC);
  SET_CONST(CKM_SSL3_SHA1_MAC);
  SET_CONST(CKM_MD5_KEY_DERIVATION);
  SET_CONST(CKM_MD2_KEY_DERIVATION);
  SET_CONST(CKM_SHA1_KEY_DERIVATION);
  SET_CONST(CKM_SHA256_KEY_DERIVATION);
  SET_CONST(CKM_SHA384_KEY_DERIVATION);
  SET_CONST(CKM_SHA512_KEY_DERIVATION);
  SET_CONST(CKM_SHA224_KEY_DERIVATION);
  SET_CONST(CKM_PBE_MD2_DES_CBC);
  SET_CONST(CKM_PBE_MD5_DES_CBC);
  SET_CONST(CKM_PBE_MD5_CAST_CBC);
  SET_CONST(CKM_PBE_MD5_CAST3_CBC);
  SET_CONST(CKM_PBE_MD5_CAST5_CBC);
  SET_CONST(CKM_PBE_MD5_CAST128_CBC);
  SET_CONST(CKM_PBE_SHA1_CAST5_CBC);
  SET_CONST(CKM_PBE_SHA1_CAST128_CBC);
  SET_CONST(CKM_PBE_SHA1_RC4_128);
  SET_CONST(CKM_PBE_SHA1_RC4_40);
  SET_CONST(CKM_PBE_SHA1_DES3_EDE_CBC);
  SET_CONST(CKM_PBE_SHA1_DES2_EDE_CBC);
  SET_CONST(CKM_PBE_SHA1_RC2_128_CBC);
  SET_CONST(CKM_PBE_SHA1_RC2_40_CBC);
  SET_CONST(CKM_PKCS5_PBKD2);
  SET_CONST(CKM_PBA_SHA1_WITH_SHA1_HMAC);
  SET_CONST(CKM_WTLS_PRE_MASTER_KEY_GEN);
  SET_CONST(CKM_WTLS_MASTER_KEY_DERIVE);
  SET_CONST(CKM_WTLS_MASTER_KEY_DERIVE_DH_ECC);
  SET_CONST(CKM_WTLS_PRF);
  SET_CONST(CKM_WTLS_SERVER_KEY_AND_MAC_DERIVE);
  SET_CONST(CKM_WTLS_CLIENT_KEY_AND_MAC_DERIVE);
  SET_CONST(CKM_KEY_WRAP_LYNKS);
  SET_CONST(CKM_KEY_WRAP_SET_OAEP);
  SET_CONST(CKM_CAMELLIA_KEY_GEN);
  SET_CONST(CKM_CAMELLIA_ECB);
  SET_CONST(CKM_CAMELLIA_CBC);
  SET_CONST(CKM_CAMELLIA_MAC);
  SET_CONST(CKM_CAMELLIA_MAC_GENERAL);
  SET_CONST(CKM_CAMELLIA_CBC_PAD);
  SET_CONST(CKM_CAMELLIA_ECB_ENCRYPT_DATA);
  SET_CONST(CKM_CAMELLIA_CBC_ENCRYPT_DATA);
  SET_CONST(CKM_CAMELLIA_CTR);
  SET_CONST(CKM_ARIA_KEY_GEN);
  SET_CONST(CKM_ARIA_ECB);
  SET_CONST(CKM_ARIA_CBC);
  SET_CONST(CKM_ARIA_MAC);
  SET_CONST(CKM_ARIA_MAC_GENERAL);
  SET_CONST(CKM_ARIA_CBC_PAD);
  SET_CONST(CKM_ARIA_ECB_ENCRYPT_DATA);
  SET_CONST(CKM_ARIA_CBC_ENCRYPT_DATA);
  SET_CONST(CKM_SEED_KEY_GEN);
  SET_CONST(CKM_SEED_ECB);
  SET_CONST(CKM_SEED_CBC);
  SET_CONST(CKM_SEED_MAC);
  SET_CONST(CKM_SEED_MAC_GENERAL);
  SET_CONST(CKM_SEED_CBC_PAD);
  SET_CONST(CKM_SEED_ECB_ENCRYPT_DATA);
  SET_CONST(CKM_SEED_CBC_ENCRYPT_DATA);
  SET_CONST(CKM_SKIPJACK_KEY_GEN);
  SET_CONST(CKM_SKIPJACK_ECB64);
  SET_CONST(CKM_SKIPJACK_CBC64);
  SET_CONST(CKM_SKIPJACK_OFB64);
  SET_CONST(CKM_SKIPJACK_CFB64);
  SET_CONST(CKM_SKIPJACK_CFB32);
  SET_CONST(CKM_SKIPJACK_CFB16);
  SET_CONST(CKM_SKIPJACK_CFB8);
  SET_CONST(CKM_SKIPJACK_WRAP);
  SET_CONST(CKM_SKIPJACK_PRIVATE_WRAP);
  SET_CONST(CKM_SKIPJACK_RELAYX);
  SET_CONST(CKM_KEA_KEY_PAIR_GEN);
  SET_CONST(CKM_KEA_KEY_DERIVE);
  SET_CONST(CKM_FORTEZZA_TIMESTAMP);
  SET_CONST(CKM_BATON_KEY_GEN);
  SET_CONST(CKM_BATON_ECB128);
  SET_CONST(CKM_BATON_ECB96);
  SET_CONST(CKM_BATON_CBC128);
  SET_CONST(CKM_BATON_COUNTER);
  SET_CONST(CKM_BATON_SHUFFLE);
  SET_CONST(CKM_BATON_WRAP);
  SET_CONST(CKM_ECDSA_KEY_PAIR_GEN);
  SET_CONST(CKM_EC_KEY_PAIR_GEN);
  SET_CONST(CKM_ECDSA);
  SET_CONST(CKM_ECDSA_SHA1);
  SET_CONST(CKM_ECDSA_SHA224);
  SET_CONST(CKM_ECDSA_SHA256);
  SET_CONST(CKM_ECDSA_SHA384);
  SET_CONST(CKM_ECDSA_SHA512);
  SET_CONST(CKM_ECDH1_DERIVE);
  SET_CONST(CKM_ECDH1_COFACTOR_DERIVE);
  SET_CONST(CKM_ECMQV_DERIVE);
  SET_CONST(CKM_JUNIPER_KEY_GEN);
  SET_CONST(CKM_JUNIPER_ECB128);
  SET_CONST(CKM_JUNIPER_CBC128);
  SET_CONST(CKM_JUNIPER_COUNTER);
  SET_CONST(CKM_JUNIPER_SHUFFLE);
  SET_CONST(CKM_JUNIPER_WRAP);
  SET_CONST(CKM_FASTHASH);
  SET_CONST(CKM_AES_KEY_GEN);
  SET_CONST(CKM_AES_ECB);
  SET_CONST(CKM_AES_CBC);
  SET_CONST(CKM_AES_MAC);
  SET_CONST(CKM_AES_MAC_GENERAL);
  SET_CONST(CKM_AES_CBC_PAD);
  SET_CONST(CKM_AES_CTR);
  SET_CONST(CKM_AES_CTS);
  SET_CONST(CKM_AES_CMAC);
  SET_CONST(CKM_AES_CMAC_GENERAL);
  SET_CONST(CKM_BLOWFISH_KEY_GEN);
  SET_CONST(CKM_BLOWFISH_CBC);
  SET_CONST(CKM_TWOFISH_KEY_GEN);
  SET_CONST(CKM_TWOFISH_CBC);
  SET_CONST(CKM_AES_GCM);
  SET_CONST(CKM_AES_CCM);
  SET_CONST(CKM_AES_KEY_WRAP);
  SET_CONST(CKM_AES_KEY_WRAP_PAD);
  SET_CONST(CKM_BLOWFISH_CBC_PAD);
  SET_CONST(CKM_TWOFISH_CBC_PAD);
  SET_CONST(CKM_DES_ECB_ENCRYPT_DATA);
  SET_CONST(CKM_DES_CBC_ENCRYPT_DATA);
  SET_CONST(CKM_DES3_ECB_ENCRYPT_DATA);
  SET_CONST(CKM_DES3_CBC_ENCRYPT_DATA);
  SET_CONST(CKM_AES_ECB_ENCRYPT_DATA);
  SET_CONST(CKM_AES_CBC_ENCRYPT_DATA);
  SET_CONST(CKM_GOSTR3410_KEY_PAIR_GEN);
  SET_CONST(CKM_GOSTR3410);
  SET_CONST(CKM_GOSTR3410_WITH_GOSTR3411);
  SET_CONST(CKM_GOSTR3410_KEY_WRAP);
  SET_CONST(CKM_GOSTR3410_DERIVE);
  SET_CONST(CKM_GOSTR3411);
  SET_CONST(CKM_GOSTR3411_HMAC);
  SET_CONST(CKM_GOST28147_KEY_GEN);
  SET_CONST(CKM_GOST28147_ECB);
  SET_CONST(CKM_GOST28147);
  SET_CONST(CKM_GOST28147_MAC);
  SET_CONST(CKM_GOST28147_KEY_WRAP);
  SET_CONST(CKM_DSA_PARAMETER_GEN);
  SET_CONST(CKM_DH_PKCS_PARAMETER_GEN);
  SET_CONST(CKM_X9_42_DH_PARAMETER_GEN);
  SET_CONST(CKM_AES_OFB);
  SET_CONST(CKM_AES_CFB64);
  SET_CONST(CKM_AES_CFB8);
  SET_CONST(CKM_AES_CFB128);
  SET_CONST(CKM_RSA_PKCS_TPM_1_1);
  SET_CONST(CKM_RSA_PKCS_OAEP_TPM_1_1);
  SET_CONST(CKM_VENDOR_DEFINED);
}

/**
 * @brief Set CKG_* constants on the exports object.
 *
 * @param env The N-API environment.
 * @param exports The N-API exports object.
 */
void set_ckg(napi_env env, napi_value exports)
{
  SET_CONST(CKG_MGF1_SHA1);
  SET_CONST(CKG_MGF1_SHA256);
  SET_CONST(CKG_MGF1_SHA384);
  SET_CONST(CKG_MGF1_SHA512);
  SET_CONST(CKG_MGF1_SHA224);
}

/**
 * @brief Set CKK_* constants on the exports object.
 *
 * @param env The N-API environment.
 * @param exports The N-API exports object.
 */
void set_ckk(napi_env env, napi_value exports)
{
  SET_CONST(CKK_RSA);
  SET_CONST(CKK_DSA);
  SET_CONST(CKK_DH);
  SET_CONST(CKK_ECDSA);
  SET_CONST(CKK_EC);
  SET_CONST(CKK_X9_42_DH);
  SET_CONST(CKK_KEA);
  SET_CONST(CKK_GENERIC_SECRET);
  SET_CONST(CKK_RC2);
  SET_CONST(CKK_RC4);
  SET_CONST(CKK_DES);
  SET_CONST(CKK_DES2);
  SET_CONST(CKK_DES3);
  SET_CONST(CKK_CAST);
  SET_CONST(CKK_CAST3);
  SET_CONST(CKK_CAST5);
  SET_CONST(CKK_CAST128);
  SET_CONST(CKK_RC5);
  SET_CONST(CKK_IDEA);
  SET_CONST(CKK_SKIPJACK);
  SET_CONST(CKK_BATON);
  SET_CONST(CKK_JUNIPER);
  SET_CONST(CKK_CDMF);
  SET_CONST(CKK_AES);
  SET_CONST(CKK_BLOWFISH);
  SET_CONST(CKK_TWOFISH);
  SET_CONST(CKK_SECURID);
  SET_CONST(CKK_HOTP);
  SET_CONST(CKK_ACTI);
  SET_CONST(CKK_CAMELLIA);
  SET_CONST(CKK_ARIA);
  SET_CONST(CKK_MD5_HMAC);
  SET_CONST(CKK_SHA_1_HMAC);
  SET_CONST(CKK_RIPEMD128_HMAC);
  SET_CONST(CKK_RIPEMD160_HMAC);
  SET_CONST(CKK_SHA256_HMAC);
  SET_CONST(CKK_SHA384_HMAC);
  SET_CONST(CKK_SHA512_HMAC);
  SET_CONST(CKK_SHA224_HMAC);
  SET_CONST(CKK_SEED);
  SET_CONST(CKK_GOSTR3410);
  SET_CONST(CKK_GOSTR3411);
  SET_CONST(CKK_GOST28147);
  SET_CONST(CKK_VENDOR_DEFINED);
}

/**
 * @brief Set CKD_* constants on the exports object.
 *
 * @param env The N-API environment.
 * @param exports The N-API exports object.
 */
void set_ckd(napi_env env, napi_value exports)
{
  SET_CONST(CKD_NULL);
  SET_CONST(CKD_SHA1_KDF);
  SET_CONST(CKD_SHA1_KDF_ASN1);
  SET_CONST(CKD_SHA1_KDF_CONCATENATE);
  SET_CONST(CKD_SHA224_KDF);
  SET_CONST(CKD_SHA256_KDF);
  SET_CONST(CKD_SHA384_KDF);
  SET_CONST(CKD_SHA512_KDF);
  SET_CONST(CKD_CPDIVERSIFY_KDF);
}

/**
 * @brief Set CKC_* constants on the exports object.
 *
 * @param env The N-API environment.
 * @param exports The N-API exports object.
 */
void set_ckc(napi_env env, napi_value exports)
{
  SET_CONST(CKC_X_509);
  SET_CONST(CKC_X_509_ATTR_CERT);
  SET_CONST(CKC_WTLS);
  SET_CONST(CKC_VENDOR_DEFINED);
}

/**
 * @brief Set CKU_* constants on the exports object.
 *
 * @param env The N-API environment.
 * @param exports The N-API exports object.
 */
void set_cku(napi_env env, napi_value exports)
{
  SET_CONST(CKU_SO);
  SET_CONST(CKU_USER);
  SET_CONST(CKU_CONTEXT_SPECIFIC);
}

/**
 * @brief Set all Cryptoki constants on the exports object.
 *
 * @param env The N-API environment.
 * @param exports The N-API exports object.
 */
void set_all_const(napi_env env, napi_value exports)
{
  set_ckr(env, exports);
  set_ckp(env, exports);
  set_ckf(env, exports);
  set_cka(env, exports);
  set_cko(env, exports);
  set_ckm(env, exports);
  set_ckg(env, exports);
  set_ckk(env, exports);
  set_ckd(env, exports);
  set_ckc(env, exports);
  set_cku(env, exports);
}
