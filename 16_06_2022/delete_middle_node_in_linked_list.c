#include <stdio.h>
#include <stdlib.h>

typedef struct SLL
{
	int data;
	struct SLL *next;
}SLL;

SLL *createnode()
{
	SLL *new = NULL;
	new = (SLL*)malloc(sizeof(SLL));
	printf("Enter Data \n");
	scanf("%d",&new->data);
	return new;
}

void insertnode(SLL **head_arg, SLL **latest_arg)
{
	SLL *new = createnode();
	if(*head_arg == NULL)
		*head_arg = new;
	else
		(*latest_arg)->next = new;
	*latest_arg = new;
}

void delete(SLL **head_arg,int middle)
{
  	SLL *temp1 = *head_arg, *temp2 =NULL;
	int i=1;
	printf("Middle :%d\n",middle);
	(middle%2 != 0) ? '\0' : --middle;
	while(i<middle)
	{
		temp1 = temp1->next;
		i++;
	}
	
	temp2 = temp1->next;
	temp1->next = temp2->next;
	free(temp2);
	temp2 = NULL;
	
}

void display(SLL **head_arg)
{
	SLL *temp = *head_arg;
	while(temp)
	{
		printf("Data : %d\n",temp->data);
		temp = temp->next;
	}
}

int main(void)
{
	SLL *head = NULL,*latest = NULL;
	int i;
	for(i=1;i<=6;i++)
		insertnode(&head,&latest);
	((--i)%2==0)?i=(i/2)+1:(i=i/2);
	delete(&head,i);
		display(&head);
	return 0;
}
