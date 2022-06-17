#include<stdio.h>
int main()
{
	int n;
	printf("Enter number\n");
	scanf("%d",&n);
	if(n&(0x01<<0))
		printf("odd");
	else
		printf("even");
	return 0;
}
