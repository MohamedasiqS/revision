#include <stdio.h>
#include <pthread.h>

void *swap_num (void *arg)
{
	int *a = (int*)(arg);
	
	printf ("\nBefore Swapping using pointer\n");
	printf ("A = %d ,B = %d\n",*(a+0),*(a+1));
	*(a+0) = *(a+0) ^ *(a+1);
	*(a+1) = *(a+0) ^ *(a+1);
	*(a+0) = *(a+0) ^ *(a+1);
	printf ("\nAfter Swapping\n");
	printf ("A = %d ,B = %d\n",*(a+0),*(a+1));
}

int main (void)
{
	int arr[2]={10,20};
	pthread_t swap;
	pthread_create(&swap,NULL,swap_num,arr);
	pthread_join(swap,NULL);
	return 0;
}
