/*
DO NOT MODIFY THIS FILE
*/
#ifndef LIST_H
#define LIST_H
#include "tree.h"
#include <stdio.h>

typedef struct listnode
{
  struct listnode * next;
  TreeNode * tnptr;
} ListNode;

ListNode * ListNode_create(TreeNode * tn);
ListNode *  MergeListNode(ListNode * head);
ListNode * List_insert(ListNode * head, ListNode * ln);

#endif
