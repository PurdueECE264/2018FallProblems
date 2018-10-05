//DO NOT MODIFY THIS FILE

#ifndef HW14_H
#define HW14_H

typedef struct ListNode
{
	struct ListNode * next;
	int value;
} Node;


Node * CreateNode(int val);
void LinkedListCreate(Node ** head, int len, int* arr);
void LinkedListPrint(Node ** head);
void MergeSort(Node** head);
Node* SortedMerge(Node* a, Node* b);
void SplitList(Node* source, Node** upper, Node** lower);

#endif
