//
//  main.c
//  Test
//
//  Created by Oleksa Korin on 4/8/17.
//  Copyright © 2017 IDAP Group. All rights reserved.
//

#include <stdio.h>

#include "IDPMamaPapa.h"

int main(int argc, const char **argv) {
    const int count = 16;
   
    for (int i = 0; i < count; i++) {
        IDPPrintMamaPapa(i);
    }
    
    return 0;
}
