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
	//�������������
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
				pre[i]=j;  //������һ����������е�����±�
			}
		}
		b[i] = max + 1; //״̬ת��
	}
	
	for(i=1;i<=n;i++)
	    printf("%3d", b[i]);
    printf("\n");
	//lab:max����Ӧa����Ԫ���±�
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

	//�����������
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

