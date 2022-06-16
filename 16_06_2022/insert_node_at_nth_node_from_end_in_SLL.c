#include <stdio.h>
#include <stdlib.h>

typedef struct SLL
{
	int data;
	struct SLL *next;
}SLL;

SLL *createnode(void);
void insertnode(SLL **, SLL **);
void insert(SLL **,int);
void display(SLL **);

int main(void)
{
	SLL *head = NULL,*latest = NULL;
	int i,var;
	for(i=1;i<=6;i++)
		insertnode(&head,&latest);
	printf("Total Node is %d where user want to insert at position from end\n",--i);
	scanf("%d",&var);
	insert(&head,var);
	display(&head);
	return 0;
}


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

void insert(SLL **head_arg,int ins_node)
{
	SLL *fast = *head_arg, *slow = *head_arg ,*insert = NULL;
	int i=1;

	while(i<=ins_node)
	{
		fast = fast->next;
		i++;
	}
	while(fast != NULL)
		
	{
		fast = fast->next;
		slow = slow->next;
	}
	insert = createnode();
	insert->next = slow->next;
	slow->next = insert;

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

