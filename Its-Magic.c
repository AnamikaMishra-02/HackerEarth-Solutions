#include<stdio.h>
int main()
{
	long long int n;
	scanf("%lld",&n);
	long long int sum=0;
	long long int min=100000000;
	long long int index=-1;
	
	long long int  arr[n];
	for(long long int i=0; i<n;i++)
	{
		scanf("%lld",&arr[i]);
		sum=sum+arr[i];
	}
	for(long long int i=0;i<n;i++)
	{
		if((sum-arr[i])%7==0 && min>arr[i])
		{
		  min=arr[i];
		  index=i;
		}
	}
	printf("%lld",index);
 return 0;
}
