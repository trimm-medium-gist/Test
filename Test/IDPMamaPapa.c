//
//  IDPMamaPapa.c
//  Test
//
//  Created by Oleksa Korin on 4/8/17.
//  Copyright © 2017 IDAP Group. All rights reserved.
//

#include "IDPMamaPapa.h"

#include <stdio.h>
#include <stdbool.h>

//2. Создать метод, который бы имел, как параметр, целое число.
//Пользовательские истории:
//- если на вход приходит число, кратное 3, то в консоль должно быть выведено: "мама";
//- если на вход приходит число, кратное 5, то в консоль должно быть выведено: "папа";
//- если на вход приходит число, кратное 15, то в консоль должно быть выведено: "мамапапа";
//- если на вход приходит число, не удовлетворяющие критериям выше, то в консоль ничего выводить не надо, либо вывести “”, либо “\n”;
//Требования:
//- необходимо в цикле пройти 1000 итераций, вывести номер итерации и передать номер итерации в метод.

typedef const char * const CCharRef;

static CCharRef IDPMama = "mama";
static CCharRef IDPPapa = "papa";

bool IDPPrintIfMod(int value, int divisor, CCharRef string) {
    bool didPrint = !(value % divisor);
    
    if (didPrint) {
        printf("%s", string);
    }
    
    return didPrint;
}

void IDPPrintMamaPapa(int value) {
    bool didPrint = IDPPrintIfMod(value, 3, IDPMama);
    didPrint = IDPPrintIfMod(value, 5, IDPPapa) || didPrint;

    if (didPrint) {
        printf("\n");
    }
}
