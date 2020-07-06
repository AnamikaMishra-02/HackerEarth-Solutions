#include <stdio.h>
int main()
{
	int len,pages;
	scanf("%d%d",&len,&pages);
	if(len<=23 && 500<=pages<=1000)
	   printf("Take Medicine");
	else
	   printf("Don't take Medicine");
return 0;
}
