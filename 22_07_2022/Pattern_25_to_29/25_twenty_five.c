/*
25) 1
    b b
    3 3 3
    d d d d
    5 5 5 5 5

*/

#include <stdio.h>
int main (void)
{
	int i,j,size = 5,ch = 97;
	for (i = 1;i <= size;i++)
	{
		for (j = 1;j <= i;j++)
		{
			if (i%2 == 0)
				printf ("%-2c ",ch+(i-1));
			else
				printf ("%-2d ",i);
		}
	printf ("\n");
	}
	return 0;
}
