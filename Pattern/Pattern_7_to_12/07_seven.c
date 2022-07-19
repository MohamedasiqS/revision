/*
7) 5
   4 5
   3 4 5
   2 3 4 5
   1 2 3 4 5

*/

#include <stdio.h>
int main (void)
{
	int i,j,size = 5,temp;
	temp = size;
	for (i = 1;i <= size;temp--,i++)
	{
		for (j = 1;j <= i;j++)
			printf ("%-2d",temp+(j-1));
	printf ("\n");
	}
	return 0;
}
