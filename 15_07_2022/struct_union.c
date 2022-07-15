#include<stdio.h>

int main()
{
union
{
	/*
	struct
	{
		short int i;
		short int j;
	}st;*/
	struct
	{
		 int i;
		 int j;
	}st;
}u={12,1};
	printf("%d %d\n",u.st.i,u.st.j);
	return 0;
}
