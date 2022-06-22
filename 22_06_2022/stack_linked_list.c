#include <stdio.h>
#include <stdlib.h>
typedef struct stack
{
	int data;
	struct stack *link;
}stack;

int isempty (stack **);
void push (stack **);
int pop (stack **);
int peek (stack **);
void display (stack **);

int main(void)
{
	int choice;
	stack *top=NULL;
	while (1)
	{
		printf ("\nEnter Option\n1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit\n");
		scanf  ("%d",&choice);
		switch (choice)
		{
		    case 1:
		    	push (&top);
		    	break;
		    case 2:
		    	printf ("Stack element is popped : %d\n",pop (&top));
		    	break;
		    case 3:
		    	printf ("Peek element is %d\n",peek (&top));
		    	break;
		    case 4:
		    	display (&top);
		    	break;
		    case 5:
		    	 exit (0);
		    default:
		    	printf ("Enter valid option\n");
		}
	}
	return 0;
}

int isempty (stack **top)
{
	if (*top == NULL)
	    return 1;
	return 0;
}

void push (stack **top)
{
	static int val =10;
	stack *new = NULL;
	new = (stack *)malloc(sizeof(stack));
	if (new == NULL)
	{
		perror ("Memory not allocated");
		exit (1);
	}
	new->data = val++;
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
	if (isempty(top) == 1)
	{
		printf ("Stack is empty\n");
		main();
	}
	else
	{
		int ret;
		stack *temp = NULL;
		temp = *top;
		*top = temp->link;
		ret = temp->data;
		free (temp);
		temp = NULL;
		return ret;
	}
}

int peek (stack **top)
{
	if (isempty(top) == 1)
	{
		printf ("Stack is empty\n");
		main();
	}
	else
	{
		return (*top)->data;
	}
}

void display (stack **top)
{
	if (isempty(top) == 1)
	{
		printf ("Stack is empty\n");
		main();
	}
	else
	{
		stack *temp=NULL;
		for (temp = *top;temp!=NULL;temp=temp->link)
		{
			printf ("%d\n",temp->data);
		}
	}
}
