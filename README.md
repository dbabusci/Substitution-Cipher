This is my substitution cipher, to get a full explaination see the video

To compile what you will need to grade my assignment type:

make class_answer
./classwork.out

The critical files for this execution are cipher.cpp cipher.h and classworkApp.cpp
All other files were done by me just to practice my c++ so I don't get rusty

<-------------------------------------------------------------General Operations------------------------------------------------------------->
Overview: There are 5 different options for compilation
          make class_answer
          make encrypt_string_test
          make decrypt_string_test
          make console_encrypt
          make textfile_encrypt
The cipher only works for lowercase letter of the english alphabet
<----------------------------------------------------------------Class Answer---------------------------------------------------------------->
Command: make class_answer
         ./classwork.out
Description: This command demonstartes the use of the cipher for the purpose of 
             showing the cipher acts as intended for my coursework. 
<----------------------------------------------------------------Encrypt Test---------------------------------------------------------------->
Command: make encrypt_string_test
         ./encrypt.out
Description: This command is how I tested to make sure the encryptString() function was
             working as intended.
<----------------------------------------------------------------Decrypt Test---------------------------------------------------------------->
Command: make decrypt_string_test
         ./decrypt.out
Description: This command is how I tested to make sure the decryptString() function was
             working as intended.
<----------------------------------------------------------------Console Input--------------------------------------------------------------->
Command: make console_encrypt
         ./console.out
Description: A console application that allows users to input strings until they input
             a certain string which then ends the application.
<---------------------------------------------------------------Textfile Input--------------------------------------------------------------->
Command: make textfile_encrypt
         ./textfile.out input.txt output.txt
Description: A console application that takes in a text file as input and puts the
             decrypted string into an output text file. Or if two textfiles are not
             provided the user may manually enter the file name and path.
<-----------------------------------------------------------------Goodbye :)----------------------------------------------------------------->
