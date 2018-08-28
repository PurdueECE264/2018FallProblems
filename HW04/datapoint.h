// ***
// *** DO NOT modify this file
// ***

#ifndef DATAPOINT_H
#define DATAPOINT_H
  
#include<stdio.h>
#include <stdlib.h>
typedef struct 
{
  int dimension;
  int cluster;
  int *data;
} DataPoint;
DataPoint * DataPoint_create (int dim);
DataPoint * *DataPoint_createArray (int nrow, int ncol);
void DataPoint_free (DataPoint * dp);
void DataPoint_freeArray (DataPoint ** dp, int nrows);

#endif	
