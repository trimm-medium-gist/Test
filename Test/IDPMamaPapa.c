//
//  IDPMamaPapa.c
//  Test
//
//  Created by Oleksa Korin on 4/8/17.
//  Copyright © 2017 IDAP Group. All rights reserved.
//

#include "IDPMamaPapa.h"

//2. Создать метод, который бы имел, как параметр, целое число.
//Пользовательские истории:
//- если на вход приходит число, кратное 3, то в консоль должно быть выведено: "мама";
//- если на вход приходит число, кратное 5, то в консоль должно быть выведено: "папа";
//- если на вход приходит число, кратное 15, то в консоль должно быть выведено: "мамапапа";
//- если на вход приходит число, не удовлетворяющие критериям выше, то в консоль ничего выводить не надо, либо вывести “”, либо “\n”;
//Требования:
//- необходимо в цикле пройти 1000 итераций, вывести номер итерации и передать номер итерации в метод.

static const char * const IDPMama = "mama";
static const char * const IDPPapa = "papa";
static const char * const IDPMamaPapa = "mamapapa";

void IDPPrintMamaPapa(int value) {
    if (!(value % 3)) {
        printf("%s", IDPMama);
    } else if (!(value % 5)) {
        printf("%s", IDPPapa);
    } else if (!(value % 15)) {
        printf("%s", IDPMamaPapa);
    }
}
