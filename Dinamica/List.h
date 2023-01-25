#include "Node.h"
#include <stdbool.h>
#ifndef LIST_H
#define LIST_H
struct List{
	struct node* head;
};

struct List* createList();

void printList(struct List* list);

void insertFirst(struct List* list,char data);

void insertLast(struct List* list,char data);

struct node* deleteFirst(struct List* list); 

bool isEmpty(struct List* list);

struct node* deleteNode(struct List* list, int key);

struct node* findNode(struct List* list, int key); 

int length(struct List* list);

char deleteValue(struct List* list, int key);

char findValue(struct List* list, int key); 

void swap(struct node* a, struct node* b);

void bubbleSort(struct List* list);

struct node* binarySearch(struct List* list, char value);
#endif
