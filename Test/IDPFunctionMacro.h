//
//  IDPFunctionMacro.h
//  Test
//
//  Created by Oleksa Korin on 4/8/17.
//  Copyright © 2017 IDAP Group. All rights reserved.
//

#ifndef IDPFunctionMacro_h
#define IDPFunctionMacro_h

// 1. Создать макрос, который бы генерировал метод для вывода в консоль значения любого примитивного типа. У макроса должно быть 2 параметра: тип, спецификатор вывода. При препроцессинге макрос должен создавать метод output_type, где вместо type должен быть подставлен тип, который мы выводим данным сгенерированным методом. Создать второй макрос, который бы занимался вызовом сгенерированного первым макросом метода, на вход должен получать тип метода.

#define IDPGeneratePrintFunction(type, formatter) \
    void IDPPrint_##type(type value) { \
        printf(#formatter "\n", value); \
    }

#define IDPCallPrintFunction(type, value) \
    IDPPrint_##type(value)

#endif /* IDPFunctionMacro_h */
