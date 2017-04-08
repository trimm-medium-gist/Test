//
//  IDPArray.h
//  Test
//
//  Created by Oleksa Korin on 4/8/17.
//  Copyright © 2017 IDAP Group. All rights reserved.
//

#ifndef IDPArray_h
#define IDPArray_h

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

//- malloc, realloc, free, typecasting, pointer arithmetic.
//
//Задание:
//Создать структуру типа массив, которая бы реализовывала следующие требования:
//1. Структура должна владеть указателем на массив элементов.
//2. Должен существовать метод создания структуры на куче.
//3. Должен существовать метод деаллокации структуры на куче.
//4. Массив должен создаваться с произвольным начальным количеством места под элементы.
//5. Элементом может быть сущность произвольного размера в байтах.
//6. Массив должен поддерживать расширение, сужение занимаемого в памяти места в зависимости от количества элементов.

typedef struct IDPArray IDPArray;

IDPArray *IDPArrayCreate();

void IDPArrayRetain(IDPArray *array);
void IDPArrayRelease(IDPArray *array);

void *IDPArrayGetData(IDPArray *array);

size_t IDPArrayGetLength(IDPArray *array);
void IDPArraySetLength(IDPArray *array, size_t length);

#endif /* IDPArray_h */
