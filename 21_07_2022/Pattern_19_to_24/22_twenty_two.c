/*
22) 1
    3 5
    7 9 11
    13 15 17 19
    21 23 25 27 29

*/

#include <stdio.h>
int main (void)
{
	int i,j,size = 5,a = -1;
	for (i = 1;i <= size;i++)
	{
		for (j = 1;j <= i;j++)
		{
			a = a+2;
			printf ("%-2d ",a);
		}
	printf ("\n");
	}
	return 0;
}
