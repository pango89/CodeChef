#include<stdio.h>
#include<math.h>
void solution1()
{
	int n=0,m=0,i=0,j=0;
	int arr[1001]={0};
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=1;i<pow(2,n);i++)
	{
		int sum=0;
		for(j=0;j<n;j++)
		{            
			if(i & (1<<j))
			{
				sum=sum+arr[j];
				if(m==sum)
				{
					printf("Yes\n");
					return;
				}
				
			}
		}
	}
	printf("No\n");
}
int main()
{
	int tcases=0,i=0;
	scanf("%d",&tcases);
	for(i=0;i<tcases;i++)
	{
		solution1();
	}
	getch();
	return 0;
}
