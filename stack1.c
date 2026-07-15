#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "stack1.h"

bool isEmpty1(struct STACK1 *st) {
    return st == NULL;
}

int top1(struct STACK1 *st) {
    if(st == NULL)
        return 0;
    return st->val;
}

struct STACK1 *pop1(struct STACK1 *st) {
    if(st == NULL)
        return NULL;
    struct STACK1 *temp = st;
    st = st->next;
    free(temp);
    return st;
}


struct STACK1 *push1(struct STACK1 *st, int x) {
    struct STACK1 *nod = malloc(sizeof(struct STACK1));
    if(nod == NULL)
        return st;
    nod->val = x;
    nod->next = st;
    return nod;
}
