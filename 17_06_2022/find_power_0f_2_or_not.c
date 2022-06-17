#include <stdio.h>

int main()
{
    int i=0,a,count=0;
    printf("Enter number\n");
    scanf("%d",&a);
    while(i<=31)
    {
        if(a & 0x01<<31)
        count++;
        a=a<<1;
        i++;
    }
    if(count==1)
        printf("Given number is power of 2");
        else
        printf("Given number is not power of 2");
    return 0;
}