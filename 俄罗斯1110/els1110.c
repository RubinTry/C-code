#include<stdio.h>
#include<math.h>
//题号：1110，俄罗斯acm 
int main()
{
	long int n,m,y,i,x,j;//对应题目中的n,m,y;
	int k=0;
	scanf("%d %d %d",&n,&m,&y);
	for (x=0; x<m; x++){
		i=x;
		for (j=2; j<=n; j++){
			i*=x;//计算i的j次方 
			i=i%m;//取余 
		}
		if (i==y){
		    k=1;
	        printf("%d ",x);
		}
	}
	if(k==0)
	printf("-1");
	return 0;
} 