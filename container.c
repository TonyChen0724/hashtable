#include <stdio.h>
#include <stdlib.h>
#include "container.h"
#include "mylib.h"
#include "flexarray.h"


struct containerrec {
    container_t type;
    void *contents;
};

container new_container(container_t str) {
    container result = emalloc(sizeof *result);
    result->type = str;
    return result;
}

void container_add(container c, char *word) {
    if (c->type == RED_BLACK_TREE) {
        printf("there is no such thing yet");
    } else {
        flexarray_append(c->contents, word);
    }
}