#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mylib.h"
#include "flexarray.h"

struct flexarrayrec {
    int capacity;
    int itemcount;
    char **items;
};

flexarray flexarray_new() {
    flexarray result = emalloc(sizeof *result);
    result->capacity = 2;
    result->itemcount = 0;
    result->items = emalloc(result->capacity * sizeof result->items[0]);
    return result;
}

void flexarray_append(flexarray f, char* str) {
    if (f->itemcount == f->capacity) {
        f->capacity += f->capacity;
        f->items = erealloc(f->items, f->capacity * sizeof f->items[0]);

        if (NULL == f->items) {
            fprintf(stderr, "memory reallocation failed. \n");
            exit(EXIT_FAILURE);
        }
    }
    
    f->items[f->itemcount] = emalloc(sizeof 'a' * 10);
    strcpy(f->items[f->itemcount], str);
    f->itemcount ++;
}

void flexarray_print(flexarray f) {
    int i;
    for (i = 0; i < f->itemcount; i++) {
        printf("%s\n", f->items[i]);
    }
}
    
