#include<stdio.h>
#define SIZE_1 8
#define SIZE_2 5
#define MUL ( *(ptr1+i) * *(ptr2+i))
int swap(int *arr1,int *arr2)
{
	int * const ptr1 = arr1;
	int * const ptr2 = arr2;
	int i=0,temp[10]={};
	while(i<10)
	{
		temp[i] = *(ptr1+i);
		i++;
	}
	
	i=0;
        while(i<SIZE_2)//copy from array 2 to array 1
        {
                *(ptr1+i) = *(ptr2+i);
	        i++;
        }
	
	i=0;
        while(i<SIZE_1)//copy from array 1 to array 2
        {
                *(ptr2+i) = temp[i];
                i++;
        }

	return 0;
}
int main(void)
{
	int arr1[SIZE_1] = {10,20,30,40,50,60,70,80},arr2[SIZE_2]={200,220,240,280,300},i;
	int (*fptr)(int*,int*);
	fptr = swap;

	printf("Before Swap\n");
	printf("\nArray 1 Elements\n");
	for(i=0;i<SIZE_1;i++)
	{
	  printf("%4d",arr1[i]);
	}
	printf("\nArray 2 Elements\n");
        for(i=0;i<SIZE_2;i++)
        {
          printf("%4d",arr2[i]);
        }

	fptr(arr1,arr2);

	printf("\nAfter Swap\n");

        printf("\nArray 1 Elements\n");
        for(i=0;i<SIZE_2;i++)
        {
          printf("%4d",arr1[i]);
        }
        printf("\nArray 2 Elements\n");
        for(i=0;i<SIZE_1;i++)
        {
          printf("%4d",arr2[i]);
        }
	return 0;
}
