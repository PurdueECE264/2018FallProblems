# Structures + Binary Files

<strong>Please read the entire file before you ask any question.</strong><br>
<strong>You should write your own Makefile to test the code.</strong>


# Learning Goals
You will learn to
* Reading/Writing a binary file using `fread()` and `fwrite()`.
* Understanding the use of structures.
* Arrays of structures.
* Comparator functions for structures, and calling `qsort()` with structures.
* Builing your own Makefile for testing.

Details
=======

<strong> From the terminal: </strong><br>
* The number of elements is specified.
* The input file is specified.
* The output file is specified.
	* For example, to run the code, your makefile contains: `./hw06 inputs/test1.bin output1.bin`
		* `hw06` is the object file.
		* `inputs/test1.bin` is the input testcase. You must read from this file.
		* `output1.bin` is the file to which the structure is to be written.
			
 <strong> Need to complete the following functions: </strong><br>
 * `int main(int argc, char * * argv)`
 	* check for missing input/output files (from terminal), if so, `return EXIT_FAILURE;`
	* store the input file name in a variable, from `argv[1]`. For example, `char* in_file = argv[1];`
	* store the output file name in a variable, from `argv[2]`. For example, `char* out_file = argv[2];`
	* call `int count = numberOfElements(in_file)` to obtain the number of elements in the file.
	* allocate memory to store the numbers (initialize an array of structures. Check for malloc fail, if so, `return EXIT_FAILURE;`
	* call the `fillVector(vector, count, in_file)`; and store the values from the binary file in the array of strucures.
	* use `qsort()` function, after completing the `cmp()` function.
		* ENSURE THE COMPARATOR FUNCTION IS USED TO SORT THE ARRAY OF STRUCTURES W.R.T. THE STRUCTURE VARIABLE `x`.
			* The output array of structures should be sorted in ascending order of the structure variable `x`.
	* call the `writeFile(vector,count, out_file);` to save the sorted vector into the binary file.
 * `int numberOfElements(char* in_file_name)`
 	* initialize `file_pointer`, and open file in read mode.
	* use `fseek(file_pointer, 0, SEEK_END);` to point to the end of the file.
	* use `long where = ftell(file_pointer);` to get the size of the file.
	* use `float numelem = where / sizeof(Vector);` to obtain the number of elements
	* `return numelem;` to send the number of elements back to main().
 * `int cmp(const void *a, const void *b)`
 	* typecast the inputs into `Vector *` form.
		* For example: `Vector *typecasted_b = (Vector *)b;`
	* compare `typecased_a->x` and `typecasted_b->x`, and return appropriate values.
	
 * `void writeFile(Vector* vector, int count, char * out_file)`
 	* open file to read after initializing file_pointer. Please note that you are writing to a binary file.
	* use `fwrite(vector, sizeof(Vector), count, file_pointer)`
	
 * `void fillVector(Vector* vector, int count, char * in_file)`
 	* open file to read after initializing file_pointer. Please note that you are reading from a binary file.
	* use `fread(vector, sizeof(Vector), count, file_pointer)`
	
Structure
=========
The structure looks like
``` 
	#typedef struct
	{
		int x;
		int y;
		int z;
	} Vector;
```

It contains 3 integer variables, `x`, `y`, and `z`. For the purposes of this homework, you will instantiate an array of this structure, which has been defined in the `main.c` file. 

Summary
========
The goal of this homework is: To read from a binary file, into an array of structures, specifically using the `fread()` function. Then to sort, using `qsort()`, this array of structures based on the variable `x`. To write the sorted array of structures to the output file, using `fwrite()`.

The number of elements in the array, the input and output files are specified through the terminal during runtime.

A partial Makefile, has been provided to you for reference. Please make the changes that you may need for the execution of your program. Use `make testmemory` to check for memory errors using Valgrind, please change the make file to check for all test cases.
	
	
WHAT TO SUBMIT
==============

You **must** follow the instructions precisely. Failing to follow
these instructions will likely make you receive zero in this
assignment.  Your score **is determined by your submission**, nothing
else.  The teaching staff is strictly prohibited seeing anything on
your computer for grading.

```
zip hw06.zip main.c vector.c
```

Enter Blackboard, upload `hw06.zip`.

Please copy `hw06.zip` to another directory and

```
unzip hw06.zip
```
