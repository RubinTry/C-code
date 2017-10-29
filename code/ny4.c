#include<stdio.h>
int main()
{
	int i,n;
	char a[3];
	scanf("%d",&n);
	while(n--)
	{
		for(i=0;i<3;i++)
		{
			scanf(" %c",&a[i]);//前面加空格以消除字符 
		}
	    for(i=0;i<3;i++)
	    {
    		if(a[0]>a[1])
	        {
    	    	a[0]+=a[1];
    	    	a[1]=a[0]-a[1];
    		    a[0]-=a[1];
    	    }
        	if(a[0]>a[2])
        	{
	        	a[0]+=a[2];
	        	a[2]=a[0]-a[2];
	        	a[0]-=a[2];
	        }
	        if(a[1]>a[2])
	        {
        		a[1]+=a[2];
	        	a[2]=a[1]-a[2];
	        	a[1]-=a[2];
        	}
     	}
       	for(i=0;i<3;i++)
		{
			
			printf("%c ",a[i]);
		}
		printf("\n");		
	}
} 