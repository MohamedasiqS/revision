#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int data;
	struct node *link;
}SLL;

SLL* createnode(SLL *);
void insertnode(SLL **,SLL **);
void update_data(SLL **,int );
void display(SLL **);

int main(void)
{
	SLL *head=NULL,*latest=NULL;
	int i,var;
	for(i=1;i<=5;i++)
		insertnode(&head,&latest);
	printf("Total node is %d which nth node user want update data from end \n",--i);
	scanf("%d",&var);
	update_data(&head,var);
	display(&head);
	return 0;
}

SLL* createnode(SLL *new_arg)
{
	new_arg = (SLL *)malloc(sizeof(SLL));
	printf("Enter Data\n");
	scanf("%d",&new_arg->data);
	return new_arg;
}

void insertnode(SLL **head_arg,SLL **latest_arg)
{
	SLL *new = NULL;
	new = createnode(new);
	if(*head_arg == NULL)
		*head_arg = new;
	else
		(*latest_arg)->link = new;
	*latest_arg = new;
}

void update_data(SLL **head_arg,int var)
{
	SLL *fast = *head_arg, *slow = *head_arg;
	int i=1;
	while(i<=var)
	{
		fast = fast->link;
		i++;
	}
	while(fast->link != NULL)
	{
		slow = slow->link;
		fast = fast->link;
	}
	slow = slow->link;

	printf("Previous Data : %d\n",slow->data);
	printf("Enter New Data\n");
	scanf("%d",&slow->data);


}
void display(SLL **head_arg)
{
	SLL *temp = *head_arg;
	while(temp != NULL)
	{
		printf("Data : %d\n",temp->data);
		temp = temp->link;
	}
}

