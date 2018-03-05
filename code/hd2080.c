#include<stdio.h>
#include<math.h>
#define pi 3.1415926
int main()
{
	int n;
	double x1,y1,x2,y2,a,b,c,cos1;
	while(scanf("%d",&n)!=EOF)
	{
		while(n--)
		{
			scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);
		a=sqrt(x2*x2+y2*y2);
		b=sqrt(x1*x1+y1*y1);
		c=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
		cos1=(a*a+b*b-c*c)/(2*a*b);
		printf("%.2lf\n",acos(cos1)/pi*180);
		}
	}
	return 0;
}