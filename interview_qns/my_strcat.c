#include <stdio.h>

char *mystrcat (char *str1,char *str2)
{
	int i,j;
	for(i=0;str1[i]!='\0';i++);
	for (j=0;str2[j] != '\0';j++,i++)
	{
		str1[i] = str2[j];
	}
	return str1;
}
int main (void)
{
	char str1 [20] ,str2 [20] ,*str3 = NULL;
	printf ("Enter String 1\n");
	scanf  ("%s",str1);
	printf ("\nEnter string 2\n");
	scanf  ("%s",str2);
	mystrcat (str1,str2);
	printf ("%s",str1);
}
