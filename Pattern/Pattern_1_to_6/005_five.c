/*
4) 1
   2 1
   3 2 1
   4 3 2 1
   5 4 3 2 1

*/

#include <stdio.h>
int main (void)
{
	int i,j,size = 5;
	for (i = 1;i <= size;i++)
	{
		for (j = 1;j <= i;j++)
			printf ("%-2d",i-(j-1));
	printf ("\n");
	}
	return 0;
}
