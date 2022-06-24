#include<stdio.h>
#define SIZE 5
#define MUL ( *(ptr1+i) * *(ptr2+i))
int swap(int *arr1,int *arr2)
{
	int * const ptr1 = arr1;
	int * const ptr2 = arr2;
	int i=0;
        while(i<SIZE)
        {
                *(ptr1+i)=MUL/(*(ptr2+i)=*(ptr1+i));
	        i++;
        }
	return 0;
}
int main(void)
{
	int arr1[SIZE] = {10,20,30,40,50},arr2[SIZE]={60,70,80,90,100},i;
	int (*fptr)(int*,int*);
	fptr = swap;

	printf("Before Swap\n");
	printf("\nArray 1 Elements\n");
	for(i=0;i<SIZE;i++)
	{
	  printf("%4d",arr1[i]);
	}
	printf("\nArray 2 Elements\n");
        for(i=0;i<SIZE;i++)
        {
          printf("%4d",arr2[i]);
        }

	fptr(arr1,arr2);

	printf("\nAfter Swap\n");

        printf("\nArray 1 Elements\n");
        for(i=0;i<SIZE;i++)
        {
          printf("%4d",arr1[i]);
        }
        printf("\nArray 2 Elements\n");
        for(i=0;i<SIZE;i++)
        {
          printf("%4d",arr2[i]);
        }
	return 0;
}
