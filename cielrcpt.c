#include<stdio.h>
int main()
{
	int t=0,i=0;
	scanf("%d",&t);
	int p=1;
	int quo=0,rem=0;
	while(t--)
	{
		scanf("%d",&p);
		quo=p/2048;
		rem=p%2048;
		for(i=0;rem;i++)
		{
			rem&=rem-1;
		}
		printf("%d\n",quo+i);
	}
	return 0;
}
	