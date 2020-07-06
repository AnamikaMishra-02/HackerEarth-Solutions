#include <stdio.h>
int main()
{
	int n;
	int fact=1;
	scanf("%d",&n);
	for(int i=n; i>=1; i--)
	{
        fact=fact*i;
	}
	printf("%d",fact);
  return 0;
}
