#include<stdio.h>
#include<malloc.h>
int dec_to_bin(int num,int n,int *arr)
{
	int x=0,i=0,countof1=0;
	for(i=n-1;i>=0;i--)
	{
		x=num/(1<<i);
		num=num-x*(1<<i);
		arr[n-1-i]=x;
		if(x==1)countof1++;
	}
	return countof1;
}
		
	
int main()
{
	int t=0,n=0,a=0,b=0,i=0;
	int *arrA,*arrB;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d %d",&n,&a,&b);
		arrA=(int*)calloc(n,sizeof(int));
		arrB=(int*)calloc(n,sizeof(int));		
		int n1A=dec_to_bin(a,n,arrA);
		int n0A=n-n1A;
		int n1B=dec_to_bin(b,n,arrB);
		int n0B=n-n1B;
		int count=0;
		count+=(n1A<n0B)?n1A:n0B;
		count+=(n1B<n0A)?n1B:n0A;
		int res=((1<<count)-1)<<(n-count);
		printf("%d\n",res);
		/* for(i=0;i<n;i++)
		{			
			printf("%d",arrA[i]);
		}
		printf("\t");
		for(i=0;i<n;i++)
		{			
			printf("%d",arrB[i]);
		}
		printf("\n"); */
		free(arrA);
		free(arrB);
	}
	return 0;
}