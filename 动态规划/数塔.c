#include <stdio.h>
#define N 20
int max(int a,int b)
{
	return a>b?a:b;
}
int main()
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

	/*输出d矩阵的下三角*/
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%-5d",d[i][j]);
		}
		printf("\n");
	}

	r=1; //行
	c=1; //列

	printf("值最大的路径是:\n");
    printf("%d->",data[1][1]);
	for(i=2;i<=n;i++)
	{
		if(d[r][c]-data[r][c]==d[r+1][c])
		{
			r++;
		}
		else
		{
			r++;
			c++;
		}
		if(i!=n)
		    printf("%d->",data[r][c]);
		else
			printf("%d\n",data[r][c]);
	}
    return 0;
}
