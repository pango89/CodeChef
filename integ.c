#include<stdio.h>
#include<malloc.h>
/* int inline scan() 
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
}  */
int count_negative(int *arr,int n)
{
	int i=0;
	int count=0;
	for(i=0;i<n;i++)
	{
		if(arr[i]<0)
			count++;
	}
	return count;
}
long long int sum_negative(int *arr,int n)
{
	int i=0;
	long long int sum=0;
	for(i=0;i<n;i++)
	{
		if(arr[i]<0)
			sum+=arr[i];
	}
	return sum;
}
void increment(int *arr,int n)
{
	int i=0;
	for(i=0;i<n;i++)
	{
		if(arr[i]<0)
			arr[i]+=1;
	}
}
int main()
{
	int n=0,i=0,count=0,x=0;
	long long int ans=0;
	int *arr;
	//n=scan();
	scanf("%d",&n);
	arr=(int*)calloc(n,sizeof(int));
	for(i=0;i<n;i++)
	{
		//arr[i]=scan();
		scanf("%d",&arr[i]);
	}	
	//x=scan();
	scanf("%d",&x);
	count=count_negative(arr,n);
	while(count>0)
	{
		if(count>x)
		{
			ans=ans+x;
		}
		else
		{
			ans=ans+count;
		}
		increment(arr,n);		
		count=count_negative(arr,n);
	}
	printf("%lld\n",ans);
	return 0;
}
	