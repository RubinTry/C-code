#include<stdio.h>
int main()
{
	int i,j,m,n;
	while(scanf("%d",&n)!=EOF)
	{
		if(n<0)
			continue;
		int Factorial[10000]={0};
		m=0;
		Factorial[0]=1;
		for(i=1;i<=n;i++)
			for(j=0;j<=m;j++)
			{
				Factorial[j]=Factorial[j]*i;
				if(j>0&&Factorial[j-1]>=10000)
				{
					Factorial[j]=Factorial[j]+Factorial[j-1]/10000;//a[j-1]/10000>1
					Factorial[j-1]=Factorial[j-1]%10000;
				}
				if(Factorial[m]>=10000)
					m++;
			}
		printf("%d",Factorial[m]);
		for(i=m-1;i>=0;i--)
			printf("%04d",Factorial[i]);
		printf("\n");
	}	
	return 0;		
}