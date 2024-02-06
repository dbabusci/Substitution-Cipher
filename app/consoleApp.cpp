#include "../src/cipher.h"

cipher CAESAR;

void getInput(std::string& e, int& k);

int main(){
    std::string input = "";
    int key = -1;
    while(input != "q"){
        getInput(input, key);
        if(input == "q"){break;}
        std::cout << "Your string is: " << input << " and your key is: " << key << std::endl;
        std::cout << "The encrypted string is: " << CAESAR.encryptString(input, key) << std::endl;
        std::cout << "-----------------------------------------------------------------" << std::endl;
    }
}

void getInput(std::string& e, int& k){
    std::cout << "Type in a string to encrypt (q to quit): ";
    std::cin >> e;
    if(e == "q"){return;}
    std::cout << "What key do you want to use: ";
    std::cin >> k;
}