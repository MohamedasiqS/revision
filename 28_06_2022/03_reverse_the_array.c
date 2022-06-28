#include <stdio.h>

int main (void)
{
	int arr[]={50,40,30,20,10},size,i,j,temp;
	size = sizeof(arr)/sizeof(arr[0]);
	for (i=size-1,j=0;i>j;i--,j++)	
	{
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
	for (i=0;i<size;i++)
		printf ("%d\n",arr[i]);
	return 0;
}
