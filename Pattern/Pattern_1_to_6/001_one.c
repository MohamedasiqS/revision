/*
1) *
   * *
   * * *
   * * * *
   * * * * *

*/

#include <stdio.h>
int main (void)
{
	int i,j,size=5;
	for (i = 0;i < size;i++)
	{
		for (j = 0;j <= i;j++)
			printf ("* ");
	printf ("\n");
	}
	return 0;
}
