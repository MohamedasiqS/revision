#include <stdio.h>
#define SUB(b,a) printf ("Sub : %d\n",b-a))
	
int add (int ,int);

int main (void)
{
	int a = 10,b = 20;
	printf ("Inline Add function : %d\n",add(a,b));
	printf ("Macro function does n't support scope value with replace the code when function called")
	SUB (b,a);
	return 0;
}

inline int add (int a,int b)
{
	printf ("It support scope value with replace the code when function called\n");
	return a+b;
}
