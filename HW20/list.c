/*
modify the file at the said location
*/
#include "list.h"
#include <stdlib.h>

#ifdef DO_NOT_MODIFY
ListNode * ListNode_create(TreeNode * tn)
{
  ListNode * ln = malloc(sizeof(ListNode));
  ln -> next = NULL;
  ln -> tnptr = tn;
  return ln;
}
// head may be NULL
// ln must not be NULL
// ln -> next must be NULL
ListNode * List_insert(ListNode * head, ListNode * ln)
{
  if (ln == NULL)
    {
      printf("ERROR! ln is NULL\n");
      return NULL;
    }
  if ((ln -> next) != NULL)
    {
      printf("ERROR! ln -> next is not NULL\n");
    }
  if (head == NULL)
    {
      return ln;
    }
    ln -> next = head;
    return ln;
}


#endif


/*
------------------------------------------------------------------------------
You Can Modify below, Do Not modify above this
------------------------------------------------------------------------------
*/


#ifdef TEST_MERGELIST

ListNode * MergeListNode(ListNode * head)
{
  /*
    This function takes the first two nodes from the LinkedList starting from head.
    Merges the tree from the nodes. Insert the new Node with the tree obtained from
    merging the two above nodes. This node should be inserted in such a way that this node becomes
    the head of the LinkedList.

    Please note that when you merge the TreeNodes using Tree_merge function, it is
    important to maintain the order of passing TreeNode and which TreeNode becomes
    right child and which becomes left child. For this assignment, our compression algorithm takes
    TreeNode from the second ListNode of the passed LinkedList and makes it the left child of the
    new merged TreeNode. This function should maintain the same aforementioned order.
    Please read Huffman coding for understanding the functionality of this function.
  */

}
#endif
