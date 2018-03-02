#include<stdio.h>
int main()
{
	int i,n,a[1000]={0};
	a[0]=0;
	a[1]=2;
	a[2]=2;
	a[3]=6;
	for(i=4;i<1000;i++)
	{
		a[i]=(a[i-1]+2*a[i-2])%10000;
	}
	
	while(scanf("%d",&n)!=EOF&&n)
	{
		
		printf("%d\n",a[n-1]);
	}
	return 0;
}