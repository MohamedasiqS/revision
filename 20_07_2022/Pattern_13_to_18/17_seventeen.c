/*
17) e
    d e
    c d e
    b c d e
    a b c d e

*/

#include <stdio.h>
int main (void)
{
	int i,j,size = 5,ch = 97;
	ch = ch + size-1;
	for (i = 1;i <= size;i++)
	{
		for (j = 1;j <= i;j++)
			printf ("%c ",ch-(i-j));
	printf ("\n");
	}
	return 0;
}
