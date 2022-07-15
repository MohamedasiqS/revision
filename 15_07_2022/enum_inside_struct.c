#include <stdio.h>

typedef struct in_enum
{
	int data;
	enum colour
	{
		red,blue,orange,yellow
	}b;
	char str[20];
}in_enum;

int main (void)
{
	in_enum a;
	a.b = red;
	printf ("%d",a.b);
	return 0;
}
