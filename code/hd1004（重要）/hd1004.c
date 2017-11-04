#include<stdio.h>
#include<string.h>
struct balloon{
    char color[100];
    int kase;
};
int main()
{
    int i,j,n,max,t;
    struct balloon  b[1000];
    while(scanf("%d",&n)!=EOF&&n)
    {
        getchar();
        t=0;
        //初始化
        for(i=0;i<n;i++)
        {
            scanf("%s",&b[i].color);
            b[i].kase=1;
        }
        //对kase值进行排序
        for(i=0;i<n-1;i++)
        {
             for(j=i+1;j<n;j++)
                  if(strcmp(b[i].color,b[j].color)==0&&b[i].kase!=0)
                  {
                      b[i].kase++;
                      b[j].kase=0;
                      
                  }
        }
        for(i=0;i<n;i++)
        {
            for(j=n+1;j<n;j++)
                if(b[i].kase<b[j].kase)
                {
                    b[i].kase=b[j].kase;
                    b[j].kase=b[i].kase-b[j].kase;
                    b[i].kase-=b[j].kase;
                }
        }
        max=b[0].kase;
        for(i=0;i<n;i++)
           if(max<b[i].kase)
              {
                  t=i;
                  max=b[i].kase;
              }
        printf("%s\n",b[t].color);
    }
    return 0;
}