/*
28) 0
    -1   2
    -3   4 -5
     6  -7  8  -9 
    10 -11  12 -13 14

*/

#include <stdio.h>
int main (void)
{
	int i,j,size = 5,a = 0;
	for (i = 1;i <= size;i++)
	{
		for (j = 1;j <= i;j++)
		{
			if (a%2 == 0)
				printf (" %-3d",a++);
			else
				printf ("%-3d ",-1*a++);
		}
	printf ("\n");
	}
	return 0;
}
