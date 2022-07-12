#include<stdio.h>
#define D_TYPE char
unsigned int pos;
void* mymemcpy(void* des,const void* src,unsigned int size)
{
	int i,j;
	char temp[20];
	for(i=pos,j=0;i<(pos+size);i++,j++)
        {
                *(temp+j) = *(D_TYPE*)(src+i);
        }
	for(i=0;*(temp+i)!='\0';i++)
	{
		*(D_TYPE*)(des + i) = *(temp+i);
	}
	*(D_TYPE*)(des+i) = '\0';
	return (D_TYPE*)des;
}
int main(void)
{
	D_TYPE src[20] = "Good Morning",des[20] = {0},*ret;
	unsigned int size;
	printf("Enter number of bytes to copy\n");
	scanf("%d",&size);
	printf("Enter starting position in string\n");
	scanf("%d",&pos);
	ret = mymemcpy(des,src,size);
	printf("DES :%s\n",ret);
	return 0;
}
