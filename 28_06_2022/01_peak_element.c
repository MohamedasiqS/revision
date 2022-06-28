#include <stdio.h>

int main (void)
{
	int arr[] = {8,5,19,5,12,69,7},i,j=-1,size;
	size = sizeof (arr) / sizeof(arr[0]);
	int peak[size];
	for (i=0;i<size;i++)
	{
		if ( (arr[i-1] <= arr[i] && arr[i]>= arr[i+1]) && i != 0)
		{
		    if (arr[0] > arr[i])
			peak[++j] = arr[i];
		    else
		    	peak[++j] = arr[i];
		}
	}
	printf ("\nThe peak element is\n");
	for (i=0;i<=j && j>=0 ;i++)
		printf ("%d\n",peak[i]);
	return 0;
}
/*
failed
1) same element
2) descending
*/
