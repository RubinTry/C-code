#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define ERROR  0
#define MAXSIZE 100
#define ERROR  0
typedef char DateType;
typedef struct
{
   DateType data[MAXSIZE];
   int top;
}SeqStack;//����ջ


void initStack(SeqStack* L)//��ʼ��
{
     L->top=0;
}

int push(SeqStack* L,DateType e)//��ջ
{
   if(L->top==MAXSIZE)
   {
       return 0;
   }
   L->data[L->top]=e;
   L->top++;
   return 1;
}


DateType pop(SeqStack* L)//��ջ
{
   L->top--;
   return L->data[L->top];
}

DateType getTop(SeqStack* L)//ȡջ��Ԫ��
{
   if(L->top==0)
   {
      return -1;
   }
   else
   {
      return L->data[L->top-1];
   }
}
int isEmpty(SeqStack* L)//�ж�ջ�Ƿ�Ϊ��
{
   if(L->top==0) //Ϊ��
      return 1;
   else
      return 0;
}
int isFull(SeqStack* L)//�ж�ջ�Ƿ�����
{
   if(L->top<MAXSIZE)
      return 0;
   else
      return 1;
}
int main()
{
	int n,i,j,k,res[2*MAXSIZE];
	char s1[MAXSIZE],s2[MAXSIZE];
	SeqStack L;
	while(scanf("%d",&n)!=EOF)
	{
		initStack(&L);
		scanf("%s",s1);
		scanf("%s",s2);
		memset(res,0,2*MAXSIZE*sizeof(int));
		i=j=k=0;
		
		//������ѭ�����Ƕ�ջ�Ĳ��� 
		
		for(i=0;i<n;i++)
		{
			while(getTop(&L)==s2[j])
			{
				res[k++]=1;
				pop(&L);
				j++;
			}
			push(&L,s1[i]);
			k++;
		}
		while(!isEmpty(&L))
		{
			if(getTop(&L)==s2[j])
			{
				res[k++]=1;
				pop(&L);
				j++;
			}
			else
			break;
		}
		
		//��֮��Ϊ��¼����Ĵ��� 
		
		if(j!=n)
		printf("No.\nFINISH\n");
		else{
			printf("Yes.\n");
			for(i=0;i<2*n;i++)
			{
				if(res[i]==0)
				printf("in\n");
				else
				printf("out\n");
			}
			printf("FINISH\n");
		}
	}
	return 0;
}