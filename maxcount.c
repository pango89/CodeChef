#include<stdio.h>
void answer()
{
	int arr[10001]={0};
	int len=0,i=0,num=0;
	//memset(arr,0,10001);
	scanf("%d",&len);
	for(i=0;i<len;i++)
	{
		scanf("%d",&num);
		arr[num-1]++;
	}
	int value=0,count=0;
	for(i=9999;i>=0;i--)
	{
		if(arr[i]>=count)
		{
			count=arr[i];
			value=i+1;
		}
	}
	printf("%d %d\n",value,count);
}
int main()
{
	int tcases=0;
	scanf("%d",&tcases);
	while(tcases--)
	{
		answer();
	}
	return 0;
}
