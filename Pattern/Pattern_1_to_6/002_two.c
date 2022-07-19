/*
2) 1
   2 2
   3 3 3
   4 4 4 4
   5 5 5 5 5

*/

#include <stdio.h>
int main (void)
{
	int i,j,size=5;
	for (i = 1;i <= size;i++)
	{
		for (j = 1;j <= i;j++)
			printf ("%-2d",i);
	printf ("\n");
	}
	return 0;
}
