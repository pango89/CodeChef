#include<stdio.h>
#include<string.h>
int main()
{
	int t=0,i=0;
	char s[101],j[101];
	int arr[2][58]={0};
	scanf("%d",&t);
	while(t--)
	{
		int count=0;
		memset(arr[0],0,sizeof(arr[0]));
		memset(arr[1],0,sizeof(arr[1]));
		scanf("%s",j);
		scanf("%s",s);
		for(i=0;i<strlen(j);i++)
			arr[0][(j[i]-65)]=1;
		for(i=0;i<strlen(s);i++)
			arr[1][(s[i]-65)]++;
		for(i=0;i<58;i++)
		{
			if(arr[0][i]==1)
				count+=arr[1][i];
		}
		printf("%d\n",count);
	}
	return 0;		
}
