/*
DO NOT MODIFY THIS FILE
*/
#ifndef TREE_H
#define TREE_H
#include <stdio.h>
#include <stdlib.h>

typedef struct treenode
{
  struct treenode * left;
  struct treenode * right;
  char value; // character
  int freq;  // frequency
} TreeNode;
TreeNode * TreeNode_create(char val, int freq);
TreeNode * Tree_merge(TreeNode * becomesLeftChild, TreeNode * becomesRighChild);
void Tree_print(TreeNode * tn, FILE *outfptr);

void Tree_destroy(TreeNode * tn);
#endif
