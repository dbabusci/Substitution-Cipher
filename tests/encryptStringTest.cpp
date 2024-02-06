#include "../src/cipher.h"

cipher CAESAR;

void areEqual(std::string s1, std::string s2);

int main(){
    std::cout << "Test file for encryption" << std::endl;
    std::cout << std::endl;
    //testing a basic cipher not going past z
    areEqual(CAESAR.encryptString("abcde", 2), "cdefg");
    //testing goin past z (looping around alphabet)
    areEqual(CAESAR.encryptString("uvwxyz", 2), "wxyzab");
    //testing going up until one before an alphabet
    areEqual(CAESAR.encryptString("abcde", 25), "zabcd");
    //testing going through alphabet once
    areEqual(CAESAR.encryptString("abcdef", 26), "abcdef");
    //testing that going through alphabet once and twice are the same
    areEqual(CAESAR.encryptString("abcde", 26), CAESAR.encryptString("abcde", 52));
    //testing different string can reach same place with different keys
    areEqual(CAESAR.encryptString("abcde", 10), CAESAR.encryptString("cdefg", 8));
    //testing the whole alphabet
    areEqual(CAESAR.encryptString("abcdefghijklmnopqrstuvwxyz", 3), "defghijklmnopqrstuvwxyzabc");
    //testing the whole alphabet going through once
    areEqual(CAESAR.encryptString("abcdefghijklmnopqrstuvwxyz", 26), "abcdefghijklmnopqrstuvwxyz");
}

void areEqual(std::string s1, std::string s2){
    if(s1 == s2){std::cout << "The function worked: " << s1 << " == " << s2 << std::endl;}
    else{std::cout << "The function failed: " << s1 << " != " << s2<< std::endl;}
    std::cout << "----------------------------------------------------------" << std::endl;
}