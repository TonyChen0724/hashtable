#ifndef CONTAINER_H_
#define CONTAINER_H_
#include <stdio.h>

typedef enum container_e {FLEX_ARRAY, RED_BLACK_TREE} container_t;
typedef struct containerrec *container;

extern container new_container(container_t str);
extern void container_add(container c, char *word);

#endif