#include<stdio.h>
int main()
{
    int tcases,divisor=1;
    int count=0,i=0;
    scanf("%d %d",&tcases,&divisor);
    for(i=1;i<=tcases;i++)
    {
       unsigned int num=0;
       scanf("%d",&num);
       if(num%divisor==0)
         count++;
    }
    printf("%d",count);
    getch();
    return 0;
}
       
