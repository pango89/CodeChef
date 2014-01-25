#include<stdio.h>
#include<math.h>
#include<malloc.h>
//GENERATION OF PRIME USING SIEVE OF ERATOSTHENES
int *result;
int *ans;
int generatePrime(int *result,int n)
{
    int *arr;
    int k=0,i=0,j=0;
    arr=(int*)calloc(n+1,sizeof(int));
	
    for(i=0;i<=n;i++)
    {
       arr[i]=1;
       //printf("%d\t",arr[i]);
    }
    for(i=2;i<=sqrt(n);i++)
    {
       //printf("%d\t",i);
       if(arr[i]==1)
       {
          for(j=i*i;j<=n;j=j+i)
          {
             arr[j]=0;
             //printf("%d\t",j);
          }
       }
    }
    for(i=2;i<=n;i++)
    {
       if(arr[i]==1)
       {
          result[k]=i;
          k++;
       }
    }
	free(arr);
	return k;
}     
void solution()
{
	int i=0,j=0,paircount=0;
	int no_of_primes=0;
	
	no_of_primes=generatePrime(result,10000);
	ans=(int*)calloc(10004,sizeof(int));
	
	int check=0;
	for(i=0;i<no_of_primes;i++)
	{
		for(j=0;j<no_of_primes;j++)
		{
			if((result[i]+2*result[j])<=10000)
			{
				ans[result[i]+2*result[j]]++;
			}
			//check++;
		}
	}
	//printf("%dn",check);
	//printf("%d\n",paircount);
}
	
int main()
{
	int tcases=0;
	scanf("%d",&tcases);
	
	result=(int*)calloc(9999,sizeof(int));
	solution();
	while(tcases--)
	{
		int t=0;
		scanf("%d",&t);
		printf("%d\n",ans[t]);
	}
	return 0;
}
