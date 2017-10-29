#include<stdio.h>
int main()
{
	long int num,sum;
	scanf("%ld",&num);
	//零 
	if(num==0)
	{
		printf("1");
		return 0;
	}
	//正整数 
	if(num>=1)
	{
		sum=num*(num+1)/2;
	}
	//负整数 
	else{
		num=-num;
		sum=num*(num+1)/2;
		sum--;
		sum=(-sum);
	}
	printf("%ld",sum);
	return 0;
}