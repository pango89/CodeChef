#include<stdio.h>
#include<math.h>
int main()
{
    int tcases,i;
    unsigned int num;
    scanf("%d",&tcases);
    for(i=1;i<=tcases;i++)
    {
       int zeros=0,j=0;
       scanf("%d",&num);
       for(j=5;j<=num;j=j*5)
       {
          zeros=zeros+(int)(num/j);
       }
       printf("%d\n",zeros);       
    }
    getch();
    return 0;
}
    
       
