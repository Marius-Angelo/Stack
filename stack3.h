struct STACK3 {
    void *data;
    struct STACK3 *next;
};

bool isEmpty3(struct STACK3 *st);
void *top3(struct STACK3 *st);
void pop3(struct STACK3 **st);
void push3(struct STACK3 **st, void *newdata);

