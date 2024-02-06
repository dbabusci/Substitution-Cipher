#include "../src/cipher.h"
#include <fstream>

cipher CAESAR;
void encryptProcess(std::ifstream& i, std::ofstream& o);
void decryptProcess(std::ifstream& i, std::ofstream& o);


int main(int argc, char* argv[]){
    if(argc > 1){
        std::ifstream reader(argv[1]); //first txt after run command
        std::ofstream writer(argv[2]); //second txt after run command
        if(!reader.is_open()){
            std::cout << "File to read from failed to open!" << std::endl;
            return -1;
        }
        if(!writer.is_open()){
            std::cout << "File to write to failed to open!" << std::endl;
            return -1;
        }
        encryptProcess(reader, writer);
        reader.close();
        writer.close();
    }
    else{
        std::string ftr, ftw, option;
        std::cout << "What file do you want to read from: ";
        std::cin >> ftr;
        std::cout << "What file do you want to be the output: ";
        std::cin >> ftw;
        std::cout << "Do you want to encrypt this file, decrypt this file or quit (e/d/q): ";
        std::cin >> option;
        
        std::ifstream reader(ftr); //first txt after run command
        std::ofstream writer(ftw); //second txt after run command
        if(!reader.is_open()){
            std::cout << "File to read from failed to open!" << std::endl;
            return -1;
        }
        if(!writer.is_open()){
            std::cout << "File to write to failed to open!" << std::endl;
            return -1;
        }
        if(option == "e"){encryptProcess(reader, writer);}
        else if(option == "d"){decryptProcess(reader, writer);}
        else{
            std::cout << option << " is not a valid input" << std::endl;
        }
        reader.close();
        writer.close();
    }
    std::cout << "Done encrypting/decrypting!" << std::endl;
}

void encryptProcess(std::ifstream& i, std::ofstream& o){
    char curr;
    std::string pt = "", et = "";
    while(!i.eof()){
        i.get(curr);
        while(!i.eof() && curr != ' ' && curr != '\n'){
            pt += curr;
            i.get(curr);
        }
        o << CAESAR.encryptString(pt, 5) << curr;//change 5
        pt = "";
    }
}

void decryptProcess(std::ifstream& i, std::ofstream& o){
    char curr;
    std::string pt = "", et = "";
    while(!i.eof()){
        i.get(curr);
        while(!i.eof() && curr != ' ' && curr != '\n'){
            pt += curr;
            i.get(curr);
        }
        o << CAESAR.decryptString(pt, 5) << curr;//change 5
        pt = "";
    }
}