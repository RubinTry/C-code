#include<stdio.h>
int main()
{
	int num,i,n;
	int a[30],b[30];
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&num);
		//ÆæÊý 
		for(i=1;i<=num;i++)
		{
			if(i%2!=0)
			a[-1i]=i;
			if(i%2==0)
			b[i-1]=i;
		}
		for(i=1;i<=num;i++)
		{
			printf("%d ",a[i-1]);
		}		
	}
	return 0;
} 