#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int i;
	char a[1000];
	memset(a,0,sizeof(char)*1000);
	while(gets(a)!=NULL)
	{
		for(i=0;a[i]!=0;i++)
		{
			if(a[i]=='y'&&a[i+1]=='o'&&a[i+2]=='u')
			{
				printf("we");
				i+=2;
			}
			else
			printf("%c",a[i]);
		}
		putchar('\n');
	}
	return 0;
} 