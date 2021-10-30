#include "CaesarCipher.h"

int shift;
const int OFFSET_MIN = 32;
const int OFFSET_MAX = 126;

int CaesarCipher::getShift(){
    int low = 2;
    int high = OFFSET_MAX - OFFSET_MIN;
    return rand()%(high - low) + low;
}

