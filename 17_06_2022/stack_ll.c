#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node *link;
}SLL;
//SLL *top = NULL;

int isempty(SLL **top_arg)
{
	if(*top_arg == NULL)
		return 1;
	else
		return 0;
}

void push(int data_arg,SLL **top_arg)
{
     SLL *new = NULL;
     new = (SLL *)malloc(sizeof(SLL));
     new->data = data_arg;     
     new->link = NULL;
     if(*top_arg == NULL)
	     *top_arg = new;
     else
     {
	     new->link = *top_arg;
	     *top_arg = new;
     }
}

int pop(SLL **top_arg)
{
	if(isempty(top_arg))
	{
		printf("Stack is empty\n");
		return -1;
	}
	else
	{
		SLL *temp = *top_arg;
		static int ret;
		ret = temp->data;
		*top_arg = (*top_arg)->link;
		free(temp);
		temp = NULL;
		return ret;
	}
}

int peek(SLL **top_arg)
{
	if(isempty(top_arg))
                printf("Stack is empty\n");
        else
        	return (*top_arg)->data;
}

void display(SLL **top_arg)
{
	SLL *temp = *top_arg;
	while(temp != NULL)
	{
		printf("Data : %d\n",temp->data);
		temp = temp->link;
	}
}

int main(void)
{
        int choice,a=1,data;
	SLL *top = NULL;
        while(a)
        {
                printf("Enter option\n");
                printf("1.push\n");
                printf("2.pop\n");
                printf("3.peek element\n");
                printf("4.display\n");
                printf("5.exit\n");
                scanf("%d",&choice);
                switch(choice)
                {
                        case 1:
                                 printf("Enter Data\n");
                                 scanf("%d",&data);
                                 push(data,&top);
                                 break;
                        case 2:
                                 printf("Element popped from stack : %d\n",pop(&top));
                                 break;
                        case 3:
                                 printf("Top element in stack is %d\n",peek(&top));
                                 break;
                        case 4:  display(&top);
                                 break;
                        case 5:
                                 printf("Exit\n");
                                 a=0;
                                 break;
                        default:
                               printf("Enter valid number\n");
                }
        }
}

