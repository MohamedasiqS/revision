#include <stdio.h>

int main (void)
{
	int arr[]={57,88,21,5,41,63,122,7},size,i,max = arr[0],min = arr[0];
	size = sizeof(arr)/sizeof(arr[0]);
	for (i=0;i<size;i++)
	{
		if (max <=arr[i])
			max = arr[i];	
		else if (min >= arr[i])
			min = arr[i];
	}
	printf ("\nMax - %d ,Min - %d\n",max,min);
	return 0;
}
