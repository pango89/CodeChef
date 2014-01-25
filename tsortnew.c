#include<stdio.h>
#include<malloc.h>
#define SIZE 1000001  
int main()
{
    int *arr,num=0,n=0,i=0,j=0;
    scanf("%d",&n);
    arr=(int *)calloc(sizeof(int),SIZE);
    for(i=0;i<n;i++)
    {
      scanf("%d",&num);
      arr[num]++;
    }
    
    for(i=0;i<SIZE;i++)
    {
       for(j=0;j<arr[i];j++)
       {
          printf("%d\n",i);
       }
    }
    getch();
    return 0;
}
