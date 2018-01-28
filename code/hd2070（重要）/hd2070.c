#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    __int64 i,n;
    __int64 a[100]={0};
    a[0]=1;
    a[1]=1;
    for(i=2;i<=100;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    while(scanf("%I64d",&n)!=EOF&&n!=-1)
    {
        printf("%I64d\n",a[n-1]);
    }
    
    return 0;
} 