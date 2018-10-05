/****************** Modify this file at specified place *************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hw13.h"

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
	
	// use fscanf to read the file, and store its contents into an array.

	// create head node to store the head of the linked list.

	// call the appropriate function to create the rest of the linked list, with the values of the array.

	// Divide is a function to break the lists into smaller sublists.
		// You are supposed to find the mid-point of the list, and then break the list into two lists.
		// Then the sub-lists are broken down further into smaller sub-lists.
		// Refer to the example in the README

	// Tip: check for memory errors.

	return EXIT_SUCCESS;
}

#endif
