#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void deal(char a[])
{
	int i,j,len,point=-1;
	len=strlen(a);
	for(i=0;i<=len-1;i++)
	{
		if(a[i]=='.')
		{
			point=i;
			break;
		}
	}
	if(point>=0)
	{
		for(i=len-1;i>=0;i--)
		{
			if(a[i]!='0')
			break;
			else
			a[i]='\0';
		}
		if(a[i]=='.')
		{
			a[i]='\0';
		}
	}
}
int main()
{
    char a[100000],b[100000];
    memset(a,0,100000*sizeof(char));
    memset(b,0,100000*sizeof(char));
    while(scanf("%s%s",a,b)!=EOF)
    {
    	deal(a);
    	deal(b);
    	if(strcmp(a,b))
    	printf("NO\n");
    	else
    	printf("YES\n");
    }
    return 0;
} 