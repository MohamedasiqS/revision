#include <stdio.h>

int main(void)
{
  int arr [] = { 34,65,22,11,97,53};
  int size,i,n;
  printf("Enter n value to reverse \n");
  scanf("%d",&n);
  size = sizeof(arr)/sizeof(arr[0]);
  if (n <= size)
  {
    for (i=n-1;i>=0;i--)
    {
      printf("%d\t",arr[i]);
    }
  }
  else
   printf("enter value is larger than array elements\n");
  return 0;
}
