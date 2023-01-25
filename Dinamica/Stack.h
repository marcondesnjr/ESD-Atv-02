#ifndef STACK_H
#define STACK_H
#include "List.h"
struct Stack{
    struct List* list;
};

struct Stack* createStack();

void pushStack(struct Stack* stack, char data);

char popStack(struct Stack* stack);
#endif