#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 50
//~,!,@,#,$,%,^;
int main()
{
    char pas[max];
    int n,daxiezm,xiaoxiezm,num,fuhao,i,anw;
    scanf("%d",&n);
    while(n--)
    {
        anw=0;
        daxiezm=0;
        xiaoxiezm=0;
        num=0;
        fuhao=0;
        memset(pas,0,sizeof(char)*max);
        scanf("%s",pas);
        
        if(strlen(pas)>=8&&strlen(pas)<=20)
        {
            for(i=0;i<strlen(pas);i++)
        {
            if(pas[i]>=65&&pas[i]<=90)
            daxiezm=1;
            else
            if(pas[i]>=97&&pas[i]<=122)
            xiaoxiezm=1;
            else
            if(pas[i]>='0'&&pas[i]<='9')
            num=1;
            else
            if(pas[i]=='~'||pas[i]=='!'||pas[i]=='@'||pas[i]=='#'||pas[i]=='$'||pas[i]=='%'||pas[i]=='^')
            fuhao=1;
            anw=daxiezm+xiaoxiezm+num+fuhao;
            
        }
        
            if(anw>=3)
            printf("YES\n");
            else{
                printf("NO\n");
                continue;
            }
        }
        else
        printf("NO\n");
        
        
    }
    return 0;
} 