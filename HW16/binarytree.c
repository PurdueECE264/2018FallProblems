/** DO NOT Modify this file **/
#include "binarytree.h"
// prints the input binary tree in pre-order, in-order and post-order respectively
void BinaryTreePrint(treeNode* tn)
{
	printf("Pre Order print of the Tree is: \n");
	BinaryTreePreOrderPrint(tn);
	printf("\nIn Order print of the Tree is: \n");
	BinaryTreeInOrderPrint(tn);
	printf("\nPost Order print of the Tree is: \n");
	BinaryTreePostOrderPrint(tn);
	printf("\n");
}

// print the tree in pre order fashion
void BinaryTreePreOrderPrint(treeNode* tn)
{
	if(tn == NULL)
		return;
	printf("%d ",tn->value );
	BinaryTreePreOrderPrint(tn->leftChild);
	BinaryTreePreOrderPrint(tn->rightChild);
}

// print the tree in in order fashion
void BinaryTreeInOrderPrint(treeNode* tn)
{
	if(tn == NULL)
		return;
	BinaryTreeInOrderPrint(tn->leftChild);
	printf("%d ",tn->value );
	BinaryTreeInOrderPrint(tn->rightChild);
}

// print the tree in post order fashion
void BinaryTreePostOrderPrint(treeNode *tn)
{
	if(tn == NULL)
		return;
	BinaryTreePostOrderPrint(tn->leftChild);
	BinaryTreePostOrderPrint(tn->rightChild);
	printf("%d ",tn->value );
}

// function below creates as single node of a tree

treeNode * CreateTree(int *array, int index, int length)
{
	if(index >= length)
  {
    return NULL;
  }
	treeNode *newNode ;

	newNode = malloc(sizeof(treeNode));
	if (newNode == NULL)
	{
		//memory allocation failed
		return NULL;
	}
	newNode->value = array[index];
	if (newNode == NULL)
	{
	        return NULL;
	}
	newNode->leftChild = CreateTree(array, 2*index+1, length);
	newNode->rightChild = CreateTree(array, 2*index+2, length);
	return newNode;
}


// The function below creates the full binary tree
treeNode *BinaryTreeCreate(char *filename)
{
	// creating a full binary tree based on the height
	FILE *fptr = fopen(filename,"r");
	if(fptr == NULL)
	{
		return NULL;
	}
	int value, len = 0;
	while (fscanf(fptr, "%d", & value) == 1)
	{
		len++;
	}
  int *array = malloc(sizeof(int)* len);
  if(array == NULL)
  {
    fclose(fptr);
    return NULL;
  }
	fseek(fptr,0,SEEK_SET);
  len = 0;
  while (fscanf(fptr, "%d", & value) == 1)
	{
    array[len] = value;
		len++;
	}
  fclose(fptr);
	treeNode *root = CreateTree(array, 0 , len);

	free(array);
	return root;
}
