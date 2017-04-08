//
//  IDPArray.c
//  Test
//
//  Created by Oleksa Korin on 4/8/17.
//  Copyright © 2017 IDAP Group. All rights reserved.
//

#include "IDPArray.h"

#include <memory.h>
#include <stdlib.h>

static const size_t IDPDefaultLength = 100;

struct IDPArray {
    size_t refCount;
    
    void *data;
    size_t length;
};

IDPArray *IDPArrayCreate() {
    const size_t defaultLength = IDPDefaultLength;

    IDPArray *array = NULL;
    size_t length = sizeof(*array);

    array = (IDPArray *)malloc(length);
    memset(array, 0, length);
    
    array->data = calloc(defaultLength, sizeof(*array->data));
    array->length = defaultLength;
    
    return array;
}

void IDPArrayRetain(IDPArray *array) {
    array->refCount += 1;
}

void IDPArrayRelease(IDPArray *array) {
    size_t count = array->refCount - 1;
    array->refCount = count;
    if (!count) {
        free(array->data);
        free(array);
    }
}

void *IDPArrayGetData(IDPArray *array) {
    return array->data;
}

size_t IDPArrayGetLength(IDPArray *array) {
    return array->length;
}

void IDPArraySetLength(IDPArray *array, size_t length) {
    size_t currentLength = array->length;
    if (currentLength == length) {
        return;
    }
    
    array->data = realloc(array->data, length);
    
    if (currentLength < length) {
        memset(array->data + currentLength, 0, length - currentLength);
    }
    
    array->length = length;
}
