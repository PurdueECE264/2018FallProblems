# Quick Sort

Learning Goals 
==============

This assignment asks you to write a program that uses *qsort*
to sort an array of integers in the ascending order.

You will learn to
* Reading numbers from a file into an array.
* Calling qsort() function.
* Understanding how to use the comparator function.

Quick Sort
==============

Before doing this homework, you should understand how [`qsort()`](https://linux.die.net/man/3/qsort) function works. Please go to the link and read the explanation. 

Deliverables
==============
 Need to complete the following functions:
 * `int main(int argc, char * * argv)`
	* input file will be specified from the terminal - test files are made available in inputs directory.
	* check for wrong input format eg. if input file does not exist, etc, then your program should `return EXIT_FAILURE;`
	* declare a variable to store the file name from the argv parameter. For example: `char* file_name = argv[1];`
	* call countFromFile(...) to obtain the number of elements in the file.
	* allocate memory for an array of the required size.
	* if memory allocation fails then your program should `return EXIT_FAILURE;`
	* call fillArray(...) to store elements from the file into the array.
	* use [`qsort()`](https://linux.die.net/man/3/qsort)
		* For example: `qsort(arr, count, sizeof(int), comparator);` (here, `arr` is the array name, `count` is the number of elements in the array, `comparator` is the completed comparator function)
	* call the printArray() function provided to you.
	   
 * `void fillArray(int* arr, int count, char*  file_name)`
 	* open file to read using the `file_name`.
	* run a loop, from index = 0 to "count", and use: `fscanf(file_pointer, "%d", &arr[index]);`
	* at the end of the loop close file_pointer
	   
 * `int countFromFile(char* file_name)`
 	* open file to read using the `file_name`.
	* count the number of integers using a loop
	* at the end of the loop close file_pointer
	   
 * `int cmp(const void *a, const void *b) `
 	* explicitly typecast both paramters to (const int *)
		* For example `const int *ia = (const int *)a`
 	* if parameter2 > parameter1; return -1
	* if parameter2 == parameter1; return 0
	* if parameter2 < parameter1; return 1
	* Please refer to Prof. Lu's book for more details about comparator functions.
   
Write Self-Checking Code
========================

Many students do not know how to write programs that are
"self-checking".  As a result, the students rely on their eyes to
check whether their programs are correct.  The problem is that doing
so restricts small test cases.  This assignments explains to you how
to write self-checking code.

Checking the correctness of a sorting program is easy: is the result
sorted?  This assignment gives an example showing how to use a
function to check whether an array is sorted. You should learn how to
write self-checking code in future assignments.

Use Makefile to Test
====================

Makefile can be used for testing.  It is particularly helpful running
multiple tests at once.  This is *critical* to your success of
learning programming.  Some students do not learn how to run multiple
test cases; instead, they run one test case at a time. This can be
tedious and, as a result, these students do not test their programs
well.  Their programs may fail test cases during grading.  In fact,
some students' programs fail even the test cases given to them.

THIS WOULD BE THE LAST HOMEWORK WHERE THE ENTIRE MAKEFILE WOULD BE PROVIDED BY US.

Create More Test Cases
======================

Do not create test cases by hand and sort them by hand.  Two programs
in Linux may be helpful for you creating larger test cases:

* `shuf`: generate random permutations. `shuf -i 1-100` shuffles the numbers between 1 and 100. `shuf -r -i 1-100 -n 100` allows repetition and keeps only the first 100 numbers.

* `sort`: sort lines of text. If you want to sort numbers, please add `-n`.  


WHAT TO SUBMIT
==============

You **must** follow the instructions precisely. Failing to follow
these instructions will likely make you receive zero in this
assignment.  Your score **is determined by your submission**, nothing
else.  The teaching staff is strictly prohibited seeing anything on
your computer for grading.

```
zip hw05.zip main.c
```

Enter Blackboard, upload `hw05.zip`.

Please copy `hw05.zip` to another directory and

```
unzip hw05.zip
```

to check whether you get the correct `main.c` file.


It is your responsibility submitting the correct file to the correct
homework.  If you want to be successful, you must take responsibility.
Do not waste time asking the instructor to accept your mistake.  The
instructor will not accept **any** excuse for your mistake.
