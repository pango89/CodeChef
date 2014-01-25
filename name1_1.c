#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char a[400005],b[400005];
	char c[400005],ch;
	int t=0,i=0,nc=0,k=0;
	int *count1,*count2;
	scanf("%d",&t);
	getchar();
	while(t--)
	{
		
		//int count1[26]={0};
		//int count2[26]={0};
		count1=(int*)calloc(26,sizeof(int));
		count2=(int*)calloc(26,sizeof(int));
		//scanf("%s %s",&a,&b);
		do
		{
			ch=getchar();
			//putchar(ch);
			//printf("\n");
			if(ch>='a'&&ch<='z')
				count1[ch-97]++;
		}while(ch!=10);
		/*
		for(i=0;i<strlen(a);i++)
				count1[a[i]-97]++;
		for(i=0;i<strlen(b);i++)
				count1[b[i]-97]++;*/
		scanf("%d",&nc);
		/* for(k=0;k<nc;k++)
		{
			scanf("%s",&c);
			for(i=0;i<strlen(c);i++)
				count2[c[i]-97]++;
		} */
		getchar();
		while(nc>0)
		{
			ch=getchar();
			//printf("NC Inside=%d\n",nc);
			while(ch!=10 && ch!=-1)
			{
				//putchar(ch);
				//printf("\n");
				if(ch>='a'&&ch<='z')
					count2[ch-97]++;
				ch=getchar();					
			}			
			nc--;
		}
		//printf("NC Outside=%d\n",nc); 
		/*
		for(i=0;i<26;i++)
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