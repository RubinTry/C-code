#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int cmp(const void *a,const void *b)
{
	return *(int *)a-*(int *)b;
}
int main()
{
	int n,w,i,j,k,num,a[1000]={0};
	while(scanf("%d",&n)!=EOF)
	{
		
		while(n--)
		{
			k=0;
			j=0;
			scanf("%d%d",&w,&num);
			
			for(i=0;i<num;i++)
			{
				scanf("%d",&a[i]);
			}
			qsort(a,num,sizeof(int),cmp);
			
			for(i=0,j=num-1;i<=j;)
			{
				if(a[i]+a[j]<=w)
				{
					i++;
					k++;
					j--;
				}
				else if(i==j)
				k++;
				else{
					k++;
					j--;
				}
			}
			printf("%d\n",k);
		}
	}
	return 0;
}