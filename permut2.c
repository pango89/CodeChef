#include<stdio.h>
#include<malloc.h>
int main()
{
    while(1){
    int n=0,i=0,*arr;
    scanf("%d",&n);
    if(n==0)
      break;
    arr=(int*)calloc(n,sizeof(int));
    for(i=0;i<n;i++)
    {
       scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
       int j=i+1;
       if(arr[(arr[i])-1]!=j)
       {
          printf("not ambiguous\n");
          break;
       }
    }
    if(i==n)
    {
        printf("ambiguous\n");
    }
}
    getch();
    return 0;
}    
    
