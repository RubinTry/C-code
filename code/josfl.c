#include<stdio.h>
int main()
{
	int num,i,n;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&num);
		//ÆæÊý 
		for(i=1;i<=num;i++)
		{
			if(i%2!=0)
			printf("%d ",i);
		}
		printf("\n");
		//Å¼Êý
		for(i=1;i<=num;i++)
		{
			if(i%2==0)
			printf("%d ",i);
		}
		printf("\n"); 
	}
	return 0;
} 