#include<stdio.h>
#include<malloc.h>
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
int compare(const void *a,const void *b)
{
	return(*(int*)a-*(int*)b);
}
int main()
{
	int t=0,i=0,n=0;
	//scanf("%d",&t);
	t=scan();
	int arr[5001]={0};
	while(t--)
	{
		//scanf("%d",&n);
		n=scan();
		int mindiff=1000000000;
		//arr=(int*)calloc(n,sizeof(int));
		for(i=0;i<n;i++)
		{
			//scanf("%d",&arr[i]);
			arr[i]=scan();
		}
		qsort(arr,n,sizeof(int),compare);
		for(i=0;i<n-1;i++)
		{
			int gap=arr[i+1]-arr[i];
			mindiff=(gap<mindiff)?gap:mindiff;
		}
		printf("%d\n",mindiff);
		//free(arr);
	}
	return 0;
}