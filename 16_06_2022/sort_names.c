#include <stdio.h>
#include <string.h>

void sort_names (char *names[30])
{
  unsigned int i,j;
  char *temp;
  for(i=0;i<5;i++)
  {
    for(j=i+1;j<5;j++)
    {
      if(strcmp(names[i],names[j])>0)
      {
         temp=names[i];
         names[i]=names[j];
         names[j]=temp;
      }
    }
  }
}
int main(void)
{
    char *names[30] = {"Sandeep Kishan","Umash Yadav","Sanjeev Diwari","Kishore Kumar","Dinesh Kumar"};
    unsigned int i;
    printf ("Before Sorting\n");
    for(i=0;i<5;i++)
      printf ("%s\n",*(names+i));
    printf ("\n\n");
    sort_names (names);
    printf ("After Sorting\n");
    for(i=0;i<5;i++)
      printf ("%s\n",*(names+i));  
    return 0;
}
