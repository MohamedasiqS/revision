/*
16) e
    e  d
    e  d  c
    e  d  c  b
    e  d  c  b  a

*/

#include <stdio.h>
int main (void)
{
	int i,j,size = 5,ch = 97;
	ch = ch + size-1;
	for (i = 1;i <= size;i++)
	{
		for (j = 1;j <= i;j++)
			printf ("%c ",ch-(j-1));
	printf ("\n");
	}
	return 0;
}
