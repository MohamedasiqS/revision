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
int main (void)
{
	int data,pos;
	printf ("Enter data \n");
	scanf  ("%d",&data);
	dectobin (data);
	printf ("\nIn this which position want to set\n");
	scanf  ("%d",&pos);
        data |= (0x1 << pos);
        dectobin (data);
        printf ("\nIn this which position want to reset\n");
	scanf  ("%d",&pos);
        data &= (~(0x1 << pos));
        dectobin (data);
        printf ("\nIn this which position want to toggle\n");
	scanf  ("%d",&pos);
        data ^= (0x1 << pos);
        dectobin (data);
        return 0;
}
