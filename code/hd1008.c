#include<stdio.h>
//���ϣ�ÿ���ʱ6��    ��¥��ÿ���ʱ4��   ÿ��ͣ����5�� 
int main()
{
	int i,n,time;
	int a[20];
	a[0]=0;
	while(~scanf("%d",&n)&&n){
		
		time=0;
    	for(i=1;i<=n;i++){
	    	scanf("%d",&a[i]);
	    	//��¥ 
	    	if(a[i]>a[i-1])
	    	    time+=(a[i]-a[i-1])*6;
 	        //��¥ 
            if(a[i]<a[i-1])
                time+=(a[i-1]-a[i])*4; 
            time+=5;
	    }
        printf("%d\n",time);
	}
	
	return 0;
} 