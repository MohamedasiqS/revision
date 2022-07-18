#include <stdio.h>

int *descend (int *arr,int size) /** Insertion sort**/
{
    int i,j,sort;
    for(i=1;i<size;i++)
    {
       sort = arr[i];
       for ( j=i-1 ; (j>=0 && sort > arr[j]) ; j--)
       {
           arr[j+1] = arr[j];
       }
       arr[j+1] = sort;
    }
    return arr;      
}

int *ascend (int *arr,int size) /**Bubble sort **/
{
   int i,j,flag = 0;
   for (i=0;i<size-1;i++)
   {
     flag = 0;
     for (j=0;j<size-i-1;j++) 
       {
         if (arr[j] > arr[j+1])
         {
	     arr[j] = arr[j] ^ arr[j+1];
	     arr[j+1] = arr[j] ^ arr[j+1];
	     arr[j] = arr[j] ^ arr[j+1];
             flag = 1;
         }
       }
     if (flag == 0)
        break;
   }
   return arr;  
}

int main(void)
{
 int arr[]={56,75,23,2,10,90,81,7,79};
 int i,size,*ret=NULL;
 size = sizeof(arr)/sizeof(arr[0]);
 ret = ascend (arr,size);

 printf("Ascending\n");
 for (i=0;i<size;i++)
    printf("%d\t",*(ret+i));

 ret = descend (arr,size);
 printf("\n Descending\n");
 for (i=0;i<size;i++)
    printf("%d\t",*(ret+i));

 return 0;
}
