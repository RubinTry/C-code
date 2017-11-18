#include<stdio.h>

int arr[100001][11];
int max(int a,int b)
{
	return a>b?a:b;
}
/*求三个数的最大值*/
int maxi(int a,int b,int c)
{
    return max(a,b)>c?max(a,b):c;
}
int main()
{
    int i,j,m,n,x,t;
    while(scanf("%d",&n)&&n)
    {
        m=0;
        memset(arr,0,sizeof(arr));
        for(i=0;i<n;i++)
        {
			 scanf("%d%d",&x,&t);
             arr[t][x]++;
             if(m<t)
                 m=t;//m记录最大的时间值
        }
        for(i=m-1;i>=0;i--)
        {
            for(j=1;j<=9;j++)
                arr[i][j]+=maxi(arr[i+1][j-1],arr[i+1][j],arr[i+1][j+1]);
            arr[i][0]+=max(arr[i+1][0],arr[i+1][1]);  //边界处理
            arr[i][10]+=max(arr[i+1][10],arr[i+1][9]);//边界处理
        }
		printf("%d\n",arr[0][5]);
    }
	return 0;
}
