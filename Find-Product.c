#include <stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   int arr[n];
   long int prod=1;
   
   for(int i=0; i<n; i++)
   {
	   scanf("%d",&arr[i]);
	   if(arr[i]==0)
	      prod=0;
	   else
	   prod=(prod*arr[i])%(1000000007);
   }

   printf("%ld",prod);

return(0) ;
}
