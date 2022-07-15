#include <stdio.h>
#include <stdlib.h>
#define SIZE 7

void push (int *,int *);
int pop   (int *,int *);
void getmin (int *,int);
void display (int *,int);
int isfull (int);
int isempty (int);

int main (void)
{
	int arr[SIZE],top = -1,choice;
	while (1)
	{
		printf ("\nEnter option\n 1.Push 2.Pop 3.Exit\n");
		scanf  ("%d",&choice);
		if (choice == 1)
		{
			push (arr,&top);
			printf ("\n");
			display (arr,top);
		}
		else if (choice == 2)
		{
			printf ("Popped element : %d\n\n",pop (arr,&top));
			display (arr,top);
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

int isempty (int top)
{
	if (top == -1)
	     return 0;
	return 1;
}

int isfull (int top)
{
	if (top == SIZE)
		return 0;
	return 1;
}

void push (int *arr,int *top)
{
	if (!(isfull (*top)))
	{
		printf ("\nStack is full\n");
	}
	else
	{
		int data;
		printf ("\nEnter data\n");
		scanf  ("%d",&data);
		arr[++(*top)] = data;
	}
}

int pop (int *arr,int *top)
{
	if (!(isempty (*top)))
	{
		printf ("\nStack is empty\n");
		main ();
	}
	else
	{
		int ret;
		ret = arr[(*top)--];
		getmin (arr,*top);
		return ret;
	}
}


void display (int *arr,int top)
{
	int i;
	for (i=top;i>=0;i--)
		printf ("%d\n",arr[i]);
}
void getmin (int *arr,int top)
{
	if (!(isempty (top)))
	{
		printf ("\nStack is empty\n");
	}
	else
	{
		int i,min = arr[top];
		for (i = top;i>=0;i--)
		{
			if (arr[i] < min )
				min = arr[i];
		}
		printf ("Minimum element in stack : %d\n",min);
	}
}
