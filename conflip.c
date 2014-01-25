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
	int t=0,g=0,i=0,n=0,q=0,count=0;
	t=scan();
	while(t--)
	{
		g=scan();
		while(g--)
		{
			i=scan();
			n=scan();
			q=scan();
			if(n%2!=0)
			{
				if(i==q)
					count=n/2;
				else
					count=n/2+1;
			}
			else
				count=n/2;
			printf("%d\n",count);
		}
	}
	return 0;
}
