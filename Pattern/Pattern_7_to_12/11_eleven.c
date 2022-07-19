/*
11) 0
   1  -1
   2  -2  2
   3  -3  3  -3
   4  -4  4  -4  4
*/

#include <stdio.h>
int main (void)
{
	int i,j,size = 5,temp;
	for (i = 1;i <= size;i++)
	{	temp = i;
		temp--;
		for (j = 1;j <= i;j++)
		{
		 	if (j%2 != 0)
				printf ("%-2d",temp);
			else
				printf ("%-2d ",-1*temp);
		}
	printf ("\n");
	}
	return 0;
}
