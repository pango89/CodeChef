//GENERATION OF PRIME USING SIEVE OF ERATOSTHENES
#include<stdio.h>
#include<math.h>
#include<malloc.h>
void generatePrime(int *result,int n)
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
}     
int main()
{
    int num=10000,i=0;
    int size=num;
    int *result;
    result=(int*)calloc(size,sizeof(int));
    generatePrime(result,num);
    for(i=0;i<size;i++)
    {
       if(result[i]!=0)
          printf("%d\n",result[i]);
    }
    getch();
    return 0; 
}
