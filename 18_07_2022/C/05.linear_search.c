#include <stdio.h>
#define SIZE 7

int linearsearch (int *arr,int n)
{
  int i;
  for (i=0;i<SIZE;i++)
  {
    if (!(n^arr[i]))
           return 1;
  }
  return 0;
}

int main (void)
{
  int arr[SIZE] = {12,34,86,10,7,30,95},n=7;
  if (linearsearch (arr,n) )
      printf ("%d element is found\n",n);
  else
      printf ("%d element is not found\n",n);
  return 0;
}
