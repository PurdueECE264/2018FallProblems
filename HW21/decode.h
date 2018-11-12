/*
DO NOT MODIFY THIS FILE
*/
#ifndef ENCODE_H
#define ENCODE_H
#include <stdio.h>
#include <strings.h>
#include <stdlib.h>
#include "tree.h"
#include "utility.h"

TreeNode * readHeader(FILE * infptr);
int decode(char * infile, char * outfile);
#endif
