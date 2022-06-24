#include <stdio.h>

int main(void)
{
	int data,count=0;
	printf ("Enter data\n");
	scanf  ("%d",&data);
	for (;data!=0;data = data>>1)
	{
		if (data & 0x01)
		  count++;
	}
	if (count == 1)
		printf ("Given number is power of 2\n");
	else
		printf ("Given number is not power of 2\n");
	return 0;
}
