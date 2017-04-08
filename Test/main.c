//
//  main.c
//  Test
//
//  Created by Oleksa Korin on 4/8/17.
//  Copyright © 2017 IDAP Group. All rights reserved.
//

#include <stdio.h>

#include "IDPMamaPapa.h"
#include "IDPFunctionMacro.h"
#include "IDPBits.h"
#include "IDPArray.h"

IDPGeneratePrintFunction(int, %d);

int main(int argc, const char **argv) {
    const int count = 16;
   
    for (int i = 0; i < count; i++) {
        IDPPrintMamaPapa(i);
    }
    
    IDPCallPrintFunction(int, count);
    
    IDPPrintIntBits(255);
    IDPPrintIntBits(3);
    
    IDPArray *array = IDPArrayCreate();
    IDPArraySetLength(array, 300);
    void *data = IDPArrayGetData(array);
    *(char *)data = 1;
    char x = *(char *)data;
    
    IDPArrayRelease(array);
    
    return 0;
}
