# Card Shuffling using  Riffle Shuffling (A)

This is the first part of two assignments. You need to implement the
riffle shuffling algorithm of cards.  This part asks you to shuffle a
deck of cards only once. The next assignment shuffles a deck multiple
times.

This assignment considers only cards' numbers (between A,1,2,..,T,J,Q,K) [where, 'T' represents 10] and
does not distingish Hearts, Diamonds, Clubs, or Spades.

# Learning Goals
You will learn to
* Use recursion to solve a problem.
* Make copies of structures using `memcpy()`.

<strong>Please read the entire file before you ask any question.</strong><br>
<strong>You should write your own Makefile to test the code.</strong>

Shuffling Method
================

The purpose of shuffling is to make the result difficult to predict.
Riffle shuffling is one of the most widely used shuffling methods.
Riffle shuffling has the following steps:

1. <strong>Divide a deck of cards into two groups</strong><br>Called the left group and right
group (because they are held by the left hand and the right
hand). Each group has at least one card. The two groups may have
different numbers of cards. This is one reason why the shuffling
results is hard to predict.

The following explains the division step with two examples.

## Example 1

Suppose the original deck is ordered as (number 2 is at the top and number 8 is at the bottom).

|2|3|4|5|6|7|8|
|-|-|-|-|-|-|-|

The deck is divied into two groups. There are many different possibilities. For example, the left group can be

|2|
|-|

and the right group is

|3|4|5|6|7|8|
|-|-|-|-|-|-|

## Example 2

Another possible way can be

|2|3|
|-|-|

and the right group is

|4|5|6|7|8|
|-|-|-|-|-|

To generalize, if the original deck has k cards, there are k - 1
different ways to divide the deck because the left can have 1, 2, ...,
k - 1 cards. Correspondingly, the right group has k - 1, k - 2, ..., 1
cards.

2. <strong>Interleave the cards</strong><br>Typically, the cards are released by the thumbs of the two hands. It is possible (in fact, likely) that the two thumbs are not "perfect" and more than one cards are released at once.  This is the reason why the suffling result is hard to predict. The interleaving step is illustrated with the following examples.

## Example 1

Let us consider the simplest example: the original deck has only two cards:

|2|3|
|-|-|

This is divided into two groups:

|2|
|-|

and

|3|
|-|

Interleaving them can produce two possible results: If the right thumb releases the card first, then number 3 will be at the bottom and number 2 is above.

|2|3|
|-|-|

If the left thumb releases the card first, then number 2 will be at the bottom and number 3 is above.

|3|2|
|-|-|

## Example 2

The next example has three cards:

|2|3|4|
|-|-|-|

The cards can be divided in two ways. The first division has only one card in the left group and two cards in the right group:

|2|
|-|

and

|3|4|
|-|-|

There are three possible results:

a. Number 2 is above 3

|2|3|4|
|-|-|-|

b. Number 2 is between 3 and 4


|3|2|4|
|-|-|-|


c. Number 2 is below 4

|3|4|2|
|-|-|-|

The second division has two cards in the left group and one card in the right group:

|2|3|
|-|-|

and

|4|
|-|

There are another three possible results:

a. Number 4 is above 2

|4|2|3|
|-|-|-|

b. Number 4 is between 2 and 3


|2|4|3|
|-|-|-|


c. Number 4 is below 3

|2|3|4|
|-|-|-|

Totally, there are six possible results when shuffling 3 cards.  Please notice
that 

|2|3|4|
|-|-|-|

appears twice and

|4|3|2|
|-|-|-|

does not appear.

The order within the left group and within the right group **cannot change**.  Why can it not appear?
If the left group has 2 cards, then 2 is always above 3, regardless where 4 is inserted.
If the left group has 1 card, then 3 is always above 4, regardless where 2 is inserted.
It is not possible to get

|4|3|2|
|-|-|-|

because it requires that the order of 2-3 and the order of 3-4 are changed.  This is not possible.

## Example 3

The next example considers 4 cards:

|2|3|4|5|
|-|-|-|-|

There are 14 possible results by shuffling these cards:

The left group has only one card (2) and the right group has three cards (3, 4, 5). There are four possible results:

|2|3|4|5|
|-|-|-|-|

|3|2|4|5|
|-|-|-|-|

|3|4|2|5|
|-|-|-|-|

|3|4|5|2|
|-|-|-|-|

The left group has two cards (2, 3) and the right group has two cards (4, 5). There are six possible results:

|2|3|4|5|
|-|-|-|-|

|2|4|3|5|
|-|-|-|-|

|2|4|5|3|
|-|-|-|-|

|4|2|3|5|
|-|-|-|-|

|4|2|5|3|
|-|-|-|-|

|4|5|2|3|
|-|-|-|-|

The left group has three cards (2, 3, 4) and the right group has only one card (5). There are four possible results:

|2|3|4|5|
|-|-|-|-|

|2|3|5|4|
|-|-|-|-|

|2|5|3|4|
|-|-|-|-|

|5|2|3|4|
|-|-|-|-|

Algorithm
=========

