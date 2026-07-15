#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "stack2.h"

bool isEmpty2(struct STACK2 *st) {
    return st == NULL;
}

int top2(struct STACK2 *st) {
    if(st == NULL)
        return 0;
    return st->val;
}

void pop2(struct STACK2 **st) {
    if(*st == NULL)
        return;
    struct STACK2 *temp = *st;
    (*st) = (*st) -> next;
    free(temp);
}

void push2(struct STACK2 **st, int x) {
    struct STACK2 *nod = malloc(sizeof(struct STACK2));
    if(nod == NULL)
        return;
    nod->val = x;
    nod->next = (*st);
    (*st) = nod;
}