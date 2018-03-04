#include<stdio.h>
int main()
{
	int a[1000]={0},i,t,n;
	a[0]=0;
	a[1]=1;
	a[2]=2;
	for(i=3;i<=120;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	while(scanf("%d",&t)!=EOF)
	{
		while(t--)
		{
			scanf("%d",&n);
			printf("%d\n",a[n-1]);
		}
	}
	return 0;
} 