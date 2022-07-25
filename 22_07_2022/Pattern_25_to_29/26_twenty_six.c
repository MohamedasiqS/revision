/*
25) a
    2 2
    c c c
    4 4 4 4
    e e e e e

*/

#include <stdio.h>
int main (void)
{
	int i,j,size = 5,ch = 97;
	for (i = 1;i <= size;i++)
	{
		for (j = 1;j <= i;j++)
		{
			if (i%2 != 0)
				printf ("%-2c ",ch+(i-1));
			else
				printf ("%-2d ",i);
		}
	printf ("\n");
	}
	return 0;
}
