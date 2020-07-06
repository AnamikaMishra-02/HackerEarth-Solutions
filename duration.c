#include <stdio.h>
int main()
{
	int N,SH,SM,EH,EM;
	int min=0;
	int diff=0;
	int hrs=0;
	scanf("%d",&N);
	for(int i=0;i<N;i++)
	{
        scanf("%d%d%d%d",&SH,&SM,&EH,&EM);
		diff=((EH*60)+EM)-((SH*60)+SM);
		hrs=diff/60;
		min=diff%60;
	printf("%d %d\n",hrs,min);
	}
	
return 0;
}

