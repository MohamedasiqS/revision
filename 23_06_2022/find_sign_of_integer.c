#include <stdio.h>
int main (void)
{
	int data;
	printf ("Enter data\n");
	scanf  ("%d",&data);
	if (0x80000000 & data)
	   printf ("Given number MSB is 1\n");
	else
	   printf ("Given number MSB is 0\n");
	return 0;
}
