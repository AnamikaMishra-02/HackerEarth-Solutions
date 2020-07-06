#include <stdio.h>
int main()
{   int n;
	while(n!=42)
	{  
		scanf("%d",&n);
		if(n==42)
	     break;
	   else
	   {
	     printf("%d\n",n);
	   }
	}

  return 0;	
}

