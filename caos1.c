#include<stdio.h>
#include <stdlib.h>
#define MAX 55
int findmin(int a, int b)
{
	return((a<b)?a:b);
}
char arr[MAX][MAX];
int left[MAX][MAX]={0};
int right[MAX][MAX]={0};
int top[MAX][MAX]={0};
int bottom[MAX][MAX]={0};
int r=0,c=0;
int i=0,j=0;
void build()
{
	//============================FOR BUILDING LEFT==================================
	for(i=0;i<r;i++)
	{
		for(j=1;j<=c;j++)
		{	
			if(j==1)
			{
				left[i][j]=0;
			}
			else
			{
				if(arr[i][j-1]=='^')
				{
					left[i][j]=left[i][j-1]+1;
				}
				else
				{
					left[i][j]=0;
				}
			}			
		}
	}
	//===========================================================================
	//============================FOR BUILDING RIGHT==================================
	for(i=0;i<r;i++)
	{
		for(j=c;j>=1;j--)
		{	
			if(j==c)
			{
				right[i][j]=0;
			}
			else
			{
				if(arr[i][j+1]=='^')
				{
					right[i][j]=right[i][j+1]+1;
				}
				else
				{
					right[i][j]=0;
				}
			}			
		}
	}
	//===========================================================================
	//============================FOR BUILDING TOP==================================
	for(i=0;i<r;i++)
	{
		for(j=1;j<=c;j++)
		{	
			if(i==0)
			{
				top[i][j]=0;
			}
			else
			{
				if(arr[i-1][j]=='^')
				{
					top[i][j]=top[i-1][j]+1;
				}
				else
				{
					top[i][j]=0;
				}
			}			
		}
	}
	//===========================================================================
	//============================FOR BUILDING BOTTOM==================================
	for(i=r-1;i>=0;i--)
	{
		for(j=1;j<=c;j++)
		{	
			if(i==r-1)
			{
				bottom[i][j]=0;
			}
			else
			{
				if(arr[i+1][j]=='^')
				{
					bottom[i][j]=bottom[i+1][j]+1;
				}
				else
				{
					bottom[i][j]=0;
				}
			}			
		}
	}
	//===========================================================================
}
int main()
{
	int t=0;
	int min=0;
	scanf("%d",&t);
	while(t--)
	{
		int count=0;
		scanf("%d %d",&r,&c);
		for(i=0;i<r;i++)
		{
			for(j=0;j<=c;j++)
			{
				scanf("%c",&arr[i][j]);		
			}
		}		
		build();
		for(i=0;i<r;i++)
		{
			for(j=1;j<=c;j++)
			{
				if(arr[i][j]!='#')
				{
					min=findmin(left[i][j], findmin(right[i][j], findmin(top[i][j],bottom[i][j])));
					if(min>=2)
						count++;
				}
				
			}
		}	
		printf("%d\n",count);
	}
	return 0;	
}


	