/*
6) 5
   5 4
   5 4 3
   5 4 3 2
   5 4 3 2 1

*/

#include <stdio.h>
int main (void)
{
	int i,j,size = 5,temp;
	temp = size;
	for (i = 1;i <= size;temp = size,i++)
	{
		for (j = 1;j <= i;j++)
			printf ("%-2d",temp--);
	printf ("\n");
	}
	return 0;
}