* <strong>Step 1</strong>
	* For a deck of *n* cards, divide it into two decks (upper deck and lower deck). Each deck has at least one card. The orders inside each deck is not changed. For example, if the original deck is `2` `3` `4` `5` `6` `7` `8` (each number is a card, `2` is at the top and `8` is at the bottom).
		* One possible result is upper: `2` `3` lower: `4` `5` `6` `7` `8`
		* Another possible result is upper: `2` `3` `4` lower: `5` `6` `7` `8`
		* Yet another possible result is upper: `2` `3` `4` `5` lower: `6` `7` `8`
		
* <strong>Step 2</strong>
	* Interleave the two decks. Please be careful that the orders in the upper deck and the lower deck are unchanged. For example, if the upper deck is `2` `3` `4`, in the newly shuffled deck, `2` is still above `3` and `3` is still above `4`. Similar, if the lower deck is `5` `6` `7` `8`, in the newly shuffled deck, `5` is still above `6` and `6` is still above `7`. The order of the cards in the two decks may interleave. The following are some possible results:
		* `2` is between `5` and `6`; `3` is between `6` and `7`.
		* `2` `3` are between `5` and `6`
		* `2` `3` `4` are all between `5` and `6`
		* `2` `3` `4` are all above `5` (thus, the new deck is the same as the original deck)
	* There are other possible results.
	
* <strong>Step 3 - Combining the first two steps</strong>
	* Suppose the original deck is `2` `3` `4`. The are two ways to divide it into an upper deck and a lower deck:
		* upper: `2` lower: `3` `4` or
		* upper: `2` `3` lower: `4`
	* Interleaving them can produce these results:
		* upper: `2` lower: `3` `4`
		* `2` `3` `4` (`2` above `3` and `4`), 
		* `3` `2` `4` (`2` between `3` and `4`), 
		* `3` `4` `2` (`2` below `3` and `4`),
	* or
		* upper: `2` `3` lower: `4`
		* `4` `2` `3` (`4` above `2` and `3`), 
		* `2` `4` `3` (`4` between `2` and `3`), 
		* `2` `3` `4` (`4` below `2` and `3`)
	* Please notice that `4` `3` `2` cannot appear.
	

How many possible orderings can the new deck have?
==================================================

* If there are *k* cards in the original deck, there are *k - 1* different ways to divide the original deck to two decks:
	* the upper deck has 1 card, the lower deck has *k - 1* cards
	* the upper deck has 2 cards, the lower deck has *k - 2* cards
	* the upper deck has 3 cards, the lower deck has *k - 3* cards
	* the upper deck has 4 cards, the lower deck has *k - 4* cards 
	* till, the upper deck has *k - 1* cards, the lower deck has 1 card
* If the upper deck has *n* cards and the lower deck has *m* cards, there are *((n+m)!)/(n! m!)* ways to interleave the two decks, while keeping the orders in the original upper deck and the original lower deck. (Remember that both *n* and *m* must be one or larger.)
* If the original deck has k cards, then n + m is k and n can be 1, 2, ..., n - 1. Adding the together 

  ```k!/(1! (k-1)!) + k!/(2! (k-2)!) + k!/(3! (k-3)!) + ... + k!/((k-1)! 1!)```
* Please be aware that if a new deck appears multiple times, it is counted multiple time. In the previous example, `2` `3` `4` is counted twice.

* For a deck of *k* distinct cards, there are *k!* possible orders (i.e., permutations).

|k|2|3|4|5|6|
|-|-|-|-|-|-|
|2<sup>k</sup> - 2|2|6|14|30|62|
|k!|2|6|24|120|720|

* As you can see, *2<sup>k</sup>- 2* is equal to *k!*, when *k* is 2 or 3. *2<sup>k</sup>- 2* is smaller than *k!*, when *k* is 4 or larger. Thus, shuffling once cannot generate all possible orders, except for only k is 2. Actually, *2<sup>k</sup>- 2* counts the same output multiple times; in the previous example, `2` `3` `4` is counted twice and `4` `3` `2` is not generated. For simplicity, ECE 264 does not ask you to determine which orders are missing.


Functions to Complete
=====================
* <strong>int main(int argc, char ** argv)</strong>
	* Create a structure variable (corresponding to the original deck)
		* Ensure you initialize the srtuct variable `size` with `MAX_SIZE` (declared in `utility.h`)
		* initialize cards to 0 since it will be populated using memcpy(..)
	* Use memcpy() to copy the contents of the variable `deck`, into your structure variable's `card`.
	* Read the number of cards from the terminal input
		* For example `orig_deck.size = strtol(argv[1], NULL, 10);`
	* Call shuffle()
		* For example `call shuffle(orig_deck);`
		
