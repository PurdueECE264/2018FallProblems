// ***
// *** DO NOT modify this file
// ***

#include "common.h"
#include <stdlib.h>
Common *
Common_create (int dim)
{
  Common *common = malloc (sizeof (*common));
  if (common == NULL)
    {
      return common;
    }
  common->dimension = dim;
  common->data = malloc (sizeof (*(common->data)) * dim);
  return common;
}

void
Common_free (Common * com)
{
  free (com->data);
  free (com);
}
