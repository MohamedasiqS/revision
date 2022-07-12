#include<stdio.h>
#include<string.h>
unsigned int pos;
void *mymemset (void *,int ,unsigned int );
void *mymemset (void *s,int c,unsigned int n)
{
	int i;

	for(i=pos;i<(pos+n);i++)
	{
		*(char *)(s+i) = (unsigned char)c;
	}
	return (char*)s;
}
int main()
{
	char s[16],*ret=0,c;
	int n;
	printf("Enter string\n");
	scanf("%[^\n]s",s);
	printf("Enter chracter\n");
	scanf(" %c",&c);
	printf("Enter Size\n");
        scanf("%d",&n);
	printf("Enter position for starting place\n");
	scanf("%d",&pos);
	ret = mymemset(s,c,n);
	printf("%s",ret);
	return 0;
}
