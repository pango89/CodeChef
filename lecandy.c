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
	int t=0,i=0,n=0,c=0;
	//scanf("%d",&t);
	t=scan();
	while(t--)
	{
		int sum=0,temp=0;
		//scanf("%d %d",&n,&c);
		n=scan();
		c=scan();
		for(i=0;i<n;i++)
		{
			//scanf("%d",&temp);
			temp=scan();
			sum+=temp;
		}
		if(sum>c)
			puts("No\n");
		else
			puts("Yes\n");
	}
	return 0;
}