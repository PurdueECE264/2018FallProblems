/****************** Modify this file at specified place *************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hw14.h"


#ifdef LINKEDLIST
// Do not modify this function, we are using this within ifdef block for
// ease of grading.
void LinkedListPrint(Node * * source)
{

	Node *temp = * source;

	while(temp!=NULL)
	{
		if(temp->next!=NULL)
		{
			printf("%d,",temp->value);
		}
		else
		{
			printf("%d",temp->value);
		}
		temp=temp->next;
	}
	printf("\n");
}
#endif

/****************** DO NOT Modify this file above this line *************************/

// Modify the following function
#ifdef TEST_MAIN

int main(int argc, char **argv)
{
	// if argc is less than 2 then, return EXIT_FAILURE
	// input file is specified through the Makefile.

	// open file to read

	// check for fopen fail. If so, return EXIT_FAILURE
	
	// count the number of integers in the file.

	// allocate memory to store the numbers
	
	// check for malloc fail, if so, return EXIT_FAILURE
	
	// use fscanf to read the file for its contents.

	// create head node, which corresponds to the head of the linked-list.
	
	// You must now use the appropriate function to construct the remaining list.

	// call MergerSort() function for final output.
		// This will call a recursive function.
		// The input list will be divided into two sub-lists recursively,
		// Then the contents of the sub-lists are compared and merged back to form the
		// sorted output list.

	// use the provided function to print the final list.
	
	// Tip: Check for memory errors.

	return EXIT_SUCCESS;
}

#endif
