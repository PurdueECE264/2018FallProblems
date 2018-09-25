// do not modify this file
#ifndef CARD_SHUFFLING_H
#define CARD_SHUFFLING_H
#include "utility.h"

void divide(CardDeck orig_deck, CardDeck* upper_deck, CardDeck* lower_deck);

void interleave(CardDeck upper_deck, CardDeck lower_deck, int repeat);

void shuffle(CardDeck orig_deck, int repeat);

void repeat_shuffle(CardDeck orig_deck, int k);

#endif
