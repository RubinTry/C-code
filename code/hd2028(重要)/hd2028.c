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
//�������֪ʶ�㣺��ǰһ�����������С����������������һ�ο�ֱ��ʹ��   2018/1/14