/*
DO NOT MODIFY THIS FILE
*/
#include "tree.h"
#include "utility.h"

TreeNode * TreeNode_create(char val, int freq)
{
  TreeNode * tn = malloc(sizeof(TreeNode));
  tn -> left = NULL;
  tn -> right = NULL;
  tn -> value = val;
  tn -> freq = freq;
  return tn;
}



TreeNode * Tree_merge(TreeNode * becomesLeftChild, TreeNode * becomesRighChild)
{
  TreeNode * tn = malloc(sizeof(TreeNode));
  tn -> left = becomesLeftChild;
  tn -> right = becomesRighChild;
  tn -> value = 0; // do not care
  tn -> freq = becomesLeftChild -> freq + becomesRighChild -> freq;
  return tn;
}

// post-order
void Tree_print(TreeNode * tn, FILE *outfptr)
{
  if (tn == NULL)
    {
      return;
    }
  TreeNode * lc = tn -> left;  // left child
  TreeNode * rc = tn -> right; // right child
  Tree_print(lc, outfptr);
  Tree_print(rc, outfptr);


  if ((lc == NULL) && (rc == NULL))
    {
      // a leaf node
      // fprintf(outfptr,"value = %d, '%c'", tn -> value, tn -> value);
      fprintf(outfptr,"1%c", tn -> value);
      return;
    }
  fprintf(outfptr, "0");
}

void Tree_destroy(TreeNode * tn)
{
  if (tn == NULL)
    {
      return;
    }
  Tree_destroy(tn -> left);
  Tree_destroy(tn -> right);
  free (tn);
}
