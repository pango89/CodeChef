#include<stdio.h>
int main()
{
	int t=0,i=0,len=0;
	scanf("%d",&t);
	char *str;
	while(t--)
	{
		int prod=1;
		str=(char*)malloc(1000000);
		scanf("%s",str);
		len=strlen(str);
		for(i=0;i<=(len-1)/2;i++)
		{
			if(str[i]=='?' && str[len-1-i]=='?')
				prod=(prod*26)%10000009;
			else if(str[i]=='?' && str[len-1-i]!='?'||str[i]!='?' && str[len-1-i]=='?')
				prod*=1;
			else
			{
				if(str[i]!=str[len-1-i])
					prod*=0;
			}
		}
		printf("%d\n",prod);
		free(str);
	}
	return 0;
}