#include <stdio.h>
#include <stdlib.h>

typedef struct stack
{
	int data;
	struct stack *link;
}stack;

void push (stack **);
int pop  (stack **);
void display (stack *);
int isempty (stack *);
void getmin (stack *);
int main (void)
{
	stack *top = NULL;
	int choice;
	while (1)
	{
		printf ("\nEnter choice\n1.Push 2.Pop 3.Exit\n");
		scanf  ("%d",&choice);
		if (choice == 1)
		{
			push (&top);
			printf ("\n");
			display (top);
		}
		else if (choice == 2)
		{
			printf ("Popped element : %d\n\n",pop (&top));
			display (top);
		}
		else if (choice == 3)
		{
			exit (1);
		}
		else
			printf ("\nEntered invalid option\n");
	}
	return 0;	
}

int isempty (stack *top)
{
	if (top == NULL)
		return 0;
	return 1;
}
void push (stack **top)
{
	stack *new = NULL;
	int val;
	new = (stack *)malloc(sizeof(stack));
	if (new == NULL)
	{
		perror ("Memory not allocated");
		exit (1);
	}
	printf ("\nEnter data\n");
	scanf  ("%d",&val);
	new->data = val;
	new->link = NULL;
	if (*top == NULL)
		*top = new;
	else
	{
	 	new->link = *top;
	 	*top = new;
	}	    
}

int pop (stack **top)
{
	if (!(isempty(*top)))
	{
		printf ("\nStack is empty\n");
		main ();
	}
	else
	{
		int ret;
		stack *del = *top;
		ret = del->data;
		*top = del->link;
		free(del);
		del = NULL;
		getmin (*top);
		return ret;
	}
}

void getmin (stack *top)
{
	if (!(isempty(top)))
	{
		printf ("\nStack is empty\n");
		main ();
	}
	else
	{
		stack *temp = top;
		int min = temp->data ;
		while (temp != NULL)
		{
			if (temp->data < min)
				min = temp->data;
			temp = temp->link;
		}
		printf ("Minimum element : %d\n",min);
	}	
}

void display (stack *top)
{
	if (!(isempty(top)))
	{
		printf ("\nStack is empty\n");
		main ();
	}
	else
	{
		printf ("\n");
		while (top != NULL)
		{
			printf ("%d\n",top->data);
			top = top->link;
		}
	}
}
