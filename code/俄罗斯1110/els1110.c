#include<stdio.h>
#include<math.h>
//��ţ�1110������˹acm 
int main()
{
	long int n,m,y,i,x,j;//��Ӧ��Ŀ�е�n,m,y;
	int k=0;
	scanf("%d %d %d",&n,&m,&y);
	for (x=0; x<m; x++){
		i=x;
		for (j=2; j<=n; j++){
			i*=x;//����i��j�η� 
			i=i%m;//ȡ�� 
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