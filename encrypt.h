/*
 * encrypt.h
 *
 * Created on: February 20, 2024
 * 	Author: Piper Hall
 */

#ifndef ENCRYPT_H_
#define ENCRYPT_H_

#include <string>

#include "cryptopp890/cryptlib.h"
#include "cryptopp890/rijndael.h"
#include "cryptopp890/modes.h"
#include "cryptopp890/files.h"
#include "cryptopp890/osrng.h"
#include "cryptopp890/hex.h"

namespace CryptoPP{

//function to encrypt a file using AES encryption given the input file path, encryption key, and iv
void encryptFile(const std::string &finitial, const std::string &encryptedFile, SecByteBlock &ekey, SecByteBlock &eIV);

//function to decrypt a file given the input file path, encryption key, and iv
void decryptFile(const std::string &encryptedFile, const std::string &decryptedFileName, SecByteBlock &dkey, SecByteBlock &dIV);

//function to encrypt text using AES encryption given the text, encryption key, and iv
std::string encryptText(const std::string &textToEncrypt, SecByteBlock &ekey, SecByteBlock &eIV);
}

#endif /* ENCRYPT_H_ */
