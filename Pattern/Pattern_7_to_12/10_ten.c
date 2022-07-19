/*
10) 1
   *  *
   2  2  2
   *  *  *
   3  3  3  3  3

*/

#include <stdio.h>
int main (void)
{
	int i,j,size = 5,num = 1;
	for (i = 1;i <= size;i++)
	{
		for (j = 1;j <= i;j++)
		{
		   if (i%2 != 0)
		   	printf ("%-2d",num);
		   else
		   	printf ("* ");
		}
		printf ("\n");
		if (i%2 != 0)
		   	num++;
	}
	return 0;
}
