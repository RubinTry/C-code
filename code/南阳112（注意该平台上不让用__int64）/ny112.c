#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	long long a,b,t;
	int i,k=1;
	while(scanf("%lld%lld",&a,&b)!=EOF)
	{
		t=a;
		for(i=1;i<b;i++)
		{
			t*=a;
		}
		printf("%lld\n",t);
	}
	
	return 0;
} 