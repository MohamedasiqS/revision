/*
Properties:
	1) No duplicate elements
	2) Print sorted data in inorder
Time for insert - n
Time for search - log n
Time complexity for BST - O(nlogn)
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct BST
{
	int data;
	struct BST *right,*left,*link;
}BST;

void insert (BST **,int);
BST *create_node (BST **,int);
void inorder (BST *);
BST *search (BST *,int);


int main (void)
{
	BST *root = NULL,*find = NULL;
	insert  (&root,10);
	insert  (&root,5);
	insert  (&root,20);
	insert  (&root,8);
	insert  (&root,30);
	inorder (root);
	insert  (&root,2);
	inorder (root);
	find = search (root,20);
	if (find != NULL)
		printf ("\nKey element %d is found\n",find->data);
	find = search (root,21);
	if (find != NULL)
		printf ("\nKey element %d is found\n",find->data);
	return 0;
}

BST *create_node (BST **new,int key)
{
	*new = (BST *)malloc(sizeof(BST));
	(*new)->data = key;
	(*new)->right = NULL;
	(*new)->left = NULL;
}

void insert (BST **root,int key)
{
	BST *temp = *root,*new = NULL,*prev = NULL;
	if (*root == NULL)
	{
		new = create_node (&new,key);
		*root = new;
		return ;
	}
	while (temp != NULL)
	{
		prev = temp;
		if (key < temp->data)
			temp = temp->left;
		else if (key > temp->data)
			temp = temp->right;
		else 
			return ;
	}
	new = create_node (&new,key);
	if (key < prev->data)
		prev->left = new; 	
	else
		prev->right = new;
}

void inorder (BST *root)
{
	if (root != NULL)
	{
		inorder (root->left);
		printf  ("%d ",root->data);
		inorder (root->right);
	}
}

BST *search (BST *root,int key)
{
	if (root == NULL)
		printf ("BST is empty");
	else
	{
		BST *temp = root;
		while (temp != NULL)
		{
			if (key == temp->data)
				return temp;
			else if (key > temp->data)
				temp = temp->right;
			else
				temp = temp->left;
		}
		printf ("\nKey is not found\n");
		return NULL;
	}
}

