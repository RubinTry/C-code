#include<stdio.h>
#include<stdlib.h>
/*
����
2 7
3 4
2 5
����������5
���13.333
*/
struct good//��ʾ��Ʒ�Ľṹ��
{
double p;//��ֵ
double w;//����
double r;//��ֵ�������ı�
}a[20];

int cmp ( const void *a , const void *b )
{
    return ((struct good *)b)->r-((struct good *)a)->r;
}
int main()
{
    int i,num;
    double s,value,m,w;

    printf("\t\t---------̰���㷨�����������----------\n");
    printf("��������Ҫ����Ļ���ĸ���:   ");
    scanf("%d",&num);            //��Ʒ����
    printf("�����������������ֵ��ʽΪ��w p��ÿ����һ�����ݻس�: \n");
    for (i=0;i<num;i++)
    {
       scanf("%lf%lf",&a[i].w,&a[i].p);
       a[i].r=a[i].p/a[i].w;
    }
    qsort(a,num,sizeof(a[0]),cmp);          //����qsort������
    printf("�������������:   ");
    scanf("%lf",&m);               //�����������m
    s=0;                           //�����ִ��Ʒ������
    value=0;                       //�����ִ��Ʒ�ܼ�ֵ
    for (i=0;i<num&&m>0;i++)
    {
       w = a[i].w;
       if(w>m)
           w=m;
       value+=w*a[i].r;
       m-=w;
    }
    
    printf("����������ܼ�ֵΪ%.3lf.\n",value);
    getch();
    return 0;
}
