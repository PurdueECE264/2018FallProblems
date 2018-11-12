/*
DO NOT MODIFY THIS FILE
*/
#include "utility.h"

void PrintNumberChar(unsigned int numChar, FILE* outfptr)
{
	fprintf(outfptr, "\nnumChar = %d\n", numChar);
}

int readBit(FILE * fptr, unsigned char * bit,
	    unsigned char * whichbit, unsigned char * curbyte)

{
  int ret = 1;
  if ((* whichbit) == 0)
    {
      // read a byte from the file
      ret = fread(curbyte, sizeof(unsigned char), 1, fptr);
    }
  if (ret != 1)
    {
      // read fail
      return -1;
    }
  // shift the bit to the correct location
  unsigned char temp = (* curbyte) >> (7 - (* whichbit));
  temp = temp & 0X01; // get only 1 bit, ignore the others
  // increase by 1
  * whichbit = ((* whichbit) + 1) % 8;
  * bit = temp;
  return 1;
}
