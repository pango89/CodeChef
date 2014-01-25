#include<stdio.h>
#include<malloc.h>
int main()
{
	unsigned int a=0;
	int n=0,k=0;
	scanf("%d %d %d",&a,&n,&k);
	int *ans;
	int i=0;
	ans=(int*)calloc(k,sizeof(int));	
	for(i=0;i<k;i++)
	{
		ans[i]=a%(n+1);
		a=a/(n+1);
		printf("%d ",ans[i]);
	}
	return 0;
}
