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
	int t=0,n=0,i=0;
	//scanf("%d",&t);
	t=scan();
	int *arr;
	while(t--)
	{
		//scanf("%d",&n);
		n=scan();
		arr=(int*)calloc(n,sizeof(int));
		for(i=0;i<n;i++)
		{
			//scanf("%d",&arr[i]);
			arr[i]=scan();
		}
		int count=1,maxspeed=arr[0];
		for(i=1;i<n;i++)
		{
			if(arr[i]<=maxspeed)
			{
				maxspeed=arr[i];
				count+=1;
			}
		}
		printf("%d\n",count);
		free(arr);
	}
	return 0;
}