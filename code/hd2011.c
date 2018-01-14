#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int i,n,m;
	float sum1,sum2,k;
	scanf("%d",&n);
	while(n--){
		
		scanf("%f",&k);
		m=(int)k;
		//·ÖÄ¸ÎªÆæ£¬kÎªÆæ 
		if(m%2!=0){
			sum1=0;
			sum2=0;
			for(i=1;i<=k;i+=2)
			{
				sum1+=1/(float)i;
				//printf("%f\n",sum);
			}
			for(i=2;i<k;i+=2)
			{
				sum2+=1/(float)i;
			}
			printf("%.2f\n",sum1-sum2);
		}
		else{
			sum1=0;
			sum2=0;
			for(i=1;i<=k-1;i+=2)
			{
				sum1+=1/(float)i;
			}
			for(i=2;i<=k;i+=2)
			{
				sum2+=1/(float)i;
			}
			printf("%.2f\n",sum1-sum2);
		}	
		
	}
	return 0;
} 