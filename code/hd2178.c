#include<stdio.h>
int pow(int a,int b)
{
	int x,i;
	x=a;
	for(i=1;i<b;i++)
	{
		x*=a;
	}
	return x;
}
int main()
{
	int n,t;
	while(scanf("%d",&n)!=EOF)
	{
		while(n--)
		{
			scanf("%d",&t);
			if(t>=1&&t<=30)
			{
				printf("%d\n",pow(2,t)-1);
			}
		}
	}
	return 0;
}