// Please edit this file as required.
// You may add more functions/variables/structures in this file (if needed).

#include "shuffle.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#ifdef TEST_DIV
void divide(CardDeck orig_deck, CardDeck * upper_deck, CardDeck * lower_deck)
{
	// Dividing the decks into the way mentioned in Readme - as lower and upper decks

	// starting from i = 1 -> size-1 copying into upper deck and lower decks
		// For example: strncpy((upper_deck[i]).cards, orig_deck.cards,i+1);
		// Update the size of the upper and lower decks after copying each element.
			// For example: upper_deck[i].size = i+1;

		// Similarly perform the string copy, and size update operation on the lower deck.
			//For example: strncpy((lower_deck[i]).cards, orig_deck.cards+i+1,orig_deck.size-i-1);
		    // For example: lower_deck[i].size = orig_deck.size -i - 1;
	}
}
#endif

#ifdef TEST_INTER
void interleave(CardDeck upper_deck, CardDeck lower_deck)
{
    // Follow instructions in the README, to understand the working of the recursive function.
    // Use print_deck(…) to print each resulting order.
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
