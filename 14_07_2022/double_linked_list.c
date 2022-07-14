#include <stdio.h>
#include <stdlib.h>

typedef struct dll
{
	int data;
	struct dll *prev;
	struct dll *next;
}dll;

void create_data (dll **,dll **);
dll *create_node (dll **);
void display (dll **);
void insert (dll **);
void delete (dll **);

int main (void)
{
	dll *head = NULL,*tail = NULL;
	int n,i,a=1,choice;
	printf ("Enter n no.of.nodes\n");
	scanf  ("%d",&n);
	for (i=1;i<=n;i++)
		create_data (&head,&tail);
	display (&head);
	while (1)
	{
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

dll *create_node (dll **new)
{
	static int val = 10;
	*new = (dll*)malloc(sizeof(dll));
	if (*new == NULL)
	{
		perror ("Memory not allocated");
		exit (1);
	}
	(*new)->prev = NULL;
	(*new)->data = val++;
	(*new)->next = NULL;
}

void create_data (dll **head,dll **tail)
{
	static int val = 10;
	dll *new = NULL;
	new = create_node (&new);
	if (*head == NULL)
		*head = new;
	else
	{
		new->prev = *tail;
		(*tail)->next = new;
	}
	*tail = new;
}

void display (dll **head)
{
	dll *temp = *head;
	int i=1;
	while (temp != NULL)
	{
		printf ("Node no: %d\tData : %d\n",i++,temp->data);
		temp = temp->next;
	}
}

void insert (dll **head)
{
	if (*head == NULL)
	{
		printf ("\nLinked list is empty\n");
	}
	
	else
	{
		int i=1,choice,n;
		dll *new = create_node(&new),*temp = *head;
	
		printf ("\nEnter choice\n");
		printf ("\n1.Insert at head\n2.Insert after node\n3.Insert before node\n4.Insert tail\n5.Insert at nth position");
		scanf  ("%d",&choice);
	
		switch (choice)
		{
			case 1:
				insert:	new->next = *head;	
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
						temp = temp->next;
						i++;
					}
					new->prev = temp;
					new->next = temp->next;
					temp->next = new;
					temp->next->prev = new;
				}
				break;
			case 3:
				printf ("\nEnter nth node to insert new node before it\n");
				scanf  ("%d",&n);
				while (i<n-1)
				{
					temp = temp->next;
					i++;
				}
				new->prev = temp;
				new->next = temp->next;
				temp->next = new;
				temp->next->prev = new;
				break;
			case 4:
				while (temp->next != NULL)
				{
					temp = temp->next;
				}
				new->prev = temp;
				temp->next = new;
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
						temp = temp->next;
						i++;
					}
					new->prev = temp->next;
					new->next = temp->next->next;
					temp->next = new;
					temp->next->prev = new;
				}
				break;
			default:
				printf ("\nEnter option is invalid\n");			
		}
	}
}

void delete (dll **head)
{
	if (*head == NULL)
	{
		printf ("\nLinked list is empty\n");
	}
	else
	{
		int i=1,choice,n;
		dll *temp = *head,*del = NULL;
	
		printf ("\nEnter choice\n");
		printf ("\n1.Delete at head\n2.Delete after node\n3.Delete before node\n4.Delete tail\n5.Delete nth node\n");
		scanf  ("%d",&choice);
	
		switch (choice)
		{
			case 1:
				delete:  *head = temp->next;
					 free (temp);
					 temp = NULL;
				break;
			case 2:
				printf ("\nEnter nth node to delete after it\n");
				scanf  ("%d",&n);
				while  (i<n)
				{
					temp = temp->next;
					i++;
				}
				del = temp->next;
				temp->next = temp->next->next;
				free (del);
				del = NULL;
				break;
			case 3:
				printf ("\nEnter nth node to delete before it\n");
				scanf  ("%d",&n);
				while (i<n-1)
				{
					temp = temp->next;
					i++;
				}
				if (temp == *head)
				{
					goto delete;
				}
				else
				{
					temp = temp->prev;
					del = temp->next;
					temp->next = temp->next->next;
					free (del);
					del = NULL;
				}
				break;
			case 4:
				if (temp == *head && temp->next == NULL)
					goto delete;
				else
				{
					while (temp->next != NULL)
					{
						temp = temp->next;
					}
					del = temp;
					temp = temp->prev;
					temp->next = NULL;
					free (del);
					del = NULL;
				}
				break;
			case 5:
				printf ("\nEnter nth node to delete it\n");
				scanf  ("%d",&n);
				if (n == 1)
					goto delete;
				else
				{
					while (i<n)
					{
						temp = temp->next;
						i++;
					}
					del = temp;
					temp = temp->prev;
					temp->next = temp->next->next;
					free (del);
					del = NULL;
				}
				break;
			default:
				printf ("\nEnter invalid option\n");
			
		}	
	}
}
