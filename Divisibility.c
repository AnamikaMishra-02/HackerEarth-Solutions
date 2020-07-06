#include <stdio.h>
int main()
{
	int n=0,sum=0,b;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	b=arr[n-1]%10;
	if(b==0)
	  printf("Yes");
	else
	  printf("No");
  return 0;
}

