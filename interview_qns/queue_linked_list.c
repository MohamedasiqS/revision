#include <stdio.h>
#include <stdlib.h>
typedef struct queue
{
  int data;
  struct queue *link;
}queue;

int isempty (queue **front_arg)
{
 if(*front_arg == NULL)
      return 1;
 else
      return 0;
}

queue *createnode(queue **newnode)
{
    *newnode = (queue *)malloc(sizeof(queue));
    if(*newnode == NULL)
    {
        printf("Memory is not sufficient\n");
        exit(0);
    }
    (*newnode)->link = NULL;
    return *newnode;
}
void enque(queue **front_enque,queue **rear_enque)
{
   queue *new = NULL;
   new = createnode(&new);
   printf("Enter Data\n");
   scanf("%d",&new->data);
   if(*front_enque == NULL)
	*front_enque = new;
   else
	(*rear_enque)->link = new;
   *rear_enque = new;
   
}

int deque(queue **front_deque)
{
   static int ret;
   if(isempty(front_deque))
   {
      printf("Queue is empty\n");
      return -1;
   }
   else
   {
   queue *temp = NULL;
   temp = *front_deque;
   ret = temp->data;
   *front_deque = temp->link;
   free(temp);
   temp = NULL;
   }
   return ret;
}

void peek(queue **front_peek)
{
   if(isempty(front_peek))
   {
      printf("Queue is empty\n");
   }
   else
   {
     printf("Peek element is %d\n",(*front_peek)->data);
   }
   return ;
}

void display(queue **front_display)
{
   if(isempty(front_display))
   {
      printf("Queue is empty\n");
   }
   else
   {
     queue *temp = *front_display;
     while (temp != NULL)
     {
        printf("%d\n",temp->data);
        temp = temp->link;
     }
    }
}

int main(void)
{
   queue *front = NULL,*rear = NULL;
   int a = 1,choice,ret;
   while(a)
   {
        printf("\n Enter choice\n");
        printf("\n 1.Enque \n 2.Deque \n 3.peek \n 4.Display \n 5.exit \n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
                enque(&front,&rear);
                break;
        case 2:
                ret = deque(&front);
                if(ret>=0)
                printf("Deque element is %d\n",ret);
                break;
        case 3:
                peek(&front);
                break;
        case 4:
                display(&front);
                break;
        case 5:
                a = 0;
                break;
        default :
                printf("Enter valid nummber\n");
         }
    }
    return 0;
}

