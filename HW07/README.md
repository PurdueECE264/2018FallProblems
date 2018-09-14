# HW 07
# Recursion and Files

<strong>Please read the entire file before you ask any question.</strong><br>
<strong>You should write your own Makefile to test the code.</strong>

# Problem Description
Merge Sort is a Divide and Conquer algorithm. You can read more about it [here](https://medium.com/basecs/making-sense-of-merge-sort-part-1-49649a143478).

The function divides the input array in two portions, and calls itself (recursion) for the two parts. Once the exit condition is met, the function then merges the two sorted arrays.
The `merge()` function is used for merging two halves. 
The `merge(arr, l, m, r)` is key process that assumes that `arr[l..m]` and `arr[m+1..r]` are sorted and merges the two sorted sub-arrays into one.
* `arr` is the input array to the function.
* `l` is the starting index of the array.
* `m` is the midpoint of the input array, where the array will be divided into two. Usually, `int m = l+(r-l)/2`
* `r` is the endpoint of the input array.

The diagram below, taken from wikipedia demonstartes the merge sort process for an example array {38, 27, 43, 3, 9, 82, 10}. If we take a closer look at the diagram, we can see that the array is recursively divided in two halves till the size becomes 1. Once the size becomes 1, the merge processes comes into action and starts merging arrays back till the complete array is merged.
![Image](merge.png)

# Learning Goals
You will learn:
* Understanding the use of recursion.
* Builing your own Makefile for testing.

Details
=======

<strong> From the terminal: </strong><br>
* The input file is specified.
* The output file is specified.
	* For example, to run the code, your makefile should include: `./hw07 Input/Test1 Output1`
		* where, `hw07` is the object file.
		* `Input/Test1` is the input file.
		* `Output1` is the output file.
			
 <strong> Need to complete the following functions: </strong><br>
 * `int main(int argc, char * * argv)`
	* allocate memory to store the numbers (initialize an array of integers). Check for malloc fail, if so, `return EXIT_FAILURE;`
	* use `mergesort()` function, after defining the `merge()` function.
		* ENSURE THE MERGESORT FUNCTION IS USED TO SORT THE ARRAY AND MERGE IS USED TO ARRANGE IN ORDER.
	   
 * `void merge(int arr[], int l, int m, int r) `
	* run a loop to compare between left and right sub array to get array in ascending order
	* position the elements remaining in the left sub array and right sub array in order
	
 * `void mergeSort(int arr[], int l, int r) `
 	* partition array into left and right side
	* perform recursion on each side
	* merge the two sides to get the total sorted array
	
Summary
========
The goal of this homework is: To read from a file into an array of integers. Then to sort, using `mergesort()`, this array of structures and to finally merge it using `merge()`. To write the sorted array to the output file, using `fprintf()`.

The input and output files are specified through the terminal during runtime.

Please build your own Makefile to test the code.
	
	
WHAT TO SUBMIT
==============

You **must** follow the instructions precisely. Failing to follow
these instructions will likely make you receive zero in this
assignment.  Your score **is determined by your submission**, nothing
else.  The teaching staff is strictly prohibited seeing anything on
your computer for grading.

```
zip hw07.zip main.c
```

Enter Blackboard, upload `hw07.zip`.

Please copy `hw07.zip` to another directory and

```
unzip hw07.zip
```
