/*
9) 1
   2  3
   4  5  6
   7  8  9  10
   11 12 13 14 15

*/

#include <stdio.h>
int main (void)
{
	int i,j,size = 5,num = 1;
	for (i = 1;i <= size;i++)
	{
		for (j = 1;j <= i;num++,j++)
			printf ("%-4d",num*num);
	printf ("\n");
	}
	return 0;
}
