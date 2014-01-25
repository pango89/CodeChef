#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int t=0;
	scanf("%d",&t);
	getchar();
	while(t--)
	{
		char *str;
		str=(char*)malloc(11);
		gets(str);
		int len=strlen(str);
		if(len>5)
			printf("Error\n");
		else if(str[0]>'h' || str[0]<'a')
			printf("Error\n");
		else if(str[1]>'8' || str[1]<'1')
			printf("Error\n");
		else if(str[2]!='-')
			printf("Error\n");
		else if(str[3]>'h' || str[3]<'a')
			printf("Error\n");
		else if(str[4]>'8' || str[4]<'1')
			printf("Error\n");	
		
		else
		{
			if(abs(str[0]-str[3])==1 && abs(str[1]-str[4])==2)
				printf("Yes\n");
			else if(abs(str[0]-str[3])==2 && abs(str[1]-str[4])==1)
				printf("Yes\n");
			else
				printf("No\n");
		}
		free(str);
	}
	return 0;
}