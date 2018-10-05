/************* DO NOT Modify this file **********************/
#ifndef HW12_H
#define HW12_H

typedef struct listnode
{
    struct listnode * next;
    int value;
} Node;



Node * CreateNode(int val);
void LinkedListCreate(Node ** head,int length);
void LinkedListPrint(Node * head);

void Josephus(Node ** head, int k, int elemDivisible);


#endif
