#include<stdio.h>
int main()
{
	int t=0,n=0,j=0,i=0;
	scanf("%d",&t);
	int x[1001]={0},l[1001]={0},f[1001]={0};
	while(t--)
	{
		int time=0;
		scanf("%d",&n);
		for(i=0;i<n;i++)
			scanf("%d %d %d",&x[i],&l[i],&f[i]);
		time=x[0]+l[0];
		for(i=1;i<n;i++)
		{
			for(j=x[i];j<time;j+=f[i]);
			time=j+l[i];
		}
		printf("%d\n",time);
	}
	return 0;
}