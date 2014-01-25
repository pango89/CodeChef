#include<stdio.h>
int inline scan()
{
	int N = 0;
	char C;
	C=getchar_unlocked();
	while (C < '0' || C>'9') C=getchar_unlocked();
	while (C >= '0' && C <= '9')
	{
	N = (N<<3) + (N<<1) + C - '0';
	C=getchar_unlocked();
	}
	return N;
}
int main()
{
	int t=0,n=0,i=0,rem=0;
	//scanf("%d",&t);
	t=scan();
	while(t--)
	{
		//scanf("%d",&n);
		n=scan();
		int ctr=-1;
		//var=n/7;
		for(i=n/7;i>=0;i--)
		{
			rem=n-(i*7);
			if(rem%4==0)
			{
				printf("%d\n",i*7);
				ctr=1;
				break;
			}
		}
		if(ctr==-1)
			printf("%d\n",ctr);
	}
	return 0;
}