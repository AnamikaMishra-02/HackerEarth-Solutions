#include <stdio.h>
int main()
{
	int n;
	long long int sum=0;
	scanf("%d",&n);
	long long int arr[n];
    for(int i=0; i<n; i++)
	{
		scanf("%lld",&arr[i]);
		sum=sum+arr[i];
	}
	printf("%lld",sum);
}
