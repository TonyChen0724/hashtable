#include <stdio.h>
#include <stdlib.h>
#include "mylib.h"
#include "htable.h"
#include "container.h"

int main(void) {
    container_t type = FLEX_ARRAY;
    htable h = htable_new(10, type);
    return EXIT_SUCCESS;
}