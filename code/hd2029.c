#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char a[1000],b[1000];
	int n,i,j,lenA,k;
	scanf("%d",&n);
	getchar();
	while(n--){
		k=0;
		memset(a,0,sizeof(char)*1000);
		memset(b,0,sizeof(char)*1000);
		gets(a);		
		lenA=strlen(a);
		j=lenA;
		for(i=0;i<lenA;i++){
			b[j-1]=a[i];
			j--;
			if(j<1)
			break;
		}
		for(i=0;i<lenA;i++)
		{
			if(a[i]!=b[i]){
				k++;
			}
		}
		if(k==0)
		printf("yes\n");
		else
		printf("no\n");
	}
	return 0;
}