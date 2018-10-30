// Do not modify this file
// do not submit this file
#ifndef BINARYTREE_H
#define BINARYTREE_H
#include <stdio.h>
#include <stdlib.h>
struct tNode
{
	struct tNode * rightChild;
	struct tNode * leftChild;
	int value;
};

typedef struct tNode treeNode;

treeNode * CreateTree(int *array, int index, int length);
treeNode* BinaryTreeCreate(char *filename);

void BinaryTreePreOrderPrint(treeNode* tn);
void BinaryTreeInOrderPrint(treeNode* tn);
void BinaryTreePostOrderPrint(treeNode *tn);
void BinaryTreePrint(treeNode* tn);

#endif
