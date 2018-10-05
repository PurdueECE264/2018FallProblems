//DO NOT MODIFY THIS FILE

#ifndef HW14_H
#define HW14_H

typedef struct ListNode
{
	struct ListNode * next;
	int value;
} Node;


Node * CreateNode(int val);
void LinkedListCreate(Node * * source, int len, int* arr);
void LinkedListPrint(Node ** head);
void MergeSort(Node** source); 
Node* Merge(Node* upper, Node* lower); 
void SpiltList(Node* source, Node** head1, Node** head2);

#endif
