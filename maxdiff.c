#include<stdio.h>
#include<stdlib.h>
int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}
void difference()
{
    int n=0,k=0,i=0;
    int sum1=0,sum2=0;
    int arr[101]={0};
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
       scanf("%d",&arr[i]);
       sum1=sum1+arr[i];
    }
    qsort (arr,n,sizeof(int),compare);
    if((n-k)<k)
    {
       for(i=0;i<(n-k);i++)
       {
          sum2=sum2+arr[i];
       }
    }
    else
    {
        for(i=0;i<k;i++)
       {
          sum2=sum2+arr[i];
       }
    }
        
    printf("%d\n",abs((sum1-2*sum2)));    
    
}
int main()
{
    int tcases=0,k=0;
    scanf("%d",&tcases);
    for(k=1;k<=tcases;k++)
    {
       difference();
    }
    getch();
    return 0;
}
