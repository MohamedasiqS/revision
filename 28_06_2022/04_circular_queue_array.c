#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

void enque (int*,int*,int*);
int deque (int*,int*,int*);
void display(int*,int*,int*);
int isempty (int);
int isfull (int,int);

int main (void)
{
	int arr[SIZE],front = -1,rear = -1,choice,a=1;
	while (1)
	{
		printf ("\nEnter choice\n1.enque\n2.deque\n3.display\n4.exit\n");
		scanf  ("%d",&choice);
		switch (choice)
		{
			case 1: enque (arr,&front,&rear);
				break;
			case 2: printf ("\n%d - Element dequed from queue\n",deque (arr,&front,&rear));
				break;
			case 3: display (arr,&front,&rear);
				break;
			case 4:	exit (0);
			default:printf ("\nEnter valid option\n");
		}
	}
	return 0;
}

int isempty (int front)
{
	if (front == -1)
		return 0;
	return 1;
}

int isfull (int front,int rear)
{
	if (front == rear + 1 ||  (front == 0 && rear == SIZE - 1))
		return 0;
	return 1;
}

void enque (int *arr,int *front,int *rear)
{
	if (isfull(*front,*rear) == 0)
	{
		printf ("\nQueue is full\n");
	}
	else
	{	if (*front == -1)
			*front = 0;
		static int val = 10;
		arr[++(*rear)] = val++;
		printf ("Front = %d ,rear = %d\n",*front,*rear);
	}
}

int deque (int *arr,int *front,int *rear)
{
	if (isempty(*front)==0)
	{
		printf ("\nQueue is empty\n");
		main();
	}
	else
	{	int ret;
		if (*front == *rear)
		{
			ret = arr[*front];
			*front = *rear = -1;
		}
		else
			ret = arr[(*front)++];
		return ret;
	}
}

void display (int *arr,int *front,int *rear)
{
	if (isempty(*front)==0)
	{
		printf ("\nQueue is empty\n");
		main();
	}
	else
	{
		int i;
		for (i=*front;i<=*rear;i++)
		{
			printf ("\nData : %d\n",arr[i]);
		}
	}
}
