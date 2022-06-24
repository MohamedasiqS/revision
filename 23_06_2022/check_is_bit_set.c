#include <stdio.h>

int main (void)
{
	int data,pos;
	printf ("Enter data\n");
	scanf  ("%d",&data);
	printf ("Enter position to check bit set or not\n");
	scanf  ("%d",&pos);
	if (data & (0x1<<pos))
		printf ("\n%d pos bit is set\n",pos);
	else
		printf ("\n%d pos bit is not set\n",pos);
	return 0;
}
