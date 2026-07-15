#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "stack1.h"
#include "stack2.h"
#include "stack3.h"

int main() {
    struct STACK3` *st = NULL;
    int a = 10;
    int b = 25;
    char c = 's';
    char d = 'a';

    push3(&st, &a);
    push3(&st, &c);
    push3(&st, &b);
    push3(&st, &d);

    printf("%c ", *(char *)top3(st));
    pop3(&st);
    printf("%d ", *(int *)top3(st));
    pop3(&st);
    printf("%c ", *(char *)top3(st));
    pop3(&st);
    printf("%d\n", *(int *)top3(st));
    pop3(&st);
    printf("%d", isEmpty3(st));

    return 0;
}