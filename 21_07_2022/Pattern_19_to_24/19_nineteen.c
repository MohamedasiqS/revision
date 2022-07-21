/*
19) 1
    0 1
    0 1 0
    1 0 1 0
    1 0 1 0 1

*/

#include <stdio.h>
int main (void)
{
	int i,j,size = 5,a = 1;
	for (i = 1;i <= size;i++)
	{
		for (j = 1;j <= i;j++)
		{
			if (a == 1)
				printf ("%d ",a--);
			else
				printf ("%d ",a++);
		}
	printf ("\n");
	}
	return 0;
}
