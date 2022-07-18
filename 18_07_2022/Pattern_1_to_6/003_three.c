/*
3) 5
   4 4
   3 3 3
   2 2 2 2
   1 1 1 1 1

*/

#include <stdio.h>
int main (void)
{
	int i,j,size = 5,temp;
	temp = size;
	for (i = 1;i <= size;temp--,i++)
	{
		for (j = 1;j <= i;j++)
			printf ("%-2d",temp);
	printf ("\n");
	}
	return 0;
}
