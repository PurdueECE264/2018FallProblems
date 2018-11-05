////******** DO NOT MODIFY THIS FILE *********////


#ifndef BINARYTREE_H
#define BINARYTREE_H
#include <stdio.h>
#include <stdlib.h>
struct tNode
{
	struct tNode * rightChild;
	struct tNode * leftChild;
	int value;
} ;

typedef struct tNode treeNode;

treeNode * CreateBST(int *array,int root, int start, int end);
int FindDistance(treeNode* tn, int value, int distance);
void PrintDistance(int distance);

void BinaryTreePreOrderPrint(treeNode* tn);
void BinaryTreeInOrderPrint(treeNode* tn);
void BinaryTreePostOrderPrint(treeNode *tn);
void BinaryTreePrint(treeNode* tn);
#endif

