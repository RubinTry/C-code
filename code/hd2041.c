//ֻ��һ��쳲�����������^__^ 

#include<stdio.h>
int main()
{
    int i,n,m,a[1000];
    a[0]=1;
    a[1]=1;
    for(i=2;i<100;i++){
        a[i]=a[i-2]+a[i-1];
    }
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&m);
        printf("%d\n",a[m-1]);
    }
    return 0;
} 