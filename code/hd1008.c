#include<stdio.h>
//向上：每层耗时6秒    向楼：每层耗时4秒   每层停留：5秒 
int main()
{
	int i,n,time;
	int a[20];
	a[0]=0;
	while(~scanf("%d",&n)&&n){
		
		time=0;
    	for(i=1;i<=n;i++){
	    	scanf("%d",&a[i]);
	    	//上楼 
	    	if(a[i]>a[i-1])
	    	    time+=(a[i]-a[i-1])*6;
 	        //下楼 
            if(a[i]<a[i-1])
                time+=(a[i-1]-a[i])*4; 
            time+=5;
	    }
        printf("%d\n",time);
	}
	
	return 0;
} 