#ifndef LUX_LIB_CRYPTO_REPLICABUILDER_H
#define LUX_LIB_CRYPTO_REPLICABUILDER_H

#include <string>
#include <vector>
#include <openssl/bn.h>
#include "decryptionkeys.h"

uint64_t GetCryptoReplicaSize(size_t srcSize, size_t blockSizeRSA = nBlockSizeRSA);
void EncryptData(const byte *src, uint64_t offset, size_t srcSize, byte *cipherText,
                 const AESKey &aesKey, RSA *rsa);
void DecryptData(const byte *src, uint64_t offset, size_t srcSize, byte *plainText,
                 const AESKey &aesKey, RSA *rsa);

#endif //LUX_LIB_CRYPTO_REPLICABUILDER_H
