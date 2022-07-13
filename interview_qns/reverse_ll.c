#include <stdio.h>
#include <stdlib.h>

typedef struct reverse
{
	int data;
	struct reverse *prev,*next;
}reverse;

void create_node (reverse **,reverse **);
void display (reverse **);
void reverse_ll (reverse **);

int main (void)
{
	reverse *head = NULL,*tail = NULL;
	int i,n;
	printf ("Enter n nodes\n");
	scanf  ("%d",&n);
	for (i=1;i<=n;i++)
		create_node (&head,&tail);
	display (&head);
	printf ("\nReverse linked list\n");
	reverse_ll (&head);
	display (&head);
	return 0;
}

void create_node (reverse **head,reverse **tail)
{
	reverse *new = NULL;
	static int val = 10;
	new = (reverse *)malloc(sizeof(reverse));
	if (new == NULL)
	{
		printf ("Memory not allocated");
		exit (1);
	}
	new->data = val++;
	new->prev = NULL;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		new->prev = *tail;
		(*tail)->next = new;
	}
	*tail = new;
}

void display (reverse **head)
{
	reverse *temp = *head;
	while (temp != NULL)
	{
		printf ("Data : %d\n",temp->data);
		temp = temp->next;	
	}
}

void reverse_ll (reverse **head)
{
	reverse *p1 = NULL,*p2 = NULL;
	p1 = *head;
	p2 = p1->next;
	p1->next = NULL;
	p1->prev = p2;
	while (p2 != NULL)
	{
		p2->prev = p2->next;
		p2->next = p1;
		p1 = p2;
		p2 = p2->prev;
	}
	*head = p1;
}
