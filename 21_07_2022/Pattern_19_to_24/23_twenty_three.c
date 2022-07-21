/*
23) 0
    2 4
    6 8 10
    12 14 16 18
    20 22 24 26 28

*/

#include <stdio.h>
int main (void)
{
	int i,j,size = 5,a = 0;
	for (i = 1;i <= size;i++)
	{
		for (j = 1;j <= i;j++)
		{
			printf ("%-2d ",a);
			a = a+2;
		}
	printf ("\n");
	}
	return 0;
}
