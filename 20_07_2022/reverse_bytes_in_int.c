#include <stdio.h>

int main (void)
{
	int num ,i,temp,j;
	unsigned char *ptr = NULL;
	printf ("Enter number\n");
	scanf  ("%d",&num);
	ptr = (unsigned char*)&num;
	
	printf ("\nBefore reverse integer bytes\n");
	for (i=0;i<=3;i++)
		printf ("data : %d,Address - %p\n",*(ptr+i),ptr+i);
	
	for (i=0,j=3;i<j;i++,j--)
	{
		temp     = *(ptr+i);
		*(ptr+i) = *(ptr+j);
		*(ptr+j) = temp;
	}
	
	printf ("\nAfter reverse integer bytes\n");
	for (i=0;i<4;i++)
		printf ("data - %d,Address - %p\n",*(ptr+i),ptr+i);
	
	return 0;
}
