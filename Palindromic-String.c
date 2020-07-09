#include <stdio.h>
int main()
{   
  int n=100000,i,x,count=0,j=0;
	char str[n];
	scanf("%s",str);
	char rev[n];
	x=strlen(str);

	for( i=x-1,j=0; i>=0,j<x; i--,j++)
	{
        rev[j]=str[i];
	}

    for(i=0,j=0;i<x,j<x;i++,j++)
	{
	if( str[i]==rev[j] )
	   count++;
	}

	if(count==x)
	 printf("YES");
	else
	 printf("NO");
	
	return 0;
}

