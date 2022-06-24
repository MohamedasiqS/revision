#include<stdio.h>
#define SIZE 5
void print(char (*arr)[SIZE])
{
	int i=0;
	while(i<SIZE)
	{
		printf("%2c",(*arr)[i]);
		i++;
	}
	return ;
}
int main(void)
{
	int i=0;
	char (*arr)[SIZE],ch[SIZE]={'a','e','i','o','u'};
	arr = &ch;
	print(arr);
	return 0;
}


