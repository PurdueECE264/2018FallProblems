//DO NOT MODIFY THIS FILE
typedef struct TNode
{
	struct TNode* left;
	struct TNode* right;
	int* data;
	int dimension;
}TreeNode;


typedef struct LNode
{
	struct LNode *next;
	TreeNode* treenode;
}ListNode;

int FindDist(TreeNode* x, TreeNode* y);
ListNode* CreateNode(int n, int k, int* arr);
void LinkedListCreate(ListNode ** head, int n, int dim, FILE* fptr);
void PrintAnswer(ListNode* head, ListNode* min1, ListNode* min2);
void FindMin(ListNode* head);
