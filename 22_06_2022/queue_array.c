#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int isfull(int *);
int isempty (int *);
void enque (int *,int *,int *);
int deque (int *,int *);
void display (int *,int *,int *);

int main (void)
{
	int rear = -1,front = -1,arr[SIZE],choice;
	while (1)
	{
		printf ("\nEnter choice\n1.enque\n2.deque\n3.display\n4.exit\n");
		scanf  ("%d",&choice);
		switch (choice)
		{
			case 1:
				enque (arr,&front,&rear);
				break;
			case 2:
				printf ("Deque element in queue %d\n",deque (arr,&front));
				break;
			case 3:
				display (arr,&front,&rear);
				break;
			case 4:
				exit (0);
			default:
				printf ("\nEnter vaild option\n");
		}
	}
	return 0;
}
int isfull (int *rear)
{
	if (*rear+1 == SIZE)
	    return 1;
	return 0;
}
int isempty (int *front)
{
	if (*front == -1||*front==SIZE)
	    return 1;
	return 0;
}
void enque (int *arr,int *front,int *rear)
{
	if (isfull(rear) == 1)
	{
		printf ("Queue is full\n");
	}
	else
	{
		static int data = 10;
		if (*front == -1)
		    *front = 0;
		arr[++(*rear)] = data++;
	}
}

int deque (int *arr,int *front)
{
	if (isempty(front) == 1)
	{
		printf ("Queue is empty\n");
		main();
	}
	else
	{
		return arr[(*front)++];
		
	}
}

void display (int *arr,int *front,int *rear)
{
	if (isempty(front) == 1)
	{
		printf ("Queue is empty\n");
		main();
	}
	else
	{
		int i;
		for (i=*front;i<=*rear;i++)
		    printf ("\n%d\n",arr[i]);
	}
}
