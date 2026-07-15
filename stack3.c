#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "stack3.h"

bool isEmpty3(struct STACK3 *st) {
    return st == NULL;
}

void *top3(struct STACK3 *st) {
    if(st == NULL)
        return NULL;
    return st->data;
}
void pop3(struct STACK3 **st) {
    if(*st == NULL)
        return;
    struct STACK3 *temp = *st;
    (*st) = (*st) -> next;
    free(temp);
}

void push3(struct STACK3 **st, void *newdata) {
    struct STACK3 *nod = malloc(sizeof(struct STACK3));
    if(nod == NULL)
        return;
    nod->data = newdata;
    nod->next = *st;
    *st = nod;
}