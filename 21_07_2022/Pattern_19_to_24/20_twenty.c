/*
20) 1
    0 1
    1 0 1
    0 1 0 1
    1 0 1 0 1

*/

#include <stdio.h>
int main (void)
{
	int i,j,size = 5,a = 0;
	for (i = 1;i <= size;i++)
	{
		if (i%2 == 0)
			a = 0;
		else
			a = 1;
		for (j = 1;j <= i;j++)
		{
			if (a == 1)
				printf ("%d ",a--);
			else if (a == 0)
				printf ("%d ",a++);
		}
	printf ("\n");
	}
	return 0;
}
