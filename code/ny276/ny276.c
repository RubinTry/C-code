#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int t;
	char a,b;
	scanf("%d",&t);
		
		while(t--)
		{
			getchar();
			scanf("%c %c",&a,&b);
			if(a>b)
			printf("%c<%c",a,b);
			if(a<b)
			printf("%c>%c",a,b);
			if(a==b)
			printf("%c=%c",a,b);
			printf("\n");
		}
		
	return 0;
} 