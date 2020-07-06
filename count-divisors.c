#include <stdio.h>
int main()
{
   int i,r,k;
   int count=0;
   scanf("%d%d%d",&i,&r,&k);
   for(int j=i;j<=r;j++)
   {  
	   if(j%k==0)
	      count++;
   }

   printf("%d",count);
   return 0;
}
