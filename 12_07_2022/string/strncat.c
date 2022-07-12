#include<stdio.h>
char* mystrcat(char* str1,const char* str2,unsigned int size)
{
	int i,j;
	for(i=0;*(str1+i)!='\0';i++);
	for(j=0;j<size;j++,i++)
	{
		*(str1+i) = *(str2+j);
	}
	return str1;
}
int main(void)
{
	char str1[20]="good morning",str2[20]=" to all",*ret=0;
	unsigned int size;
	printf("Enter number of bytes\n");
	scanf("%d",&size);
	ret = mystrcat(str1,str2,size);
	printf("After string concatenation :%s\n",ret);
	return 0;
}
