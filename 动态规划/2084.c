#include <stdio.h>
#define N 101
int max(int a,int b)
{
	return a>b?a:b;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        printf("%d\n",shuta());
    }
	
    return 0;
}

int shuta()
{
    int data[N][N],d[N][N];
	int n,i,j,r,c;
    scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			scanf("%d",&data[i][j]);
		}
	}

	for(i=1;i<=n;i++)
	{
		d[n][i]=data[n][i]; //数塔最下面一层的数据处理
	}

	for(i=n-1;i>=1;i--)
	{
		for(j=0;j<=i;j++)
		{
			d[i][j]=max(d[i+1][j],d[i+1][j+1])+data[i][j];//状态转移方程
		}
	}

    return d[1][1];
	
}
