# Card Shuffling using  Riffle Shuffling (B)

In HW08, your program gets a deck of cards and shuffle this deck once. The program prints the possible orders (with repetitions) after one round of shuffling.
You may have noticed that shuffling only once does not produce all possible orderings of a deck of cards. 
For example, if the original deck has 4 cards, the number of all possible orderings is 24.

However, shuffling a deck of cards once will give us only 14 orderings, not 24. 
Moreover, some of the 14 results are the same. Note that 24 is 4!, and 14 is 2 <sup>4</sup> - 2. 
If we are dealing with 5 cards, there are 5! possible orderings, but shuffling once will give us only (2<sup>5</sup> -2) orderings (with repetitions).

<strong>Please read the entire file before you ask any question.</strong><br>
<strong>You should write your own Makefile to test the code.</strong>

Shuffling Method
================

* This assignment extends the exercise to print the possible orderings of a deck after `k` rounds of shuffling, using the function `void repeat_shuffle (CardDeck orig_deck, int k);`

* Here, the first parameter is the original deck (`orig_deck`) and the second parameter, `k`, is the number of rounds of shuffling to be performed. We assume that a round of shuffling is always performed on all the cards available in the orignal_deck. 

* It involves dividing a deck of cards into non-empty upper and lower decks, and interleaving the two decks into a complete deck again.

* The next round of shuffling, if any, should be performed on the complete (shuffled) deck, and the process continues until all k rounds of shuffling have been performed.

* For a deck `A` `2` `3` `4` shuffled 3 times, shuffling once produces 14 (2 <sup>4</sup>- 2) lines. For each of these orderings, we perform another shuffling to produce 14 possible orderings (with repetitions). 

* Therefore, the second round of shuffling will produce 14 * 14 possible orderings (with repetitions).

* Consequently, shuffling 3 times produces 2744 (14 * 14 * 14) lines altogether. It is acceptable that the possible orderings produced by your program do not match the order in which the possible orderings appear in the listing produced by the instructor's code.

* However, when your listing and the instructor's listing are sorted, they should match line by line. Please print only the final results (i.e., all possible orderings with repetitions after all `k` rounds of shuffling).

* Do not print the intermediate results.

Tips
====

* It is likely that your helper functions used in HW08 require some adjustments. (The `divide(…)`,  `interleave(…)` and `shuffle(…)`)

* The `interleave(...)` and `shuffle(...)` functions have a new parameter, `int repeat`. This is for holding the number of shuffles yet to be performed.

* At the end of the interleave operation, you will recursively call `repeat_shuffle(...)` with decremented value of repeat.

<strong>Tips for getting started</strong><br>

* `repeat_shuffle(…)` is similar to `shuffle()` in HW08, except that it has an additional parameter to keep track of the number of rounds (`int k`) to shuffle cards.

* `repeat_shuffle(…)` can be written as a part of a recursive paradigm, but it does not call itself.
  * In all exercises so far, all recursive functions call themselves directly. 
  * Here, you may want to consider the case that `repeat_shuffle(…)` calls another function, which then calls `repeat_shuffle(…)`, but with a smaller problem size. 
  * In other words, `repeat_shuffle(…)` is called recursively in an indirect fashion.
* When the number of rounds of shuffling is zero, what should `repeat_shuffle(…)` do? This is the terminating condition for `repeat_shuffle(…)`.
  * Recall that this function is supposed to print possible outcomes (with repetitions) after `k` rounds of shuffling. 
  * If `k = 0`, what should be printed? 
  * Are there other terminating conditions?
* If the number of rounds (`int k`) of shuffling is greater than zero, `repeat_shuffle(…)` should perform what you did in HW08,
  * Find all possible pairs of dividing cards, and for each pair, perform interleaving.
* When you are done with interleaving an upper deck and lower deck and obtain a complete deck of cards, you have completed one round of shuffling.
  * Now, you have to perform `k-1` more rounds of shuffling. What function can you call to perform `k-1` rounds of shuffling of a deck of cards?
