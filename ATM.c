#include<stdio.h>
int main()
{
    float bal=0.00;
    int debit=0;
    scanf("%d %f",&debit,&bal);
    if(debit%5==0)
    {
       if(debit+0.5<=bal)
       {
          bal=bal-(debit+0.5);
          printf("%.2f\n",bal);
       }
       else
       {
          printf("%.2f\n",bal);
       }
    }
    else
    {
        printf("%.2f\n",bal);
    }
    getch();
    return 0;
}
        
