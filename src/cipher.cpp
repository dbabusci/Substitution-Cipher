#include "cipher.h"

/*
    Inits an unordered map of <int, char> to:
    An integer(where a letter is in alphabet)
    A character(The letter of the alphabet)
    Iterates through a string containing every letter of the alphabet 
*/
cipher::cipher(){
    for(int i = 0; i < alphabet.size(); ++i){charMap[i] = alphabet[i];}
}

/*
    Displays all of the int to char mappings in the member varible charMap<int,char>
    Displays in the following format:
    "Number 1 maps to a"
*/
void cipher::checkCharMap(){
    for(auto it = charMap.begin(); it != charMap.end(); ++it){
        std::cout << "Number " << it->first << " maps to " << it->second << std::endl;
    }
}

/*
    Returns the position in the alphabet for a specified character
    Used in the encryptString and decryptString functions
    Returns -1 if char is not found
*/
int cipher::posInAlphabet(char c){
    int i = 0;
    while(i < alphabet.size()){
        if(alphabet[i] == c){return i;}
        ++i;
    }
    return -1;
}

/*
    Takes in plaintext and a shift (key) and returns an encrypted string
    For every letter in the string plaintext a value is calculated which
    is the position of the char in the alphabet + the shift
    The function then adds to the return string from the char that maps
    to the value mod 26 (in case posInAlphabet + shift > 26)
*/
std::string cipher::encryptString(std::string plaintext, int shift){
    if(plaintext == ""){return "";}
    std::string ret = "";
    int val = -1;
    for(int i = 0; i < plaintext.size(); ++i){
        val = posInAlphabet(plaintext[i]) + shift;
        //std::cout << val << "|" << posInAlphabet(plaintext[i]) << "|" << shift << std::endl;
        ret += charMap[val % alphabet.size()];
    }
    return ret;
}
/*
    Broken currently but it isn't required
*/
std::string cipher::decryptString(std::string ciphertext, int shift){
    std::string ret = "";
    int backShift = shift % alphabet.size();
    int val = -1;
    for(int i = 0; i < ciphertext.size(); ++i){
        val = posInAlphabet(ciphertext[i]) + (alphabet.size() - backShift);
        ret += charMap[val % alphabet.size()];
    }
    return ret;
}