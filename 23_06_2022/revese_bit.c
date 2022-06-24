#include <stdio.h>
#define N_BIT 16
#define BITS 0x08000

void dectobin (int data)
{
	int i;
	for (i=0;i<N_BIT;i++,data=data<<1)
	{
		if (BITS & data)
			printf ("1");
		else
			printf ("0");
	}
}

int main(void)
{
	int data,i;
	printf ("Enter data\n");
	scanf  ("%d",&data);
	dectobin (data);
	printf("\n\n");

	for (i=0;i<N_BIT;i++)
	{
		if (data & (0x01<<i))
			printf ("1");
		else
			printf ("0");
	}
}
