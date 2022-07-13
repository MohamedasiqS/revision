#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	char ch;
	FILE *fp = NULL;
	fp = fopen ("Name.txt","r+");
	if (fp == NULL)
	{
		perror ("File not opening");
		exit (1);
	}
	while ((ch = getchar()) != EOF)
	{
		putc (ch,fp);
	}
	fclose(fp);
	return 0;
}
