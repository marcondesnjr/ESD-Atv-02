#include <stdbool.h>
#include <stdlib.h>
#include "Stack.h"

struct Stack* createStack(){
    struct SList* list = createList(64);
    struct Stack* stack = (struct Stack*) malloc(sizeof(struct Stack));
    stack->list = list;
    return stack;
}

void pushStack(struct Stack* stack, char data){
    insertFirst(stack->list, data);
}

char popStack(struct Stack* stack){
    return deleteFirst(stack->list);
}