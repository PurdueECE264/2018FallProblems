// You can modify this file.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include "hw19.h"

// DO NOT MODIFY THIS FUNCTION
void PrintAns(ListNode* head, ListNode* min1, ListNode* min2)
{
	int i;
	i = 0;
	while(i < head -> treenode->dimension)
	{
		if(i == 0)
			printf("(%d, ", min1->treenode->data[i]);
		else if(i == head -> treenode->dimension-1)
			printf("%d) <-> ", min1->treenode->data[i]);
		else
			printf("%d, ", min1->treenode->data[i]);
		i+=1;
	}

	i = 0;
	while(i < head -> treenode->dimension)
	{
		if(i == 0)
			printf("(%d, ", min2->treenode->data[i]);
		else if(i == head -> treenode->dimension-1)
			printf("%d)\n", min2->treenode->data[i]);
		else
			printf("%d, ", min2->treenode->data[i]);
		i+=1;
	}
}

/*
MODIFY BELOW THIS COMMENT
*/


#ifdef TEST_CENT
ListNode* FindCentroid(TreeNode* x, TreeNode* y)
{
	// Create a new node
	// new -> treenode.left should be x
	// new -> treenode.right should be y
	// x -> treenode.data should be less than y -> treenode.data (refer to README)
	
	// Use a loop to average the data from the two parameters (x and y).
	/*
	EXAMPLE
	Average x->treenode.data[0] and y->treenode.data[0] to new->treenode.data[0]
	Average x->treenode.data[1] and y->treenode.data[1] to new->treenode.data[1]
	and so on
	*/

	// Return the new node
}
#endif


#ifdef TEST_DIST
int FindDist(TreeNode* x, TreeNode* y)
{
	//Same as previous HW
}
#endif


#ifdef TEST_FUSE
ListNode* Fuse(ListNode* head, ListNode* fuse1, ListNode* fuse2)
{

	// Create a new ListNode element using findCentroid function.
	// The new->treenode.data will hold the averaged values of the two parameters' data (fuse1, and fuse2)
	// add the new ListNode to the list.
	// remove the fuse1 and fuse2 from the list. (Do NOT free)
	// you may want to return head from this function (depending on your implementation)
}
#endif


#ifdef TEST_CREATENODE
ListNode* CreateNode(int n, int dim, int* arr)
{
	// Same as previous HW
}
#endif


#ifdef TEST_LINKEDLISTCREATE
void LinkedListCreate(ListNode ** head, int n, int dim, FILE* fptr)
{
	// Same as previous HW
}
#endif

#ifdef TEST_CLUSTER
void MakeCluster(ListNode** head)
{
	// Walk through the linked list.
	// find pair of nodes with minimum distance.
	// fuse the two nodes into one node.
	// call print function
	// repeat till one node is remaining.
}
#endif


