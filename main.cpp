// This program demonstrates the CaesarCipher class'
// Big 4 operations and overloaded operators


#include "CaesarCipher.h"
#include <string>
#include <iostream>
using namespace std;

int main() {

    //test constructor : cc
    cout << "test constructor : cc" << endl;
    CaesarCipher cc;
    string encryptedWord = cc.encrypt("Hello, world!");
    cout << "Encrypted: " << encryptedWord << endl;
    string decryptedWord = cc.decrypt(encryptedWord);
    cout << "Decrypted: " << decryptedWord << endl;
    cout << endl;

    //test constructor : cc2(cc)
    cout << "test constructor : cc2(cc)" << endl;
    CaesarCipher cc2(cc) ;
    encryptedWord = cc2.encrypt("Hello, world!");
    cout << "Encrypted: " << encryptedWord << endl;
    decryptedWord = cc2.decrypt(encryptedWord);
    cout << "Decrypted: " << decryptedWord << endl;
    cout << endl;

    //test overloaded assignment operator : cc = cc2
    cout << "test overloaded assignment operator : cc = cc2" << endl;
    cc = cc2 ;
    encryptedWord = cc.encrypt("Hello, world!");
    cout << "Encrypted: " << encryptedWord << endl;
    decryptedWord = cc.decrypt(encryptedWord);
    cout << "Decrypted: " << decryptedWord << endl;
    cout << endl;

    //test create new object : cc3
    cout << "test create new object : cc3" << endl;
    CaesarCipher cc3;
    encryptedWord = cc3.encrypt("Hello, world!");
    cout << "Encrypted: " << encryptedWord << endl;
    decryptedWord = cc3.decrypt(encryptedWord);
    cout << "Decrypted: " << decryptedWord << endl;
    cout << endl;

    //test comparators
    cout << "cc == cc3 is " << std::boolalpha << (cc == cc3) << endl;
    cout << "cc < c3 is " << (cc < cc3) << endl;
    cout << "cc > c3 is " << (cc > cc3) << endl;
    cout << endl;

    //test add : cc2 = cc + cc3
    cout << "test add : cc2 = cc + cc3" << endl;
    cc2 = cc + cc3;
    encryptedWord = cc2.encrypt("Hello, world!");
    cout << "Encrypted: " << encryptedWord << endl;
    decryptedWord = cc2.decrypt(encryptedWord);
    cout << "Decrypted: " << decryptedWord << endl;
    cout << endl;

    //test increment (postfix) : cc2++
    cout << "test increment (postfix) : cc2++" << endl;
    cc2++;
    encryptedWord = cc2.encrypt("Hello, world!");
    cout << "Encrypted: " << encryptedWord << endl;
    decryptedWord = cc2.decrypt(encryptedWord);
    cout << "Decrypted: " << decryptedWord << endl;
    cout << endl;

    //test increment (prefix) : ++cc2
    cout << "test increment (postfix) : cc2++" << endl;
    ++cc2;
    encryptedWord = cc2.encrypt("Hello, world!");
    cout << "Encrypted: " << encryptedWord << endl;
    decryptedWord = cc2.decrypt(encryptedWord);
    cout << "Decrypted: " << decryptedWord << endl;
    cout << endl;



    return 0;
}