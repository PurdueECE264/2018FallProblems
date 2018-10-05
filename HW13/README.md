

# HW13. Partition of LinkedLists.


**Please read the entire file before you ask any question.**

In this assignment you will partition a LinkedList. This is a precursor to HW14, as partition is a fundamental step of Merge Sort.

Partitoning of Linked Lists is not as straightforward as partitioning of arrays. Remember, you can not jump to a specified index position in a Linked List.

# Learning Goals
* Learn to Use Linked Lists.
* Perform partition with Linked Lists.




# To Do
**LinkedListCreate()**
In this function you will create and initialize a LinkedList of length `L`. To this function you will pass `L`, and `arr` as parameters. You will create a list with elements of `arr[index]`.

**CreateNode()**
In this function you will create a new node with the `value` equal to the parameter.

**main()**
This is the main function of your program.
It takes 1 argument, the input file. If the number of arguments is not correct then return failure.

**Divide()**
The base function for your resursive calls.
Check for base cases, to return from the call stack. The `SpiltList()`, and `LinkedListPrint()` is called from this function.
Remeber to call `LinkedListPrint()`, after `SpiltList()` (Mentioned in the comments).

**SpiltList()**
The function used to find the midpoint of the list.
#### `1` `2` `3` `4` should be split into `1` `2` and `3` `4`.
#### `1` `2` `3` `4` `5` should be split into `1` `2` `3` and `4` `5`.

# Example

`1` `2` `3` `4` `5` `6` `7` `8`

### Step 1:
Break into: `1` `2` `3` `4` and `5` `6` `7` `8`

### Step 2:
Break `1` `2` `3` `4` into: `1` `2` and `3` `4`

### Step 3:
Break `1` `2` into: `1` and `2`

### Step 4:
Break `3` `4` into: `3` and `4`

### Step 5:
Break `5` `6` `7` `8` into: `5` `6` and `7` `8`

### Step 6:
Break `5` `6` into: `5` and `6`

### Step 7:
Break `7` `8` into: `7` and `8`

# Testing your code
Following are the files we provide:
1. `hw13.c` - file which have `SpiltList`, `Divide`, `LinkedListCreate` and `CreateNode` function which you need to complete
2. `hw13.h` - header file which contains struct definition. Do not modify this file and do not submit this file.
3. `main.c` - main file for this assignment, you would have to implement `main` fuction in this

`NOTE:Please use the LinkedListPrint function given to you for printing the list.`<br>

#### Your Makefile should include

```
<executable> inputs/test<num>.txt > output<num>.txt
diff output<num>.txt expected/expected<num>.txt
```

#### Flags to include
Please also include the following define flags for your Makefile.

```bash

-DTEST_MAIN -DTEST_CREATENODE -DTEST_LINKEDLISTCREATE -DTEST_SPLIT -DTEST_DIVIDE -DLINKEDLIST

```

Type the following command to zip your file.
```bash
	zip hw13.zip hw13.c main.c
```
**You will not get any credits if the submitted file is not zipped**

The **only** way to submit homework is through Blackboard.

If your program has any compilation error or warning (remember to use
`gcc -std=c99 -g -Wall -Wshadow --pedantic -Wvla -Werror`), you will
receive zero in this assignment.
