#include <stdio.h>

int main (void)
{
	int num = 172,n = 4,sb = 1;
	/*      32 16 8 4 2 1
	53 =    1  1  0 1 0 1
	59 =    1  1  1 0 1 1
	        128  64  32  16  8  4  2  1
	172  =   1   0   1   0   1  1  0  0 
	178  =   1   0   1   1   0  0  1  0
	*/
	int count = 0;
	while (count < n)
	{
		if (num & 0x1<<sb)
			num = num & ~(0x1<<sb);
		else
			num = num | 0x1<<sb;
		count++;
		sb++;
	}
	printf ("%d",num);
	return 0;
}
