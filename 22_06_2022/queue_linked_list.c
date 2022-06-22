#include <stdio.h>
#include <stdlib.h>

typedef struct queue
{
	int data;
	struct queue *link;
}queue;

int isempty (queue**);
void enque (queue**,queue**);
int deque (queue**);
void display (queue **);
int main(void)
{
	int choice;
	queue *front=NULL,*rear=NULL;
	while (1)
	{
		printf ("\nEnter choice\n1.enque\n2.deque\n3.display\n4.exit\n");
		scanf  ("%d",&choice);
		switch (choice)
		{
			case 1:
				enque (&front,&rear);
				break;
			case 2:
				printf ("Deque element in queue %d\n",deque (&front));
				break;
			case 3:
				display (&front);
				break;
			case 4:
				exit (0);
			default:
				printf ("\nEnter vaild option\n");
		}
	}
	return 0;
}

int isempty (queue **front)
{
	if (*front == NULL)
	    return 0;
	 return 1;
}
void enque (queue **front,queue **rear)
{
	queue *new = NULL;
	static int val = 10;
	new = (queue *)malloc(sizeof(queue));
	if (new == NULL)
	{
		perror ("Memory not allocated");
		exit (1);
	}
	new->data = val++;
	new->link = NULL;
	if (*rear == NULL)
	   *front=*rear = new;
	else
	{
	   (*rear)->link = new;
	   *rear = new;
	}
}

int deque (queue **front)
{
	if (isempty(front) == 0)
	{
		printf ("Queue is empty\n");
		main();
	}
	else
	{
		int ret;
		queue *del = NULL;
		del = *front;
		*front = del->link;
		ret = del->data;
		free (del);
		del = NULL;
		return ret;
	}
}

void display (queue **front)
{
	if (isempty(front) == 0)
	{
		printf ("Queue is empty\n");
	}
	queue *temp = NULL;
	for (temp = *front;temp!=NULL;temp=temp->link)
	{
		printf ("\n%d\n",temp->data);
	}
}
