#include <stdio.h>

int main(void)
{
  int arr[] = {20,40,60,80,100,120};
  int size,i,value;
  size = sizeof(arr)/sizeof(arr[0]);
  printf("Before Exchange\n");
  for (i=0;i<size;i++)
  {
     printf("%d\t",arr[i]);
  }

  (size%2 != 0) ? value = size -1 : (value = size);

  for(i=0;i<value;i++)
  {
	  if (i%2 == 0)
	  {
		  arr[i]   = arr[i] ^ arr[i+1];
		  arr[i+1] = arr[i] ^ arr[i+1];
		  arr[i]   = arr[i] ^ arr[i+1];
	  }
  }
  printf("\nAfter Exchange\n");
  for (i=0;i<size;i++)
  {
	  printf("%d\t",arr[i]);
  }
  return 0;
}

