#include <stdio.h>
int main()
{
	int days,r,x;
	int totalDist=0,peri=0;
	int c=0;
	scanf("%d",&days);
	for(int i=1;i<=days;i++)
	{
		scanf("%d%d",&r,&x);
		totalDist=100*x;
	    peri=2*(22.0/7)*r;
	    if(peri<=totalDist)
		  c++;
	}
     printf("%d",c);
  return 0;
}

