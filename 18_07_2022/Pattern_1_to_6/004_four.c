/*
4) 1
   1 2
   1 2 3
   1 2 3 4
   1 2 3 4 5

*/

#include <stdio.h>
int main (void)
{
	int i,j,size = 5;
	for (i = 1;i <= size;i++)
	{
		for (j = 1;j <= i;j++)
			printf ("%-2d",j);
	printf ("\n");
	}
	return 0;
}
