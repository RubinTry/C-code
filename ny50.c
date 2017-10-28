#include<stdio.h>
#define bandeng 30
int main()
{
	int n,i,height;//kÎª¼ÆÊıÆ÷ 
	int apple[10];
	scanf("%d",&n);
	while(n--)
	{
		int k=0;
		for(i=0;i<10;i++)
		{
			scanf("%d",&apple[i]);
		}
		scanf("%d",&height);
		for(i=0;i<10;i++)
		{
			if((height+bandeng)>=apple[i])
			k++;
		} 
		printf("%d\n",k);
	} 
	return 0;
}