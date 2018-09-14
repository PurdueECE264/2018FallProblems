//
//	PLEASE DO NOT MODIFY THIS FILE
//

#ifndef VECTOR_H
#define VECTOR_H

typedef struct
{
	int x;
	int y;
	int z;
} Vector;

int cmp(const void *a, const void *b);

int numberOfElements(char* in_file_name);

void fillVector(Vector* vector, int count, char * in_file_name);

void writeFile(Vector* vector, int count, char* out_file_name);
#endif
