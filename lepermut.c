#include<stdio.h>
#include<malloc.h>
int main()
{
	int t=0,i=0,j=0,n=0;
	scanf("%d",&t);
	int *arr;
	while(t--)
	{
		scanf("%d",&n);
		arr=(int*)calloc(n,sizeof(int));
		int small=0,count1=0,count2=0;
		for(i=0;i<n;i++)
			scanf("%d",&arr[i]);
		for(i=0;i<n;i++)
		{
			small=arr[i];
			for(j=i+1;j<n;j++)
			{
				if(small>arr[j])
					count1++;
			}
		}
		for(i=0;i<n-1;i++)
		{
			if(arr[i]>arr[i+1])
				count2++;
		}
		printf((count1==count2)?"YES\n":"NO\n");
		free(arr);
	}
	return 0;
}