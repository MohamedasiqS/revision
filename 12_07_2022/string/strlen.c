#include<stdio.h>
unsigned int mystrlen(const char* str)
{
	static int i;
	for(i=0;*(str+i)!='\0';i++);
	return i;
}

int main(void)
{
	char str[]="this is C program";
	int ret;
	ret = mystrlen(str);
	printf("String Length :%d\n",ret);
	return 0;
}
