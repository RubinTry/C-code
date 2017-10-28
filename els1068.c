#include<stdio.h>
#include<math.h>
int  main()
{
		long int num,sum=0;
		scanf("%d",&num);
    	if(num==0)
    	{
	    	printf("%ld",1);
	    	return 0;
	    }
	    if(num>=1)
        {
        	sum=num*(num+1)/2;
        }
		else{
			num=(-num);
			sum=num*(num+1)/2;
			sum--;
			sum=(-sum);
		}
		printf("%ld\n",sum);
	return 0;
} 