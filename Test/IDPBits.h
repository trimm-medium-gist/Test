//
//  IDPBits.h
//  Test
//
//  Created by Oleksa Korin on 4/8/17.
//  Copyright © 2017 IDAP Group. All rights reserved.
//

#ifndef IDPBits_h
#define IDPBits_h

#include <stddef.h>
#include <stdbool.h>

void IDPPrintIntBits(int value);
void IDPPrintByte(unsigned char value);
void IDPPrintBits(const void *ref, size_t length);
bool IDPIsBigEndian();

#endif /* IDPBits_h */
