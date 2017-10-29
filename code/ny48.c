#include<stdio.h>
int main()
{
	int i,j,n,num,temp;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&num);
		a[i]=num;
	}
	//≈≈–Ú
	for(i=0;i<n;i++)
	{
		for(j=0;j<9-i;j++)
		if(a[i]>a[i+1])
		{
			temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
		}
		//printf("%d ",a[i]);
	} 
	//printf("\n");
	//»•÷ÿ 
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		if(a[i]==a[j])
		  j=++i;
		  
	}
	for(i=0;i<n;i++)
	{
		//if(a[i]!=0)
		printf("%d ",a[i]);
	}
	return 0;
}