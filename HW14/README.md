
# HW14. Merge Sort using LinkedList.


**Please read the entire file before you ask any question.**

In this assignment you will perform Merge Sort using LinkedLists. Use your knowledge from prior assignments to solve this assignment.

# Learning Goals
* Learn how to use LinkedLists.
* Perform MergeSort with LinkedLists.


# To Do
**SplitList()**
Same as HW13

**LinkedListCreate()**
Same as HW13

**CreateNode()**
Same as HW13

**Merge()**
Merge two sorted sub-arrays of the list. 
Remember to check for base cases, when either sub array is empty.
Compare the values of the sub list, and recursively call `SortedMerge()` with appropriate values.

**MergeSort()**
Recursive function to perform the sorting algorithm.
Remember to check for base cases, (Similar to HW13).
Use `SplitList()`, similar to HW13.
Call `MergerSort()` recursively, to divide the list into smaller elements.
Call `Merge()` to store the sorted result.

**main()**
This is the main function of your program.
It takes 1 argument, the input file. If the number of arguments is not correct then return failure.

# Testing your code
Following are the files we provide:
1. `hw14.c` - file which have `SpiltList`, `Merge`, `MergeSort`, `LinkedListCreate` and `CreateNode` function which you need to complete
2. `hw14.h` - header file which contains struct definition. Do not modify this file and do not submit this file.
3. `main.c` - main file for this assignment, you would have to implement `main` fuction in this

`NOTE:Please use the LinkedListPrint function given to you for printing the list.`<br>
To test your code, we provide you with 2 different cases. Please make more test cases on your own.<br>

#### Your Makefile should include

```
<executable> inputs/test<num>.txt > output<num>.txt
diff output<num>.txt expected/expected<num>.txt
```

#### Flags to include
Please also include the following define flags for your Makefile.

```bash

-DTEST_MAIN -DTEST_CREATENODE -DTEST_LINKEDLISTCREATE -DTEST_SPLIT -DTEST_MERGE -DTEST_SORT -DLINKEDLIST

```

Type the following command to zip your file.
```bash
	zip hw14.zip hw14.c main.c
```
**You will not get any credits if the submitted file is not zipped**

The **only** way to submit homework is through Blackboard.

If your program has any compilation error or warning (remember to use
`gcc -std=c99 -g -Wall -Wshadow --pedantic -Wvla -Werror`), you will
receive zero in this assignment.
