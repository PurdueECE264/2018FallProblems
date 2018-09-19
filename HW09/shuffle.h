// do not modify this file
#ifdef CARD_SHUFFLING_H
#define CARD_SHUFFLING_H
#include "utility.h"

void divide(CardDeck orig_deck, CardDeck* upper_deck, CardDeck* lower_deck);

void interleave(CardDeck upper_deck, CardDeck lower_deck);

void shuffle(CardDeck orig_deck);

void repeat_shuffle(CardDeck orig_deck, int k);

#endif
