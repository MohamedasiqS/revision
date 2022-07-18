#include <stdio.h>

int main(void)
{
  int arr[] = {34,87,504,9,22,6,2,92};
  int size, max = arr[0], min = arr[0], i;
  size = sizeof(arr)/sizeof(arr[0]);
  for(i=0;i<size-1;i++)
  {
    if (max < arr[i+1])
    {
 	max = arr[i+1];
    }
    else if (min > arr[i+1])
    {
 	min = arr[i+1];
    }
  }
  printf("Maximum value : %d , Minimum value : %d\n",max,min);
  printf("Diff b/w max and min is %d\n",max - min);
  return 0;
}
