#include<stdio.h>
int main()
{
    int n,i,j;
    int a[7],b[7];//���߶�Ϊÿ���Ͽε�ʱ�� 
    int max,k=0;//max==ÿ���Ͽε�ʱ��   k==����˵�һ�� 
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