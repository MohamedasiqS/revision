#include <stdio.h>
#include <stdlib.h>

typedef struct cll
{
	int data;
	struct cll *link;
}cll;

void create_data (cll **,cll **);
cll *create_node (cll **);
void display (cll **);
void insert (cll **);
void delete (cll **);

int main (void)
{
	cll *head = NULL,*tail = NULL;
	int i,n,choice,a = 1;
	printf ("\nEnter n-no.of.nodes required\n");
	scanf  ("%d",&n);
	for (i=1;i<=n;i++)
		create_data (&head,&tail);
	display (&head);
	while (1)
	{
		a = 1;
		printf ("\nEnter choice\n1.Insert\n2.Delete\n3.Exit\n");
		scanf  ("%d",&choice);
		switch (choice)
		{
		  case 1:
			while (a)
			{
				insert (&head);
				display (&head);
				printf ("\nEnter 1 to insert node again else press 0\n");
				scanf  ("%d",&a);
			}
			break;
		  case 2:
			a = 1;
			while (a)
			{
				delete (&head);
				display (&head);
				printf ("\nEnter 1 to delete node again else press 0\n");
				scanf  ("%d",&a);
			}
			break;
		  case 3:
		  	exit (0);
		  default:
		  	printf ("\nEnter valid option\n");
		}
	}
	return 0;	
}

cll *create_node (cll **new)
{
	*new = (cll *)malloc(sizeof(cll));
	static int val = 10;
	if (*new == NULL)
	{
		perror ("Memory not allocated");
		exit (1);
	}
	(*new)->data = val++;
	(*new)->link = NULL;
}

void create_data (cll **head,cll **tail)
{
	cll *new = NULL;
	new = create_node (&new);
	if (*head == NULL)
	{
		*head = new;
		new->link = *head;
	}
	else
	{
		(*tail)->link = new;
		new->link = *head;
	}
	*tail = new;
	
}

void display (cll **head)
{
	if (*head == NULL)
		printf ("\nCircular linked list is empty\n");
	else
	{
		cll *temp = *head;
		while (temp->link != *head)
		{
			printf ("Data : %d\n",temp->data);
			temp = temp->link;
		}
		printf ("Data : %d\n",temp->data);
	}
}

void insert (cll **head)
{
		int i=1,choice,n;
		cll *new = create_node(&new),*temp = *head;
	
		printf ("\nEnter choice\n");
		printf ("\n1.Insert at head\n2.Insert after node\n3.Insert before node\n4.Insert tail\n5.Insert at nth position\n");
		scanf  ("%d",&choice);
	
		switch (choice)
		{
			case 1:/*10-->20-->30*/
				insert:	new->link = *head;
				while (temp->link != *head)
					temp = temp->link;
				temp->link = new;	
				*head = new;
				break;
			case 2:
				printf ("\nEnter nth node to insert new node after it\n");
				scanf  ("%d",&n);
				if (n == 1)
					goto insert;
				else
				{
					while (i<n)
					{
						temp = temp->link;
						i++;
					}
					new->link = temp->link;
					temp->link = new;
				}
				break;
			case 3:
				printf ("\nEnter nth node to insert new node before it\n");
				scanf  ("%d",&n);
				while (i<n-1)
				{
					temp = temp->link;
					i++;
				}
				new->link = temp->link;
				temp->link = new;
				break;
			case 4:
				while (temp->link != *head)
				{
					temp = temp->link;
				}
				new->link = *head;
				temp->link = new;
				break;
			case 5:
				printf ("\nEnter nth node to insert new node at nth position\n");
				scanf  ("%d",&n);
				if (n == 1)
					goto insert;
				else
				{
					while (i<n-1)
					{
						temp = temp->link;
						i++;
					}
					new->link = temp->link;
					temp->link = new;
				}
				break;
			default:
				printf ("\nEnter option is invalid\n");			
		}
}

void delete (cll **head)
{
	if (*head == NULL)
	{
		printf ("\nLinked list is empty\n");
	}
	else
	{
		int i=1,choice,n;
		cll *temp = *head,*del = NULL;
	
		printf ("\nEnter choice\n");
		printf ("\n1.Delete at head\n2.Delete after node\n3.Delete before node\n4.Delete tail\n5.Delete nth node\n");
		scanf  ("%d",&choice);
	
		switch (choice)
		{
			case 1:
				delete_head: del = *head;
					if ((*head)->link == *head)
					{
						free (*head);
						*head = NULL;
					}
					else
					{
						while (temp->link != *head)
						{
							temp = temp->link;
						} 
						temp->link = del->link;
						*head = del->link;
						free (del);
						del = NULL;
					}
				break;
			case 2:
				printf ("\nEnter nth node to delete after it\n");
				scanf  ("%d",&n);
				while  (i<n)
				{
					temp = temp->link;
					i++;
				}
				del = temp->link;
				temp->link = del->link;
				free (del);
				del = NULL;
				break;
			case 3:
				printf ("\nEnter nth node to delete before it\n");
				scanf  ("%d",&n);
				
				if (n == 2 )
				{
					goto delete_head;
				}
				else
				{
					while (i<n-2)
					{
						temp = temp->link;
						i++;
					}
					del = temp->link;
					temp->link = del->link;
					free (del);
					del = NULL;
				}
				break;
			case 4:
				if (temp == *head && temp->link == NULL)
					goto delete_head;
				else
				{
					while (temp->link->link != *head)
					{
						temp = temp->link;
					}
					del = temp->link;
					temp->link = *head;
					free (del);
					del = NULL;
				}
				break;
			case 5:
				printf ("\nEnter nth node to delete it\n");
				scanf  ("%d",&n);
				if (n == 1)
					goto delete_head;
				else
				{
					while (i<n-1)
					{
						temp = temp->link;
						i++;
					}
					del = temp->link;
					temp->link = del->link;
					free (del);
					del = NULL;
				}
				break;
			default:
				printf ("\nEnter invalid option\n");
			
		}	
	}
}
