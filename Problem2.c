#include<stdio.h>
int main()
{
    float bal=0.00,fee=0.50;
    int amount=0;
    scanf("%d %f",&amount,&bal);
    if((amount%5!=0)||((amount+fee)>bal))
    {
        printf("%0.2f",bal);
    }
    else
    {
        bal=bal-(amount+fee);
        printf("%0.2f",bal);
    }
    getch();
    return 0;    
}
