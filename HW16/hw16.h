//DO NOT MODIFY THIS FILE

#ifndef HW16_H
#define HW16_H
#include <stdbool.h>
#include "binarytree.h"

void FreeBinaryTree(treeNode *root);
treeNode* search(treeNode * tn, int value);

bool isSubTree(treeNode* haystack, treeNode *needle);
bool isContained(treeNode * haystack, treeNode * needle);

// Print function for the assignment
void PrintTn1ContainedTn2 (bool tn1_contained_tn2, bool tn2_contained_tn1);




#endif
