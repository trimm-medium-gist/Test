//
//  IDPBits.c
//  Test
//
//  Created by Oleksa Korin on 4/8/17.
//  Copyright © 2017 IDAP Group. All rights reserved.
//

#include "IDPBits.h"

#include <stdio.h>

static const uint8_t IDPBitsInByte  = 8;
static const uint8_t IDPLSBit       = 1 << (IDPBitsInByte - 1);

//00 00 10 01 - value
//00 00 00 01 - mask
//00 00 00 01 - result

void IDPPrintIntBits(int value) {
    IDPPrintBits(&value, sizeof(value));
}

void IDPPrintByte(uint8_t value) {
    uint8_t shift = IDPBitsInByte - 1;
    
    for (int i = 0; i < IDPBitsInByte; i++) {
        printf("%d", (value & IDPLSBit) >> shift);
        value = value << 1;
    }
}

void IDPPrintBits(const void *ref, size_t length) {
    const uint8_t *valueRef = ref;
    for (int i = 0; i < length; i++) {
        IDPPrintByte(valueRef[i]);
        printf(" ");
    }
    
    printf("\n");
}

bool IDPIsBigEndian() {
    uint16_t value = 1;
    
    return ((char *)&value)[0] == 0;
}
