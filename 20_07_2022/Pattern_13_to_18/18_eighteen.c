/*
18) a
    b c
    d e f
    g h i j
    k l m n o

*/

#include <stdio.h>
int main (void)
{
	int i,j,size = 5,ch = 97;
	for (i = 1;i <= size;i++)
	{
		for (j = 1;j <= i;j++)
			printf ("%c ",ch++);
	printf ("\n");
	}
	return 0;
}
