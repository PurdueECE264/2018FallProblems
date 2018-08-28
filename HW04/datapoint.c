// ***
// *** DO NOT modify this file
// ***


#include "datapoint.h"
// initialize memory for a single datapoint 
DataPoint * DataPoint_create (int dim)
{
  DataPoint *dp = malloc (sizeof (*dp));
  dp -> data = malloc(sizeof(* (dp -> data)) * dim);
  dp -> dimension = dim;
  dp -> cluster = -1; 
  return dp;
}

// initialize memory for array of DataPoint
DataPoint ** DataPoint_createArray (int nrow, int dim)
{
  DataPoint **datapoint;
  datapoint = malloc (sizeof (*datapoint) * nrow);
  if (datapoint == NULL)
    {
      fprintf (stderr, "malloc fail\n");
      return NULL;
    }
  int iter;
  for (iter = 0; iter < nrow; iter++)
    {
      datapoint[iter] = DataPoint_create (dim);
      if (datapoint[iter] == NULL)
	{
	  fprintf (stderr, "malloc fail\n");
	  return NULL;
	}
    }
  return datapoint;
}


// function to free a single datapoint
void DataPoint_free (DataPoint * dp)
{
  free (dp->data);
  free (dp);
}

// function to free array of datapoints, it uses function to free a single datapoint
void DataPoint_freeArray (DataPoint ** dp, int nrows)
{
  int niter;
  for (niter = 0; niter < nrows; niter++)
    {
      DataPoint_free (dp[niter]);
    }
  free (dp);
  return;
}
