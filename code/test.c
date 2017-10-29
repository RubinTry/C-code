#include<stdio.h> 
int gcd(int a,int b){
	if (b==0)
	 return a;
    else
	 return gcd(b,a % b);
}
int main()
{
	int a,b;
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&a,&b);
	    printf("%d %d\n",gcd(a,b),a*b/gcd(a,b));
	}
	return 0;
}