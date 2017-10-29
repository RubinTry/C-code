#include<stdio.h>
int main()
{
	int num,a,b,c;
	while(scanf("%d",&num)!=EOF)
	{
		//scanf("%d",&num);
		a=num/100%10;
		b=num/10%10;
		c=num%10;
		//printf("%d %d %d",a,b,c);
		if(num==0)
		break;
		if((a*a*a+b*b*b+c*c*c)==num)
			printf("Yes\n");
		else
		    printf("No\n");
	}
	return 0;
}