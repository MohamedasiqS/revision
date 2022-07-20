/*
13) e
    d  d
    c  c  c
    b  b  b  b
    a  a  a  a  a

*/

#include <stdio.h>
int main (void)
{
	int i,j,size = 5,ch = 97;
	ch = ch + size-1;
	for (i = 1;i <= size;ch--,i++)
	{
		for (j = 1;j <= i;j++)
			printf ("%c ",ch);
	printf ("\n");
	}
	return 0;
}
