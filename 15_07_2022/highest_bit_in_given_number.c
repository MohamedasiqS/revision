#include <stdio.h>

int main (void)
{
	int data,i,temp;
	printf ("\nEnter data\n");
	scanf  ("%d",&data);
	temp = data;
	for (i=31;i>=0;i--)
	{
		if (0x80000000 & data)
		{
			printf ("\n%d is highest bit position in %d number\n",i,temp);
			break;
		}
		data = data<<1;
	}
	return 0;	
}

