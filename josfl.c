#include<stdio.h>
int main()
{
	int num,i,n;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&num);
		//���� 
		for(i=1;i<=num;i++)
		{
			if(i%2!=0)
			printf("%d ",i);
		}
		printf("\n");
		//ż��
		for(i=1;i<=num;i++)
		{
			if(i%2==0)
			printf("%d ",i);
		}
		printf("\n"); 
	}
	return 0;
} 