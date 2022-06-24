#include <stdio.h>
#include <stdlib.h>
typedef struct bst
{
	int data;
	struct bst *right;
	struct bst *left;
};

bst *createnode(void);
void inorder (bst *);
void bin_search (bst *,int);

int main (void)
{
	bst *root = NULL;
	int data;
	root = createnode();
	printf ("Enter element to search in binary search tree\n");
	scanf  ("%d",&data);
	bin_search (root,data);
//	inorder (root);
	return 0;
}

bst *createnode()
{
	bst *new = NULL;
	new = (bst *)malloc(sizeof(bst));
	if (new == NULL)
	{
		perror ("Memory not allocated");
		exit (1);
	}
	printf ("Enter Data (if give -ve value,new node as now leaf node\n");
	scanf  ("%d",&new->data);
	if (new->data < 0)
	    return NULL;
	printf ("Enter data for %d right node\n",new->data);
	new->right = createnode();
	printf ("Enter data for %d left node\n",new->data);
	new->left = createnode();
	return new;
}

void bin_search (bst *root,int data)
{
	if (root == NULL)
	    return ;
	if (data > root)
	    bin_search (
}

void inorder (bst *root)
{
	if (root == NULL)
		return ;
	inorder (root->left);
	printf ("%d",root->data);
	inorder (root->right);
}
