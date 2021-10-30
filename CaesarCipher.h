// CaesarCipher.h
// Specification file for the CaesarCipher class.
#ifndef CAESARCIPHER_H
#define CAESARCIPHER_H

#include <string>
#include <cstring>
using namespace std;

class CaesarCipher
{
public:
    CaesarCipher(){
        shift = getShift();
    }
    CaesarCipher(const CaesarCipher & c){
        shift = c.shift;
    }

    string encrypt(string s){
        return encryptDecrypt(s, true);
    }

    string decrypt(string s){
        return encryptDecrypt(s, false);
    }

    CaesarCipher& operator = (const CaesarCipher & other){
        shift = other.shift;
        return *this;

    }
    CaesarCipher operator + (const CaesarCipher & other){
        CaesarCipher temp;
        temp.shift = shift + other.shift;
        return temp;
    }

    bool operator == (const CaesarCipher &c){
        bool status;
        if (shift == c.shift)
            status = true;
        else
            status = false;
        return status;
    }

    bool operator < (const CaesarCipher &c){
        bool status;
        if (shift < c.shift)
            status = true;
        else
            status = false;
        return status;
    }

    bool operator > (const CaesarCipher &c){
        bool status;
        if (shift > c.shift)
            status = true;
        else
            status = false;

        return status;
    }

    CaesarCipher& operator ++ (){
        ++shift;
        return *this;
    }

    CaesarCipher operator ++ (int){
        CaesarCipher temp;
        shift++;
        return temp;
    }

private:
    int shift;
    const int OFFSET_MIN = 32;
    const int OFFSET_MAX = 126;
    int getShift();

    string encryptDecrypt(string s, bool encrypt){
        string sb;

        int n = s.length();
        char *charArray = new char[n];
        strcpy(charArray, s.c_str());

        for (char c : charArray) {
            int indx = c, cpos;

            if (encrypt) {
                cpos = indx + shift;
                if (cpos > OFFSET_MAX)
                    cpos = OFFSET_MIN + (cpos - OFFSET_MAX);
            } else {
                cpos = indx - shift;
                if (cpos < OFFSET_MIN)
                    cpos = OFFSET_MAX - (OFFSET_MIN - cpos);
            }
            sb += (char)cpos;
        }
        return sb;
    }


    bool isPositionInRange(int indx){
        return indx >= OFFSET_MIN && indx <= OFFSET_MAX;
    }
};

#endif