#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char a[1000],b[1000];
	memset(a,0,sizeof(char)*1000);
	memset(b,0,sizeof(char)*1000);
	int i,n;
	while(scanf("%d",&n)!=EOF)
	{
		while(n--)
		{
			getchar();
			for(i=0;i<11;i++)
			{
				scanf("%c",&a[i]);
				if(a[i]>='a'&&a[i]<='c'||a[i]>='A'&&a[i]<='C')
				b[i]='2';
				else if(a[i]>='d'&&a[i]<='f'||a[i]>='D'&&a[i]<='F')
				b[i]='3';
				else if(a[i]>='g'&&a[i]<='i'||a[i]>='G'&&a[i]<='I')
				b[i]='4';
				else if(a[i]>='j'&&a[i]<='l'||a[i]>='J'&&a[i]<='L')
				b[i]='5';
				else if(a[i]>='m'&&a[i]<='o'||a[i]>='M'&&a[i]<='O')
				b[i]='6';
				else if(a[i]>='p'&&a[i]<='s'||a[i]>='P'&&a[i]<='S')
				b[i]='7';
				else if(a[i]>='t'&&a[i]<='v'||a[i]>='T'&&a[i]<='V')
				b[i]='8';
				else if(a[i]>='w'&&a[i]<='z'||a[i]>='W'&&a[i]<='Z')
				b[i]='9';
			
			}
			for(i=0;i<11;i++)
			{
				printf("%c",b[i]);
			}
			printf("\n");
		}
	}
	return 0;
}