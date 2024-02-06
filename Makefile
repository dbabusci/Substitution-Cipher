#make output files have .out extension for gitignore
#You can prob compile cipher.cpp once or for every one in one line 
#Look into it
#runs test for the encrypt function
encrypt_string_test: tests/encryptStringTest.cpp src/cipher.cpp
	g++ -o encrypt.out tests/encryptStringTest.cpp src/cipher.cpp
#runs test for decrypt function -> (implement) <-
decrypt_string_test: tests/decryptStringTest.cpp src/cipher.cpp
	g++ -o decrypt.out tests/decryptStringTest.cpp src/cipher.cpp
#runs example for encoding string with key values for class
class_answer: app/classworkApp.cpp src/cipher.cpp
	g++ -o classwork.out app/classworkApp.cpp src/cipher.cpp
#console app that takes in string values via the console
console_encrypt: app/consoleApp.cpp src/cipher.cpp
	g++ -o console.out app/consoleApp.cpp src/cipher.cpp
#console app that takes in string values from text and out puts to text file -> (implement) <-
textfile_encrypt: app/textfileApp.cpp src/cipher.cpp
	g++ -o textfile.out app/textfileApp.cpp src/cipher.cpp