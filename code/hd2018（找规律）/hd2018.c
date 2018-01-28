#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int i,n,cow[1000]={0};
    while(scanf("%d",&n)!=EOF&&n)
    {
        for(i=0;i<4;i++)
        {
            cow[i]=i+1;
        }
        for(i=4;i<55;i++)
        {
            cow[i]=cow[i-3]+cow[i-1];
        }
        printf("%d\n",cow[n-1]);
    }
    return 0;
} 