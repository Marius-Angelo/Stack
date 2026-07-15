struct STACK1 {
    int val;
    struct STACK1 *next;
};

bool isEmpty1(struct STACK1 *st);
int top1(struct STACK1 *st);
struct STACK1 *pop1(struct STACK1 *st);
struct STACK1 *push1(struct STACK1 *st, int x);