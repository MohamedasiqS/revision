/*
21) 0
    1 1
    0 0 0
    1 1 1 1
    0 0 0 0 0

*/

#include <stdio.h>
int main (void)
{
	int i,j,size = 5,a = 1;
	for (i = 1;i <= size;i++)
	{
		(i % 2 == 0)?a++:a--;
		for (j = 1;j <= i;j++)
		{
			printf ("%d ",a);
		}
	printf ("\n");
	}
	return 0;
}
