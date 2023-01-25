#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include "SList.h"


struct SList* createList(int maxSize){
    struct SList* slist = malloc(sizeof(struct SList));
    slist->data = malloc(maxSize * sizeof(char));
    slist->maxSize = maxSize;
    slist->lastIndex = -1;
	return slist;
}

//display the list
void printList(struct SList* list) {
   printf("\n[ ");
	
   //start from the beginning
   for(int i = 0; i <= list->lastIndex; i++){
    	printf("(%d) ", list->data[i]);
   }
	
   printf(" ]");
}


void insertFirst(struct SList* list, char data) {
	if(isEmpty(list)){
		list->data[0] = data;
		list->lastIndex++;
	}else{
		for(int i = list->lastIndex; i >= 0; i--){
			list->data[i+1] = list->data[i];
		}
		list->data[0] = data;
		list->lastIndex++;

	}
}

void insertLast(struct SList* list, char data) {
	
    if(list->lastIndex == list->maxSize-1){
        printf("Cheio");
		exit(EXIT_FAILURE);
    }
	list->lastIndex++;
    
    //create a link
	list->data[list->lastIndex] = data;

}

//delete first item
char deleteFirst(struct SList* list) {
	char value = list->data[0];
	for(int i = 0; i < list->lastIndex; i++){
		list->data[i] = list->data[i+1];
	}
	//return the deleted link
	list->lastIndex--;
	return value;
}

bool isEmpty(struct SList* list) {
	return list->lastIndex == -1 || list->data == NULL;
}

int length(struct SList* list) {
	return list->lastIndex+1;
}

char findNode(struct SList* list,int key) {

	return list->data[key];
}

char deleteNode(struct SList* list,int key) {

	char value = list->data[key];

	for(int i = key; i < list->lastIndex; i++){
		list->data[i] = list->data[i+1];
	}
	list->lastIndex--;
	return value;
}