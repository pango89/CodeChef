#include<stdio.h>
int main()
{
    int t=0,i=0;
    long int n[10000];
    long int output[10000];
    
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
       scanf("%d",&n[i]);
       if(n[i]%2==0)
       output[i]=n[i];
       else
       output[i]=n[i]-1;
    }
    for(i=0;i<t;i++)
    {
                    printf("%d\n",output[i]);
    }    
    getch();
    return 0;
}             
