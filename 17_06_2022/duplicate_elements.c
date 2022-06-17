#include<stdio.h>
void delete(int *arr,int j,int *size)
{
	while(j<(*size))
	{
	   arr[j] = arr[j+1];
	   j++;
	}
	(*size)--;
	return ;
}
int main(void)
{
	int arr[]={10,20,10,40,30,20,60,20,50,34,39,11,30},temp[10];
	int i,j,size,flag,count;
	size = sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<size;i++)
	{
		count = 1;
		flag = 0;
		if(temp[i]!=1)
		for(j=i+1;j<size;j++)
		{
			if(arr[i] == *(arr+j))
			{
				temp[j] = 1;
				count++;
				delete(arr,j,&size);
				flag=1;
			}
		}
		if(flag==1)
			printf("%d is %d times occured\n",arr[i],count);
	}
	for(i=0;i<size;i++)
		printf("%3d",arr[i]);
	return 0;
}
