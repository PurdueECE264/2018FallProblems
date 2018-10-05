//DO NOT MODIFY THIS FILE

#ifndef HW13_H
#define HW13_H

typedef struct ListNode
{
	struct ListNode * next;
	int value;
} Node;


Node * CreateNode(int val);
void LinkedListCreate(Node ** head, int len, int* arr);
void LinkedListPrint(Node * * head1, Node * * head2);
void Divide(Node** headRef);
void SplitList(Node* source, Node** frontRef, Node** backRef);

#endif
