#include <stdio.h>
#define SIZE 10

int binarysearch (int *arr,int first,int last,int search)
{
  int middle = (first+last)/2;
  while (first<=last)
  {
    if (arr[middle] == search)
        return arr[middle];
    else if (arr[middle] <= search)
          first = middle+1;
   else
        last = middle-1;
  middle = (first+last)/2;
  }
  return 0;
}

int main(void)
{
   int arr[SIZE] = {10,20,30,40,50,60,70,80,90,100},n=7,ret;
   ret = binarysearch (arr,0,SIZE-1,n);
   if(ret==0)
     printf ("%d element is not found \n",n);
   else
     printf ("%d element is found\n",ret);
   return 0;
}
