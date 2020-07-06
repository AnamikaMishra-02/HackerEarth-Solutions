#include <stdio.h>
int main()
{
	char str[10];
	scanf("%s",&str);
	int K;
	scanf("%d",&K);

	for(int i=0;i<K;i++)
	{
		if(i=='9')
		K++;

		else
		str[i]='9';
	}
    
  printf("%s",str);
  return(0);
}
