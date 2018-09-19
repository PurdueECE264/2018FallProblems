// You may modify this file.
// For testing but this file will NOT be submitted.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utility.h"
#include "shuffle.h"

#ifdef TEST_MAIN
int main(int argc, char ** argv) 
{
	char deck[MAX_SIZE] = {'A', '2', '3', '4', '5', '6', '7', '8'};
	// Check for missing inputs
	// Create a structure variable (corresponding to the original deck)
        // Ensure you initialize the srtuct variable "size" with MAX_SIZE (declared in utility.h)
        // initialize cards to 0 since it will be populated using memcpy(..)

    // Use memcpy(),
        //For example: memcpy(orig_deck.cards, deck, MAX_SIZE * sizeof(orig_deck.cards[0]));

	// Read the number of cards from the terminal input
	   // For example
			//int size = strtol(argv[1]);
			//int shuff = strtol(argv[2]);

	//call repeat_shuffle(orig_deck, shuff);
	return EXIT_SUCCESS;
}
#endif
