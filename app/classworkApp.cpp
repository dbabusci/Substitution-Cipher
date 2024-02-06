#include "../src/cipher.h"

cipher CAESAR;

int main(){
    std::string check = "abcxyz";
    std::cout << "Initial string is: " << check << std::endl;
    std::cout << "Encrypted string with key of 3: " << CAESAR.encryptString(check, 3) << std::endl;
    std::cout << "Encrypted string with key of 15: " << CAESAR.encryptString(check, 15) << std::endl;
    std::cout << "Encrypted string with key of 70: " << CAESAR.encryptString(check, 70) << std::endl;
}