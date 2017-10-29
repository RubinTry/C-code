#include<stdio.h>
#include<stdlib.h>
/*
输入
2 7
3 4
2 5
包的容量：5
输出13.333
*/
struct good//表示物品的结构体
{
double p;//价值
double w;//重量
double r;//价值与重量的比
}a[20];

int cmp ( const void *a , const void *b )
{
    return ((struct good *)b)->r-((struct good *)a)->r;
}
int main()
{
    int i,num;
    double s,value,m,w;

    printf("\t\t---------贪心算法解决背包问题----------\n");
    printf("请输入您要输入的货物的个数:   ");
    scanf("%d",&num);            //物品个数
    printf("请输入货物的重量与价值格式为（w p）每输入一组数据回车: \n");
    for (i=0;i<num;i++)
    {
       scanf("%lf%lf",&a[i].w,&a[i].p);
       a[i].r=a[i].p/a[i].w;
    }
    qsort(a,num,sizeof(a[0]),cmp);          //调用qsort排序函数
    printf("请输入包的容量:   ");
    scanf("%lf",&m);               //读入包的容量m
    s=0;                           //包内现存货品的重量
    value=0;                       //包内现存货品总价值
    for (i=0;i<num&&m>0;i++)
    {
       w = a[i].w;
       if(w>m)
           w=m;
       value+=w*a[i].r;
       m-=w;
    }
    
    printf("背包的最大总价值为%.3lf.\n",value);
    getch();
    return 0;
}
