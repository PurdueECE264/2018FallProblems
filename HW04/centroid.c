// ***
// *** DO NOT modify this file
// ***

#include "centroid.h"
  
/* Centroid_create: creates a single centroid
   @param dim - dimension of centroid
   @param id - id for the centroid
*/ 
Centroid * Centroid_create (int dim, int id)
{
  Centroid * cent = malloc (sizeof (*cent));
  cent-> data = malloc (sizeof (* (cent-> data)) * dim);
  cent->dimension = dim;
  cent->ID = id;
  cent->size = 0;
  return cent;
}


// Centroid_createArray:  to create array of centroids
// @param nrow -  number of centroids
// @param dim - dimension of each centroid
Centroid * *Centroid_createArray (int nrows, int dim)
{
  Centroid * *centroids = malloc (sizeof (*centroids) * nrows);
  if (centroids == NULL)
    {
      return centroids;
    }
  int niter;
  for (niter = 0; niter < nrows; niter++)
    {
      centroids[niter] = Centroid_create (dim, niter);
    }
  return centroids;
}

 
/* Centroid_reset - function to put all values of centroid to zero
   @param Centroid * - pointer to centroid which needs to be reset
*/ 
void Centroid_reset (Centroid * cent)
{
  cent->size = 0;
  
  // set all values to zero
  memset (cent->data, 0, sizeof (int) * (cent->dimension));
}   

/* Centroid_addPoint - function to add points to the centroid
   @param Centroid * - pointer to centroid to which point needs to be added
   @param DataPoint * - pointer to datapoint which is being added to the centroid
*/ 
void
Centroid_addPoint (Centroid * cent, DataPoint * dp)
{
  int iter;
  
  // for each dimension, add the value of dp to the centroid
  int dim = cent->dimension;
  for (iter = 0; iter < dim; iter++)
    
    {
      cent->data[iter] += dp->data[iter];
    }
  cent->size++;
}

  
/* Centroid_findCenter - function to find the present center of the cluster after adding all points to centroids
   @param Centroid * - pointer to centroid whose center is being calculated
*/ 
void
Centroid_findCenter (Centroid * cent)
{
  if ((cent->size) == 0)	// the center is the origin
    {
      return;
    }
  int iter;
  int size = cent->size;
  
  // for each dimension, add the value of dp to the centroid
  int dim = cent->dimension;
  for (iter = 0; iter < dim; iter++)
    
    {
      cent->data[iter] /= size;	// integer division
    }
}

 
/*
  Centroid_cmp - function to compare 2 centroids to be used for sorting
*/ 
int
Centroid_cmp (const void *ptr1, const void *ptr2)
{
  const Centroid *cent1 = *(const Centroid **) ptr1;	// casting pointer types
  const Centroid *cent2 = *(const Centroid **) ptr2;
  int dim = cent1 -> dimension;
  int ind;
  for (ind = 0; ind < dim; ind ++)
    {
      if ((cent1->data)[ind] != (cent2->data)[ind])
	{
	  return (cent1->data)[ind] - (cent2->data)[ind];
	}
    }
  return 0;
}

 
/* Centroid_print - function to print the centroids to a file
 */ 
void
Centroid_print (Centroid * cent, FILE * fp)
{
  if (cent == NULL || fp == NULL)
    {
      printf ("Centroid was null or fp was null\n");
      return;
    }
  int dim = cent->dimension;
  int diter;
  for (diter = 0; diter < dim; diter++)
    {
      fprintf (fp, "%d ", cent->data[diter]);
    }
  fprintf (fp, "\n");
  return;
}

 
/* Centroid_free - function to free the memory for the centroid
 */ 
void
Centroid_free (Centroid * cent)
{
  free (cent -> data);
  free (cent);
}  

/* Centroid_freeArray - function to free memory of the centroid array
 */ 
void
Centroid_freeArray (Centroid * *centroids, int nrows)
{
  int niter;
  for (niter = 0; niter < nrows; niter++)
    {
      Centroid_free (centroids[niter]);
    }
  free (centroids);
  return;
}


