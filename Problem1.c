#include<stdio.h>
int main()
{
    int num=0;
    while(scanf("%d",&num))
    {
                           if(num!=42)
                           printf("%d\n",num);
                           else
                           exit(0);
    }
    return 0;
}
