#include<stdio.h>

int main()
{
	int a;
	printf("enter value\n");
	scanf("%d",&a);

	int i,count=0;
    for(i=0;i<32;i++)
	{
		if(a & (0x01<<31) )
			count++;
		a=a<<1;
	}
	printf("total no of 1's:%d\n",count);

	return 0;
}
