#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int a[1000][1000],b[1000];
int main()
{
	int n,max,i,j,k,sum;
	while(scanf("%d",&n)!=EOF)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		
        max=-99999;
		for(i=0;i<n;i++)
		{
			//����b��ʾi~j�У���Ӧ��Ԫ�صĺ�
			//����ά��̬�滮ת��Ϊ��Ϊ��̬�滮���� 
			memset(b,0,sizeof(b));
			for(j=i;j<n;j++)
			{
				//�������������b������Ӵ��Ķ�̬�滮�㷨 
				sum=0;
				for(k=0;k<n;k++)
				{
					b[k]+=a[j][k];
					sum+=b[k];
					if(sum<b[k])sum=b[k];
					if(sum>max)max=sum;
				}
			}
		}
		printf("%d\n",max);
	}
	return 0;
}