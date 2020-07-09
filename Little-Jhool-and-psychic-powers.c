#include <stdio.h>
int main()
{
	char str[10000];
	int n,flag=0;
	scanf("%s",str);
	n=strlen(str);
    for(int i=0; i<n; i++)
	{
		if( str[i]=='0' && str[i+1]=='0' && str[i+2]=='0' && str[i+3]=='0' && str[i+4]=='0' && str[i+5]=='0' )
		  flag=1;
		if( str[i]=='1' && str[i+1]=='1' && str[i+2]=='1' && str[i+3]=='1' && str[i+4]=='1' && str[i+5]=='1' )
		  flag=1;
	}
	if (flag==1)
	  printf("Sorry, sorry!");
	else
	  printf("Good luck!");
return 0;	
}