* <strong>void shuffle(CardDeck orig_deck)</strong>
	* You also have to implement a function to perform the shuffling. In this shuffling function, you have to call the `divide(...)` function to get all possible pairings. Before you call the division function, you have to allocate sufficient space such that all possible pairings can be stored. For each pair of upper and lower decks, you have to perform interleaving. You have to deallocate or free the space storing the pairings before you exit from the function.
	* `orig_deck` is the structure variable pointing to the original deck of cards.
	* The number of upper-low deck pairs will always be *number_of_cards - 1*.
	* Follow these steps:
		* Calculate the number of upper-low deck pairs.
		* Allocate enough memory to accommodate the pairs.
		* Call `divide(…)` to find these pairs.
		* For each pair of upper-lower deck, call `interleave(…)` to interleave the cards.
		* Release the allocated memory.
	* The amount of memory allocated in this function must be determined based on the size of the original deck. The program may fail if the allocated memory has a fixed size (some students like to use 1000 but nobody could explain why 1000).
	* A penalty of 50% of the possible points will be deducted if the amount of allocated memory is not determined by the size of the original deck, e.g., if you use 100, 1000, 10000, or any other fixed number.
	* You are allowed to have additional functions in the file. 
		
		
* <strong>void divide(CardDeck orig_deck, CardDeck* upper_decks, CardDeck* lower_decks)</strong>
	* This program find the possible outcomes of dividing a deck of cards into a pair of upper and lower decks. The division is done such that if the upper deck is placed above the lower deck, you get back the original deck. After dividing the cards into the upper and the lower decks, they are interleaved into a single deck (using the `interleave(…)`). This is called one round of shuffling. You have to implement a function to find and store all possible pairings of non-empty upper and lower decks in two arrays.
		* The `divide(…)` function has three arguments:  
			* `orig_deck` is the original deck of cards. 
			* `upper_deck` and `lower_deck` are two arrays with sufficient amounts of memory `upper_deck[i]` and `lower_deck[i]` form a pair.
			* The `shuffle(…)` should allocate enough memory for `upper_deck` and `lower_deck` before calling `divide(…)`.
	* If the original deck has n cards, there should be *n - 1 pairs* of upper and low decks:
		* upper deck has 1 card, low deck has n - 1 cards
		* upper deck has 2 cards, low deck has n - 2 cards
		* upper deck has 3 cards, low deck has n - 3 cards
		* n-1. upper deck has n - 1 cards, low deck has 1 cards
	* `upper_deck[i]` should contain the first i+1 cards from `orig_deck`. For example:
		* `upper_deck[0]` should store the first card in the original deck.
		* `upper_deck[1]` should store the top two cards in the original deck.
		* `upper_deck[2]` should store the top three cards in the original deck.
	* Tip: Do not call malloc(…) in this function.
	
* <strong>void interleave(CardDeck upper_deck, CardDeck lower_deck)</strong>
	* Use recursion to implement the algorithm described earlier.
	* Use `print_deck(…)` to print each resulting order.
	* Do not make assumptions about the order or composition of the original deck. For example, `A` may come before or after `2`, or may not be present at all.
	* `print_deck(…)` and `MAX_SIZE` are declared in utility.h.
	* Tip: There should be no uncertainty in this function. If you think a random number generator is needed, you are on the wrong track.
	* Tip: To copy the elements of one array from one array to another (e.g., the array of cards in a `CardDeck`), you could use `memcpy(…)`. The `=` operator will simply copy the address, not the elements themselves.
	* Tip: You must use `MAX_SIZE` for the maximum length of a deck. Do not use 13.
	* Tip: Any memory allocated with malloc(…) must be freed. There are penalties for memory leaks.


Summary
========

You need to complete the functions in `main.c` and `shuffle.c`. You are allowed to create new functions, variables, and structures as you may need. Ensure to include the functions within the `#ifdef` and `#endif` statements of the functions that invoke the function.

Ensure, you allocate and deallocate memory. Grading will be done based on memory leaks, as detected by valgrind.

<strong>A sample Makefile is provided, but it is not complete.</strong><br>
* Your Makefile should include, `/.shuf 4 | sort > output_file.txt`
	* where, `shuf` is the executable file.
	* The integer value (`k`), (in this case `4`) indicates the number of cards.
	* `sort` is used because, the order generated can be slightly different based on implementation (However, the number of shuffle possibilities generated will ALWAYS be the same, i.e. `2<sup>k</sup> - 2`)
	* `output_file.txt` is the output file. You can compare this with the expected files provided.
	
* Please check the expected/ directory to see what the output should look like. Please keep in mind we have provided the `print_deck()` function for you to use.


### Please remember the order of your output might be different, you need to ensure that your Makefile includes `sort`, so your output can be matched to the expected output.

### Please use the print_deck() to print the shuffled decks. Do not write your own function to print the decks.

### You can create additional functions/structures/variables. Please ensure, they are within the #ifdef and #endif of the calling function.
	
WHAT TO SUBMIT
==============

You **must** follow the instructions precisely. Failing to follow
these instructions will likely make you receive zero in this
assignment.  Your score **is determined by your submission**, nothing
else.  The teaching staff is strictly prohibited seeing anything on
your computer for grading.

```
zip hw08.zip main.c shuffle.c
```

Enter Blackboard, upload `hw08.zip`.

To verify your zip file, please copy `hw08.zip` to another directory and

```
unzip hw08.zip
```
