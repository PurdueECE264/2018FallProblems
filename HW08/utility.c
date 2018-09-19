// do not modify this file
#include "utility.h"
#include <stdio.h>

void print_deck(CardDeck deck)
{
	int iter;
	for (iter = 0; iter < deck.size; iter ++)
	{
		printf("%c",  deck.cards[iter]);
	}
	printf("\n");
}
