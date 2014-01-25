#include<stdio.h>
int main()
{
	int t=0,n=0,i=0,k=0;
	scanf("%d",&t);
	int *intime;
	int *outtime;
	int *arr;
	while(t--)
	{
		scanf("%d",&n);
		arr=(int*)calloc(1001,sizeof(int));
		intime=(int*)calloc(n,sizeof(int));
		outtime=(int*)calloc(n,sizeof(int));
		for(i=0;i<n;i++)
			scanf("%d",&intime[i]);
		for(i=0;i<n;i++)
			scanf("%d",&outtime[i]);	
		for(i=0;i<n;i++)
		{
			for(k=intime[i];k<outtime[i];k++)
			{
				arr[k]+=1;
			}
		}
		/* for(i=0;i<1001;i++)
			printf("%d ",arr[i]); */
		int max=0;
		for(i=0;i<1001;i++)
		{
			if(arr[i]>=max)
				max=arr[i];
		}
		printf("%d\n",max);
		free(intime);
		free(outtime);
		free(arr);
	}
	return 0;
}