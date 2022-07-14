#include <stdio.h>

int main (void)
{	
/*char pointer can't change each character,
because it is stored in read only of data section.
But we can change entire string,with change of base address of string
*/
	char *p = "hello";
	printf ("Before change of %s - it address - %p\n",p,p);
	p = "hlllo";
	printf ("After change of %s - it address - %p\n",p,p);
	
	char *cp = "char pointer";
	char ca[] = "char array";
	
	cp = "char pointer change";
	//ca = "char array not change"; //error: assignment to expression with array type
	
	int a;
	char *ptr = (char*)&a;
	a = 512;
/*
      4294967296 .... 512  256 128  64  32  16  8   4  2  1
512 = 	0	 .... 1    0    0   0   0   0   0   0  0  0


         4294967296 .... 512  256 128  64  32  16  8   4  2  1
512 = 	    0	    ....  1    0    0   0   0   0   0  0  0  0
ptr[0]=1    0       ....  0    0    0   0   0   0   0  0  0  1

         4294967296 .... 512  256 128  64  32  16  8   4  2  1
512 = 	    0	    ....  1    0    0   0   0   0   0  0  0  0
ptr[1]=2    0       ....  1    0    0   0   0   0   0  0  0  0

*/
	ptr[0] = 1;
	ptr[1] = 2;
	printf ("A = %d",a);
	return 0;
}
