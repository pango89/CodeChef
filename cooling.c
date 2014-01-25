#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
int compare(const void *a,const void *b)
{
	return(*(int*)a-*(int*)b);
}
void solution()
{
	int num=0,i=0,answer=0,j=0;
	int *wtpie,*wtlmt;
	scanf("%d",&num);
	wtpie=(int*)calloc(num,sizeof(int));
	wtlmt=(int*)calloc(num,sizeof(int));
	for(i=0;i<num;i++)
	{
		scanf("%d",&wtpie[i]);
	}
	for(i=0;i<num;i++)
	{
		scanf("%d",&wtlmt[i]);
	}
	qsort(wtpie,num,sizeof(int),compare);
	qsort(wtlmt,num,sizeof(int),compare);
	for(i=0;i<num;i++)
	{
		if(wtlmt[i]>=wtpie[j])
		{
			answer++;
			j++;
		}
	}
	printf("%d\n",answer);
}
int main()
{
	int tcases=0;
	scanf("%d",&tcases);
	while(tcases--)
	{
		solution();
	}
	//printf("\n");
	return 0;
}
