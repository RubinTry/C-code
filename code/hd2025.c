#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char a[1000],b;
	int i,k;
	while(scanf("%s",a)!=EOF)
	{
		k=0;
		b=a[0];
		for(i=1;i<strlen(a);i++)
		{
			if(a[i]!=b)
			k++;
		}
		if(k==0)
		{
			for(i=0;i<strlen(a);i++)
			{
				printf("%c(max)",a[i]);
			}
			printf("\n");
		}
		else{
			for(i=1;i<strlen(a);i++)
			{
				if(a[i]>b)
				{
					b=a[i];
				}
			}
			for(i=0;i<strlen(a);i++)
			{
				if(a[i]!=b)
				{
					printf("%c",a[i]);
				}
				else{
					printf("%c(max)",a[i]);
				}
			}
			printf("\n");
		}
	}
	return 0;
} 