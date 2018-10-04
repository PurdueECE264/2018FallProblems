# HW12. Josephus problem using LinkedList.


**Please read the entire file before you ask any question.**

In this assignment you will solve Josephus problem using LinkedList. In HW03 we implemented this problem using array but this time we will be using LinkedList for this assignment.

# Learning Goals
* Learn to traverse LinkedList.
* Learn to free memory of LinkedList

# Jospehus problem
You will be solving jospehus problem by using LinkedList. The values of the nodes within the LinkedList will be the same as array indices. For example, if the LinkedList is of length is 5, then the values of nodes will be 0,1,2,3,4.

For example, lets assume that we have a LinkedList of length 7, and k = 2.

```
0 1 2 3 4 5 6  //start at head (index=0), count 2, 2 will be out.
0 1 3 4 5 6    //index=3, 5 is out
0 1 3 4 6      //index=6, 1 is out
0 3 4 6	       //index=3, 6 is out
0 3 4	       //index=0, 4 is out
0 3	       //index=0, 0 is out
3	       // 3 wins the game
```


# To Do for "Josephus"
**LinkedListCreate()**
In this function you will create and initialize a LinkedList of length `L`. For example, if the LinkedList has a length 7; the values of the nodes within LinkedList will be `0,1,2,3,4,5,6`. This function will use `CreateNode` to create the a single node.

**Josephus()**
In this function you will implement the solution for josephus problem using singly LinkedList. Also, if the number of remaining nodes is divisible by `elemDivisible` then you should print the remaining elements in the linked list by calling `LinkedListPrint` function. For example, if the a LinkedList has 14 and value of elemDivisible is 3, then you should call the `LinkedListPrint` function when remaining elements are 12, 9, 6 and 3. Please see the examples below for better understanding.

**CreateNode()**
This function creates a single linked list node with the value given as input.

**main()**
This is the main function of your program.
It takes 3 arguments from terminal which are length, k and elemDivisible respectively. All of these values should be integer. If the number of arguments is less than 4, return EXIT_FAILURE.

# Testing your code
Following are the files we provide:
1. `hw12.c` - file which have `Josephus`, `LinkedListCreate` and `CreateNode` function which you need to complete
2. `hw12.h` - header file which contains struct definition. Do not modify this file and do not submit this file.
3. `main.c` - main file for this assignment, you would have to implement `main` fuction in this

#### Flags to include
Please also include the following define flags for your Makefile.

```bash

-DLINKEDLIST -DTEST_MAIN -DTEST_CREATENODE -DTEST_LINKEDLISTCREATE -DTEST_JOSEPHUS

```

`NOTE:Please use only the LinkedListPrint function given to you for printing the list.`<br>
To test your code, we provide you with 6 different cases:<br>


#### Josephus cases
The following command should create and initialize a singly likedlist of length 10, k=3, elemDivisible=1. The output of this command is in expected1.txt
`./hw12 10 3 1 > expected1.txt`<br>

The following command should create and initialize a singly likedlist of length 10, k=4, elemDivisible=2. The output of this command is in expected2.txt
`./hw12 10 4 2 > expected2.txt`<br>

The following command should create and initialize a singly likedlist of length 8, k=5, elemDivisible=3. The output of this command is in expected3.txt
`./hw12 8 5 3 > expected3.txt`<br>

The following command should create and initialize a singly likedlist of length 8, k=9, elemDivisible=1. The output of this command is in expected4.txt
`./hw12 8 9 1 > expected4.txt`<br>

The following command should create and initialize a singly likedlist of length 41, k=3, elemDivisible=1. The output of this command is in expected5.txt
`./hw12 41 3 1 > expected5.txt`<br>

The following command should create and initialize a singly likedlist of length 100, k=3, elemDivisible=20. The output of this command is in expected6.txt
`./hw12 100 3 20 > expected6.txt`<br>


Type the following command to zip your file.
```bash
	zip hw12.zip hw12.c main.c
```
**You will not get any credits if the submitted file is not zipped**

The **only** way to submit homework is through Blackboard.

# Grading
We will be doing partial grading as well. The marks for each function completed are as follows:
* `LinkedListCreate` - 20
* `CreateNode`- 10
* `Josephus` - 50
* `main` - 20

`Note: There is a 50 marks penalty on your final grade, if you have a memory leak.`

If your program has any compilation error or warning (remember to use
`gcc -std=c99 -g -Wall -Wshadow --pedantic -Wvla -Werror`), you will
receive zero in this assignment.



**All Test cases will be released later.**
