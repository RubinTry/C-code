#include<stdio.h>
int main()
{
    int num,x,y,z,t;
    while(scanf("%d",&num)!=EOF)
    {
        t=0;
        for(x=1;x<=100;x++)
        {
            for(y=x;y<=100;y++)
            {
                for(z=y;z<=100;z++)
                {
                    if(num==x*x+y*y+z*z)
                    {
                        printf("%d %d %d\n",x,y,z);
                        t=1;
                        break;
                    }
                    
                }
                if(t==1) break;
            }
            if(t==1) break;
        }
    }
    return 0;
}