// ***
// *** Please modify this file, as indicated
// ***

#include <stdio.h>  
#include <stdlib.h> 
#include <string.h> 
#include <stdbool.h>
#include "sort.h"


void printArray(int * arr, int size)
{
  int ind;
  for (ind = 0; ind < size; ind ++)
    {
      fprintf(stdout, "%d\n", arr[ind]);
    }
}



//============================ONLY EDIT BELOW THIS COMMENT============================//
#ifdef TEST_COMP
int comparator(const void *a, const void *b) 
{ 
    //type cast both the parameters to the type const int*) a: 
	//FOR EXAMPLE: const int* ia = (const int *) a;
   
    	//if parameter2 > parameter1; return -1
	//if parameter2 == parameter1; return 0
	//if parameter2 < parameter1; return 1
} 
#endif


#ifdef TEST_COUNT
int countFromFile(char* file_name)
{
  // open file to read
  
  // count the number of integers using a loop
  // at the end of the loop close file_pointer

}
#endif

#ifdef TEST_FILL
void fillArray(int* arr, int count, char* file_name)
{
  // open file to read
  //How to read the file?
	// run a loop, from index = 0 to "count", and use: fscanf(file_pointer, "%d", &arr[index]);
	// at the end of the loop close file_pointer
}
#endif

#ifdef TEST_MAIN
int main(int argc, char * * argv)
{
  // input file will be specified from the terminal - test files are made available in inputs folder

  // check for missing input file, if so, "return EXIT_FAILURE;"

  // use argv[1] to save the file name, you will use this file name to call the countFromFile(), and fillArray() functions
      //FOR EXAMPLE: char* file_name = argv[1];
  
  // call the countFromFile(file_name); and store the number of elements in the file.
  
  // allocate memory to store the numbers (initialize an array)
	
  // check for malloc fail, if so, "return EXIT_FAILURE;"
  
  // call the fillArray(arr, count, file_name); and store the values from the file in the array.
  
  // Use qsort() function, after defining the comparator() function - "qsort (arr, count, sizeof(int), comparator);"
  
  // call the printArray() function provided to you.
  return EXIT_SUCCESS;
}
#endif

