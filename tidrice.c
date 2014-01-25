#include<stdio.h>
#include<string.h>
int main()
{
	int t=0;
	scanf("%d",&t);
	char voterid[101][22];
	int vote[101]={0};
	int *visited;
	char ch;
	int lastvote=0,j=0,totalvotes=0,n=0,i=0;
	while(t--)
	{	
		totalvotes=0;
		visited=(int*)calloc(101,sizeof(int));
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%s %c",voterid[i],&ch);
			vote[i]=(ch=='+')?1:-1;
		}
		for(i=0;i<n;i++)
		{
			lastvote=0;
			if(visited[i]==1)
				continue;
			for(j=i;j<n;j++)
			{
				if(visited[j]==1)
					continue;
				if(strcmp(voterid[i],voterid[j])==0)
				{
					lastvote=vote[j];
					visited[j]=1;
				}
			}
			totalvotes+=lastvote;
		}
		printf("%d\n",totalvotes);
		free(visited);
	}
	return 0;
}