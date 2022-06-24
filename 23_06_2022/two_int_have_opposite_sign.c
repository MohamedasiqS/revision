#include <stdio.h>

int main(void)
{
	int a,b,sa,sb;
	printf ("Enter the value for A & B\n");
	scanf  ("%d%d",&a,&b);
	sa = 0x80000000 & a;
	sb = 0x80000000 & b;
	if ((sa ^ sb) == 0)
		printf ("Both number has same sign numbers\n");
	else
		printf ("Both number has different sign numbers\n");
	return 0;
}
