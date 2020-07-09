#include<stdio.h>
#include<string.h>
int main()
{
	int n,x;
	int count=0;
	char a[1000000];
	scanf("%s",a);
	n=strlen(a);
    x=n;
	if (a[n-1]=='6')
	  printf("-1");
	else
	 {
	for(int i=0;i<n;i++)
	 {
       if (a[i] =='6')
	    x--;
	 }
	printf("%d",x);
	}
  return 0;
}
