/*
12) a
    b  b
    c  c  c
    d  d  d  d
    e  e  e  e  e

*/

#include <stdio.h>
int main (void)
{
	int i,j,size = 5,ch = 97;
	for (i = 1;i <= size;i++)
	{
		for (j = 1;j <= i;j++)
			printf ("%c ",ch+(i-1));
	printf ("\n");
	}
	return 0;
}
