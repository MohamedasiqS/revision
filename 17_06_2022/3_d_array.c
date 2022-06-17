#include<stdio.h>
int main(void)
{
	int row=3,col=3,i,j,arr[row][col];	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<row;i++)
        {
                for(j=0;j<col;j++)
                {
                        printf("%-3d",*(*(arr+i)+j));
                }
		putchar('\n');
        }
	return 0;
}
