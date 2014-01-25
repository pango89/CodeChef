#include<stdio.h>
#include<stdlib.h>
int compare(const void *a,const void *b)
{
	return(*(int*)a-*(int*)b);
}
int inline scan() 
{ 
    int N = 0; 
    char C; 
    C=getchar_unlocked(); 
    while (C < '0' || C>'9') C=getchar_unlocked(); 
    while (C >= '0' && C <= '9') 
    { 
    N = (N<<3) + (N<<1) + C - '0'; 
    C=getchar_unlocked(); 
    } 
    return N; 
} 
int main()
{
	int t=0;
	int n=0,m=0,i=0,j=0,k=0;
	int *p,*arr1;
	t=scan();
	while(t--)
	{
		int sum=0;
		n=scan();
		m=scan();
		p=(int*)calloc(m,sizeof(int));
		for(i=0;i<m;i++)
		{
			p[i]=scan();
		}				
		arr1=(int*)calloc(n,sizeof(int));
		int **cap;
		cap=(int**)calloc(n,sizeof(int*));
		for(j=0;j<n;j++)
		{
			int var=0;
			var=scan();
			arr1[j]=var;
			cap[j]=(int*)calloc(var,sizeof(int));			
			for(k=0;k<var;k++)
			{
				cap[j][k]=scan();
			}
			qsort(cap[j],var,sizeof(int),compare);			
		}
		/* for(i=0;i<m;i++)
		{
			printf("%d ",p[i]);
		}
		printf("\n");
		for(i=0;i<n;i++)
		{
			printf("%d ",arr1[i]);
		}
		printf("\n");
		for(i=0;i<n;i++)
		{
			for(j=0;j<arr1[i];j++)
			printf("%d ",cap[i][j]);
			printf("\n");
		}
		printf("\n"); */
		for(i=0;i<m;i++)
		{
			int ele=p[i];
			if(arr1[ele]>0)
			{
				sum=sum+cap[ele][arr1[ele]-1];
				arr1[ele]--;
			}
		}
		free(p);
		free(arr1);
		for(i=0;i<n;i++)
		{
			free(cap[i]);
		}
		printf("%d\n",sum);
	}
}
