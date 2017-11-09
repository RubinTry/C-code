#include<stdio.h>
#include <iostream>
using namespace std;
long int pow_mod(int a,int i,int n)
{
    int ret=1;       
    int tmp=a;       
    while(i)       
    {       
       //»ùÊý´æÔÚ       
       if(i&0x1) ret=ret*tmp%n;       
       tmp=tmp*tmp%n;       
       i>>=1;       
    }       
    return ret;   
}
int main()
{
	long int n,m,y,x;
	int k=0;
	scanf("%d %d %d",&n,&m,&y);
	for(x=0;x<m;x++)
	{
		if(pow_mod(x,n,m)==y)
		{
			printf("%d ",x);
			k=1;
		}
	}
	if(k==0){
		printf("-1");
	}
	return 0;
}