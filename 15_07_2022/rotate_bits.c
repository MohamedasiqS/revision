#include <stdio.h>

int main (void)
{
	int data = 46,rl,rr,nor;
	printf ("\nEnter choice 1.Rotate Left 2.Rotate Right\n");
	scanf  ("%d",&choice);
	if (choice == 1)
	{
		printf ("\nEnter no.of rotation\n");
		scanf  ("%d",&nor);
		rl = (num<<pos)|(num>>(sizeof(int) - pos));
		printf ("%d",rl);
	}
	else if (choice == 2)
	{
		printf ("\nEnter no.of rotation\n");
		scanf  ("%d",&nor);
		rr = (num>>pos)|(num<<(sizeof(int) - pos));
		printf ("%d",rr);
	}
	else
		printf ("\nEntered Invalid option\n");
	return 0;
}
