#ifndef STACK_H
#define STACK_H
#include "SList.h"
struct Stack{
    struct SList* list;
};

struct Stack* createStack();

void pushStack(struct Stack* stack, char data);

char popStack(struct Stack* stack);
#endif