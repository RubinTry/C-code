#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int kase,n;
    double height,max_h;
    scanf("%d",&kase);
    while(kase--)
    {
        scanf("%d",&n);
        max_h=0;
        while(n--)
        {
            scanf("%lf",&height);
            if(height>max_h)
            max_h=height;
        }
        printf("%.2f\n",max_h);
    }
    return 0;
} 