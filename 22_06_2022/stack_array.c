#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

void push (int *,int *);
int pop (int *,int *);
int peek (int *,int *);
void display (int *,int *);
int isfull (int );
int isempty (int );

int main (void)
{
	int arr[SIZE],choice,top=-1;
	while (1)
	{
		printf ("\nEnter Option\n1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit\n");
		scanf  ("%d",&choice);
		switch (choice)
		{
		    case 1:
		    	push (arr,&top);
		    	break;
		    case 2:
		    	printf ("Stack element is popped : %d\n",pop (arr,&top));
		    	break;
		    case 3:
		    	printf ("Peek element is %d\n",peek (arr,&top));
		    	break;
		    case 4:
		    	display (arr,&top);
		    	break;
		    case 5:
		    	 exit (0);
		    default:
		    	printf ("Enter valid option\n");
		}
	}
	return 0;
}

int isfull (int top)
{
	if (top == SIZE-1)
	   return 1;
	return 0;
}

int isempty (int top)
{
	if (top == -1)
	   return 1;
	return 0;
}

void push (int *arr,int *top)
{
	if (isfull(*top) == 1)
	{
		printf ("Stack is full\n");
	}
	else
	{
		static int data = 10;
		arr[++(*top)] = data++;
	}
}

int pop (int *arr,int *top)
{
	if (isempty(*top)==1)
	{
		printf ("Stack is empty\n");
		main ();
	}
	else
	{
		return arr[(*top)--];
	}
}

int peek (int *arr,int *top)
{
	if (isempty(*top)==1)
	{
		printf ("Stack is empty\n");
		main ();
	}
	else
	{
		return arr[(*top)];
	}	
}

void display (int *arr,int *top)
{
	if (isempty(*top)==1)
	{
		printf ("Stack is empty\n");
	}
	else
	{
		int i;
		for (i=*top;i>=0;i--)
		{
		    printf ("%d\n",arr[i]);
		}
	}
}

