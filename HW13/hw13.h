//DO NOT MODIFY THIS FILE

#ifndef HW13_H
#define HW13_H

typedef struct ListNode
{
	struct ListNode * next;
	int value;
} Node;


Node * CreateNode(int val);
void LinkedListCreate(Node * * source, int len, int* arr);
void LinkedListPrint(Node * * source);
void Divide(Node** source);
void SplitList(Node* source, Node** head1, Node** head2);

#endif
