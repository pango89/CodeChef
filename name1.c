#include<stdio.h>
#include<string.h>
int main()
{
	char a[400005],b[400005];
	char c[400005];
	int t=0,i=0,nc=0,k=0;
	int *count1,*count2;
	scanf("%d",&t);
	while(t--)
	{
		//int count1[26]={0};
		//int count2[26]={0};
		count1=(int*)calloc(26,sizeof(int));
		count2=(int*)calloc(26,sizeof(int));
		scanf("%s %s",&a,&b);
		for(i=0;i<strlen(a);i++)
				count1[a[i]-97]++;
		for(i=0;i<strlen(b);i++)
				count1[b[i]-97]++;
		scanf("%d",&nc);
		for(k=0;k<nc;k++)
		{
			scanf("%s",&c);
			for(i=0;i<strlen(c);i++)
				count2[c[i]-97]++;
		}
		/*for(i=0;i<26;i++)
			printf("%c ",i+97);
		printf("\n");
		for(i=0;i<26;i++)
			printf("%d ",count1[i]);
		printf("\n");
		for(i=0;i<26;i++)
			printf("%d ",count2[i]);
		printf("\n");*/
		for(i=0;i<26;i++)
		{
			if(count2[i]>count1[i])
			{
				printf("NO\n");
				break;
			}
		}
		if(i==26)
			printf("YES\n");
		free(count1);
		free(count2);
	}
	return 0;
}