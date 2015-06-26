/* 
 * File:   cryptunittest.cpp
 * Author: Julio
 *
 * Created on 26/06/2015, 14:11:57
 */

#include <stdlib.h>
#include <iostream>

/*
 * Simple C++ Test Suite
 * 
 * 
 * MENSAGEM "a" com chave "b" dá a mensagem criptografada "3"
 */

int sum(int a, int b);
std::string crypt(std::string, std::string);

void testCrypt() {
    std::string message = "a";
    std::string encryptedMessage = crypt(message, "b");
    char key = 'c';
    char data = 'a';
    char value = data^key;
    std::cout << "this is the value >>>> " << (int)value << std::endl;
    
    if (encryptedMessage != "3") 
    {
        std::cout << "%TEST_FAILED% time=0 testname=testCrypt (cryptunittest) message=error message sample" << std::endl;
    }      
}

void testCryptNaoVazio() {
    std::string message = "a";
    std::string encryptedMessage = crypt(message, "b");
    
    if (encryptedMessage == "") 
    {
        std::cout << "%TEST_FAILED% time=0 testname=testCryptNaoVazio (cryptunittest) message=error message sample" << std::endl;
    }      
}


int main(int argc, char** argv) {
    std::cout << "%SUITE_STARTING% cryptunittest" << std::endl;
    std::cout << "%SUITE_STARTED%" << std::endl;

    std::cout << "%TEST_STARTED% testSum (cryptunittest)" << std::endl;
    testCrypt(); 
    testCryptNaoVazio();
    std::cout << "%TEST_FINISHED% time=0 testSum (cryptunittest)" << std::endl;

    std::cout << "%SUITE_FINISHED% time=0" << std::endl;

    return (EXIT_SUCCESS);
}

