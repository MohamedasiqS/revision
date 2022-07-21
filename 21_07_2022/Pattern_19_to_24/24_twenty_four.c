/*
24) a
    A A
    a a a
    A A A A
    a a a a a

*/

#include <stdio.h>
int main (void)
{
	int i,j,size = 5,ch = 97;
	for (i = 1;i <= size;i++)
	{
		if (i%2 == 0)
			ch = ch -32;
		else
		 	ch = 97;
		for (j = 1;j <= i;j++)
		{
			printf ("%c ",ch);
		}
	printf ("\n");
	}
	return 0;
}
