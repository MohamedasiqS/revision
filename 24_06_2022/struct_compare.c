#include<stdio.h>
#include<stdlib.h>
typedef struct stack
{
	char stack_name[20];
}stack;
typedef struct heap
{
	char heap_names[20];
}heap;
int compare(char *str1,char *str2)
{
	int i=0,flag;

	while(*(str1+i)!=0 || *(str2+i)!=0)
	{
		flag=0;
		if(*(str1+i) == *(str2+i))
			flag=1;
		i++;
	}
	
	return flag;
}
int main(void)
{
	int i=0,ret,flag=0;
	heap *ptr;
	ptr= (heap*)malloc(sizeof(heap));
	printf("Enter name in heap segment\n");
	scanf("%s",ptr->heap_names);

	stack s;
	printf("Enter name in stack segment\n");
	scanf("%s",s.stack_name);

	while(ptr->heap_names[i]!=0 || s.stack_name[i]!=0)
	{
		flag=0;
		if(ptr->heap_names[i] ==  s.stack_name[i])
		flag=1;
		i++;
	}
	
	if(flag == 1)
		printf("both are same\n");
	else
		printf("Both are not same\n");

	ret = compare(ptr->heap_names,s.stack_name);
	if(ret == 1)
                printf("both are same\n");
        else
                printf("Both are not same\n");

	return 0;
}
