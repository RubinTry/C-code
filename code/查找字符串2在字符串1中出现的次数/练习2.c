#include <stdio.h>
#include <string.h>

int find(char str[],char word[])
{
    int i=0,j,n=0,len;
    len=strlen(word);
    while (str[i]!='\0')
	{
	   for(j=0;j<len;j++)
	   {
	      if (str[i+j]!=word[j])
             break;
       }
	   if (j==len)
	   {
          n++;
          i=i+len;
       }
       else
       {
   	       i++;
   	   }
	}
    return n;
}

int main()
{
    char a[100];
    char b[50];

    while(gets(a)&&gets(b))
       printf("%d\n",find(a,b));
    return 0;
 }