* If you know the answers to these questions, your `shuffle.c` in HW09 should look very similar to `shuffle.c` in HW08.

* You can also have an implementation that uses an array to store the results of one round of shuffling. Another round of shuffling can then be applied to each deck in the array. You would have to allocate space for the storage of intermediate results, and you should also be responsible for freeing the space when you no longer need them.

<strong>Tips for testing</strong><br>
* First, check whether you have correct number of lines for the output for a given deck size and `k` (# of rounds).
  * You may wish to modify your `main(…)` to accept two command-line arguments: the number of cards in a deck (`argv[1]`), and the number of rounds of shuffling to be performed (`argv[2]`).
* Too many rounds of shuffling will generate a large number of possible orderings. This may affect your testing in three ways:
  * Your implementation may require you to allocate memory to store the orderings. If the number of rounds of shuffling is too high, you may run out of memory. (If you run out of memory, you should free the memory you have allocated so far, and `return EXIT_FAILURE` from the `main()` function). Therefore, it is important that after you call `malloc()`, you always check to see whether the `malloc()` function is successful in returning a non-NULL address.
  * For your testing, you probably want to save the output to a file. `./shuffle 4 3 | sort > output`. The screen output will be redirected and be stored in the file `output`. Too many rounds of shuffling may result in an extremely large file, and you may run out of disk quota. 
    * Therefore, you should not attempt a large number of rounds of shuffling during testing AND also redirect the screen output to a file. It is fine to attempt a large number of rounds of shuffling, without redirecting the screen output to a file, to stress test your memory allocation, if necessary.
   * Depending on your implementation, you may have a deep recursion that exhaust all space on the call stack.
   
   
Functions to complete
=====================
* <strong>void repeat shuffle(CardDeck orig deck, int k)</strong>
   * `orig_deck` contains the original deck of cards.
   * The number of upper-low deck pairs should be the `number of cards - 1`.
   * If `k <= 0`, no shuffling, print the only possible outcome.
   * Otherwise, for each pair of upper and lower decks, interleave the cards
   * In `interleave(…)`, when the newly shuffled deck is complete, you will perform another `k-1` rounds of shuffling with the new deck.
   * Print only the results obtained after `k` rounds of shuffling
 
* <strong>void shuffle(CardDeck orig_deck, int repeat)</strong>
   * Generate all possible decks that could result from one shuffle.
   * Repeat holds the number of shuffles yet to be performed.
   * Follow instrctions from HW08.
* <strong>void interleave(CardDeck upper_deck, CardDeck lower_deck, int repeat)</strong>
   * Print all possible interleavings of `upper_deck` with `lower_deck`.
   * At the end of interleave, you will recursively call `repeat_shuffle(...)` `repeat - 1`.
   * Follow instrctions from HW08.
* <strong>void divide(CardDeck orig_deck, CardDeck* upper_decks, CardDeck* lower_decks)</strong>
   * Divide a deck into into pairs of upper and lower decks.
   * Follow instrctions from HW08.

Note
====
* Your Makefile should include, `/.shuf 2 4 | sort > output_file.txt`
	* where, `shuf` is the executable file.
	* The integer value (`k`), (in this case `2`) indicates the number of cards.
 * The integer value to indicate the number of shuffles, (in this case `4`).
	* `sort` is used because, the order generated can be slightly different based on implementation (However, the number of shuffle possibilities generated will ALWAYS be the same.)
	* `output_file.txt` is the output file. You can compare this with the expected files provided.
	
#### You can create more functions, and structures to help perform your operations. Remember to include them within the #ifdef and #endif of the calling function.

WHAT TO SUBMIT
==============

You **must** follow the instructions precisely. Failing to follow
these instructions will likely make you receive zero in this
assignment.  Your score **is determined by your submission**, nothing
else.  The teaching staff is strictly prohibited seeing anything on
your computer for grading.

```
zip hw09.zip shuffle.c
```

Enter Blackboard, upload `hw09.zip`.

To verify your zip file, please copy `hw09.zip` to another directory and

```
unzip hw09.zip
```
