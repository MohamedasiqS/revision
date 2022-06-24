#include <stdio.h>
#include <stdlib.h>
typedef struct b_tree
{
	int data;
	struct b_tree *right;
	struct b_tree *left;
}b_tree;

b_tree *createnode (void);
void preorder (b_tree *);
void inorder (b_tree *);
void postorder (b_tree *);
int main(void)
{
	b_tree *root = NULL;
	root = createnode ();
//	preorder (root);
//	inorder (root);
	postorder (root);
	return 0;
}

b_tree *createnode()
{
	b_tree *newnode = NULL;
	newnode = (b_tree *)malloc(sizeof(b_tree));
	if (newnode == NULL)
	{
		perror ("Memory not allocated");
		exit (1);
	}
	printf ("Enter data (if give -ve value it end the node\n");
	scanf  ("%d",&newnode->data);
	if (newnode->data < 0)
	{
		return NULL;
	}
	printf ("Enter data for %d right node\n",newnode->data);
	newnode->right = createnode();
	printf ("Enter data for %d left node\n",newnode->data);
	newnode->left = createnode();
	return newnode;
}

void preorder (b_tree *root)
{
	if (root == NULL)
	    return ;
	printf ("%3d",root->data);
	preorder (root->left);
	preorder (root->right);
}

void inorder (b_tree *root)
{
	if (root == NULL)
            return ;
	inorder (root->left);
	printf ("%3d",root->data);
	inorder (root->right);	
}

void postorder (b_tree *root)
{
	if (root == NULL)
            return ;
        postorder (root->left);
        postorder (root->right);
        printf ("%3d",root->data);
}
