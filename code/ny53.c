#include<stdio.h>
int main()
{
	int j,n;
	int a[7],b[7];
	scanf("%d",&n);
	while(n--)
	{
		int k=0;
		for(j=0;j<=6;j++)
		{
			scanf("%d %d",&a[j],&b[j]);
		}
		for(j=0;j<=6;j++)
        {
        	if((a[j]+b[j])>8)
		    {
    			printf("%d\n",j+1);
    			k=1;
    			break;
    		}
    		if((a[j]+b[j])<8)
    		k=-1;
		} 
        
		if(k==-1)
		printf("0\n");
	}
	return 0;
}