//DO NOT MODIFY THIS FILE

#ifndef HW15_H
#define HW15_H

typedef struct listnode 
{
	struct listnode * next;
	int value;
} Node;



Node * CreateNode(int val);
void LinkedListCreate(Node ** head, char* name);
void LinkedListPrint(Node * head);
void RemoveDuplicate(Node * headRef);
#endif
