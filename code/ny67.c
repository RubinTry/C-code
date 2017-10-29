#include<stdio.h>
#include<math.h>
//a[0]a[1]a[2]a[3]a[4]a[5]
// x1,y1,x2,y2,x3,y3
//&x1,&y1,&x2,&y2,&x3,&y3
int main()
{
    int a[6];
    int i;
    double j,k,l,m;
    while(1)
    {
    	for(i=0;i<6;i++)
    {
    	scanf("%d",&a[i]);
    }
    if(a[0]==0&&a[1]==0&&a[2]==0&&a[3]==0&&a[4]==0&&a[5]==0)
    break;
    else
   	{
	   	j=sqrt((a[2]-a[0])*(a[2]-a[0])+(a[3]-a[1])*(a[3]-a[1]));
        //printf("%.1f",j);
        k=sqrt((a[4]-a[2])*(a[4]-a[2])+(a[5]-a[3])*(a[5]-a[3]));
        l=sqrt((a[4]-a[0])*(a[4]-a[0])+(a[5]-a[1])*(a[5]-a[1]));
        m=(j+k+l)/2;
        printf("%.1f\n",sqrt(m*(m-j)*(m-k)*(m-l)));
	   }
    }
} 