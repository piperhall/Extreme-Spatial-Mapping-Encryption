/*
 * encrypt.cpp
 *
 * Created On: February 20, 2024
 * 	Author: Piper Hall
 */

#include "encrypt.h"

using namespace CryptoPP;

namespace CryptoPP{

//function to encrypt a file with AES encryption given the input file path, encryption key, and iv
void encryptFile(const std::string &finitial, const std::string &encryptedFile, SecByteBlock &ekey, SecByteBlock &eIV){
    try{
        CBC_Mode< AES >::Encryption e;
        e.SetKeyWithIV(ekey, ekey.size(), eIV);
        FileSource f(finitial.c_str(), true, new StreamTransformationFilter(e, new FileSink(encryptedFile.c_str(), false)));
    }
    catch(const Exception& e){
        std::cerr << e.what() << std::endl;
        exit(1);
    }
}

//function to decrypt a file given the input file path, encryption key, and iv
void decryptFile(const std::string &encryptedFile, const std::string &decryptedFileName, SecByteBlock &dkey, SecByteBlock &dIV){
    try{
        CBC_Mode< AES >::Decryption d;
        d.SetKeyWithIV(dkey, dkey.size(), dIV);
        FileSource f(encryptedFile.c_str(), true, new StreamTransformationFilter(d, new FileSink(decryptedFileName.c_str(), false)));
    }
    catch(const Exception& e){
        std::cerr << e.what() << std::endl;
        exit(1);
    }
}

//function to encrypt text using AES encryption given the text, encryption key, and iv
std::string encryptText(const std::string &textToEncrypt, SecByteBlock &ekey, SecByteBlock &eIV) {
    try{
        std::string ciphertext;
        CBC_Mode< AES >::Encryption e;
        e.SetKeyWithIV(ekey, ekey.size(), eIV);
        StringSource s(textToEncrypt, true, new StreamTransformationFilter(e, new StringSink(ciphertext)));

        return ciphertext;
    }
    catch(const Exception& e){
        std::cerr << e.what() << std::endl;
        exit(1);
    }
}
}
