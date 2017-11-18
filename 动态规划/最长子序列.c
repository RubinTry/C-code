#include <stdio.h>
#include <string.h>
#define MAXN 200
int main()
{
	int n, a[MAXN], b[MAXN],pre[MAXN], i, lab, j, max , num;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		scanf("%d", &a[i]);
	memset(b, 0, sizeof(a));
	//求最长上升子序列
	b[1] = 1;
	pre[1]=0;
	for (i = 2; i <= n; i++)
	{
		max = 0;
		for (j = i - 1; j >= 1; j--)
		{
			if (a[j] < a[i] && b[j] > max)
			{
				max = b[j];
				pre[i]=j;  //保存上一个最大子序列的最大下标
			}
		}
		b[i] = max + 1; //状态转移
	}
	
	for(i=1;i<=n;i++)
	    printf("%3d", b[i]);
    printf("\n");
	//lab:max所对应a数组元素下标
	max = b[1];
	for (i = 2; i <= n; i++)
	{	
		if (b[i] > max)
		{
			max = b[i];
			lab=i;
		}
	}
	printf("%d\n",  max );

	//逆序输出数列
	i = lab;
	num=max;
	while( num>0 )
	{
		printf("%d ",  a[i]);
		i=pre[i];
		num--;
	}
	return 0;
}

