#include<stdio.h>
int main()
{
	int k,a;
	while(scanf("%d",&k)!=EOF)
	{
		if(k%5==0||k%13==0)
		printf("no\n");
		else{
			a=1;
			while((k*a+18)%65!=0)
            {
                a++;
            }
            printf("%d\n",a);		
		}
	}
	return 0;
} 