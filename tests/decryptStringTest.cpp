#include "../src/cipher.h"

cipher CAESAR;

void areEqual(std::string s1, std::string s2);

int main(){
    std::cout << "Test file for Decryption" << std::endl;
    std::cout << std::endl;
    //tests that string can decrypt within alphabet
    areEqual("abc", CAESAR.decryptString("def", 3));
    //tests that string can decrypt over the edge
    areEqual("xyz", CAESAR.decryptString("abc", 3));
    //tests that string once encrypted can be decrypted
    std::string en_string = CAESAR.encryptString("abc", 3);
    areEqual("abc", CAESAR.decryptString(en_string, 3));
}

void areEqual(std::string s1, std::string s2){
    if(s1 == s2){std::cout << "The function worked: " << s1 << " == " << s2 << std::endl;}
    else{std::cout << "The function failed: " << s1 << " != " << s2<< std::endl;}
    std::cout << "----------------------------------------------------------" << std::endl;
}