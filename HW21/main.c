/*
DO NOT MODIFY THIS FILE
*/
#include "decode.h"
#include <stdlib.h>
#include <string.h>
int main(int argc, char ** argv)
{
  // argv[1]: name of input file
  // argv[2]: name of output file
  if (argc != 3)
    {
      return EXIT_FAILURE;
    }
  decode(argv[1], argv[2]);
  return EXIT_SUCCESS;
}
