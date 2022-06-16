#include <stdio.h>
#include <stdlib.h>

typedef struct palindrome
{
    char data;
    struct palindrome *link;
}palindrome;

palindrome *createnode (palindrome** ,char );
void assign_data (palindrome** ,palindrome** ,char );
void check_palindrome (palindrome**,char *);
void reverse (palindrome** );

int main(void)
{
    palindrome *head = NULL,*tail = NULL;
    char str[30];
    unsigned int len,i;
    printf ("Enter string\n");
    scanf  ("%s",str); 
    for(i=0;str[i]!='\0';i++)
    {
      assign_data (&head,&tail,str[i]);
    }
    reverse (&head);
    check_palindrome (&head,str);
    return 0;
}

palindrome *createnode (palindrome **newnode,char ch_data)
{
    *newnode = (palindrome *)malloc(sizeof(palindrome));
    if (*newnode == NULL)
    {
        perror ("Memory is not allocated");
        exit (1);
    }
    (*newnode)->data = ch_data;
    (*newnode)->link = NULL;
    return *newnode;
}

void assign_data (palindrome **head,palindrome **tail,char ch_data)
{
    palindrome *new = NULL;
    new = createnode(&new,ch_data);
    if (*head == NULL)
       *head = new;
    else
        (*tail)->link = new;
    *tail = new;
}

void reverse (palindrome **head)
{
    palindrome *prev = NULL,*curr = *head,*next = NULL;
    while (curr != NULL)
    {
       next = curr->link;
       curr->link = prev;
       prev = curr;
       curr = next;
    }
    *head = prev;
}

void check_palindrome (palindrome **head,char *str)
{
    palindrome *temp = NULL;
    unsigned int i=0;
    for (temp = *head;temp != NULL;temp=temp->link,i++)
    {
        if (!(temp->data == str[i]))
        {
           printf ("Given string is not palindrome\n");
           return ;
        }
        
    }
    printf ("Given string is palindrome\n");
}
