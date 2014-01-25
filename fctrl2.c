#include<stdio.h>
int main()
{
    int tcases=0;
    int i=0,num=1;
    scanf("%d",&tcases);
    
    for(i=1;i<=tcases;i++)
    {
       unsigned long long int val=1;                   
       scanf("%d",&num);
       while(num>1)
       {
          val=val*num;
          num--;
       }
       printf("%d\n",val);
    }
    getch();
    return 0;
}
       
       
