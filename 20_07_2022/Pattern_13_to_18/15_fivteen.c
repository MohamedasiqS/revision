/*
15) a
    b  a
    c  b  a
    d  c  b  a
    e  d  c  b  a

*/

#include <stdio.h>
int main (void)
{
	int i,j,size = 5,ch = 97;
	for (i = 1;i <= size;ch++,i++)
	{
		for (j = 1;j <= i;j++)
			printf ("%c ",ch-(j-1));
	printf ("\n");
	}
	return 0;
}
