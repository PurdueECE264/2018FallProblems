// Please modify this file as required

#include "shuffle.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>


// You can add more functions, structures, and vairables to this file.  
	// Helper functions must start with '_'.


//For example global variables can be defined as: 
	//int present_k; 
		//keeps track of the number of repeats for each iteration for shuffle cards
	//int repeat_iter;
		//keeps track of repeats for each iteration

//This is an example of a helper function.
	//clean function whenever malloc fails in shuffle function
static void _error_clean()
{
	exit(EXIT_FAILURE);

}

#ifdef TEST_DIV
void divide(CardDeck orig_deck, CardDeck* upper_deck, CardDeck* lower_deck)
{
	//Dividing the desks into the way mentioned in the document - as lower and upper
	//Use a loop from index i to orig_deck.size - 1
		//starting from 1 -> size-1 copying into upper deck and lower decks
			//strncpy((upper_deck[i]).cards, orig_deck.cards,i+1);
		//update size of upper deck
			//For example: upper_deck[i].size = i+1;
		//update size of lower deck:
			//For example: lower_deck[i].size = orig_deck.size -i -1;
}
#endif


#ifdef TEST_INTER
void interleave(CardDeck upper_deck, CardDeck lower_deck)
{
    // Follow instructions in the README, to understand the working of the recursive function.
    
    // when the newly shuffled deck is complete:
    	//you will perform another k-1 rounds of shuffling with the new deck
    
    // Tip: There should be no uncertainty in this function.
        //If you think a random number generator is needed, you are on the wrong track.
    // Tip: To copy the elements of one array from one array to another (e.g., the array of cards in a CardDeck),
        //you could use memcpy(…).
        //The = operator will simply copy the address, not the elements themselves.

}
#endif

#ifdef TEST_SHUF
void shuffle(CardDeck orig_deck)
{
    // declare a variable to hold the number of pairs
        // we can say that we have only size-1 possibility of pairs

    // if number of pairs == 0; return;

	// instantiate pointers to hold both upper and lower decks (after division)
	   // For example: CardDeck * upper_deck = NULL;

	// allocate memory based on number of pairs
	   //For example: upper_deck = malloc(numpairs*sizeof(CardDeck));

	// call divideDeck to fill upper_deck and lower_deck

	//run a loop through all the pairs
		// for each pair of upper and lower deck call interleave()
		// For example: interleave(upper_deck[i],lower_deck[i]);

    // free memory allocated to upper and lower deck.
}
#endif

#ifdef TEST_RSHUF
void repeat_shuffle(CardDeck orig_deck, int k)
{
	//orig_deck contains a deck of cards, and it's size.

	//If (k ≤ 0), no shuffling, print the only possible outcome.
		//printDeck(orig_deck); and return
		//TIP: Print only the results obtained after k rounds of shuffling
	// call shuffle(orig_deck);
	
	// TIP: In interleave(…), when the newly shuffled deck is complete, 
		//you will perform another k-1 rounds of shuffling with the new deck.
}
#endif
