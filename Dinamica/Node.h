#ifndef NODE_H
#define NODE_H

struct node {
    char data;
    struct node *next;
};

struct node* createNode(char data);

void destroyNode(struct node* link);
#endif