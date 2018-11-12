/*
DO NOT MODIFY THIS FILE
*/
#ifndef UTILITY_H
#define UTILITY_H
#include <stdio.h>
#include <stdlib.h>
// write one bit to a file
#define NUM_BITS 8
// whichbit indicates which bit this is read and then written to (0 means
// left most, 7 means right most)
// curbyte is the current byte
//
// if whichbit is zero, curbyte is reset and bit is put
// to the leftmost bit
//
// when which bit reaches 7, this byte is written to the
// file and whichbit is reset
//
int readBit(FILE * fptr, unsigned char * bit,
	    unsigned char * whichbit,
	    unsigned char * curbyte);

void PrintNumberChar(unsigned int numChar, FILE* outfptr);

#endif
