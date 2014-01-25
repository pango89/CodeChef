#include<stdio.h>
#include<malloc.h>
void swap(int *a,int *b)
{
     int t=*a;*a=*b;*b=t;
}
int partition(int arr[],int left,int right,int pivotindex)
{
    int pivotvalue=arr[pivotindex];
    swap(&arr[pivotindex],&arr[right]);
    int storeindex=left;
    int i=0;
    for(i=left;i<right;i++)
    {
       if(arr[i]<=pivotvalue)
       {
          swap(&arr[i],&arr[storeindex]);
          storeindex++;
       }
    }
    swap(&arr[storeindex],&arr[right]);
    return storeindex;
}
void quicksort(int arr[],int left,int right)
{
     if(left<right)
     {
        int pivotindex=(left+right)/2;
        int newpivotindex=partition(arr,left,right,pivotindex);
        quicksort(arr,left,newpivotindex-1);
        quicksort(arr,newpivotindex+1,right);
     }
}        
int main()
{
    int *arr[2],n=0,i=0;
    scanf("%d",&n);
    arr[0]=(int *)calloc(sizeof(int),n);
	arr[1]=(int *)calloc(sizeof(int),n);
    for(i=0;i<n;i++)
    {
      scanf("%d %d",&arr[0][i],&arr[1][i]);
    }
    quicksort(*arr,0,n-1);
    for(i=0;i<n;i++)
    {
      printf("%d %d\n",arr[0][i],arr[1][i]);
    }
    getch();
    return 0;
}
