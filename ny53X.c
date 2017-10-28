#include<stdio.h>
int main()
{
    int n,i,j;
    int a[7],b[7];//两者都为每天上课的时间 
    int max,k=0;//max==每天上课的时间   k==最不高兴的一天 
    scanf("%d",&n);
    while(n--)
    {
        for(i=0;i<7;i++)
        {
            scanf("%d %d",&a[i],&b[i]);
        }
        max=0;
        for(i=0;i<7;i++)
        {
            if((a[i]+b[i])>max)
            {
                max=a[i]+b[i];
                k=i;
            }
        }
        //printf("max %d",max);
        if(max>8)
        printf("%d\n",k+1);
        else
        printf("0\n");
    }
    return 0;
}         