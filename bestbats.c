#include<stdio.h>
long long comb(long long n,long long r)
{
	long long a=1,b=1;
	int i=0;
	for(i=0;i<r;i++)
	{
		a*=n--;
		b*=(i+1);
	}
	return (a/b);
}
int main()
{
	int t=0,i=0,k=0;
	scanf("%d",&t);
	int *arr;
	
	while(t--)
	{
		arr=(int*)calloc(101,sizeof(int));
		for(i=0;i<11;i++)
		{
			int temp=0;
			scanf("%d",&temp);
			arr[temp]+=1;
		}
		scanf("%d",&k);
		for(i=100;i>0;k-=arr[i--])
		{
			if(arr[i]>=k)
			{
				printf("%lld\n",comb(arr[i],k));
				break;
			}	
		}
		free(arr);
	}
	return 0;
}