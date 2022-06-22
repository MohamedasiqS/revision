#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int isfull (int *,int *);
int isempty (int *);
void enque (int *,int *,int *);
int deque (int *,int *,int *);
void display (int *,int *,int *);

int main(void)
{
	int arr[SIZE],rear = -1,front = -1,choice;
	while (1)
	{
		printf ("\nEnter choice\n1.enque\n2.deque\n3.display\n4.exit\n");
		scanf  ("%d",&choice);
		switch (choice)
		{
			case 1:
				enque(arr,&front,&rear);
				break;
			case 2:
				deque(arr,&front,&rear);
				break;
			case 3:
				display(arr,&front,&rear);
				break;
			case 4:
				exit(0);
			default:
				printf ("Enter valid option\n");
		}
	}
	return 0;
}

int isfull (int *front,int *rear)
{
	if ((*front == *rear+1)||(*front== 0 && *rear == SIZE))
	   return 0;
	return 1;
}

int isempty (int *front)
{
	if (*front==-1)
	   return 0;
	return 1;
}

void enque (int *arr,int *front,int *rear)
{
	if (isfull(front,rear) == 0)
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

int deque (int *arr,int *front,int *rear)
{
	int ret;
	if (isempty(front) == 0)
	{
		printf ("Queue is empty\n");
	}
	else if (front == rear)
	{
		ret = arr[*front];
		*front = *rear = -1;
	}
	else
	{
		ret =  arr[(*front)++];
	}
	return ret;
}

void display (int *arr,int *front,int *rear)
{
	if (isempty(front) == 0)
	{
		printf ("Queue is empty\n");
	}
	else
	{
		int i;
		for (i=*front;i<*rear;i++)
		{
			printf ("\n%d\n",arr[i]);
		}
	}
}
