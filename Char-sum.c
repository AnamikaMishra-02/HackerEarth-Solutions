#include <stdio.h>
int main()
{  
	int sum=0;
	char str[1000];
	scanf("%s",str);
    for(int i=0; i<strlen(str); i++)
	{
	   sum=sum+str[i]-96;
	}
	printf("%d",sum);
}

