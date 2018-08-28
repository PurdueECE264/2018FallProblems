// ***
// *** DO NOT modify this file
// ***

#ifndef CENTROID_H
#define CENTROID_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "datapoint.h"
typedef struct 
{
  int dimension;
  int *data;
  int ID;
  int size;			// number of data points in this cluster
} Centroid;
Centroid * Centroid_create (int dim, int id);
Centroid * *Centroid_createArray (int nrows, int dim);
void Centroid_reset (Centroid * cent);
void Centroid_addPoint (Centroid * cent, DataPoint * dp);
void Centroid_findCenter (Centroid * cent);
int Centroid_cmp (const void *cent1, const void *cent2);
void Centroid_print (Centroid * cent, FILE * fp);
void Centroid_free (Centroid * cent);
void Centroid_freeArray (Centroid * *centroids, int nrows);
 
#endif	
