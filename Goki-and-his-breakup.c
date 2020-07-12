#include <stdio.h>
int main()
{
	int n,x,i;
	scanf("%d",&n);
	scanf("%d",&x);
	int arr[n];
	for(i=0; i<n; i++)
	{
		scanf("%d\n",&arr[i]);
		if(arr[i]<x)
		  printf("NO\n");
		else
		  printf("YES\n");
	}
  return 0;
}
