#include<stdio.h>
int isPrime(int num)  
{  
   int i;
   if(num==1)
   return 0; 
   	if(num ==2|| num==3 )  
    return 1;  
   if(num %6!= 1&&num %6!= 5)  
    return 0 ;  
   int tmp =sqrt( num);  
   for(i=5;i<=tmp;i=i+6)  
    if(num%i==0||num%(i+2)==0)  
     return 0 ;
   return 1 ; 
    
}  
void main()
{
   int m,i,j,k,n;
   int sum;
   scanf("%d",&j);
   while(j--)
   {
   	  sum=0;
   	  scanf("%d",&n);
      for(i=0;i<n;i++)
      {
      	
   	    scanf("%d",&m);
        if(isPrime(m)==1)
          sum+=m;
      }
      printf("%d\n",sum);
   }   
   
}