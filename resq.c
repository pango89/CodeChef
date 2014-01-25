#include<stdio.h>
#include<math.h>
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
	int t=0,n=0;
	//scanf("%d",&t);
	t=scan();
	while(t--)
	{
		//scanf("%d",&n);
		n=scan();
		double root=sqrt(n);
		//printf("Root==%lf\n",root);
		int i=0,c2=0;
		for(i=(int)floor(root);i>=1;i--)
		{
			if(n%i==0)
			{
				c2=i;
				break;
			}
		}
		printf("%d\n",abs(n/c2-c2));
	}
	return 0;
}