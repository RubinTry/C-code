//人民币一共有100元、50元、10元、5元、2元和1元六种。
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int i,n,a[1000],s[1000],t1,t2,t3,t4,t5,t6,sum;
	while(scanf("%d",&n)!=EOF&&n)
	{
		sum=0;
		memset(a,0,1000*sizeof(int));
		memset(s,0,1000*sizeof(int));
		for(i=0;i<n;i++)
		{
			t1=0,t2=0,t3=0,t4=0,t5=0,t6=0;
			scanf("%d",&a[i]);
			t1=a[i]/100;
			t2=a[i]%100/50;
			t3=a[i]%50/10;
			t4=a[i]%10/5;
			t5=a[i]%5/2;
			t6=a[i]%5%2;
			s[i]=t1+t2+t3+t4+t5+t6;
			sum+=s[i];
		}
		printf("%d\n",sum);
	}
}