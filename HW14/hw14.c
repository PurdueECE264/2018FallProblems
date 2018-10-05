/****************** Modify this file at specified place *************************/
#include <stdio.h>
#include <stdlib.h>
#include "hw14.h"


/********** Do Not modify the file above this line, you can modify below ***********/
#ifdef TEST_CREATENODE

Node * CreateNode(int val)
//val: value of the element of the node to be created
{
	// same as previous homeworks
}
#endif

#ifdef TEST_LINKEDLISTCREATE
//source: the head of the singly linkedlist.
//len: the length of the array.
//arr: the array with the contents of the input file.

void LinkedListCreate(Node * * source, int len, int* arr)
{
	// Refer HW13 and HW12
	// Tip: use CreateNode(arr[index])
}
#endif


#ifdef TEST_SPLIT
// source is the head of the list to be split.
// head1 is the head of the upper sub-list.
// head2 is the head of the lower sub-list.

void SpiltList(Node* source, Node** head1, Node** head2)
{
	// Refer HW13
} 
#endif

#ifdef TEST_MERGE
// upper is the upper sub-list to be merged
// lower is the lower sub-list to be merged
Node* Merge(Node* upper, Node* lower) 
{ 
	// Check for the base cases. (When either sub-list is NULL)
  
	// Pick the larger between upper and lower, and recur appropriately.
	
	// return the merged array
} 
#endif

#ifdef TEST_SORT
// source is the head of the list to for which MergeSort is to be performed.
void MergeSort(Node** source) 
{ 
	// Declare a node, to hold the current head of the source list.
	
	// Declare nodes, to hold the two the heads of the two sub-lists.
  
	// Check for the base case -- length 0 or 1
		// if so, return;
	  
	// Use SpiltList() to partition the list into sub lists.
		// This will partiton the source list, into two lists (As done in the previous homework)
	  
	// Recursively sort the sub-lists by calling MergeSort() on the upper and lower sub-lists.
		// MergeSort() is a recursive function, and MergeSort() needs to be called
		// on both sub-lists (obtained after partitioning)
	 
	// Merge the two sorted lists together, using the Merge()
} 
#endif

