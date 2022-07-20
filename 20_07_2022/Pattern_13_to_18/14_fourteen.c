/*
14) a
    a  b
    a  b  c
    a  b  c  d
    a  b  c  d  e

*/

#include <stdio.h>
int main (void)
{
	int i,j,size = 5,ch = 97;
	for (i = 1;i <= size;i++)
	{
		for (j = 1;j <= i;j++)
			printf ("%c ",ch+(j-1));
	printf ("\n");
	}
	return 0;
}
