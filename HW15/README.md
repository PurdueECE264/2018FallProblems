

# HW15. Removal of Duplicate Elements in LinkedLists.


**Please read the entire file before you ask any question.**

In this assignment you will remove duplicates from a LinkedList by deleting nodes that contain duplicate values. It is crucial to understand linked list traversal, linking and deleting nodes of the list.

You can not directly access a specified index position in a Linked List like arrays. Elements in a linked list can be accessed through sequential traversal. So in order to delete a node you would need to keep a track on the previous node and the next node. 

# Learning Goals
* Traverse Linked Lists and access elements.
* Delete nodes from Linked Lists

# Deleting Nodes
In this assignment you start by initializing a linked list, where each Node corresponds to an element in a provided input file. Next, traverse the linked list, comparing the current Node's value to all Nodes before it. If the current Node contains a value equal to the value in any Node before it, you delete the current Node. 

In order to delete the current Node, set the *next* pointer of previous node ( of the current Node) to the Node that immediately follows the current Node.

# To Do
You need to modify the following functions:


**LinkedListCreate()**
In this function you will create and initialize a LinkedList. Parameters `head`and `name` should be passed as inputs to this function. You will create a list with elements in a file named `name`.

**CreateNode()**
In this function you will create a new node by initializing the Node parameter `value` with the argument `val` and `next` to `NULL`.

**main()**
This is the main function of your program.
It takes 1 argument, the input file name. If the number of arguments is not correct then return `EXIT_FAILURE`. If the program runs perfectly, then return `EXIT_SUCCESS` at the end of main function.

**RemoveDuplicate()**
This function traverses the linked list and deletes the nodes of linked list that have duplicate values.


# Testing your code
Following are the files we provide:
1. `hw15.c` - This file has `RemoveDuplicates()`, `LinkedListCreate()` and `CreateNode()` functions which you need to complete.
2. `hw15.h` - This is the header file which contains struct definitions. DO NOT modify this file and DO NOT submit this file.
3. `main.c` - This is the main file for this assignment, you would have to implement `main` fuction in this.

`NOTE:Please use the LinkedListPrint() function given to you for printing the list.`<br>

#### Your Makefile should include

```
<executable> inputs/test<num>.txt > output<num>.txt
diff output<num>.txt expected/expected<num>.txt
```

#### Flags to include
Please include the following test flags in your Makefile.

```bash

-DTEST_MAIN -DTEST_CREATENODE -DTEST_LINKEDLISTCREATE -DTEST_REMOVED -DLINKEDLIST

```

Type the following command to zip your file.
```bash
	zip hw15.zip hw15.c main.c
```
**You will not get any credits if the submitted file is not zipped**

The **only** way to submit homework is through Blackboard.

If your program has any compilation error or warning (remember to use
`gcc -std=c99 -g -Wall -Wshadow --pedantic -Wvla -Werror`), you will
receive zero in this assignment.
