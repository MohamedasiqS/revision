#include<stdio.h>
enum data
{
	size=6
};
void search(const int *arr,int key)
{
	int i=0;
	while(i<size)
	{
		if(arr[i]==key)
		{
			printf("Search element found :%d\n",arr[i]);
			break;
		}
		i++;
	}
	return ;
}
int main(void)
{
	int arr[size]={10,20,30,40,50,60};
	int key;
	printf("Enter the element to search in array\n");
	scanf("%d",&key);
	void (*fptr)(int*,int);
	fptr=search;
	fptr(arr,key);
	return 0;
}
