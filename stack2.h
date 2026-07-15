struct STACK2 {
    int val;
    struct STACK2 *next;
};

bool isEmpty2(struct STACK2 *st);
int top2(struct STACK2 *st);
void pop2(struct STACK2 **st);
void push2(struct STACK2 **st, int x);