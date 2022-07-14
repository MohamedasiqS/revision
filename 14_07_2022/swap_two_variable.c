#include <stdio.h>

void swap_ptr (int *,int *);
void swap_xor (int *,int *);

int main (void)
{
	int a = 10, b = 20;
	void (*fptr[])(int *,int *)= {swap_ptr,swap_xor};
	
	printf ("\nBefore Swapping using pointer\n");
	printf ("A = %d ,B = %d\n",a,b);
	fptr[0](&a,&b);
	
	printf ("\nBefore Swapping\n");
	printf ("A = %d ,B = %d\n",a,b);
	fptr[1] (&a,&b);
	return 0;
}

void swap_ptr (int *a,int *b)
{
	*a = (*a * *b)/(*b = *a);
	printf ("\nAfter Swapping\n");
	printf ("A = %d ,B = %d\n",*a,*b);
}


void swap_xor (int *a,int *b)
{
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
	printf ("\nAfter Swapping\n");
	printf ("A = %d ,B = %d\n",*a,*b);
}
