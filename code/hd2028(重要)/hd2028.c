#include<stdio.h>
int gcd(int a,int b)
{
	if (b==0) 
        return a;
	    return gcd(b, a%b);
}
int main()
{
    int t,i,n,m,flag=0,ans=1;
    while(scanf("%d",&n)!=EOF)
    {
    	flag=0;
		ans=1;
        for (i=0; i<n; i++)
	    {
			scanf("%d",&m);
			flag=gcd(ans,m);
            ans=ans/flag*m;
        }
        printf("%d\n",ans);
    }       
       return 0;
}
//本题核心知识点：将前一次求出来的最小公倍数存下来，后一次可直接使用   2018/1/14