#ifndef SLIST_H
#define SLIST_H

struct SList{
    int* data;
    int maxSize;
    int lastIndex;
};

struct SList* createList();

void printList(struct SList* list);

void insertFirst(struct SList* list,char data);

void insertLast(struct SList* list,char data);

char deleteFirst(struct SList* list); 

bool isEmpty(struct SList* list);

char deleteNode(struct SList* list, int key);

char findNode(struct SList* list, int key); 

int length(struct SList* list);

#endif