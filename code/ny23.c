#include<stdio.h>
#include<stdlib.h>
#include<string.h> 
int main()
{
	int t,n,m;
	while(scanf("%d",&t)!=EOF)
	{
		while(t--)
		{
			scanf("%d%d",&n,&m);
			if(n%(m+1))
			printf("Win\n");
			else
			printf("Lose\n");
		}
	}
	return 0;
} 