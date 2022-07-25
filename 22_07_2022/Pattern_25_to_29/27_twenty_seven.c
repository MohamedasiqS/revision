/*
27) 1
    2   3
    5   8   13
    21  34  55  89 
    144 233 377 610 987

*/

#include <stdio.h>
int main (void)
{
	int i,j,size = 5,a = 0,b = 1,c;
	for (i = 1;i <= size;i++)
	{
		for (j = 1;j <= i;j++)
		{
			c = a+b;
			printf ("%-3d ",c);
			a = b;
			b = c;
		}
	printf ("\n");
	}
	return 0;
}
