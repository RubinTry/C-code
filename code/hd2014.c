#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int cmp(const void *a,const void *b)
{
	return *(double *)a>*(double *)b?1:-1;
}
 int main()
 {
 	int i,n;
    double a[1000],sum;
	while(scanf("%d",&n)!=EOF)
	{
		sum=0;
	//	memset(a,0,1000*sizeof(double));
		for(i=0;i<n;i++)
		{
			scanf("%lf",&a[i]);
		}
		qsort(a,n,sizeof(a[0]),cmp);
		for(i=1;i<n-1;i++)
		{
			sum+=a[i];
		}
		printf("%.2f\n",sum/(n-2));
	}
 	return 0;
 }