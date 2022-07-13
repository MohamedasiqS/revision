#include <stdio.h>
#include <stdlib.h>

typedef struct middle
{
	int data;
	struct middle *link;
}middle;

void create_node (middle **,middle **,int *);
void display (middle **);
void middle_ele (middle **,int *);

int main (void)
{
	middle *head = NULL,*tail = NULL;
	int count = 0;
	int i,n;
	printf ("Enter n nodes\n");
	scanf  ("%d",&n);
	for (i=1;i<=n;i++)
		create_node (&head,&tail,&count);
	display (&head);
	middle_ele (&head,&count);
	return 0;
}

void create_node (middle **head,middle **tail,int *count)
{
	middle *new = NULL;
	static int val = 10;
	new  = (middle *)malloc(sizeof(middle));
	if (new == NULL)
	{
		printf ("Memory not allocated");
		exit (1);
	}
	new->data = val++;
	new->link = NULL;
	(*count)++;
	if (*head == NULL)
		*head = new;
	else
		(*tail)->link = new;
	*tail = new;
}

void middle_ele (middle **head,int *count)
{
	middle *fast = NULL,*slow = NULL;
	fast = slow = *head;
	if ((*count)%2 == 0)
	{
		/*For even node is 4 middle is 2.
		fast = fast->link;
		while (fast->link != NULL )*/ 
		//For even node is 4 middle is 3.
		while (fast != NULL)
		{
			fast = fast->link->link;
			slow = slow->link;
		}
	}
	else
	{
		while (fast->link != NULL ) //For Odd n nodes
		{
			fast = fast->link->link;
			slow = slow->link;
		}
	}
	printf ("Middle Element : %d\n",slow->data);
}

void display (middle **head)
{
	middle *temp = *head;
	while (temp != NULL)
	{
		printf ("Data : %d\n",temp->data);
		temp = temp->link;
	}
}
