#include<stdio.h>
int main()
{
	double sum,k;
	int n,i;
	while(scanf("%d",&n)!=EOF&&n)
	{
		k=1;
		sum=0;
		for(i=n;i>1;i--)
		{
			sum+=1.0/i*k;
			k++;
		}
		printf("%.2lf\n",sum*2+n);
	}
	return 0;
}