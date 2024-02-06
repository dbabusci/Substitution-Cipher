#ifndef CIPHER_H
#define CIPHER_H

#include <iostream>
#include <unordered_map>
#include <string>

/*
    Explaination of member functions in cipher.cpp
*/
class cipher{
public:
    cipher();
    std::string encryptString(std::string plaintext, int shift);
    std::string decryptString(std::string encryptedText, int shift);
    void checkCharMap();
    int posInAlphabet(char c);
private:
    std::unordered_map<int, char> charMap;//Maps an interger value to a char, once for every letter in alphabet
    std::string alphabet = "abcdefghijklmnopqrstuvwxyz";//The alphabet the cipher can encrypt
};

#endif
//eof