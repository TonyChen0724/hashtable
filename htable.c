#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mylib.h"
#include "flexarray.h"
#include "htable.h"
#include "container.h"

struct htablerec {
    int num_keys;
    int capacity;
    container_t type;
    container **keys;
};

htable htable_new(int capacity, container_t type) {
    int i = 0;
    htable result = emalloc(sizeof *result);
    result->num_keys = 0;
    result->capacity = capacity;
    result->keys = emalloc(capacity* sizeof result->keys[0]);
    result->type = type;

    for (i = 0; i < capacity; i++) {
        result->keys[i] = NULL;
    }
    return result;
}