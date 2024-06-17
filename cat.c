#ifndef CAT_H
#define CAT_H

#include <stdio.h>

typedef struct Cat {
    void (*meow)(struct Cat* self);
} Cat;

void cat_meow(Cat* self);

#endif // CAT_H
