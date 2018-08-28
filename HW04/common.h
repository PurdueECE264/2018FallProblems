// ***
// *** DO NOT modify this file
// ***

#ifndef COMMON_H
#define COMMON_H
  typedef struct
{
  int dimension;
   int *data;			// cumulative value in each dimension
} Common;
 Common * Common_create (int dim);
 void Common_free (Common * com);
 
#endif	/*  */
