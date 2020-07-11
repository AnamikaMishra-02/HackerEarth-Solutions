#include <stdio.h>
int main()
{
	int n,l,w,result;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
	   scanf("%d%d",&l,&w);
	   if(l>w)
       result=(l/w);
	   else
	   result=(w/l);
	printf("%d\n",result);
	}
	return 0;
}

