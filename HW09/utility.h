#ifndef UTILITY_H
#define UTILITY_H
// do not modify this file
#define MAX_SIZE 8
typedef struct
{
  char cards[MAX_SIZE];
  int size; // actual size, must be between 0 and MAX_SIZE
  // if size < MAX_SIZE, some elements in cards are not used
} CardDeck;

void printDeck(CardDeck new_deck);

#endif 
