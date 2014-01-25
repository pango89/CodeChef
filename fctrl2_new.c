#include<stdio.h>
int product_array(int arr[],int m,int multiplier)
{
    int temp=0,i;
    for(i=0;i<m;i++)
    {
       int inter=multiplier*arr[i]+temp;
       temp=inter/10;
       arr[i]=inter%10;
    }
    int j=i-1;
    while(temp>0)
    {
      arr[++j]=temp%10;
      temp=temp/10;
      m++;
    }
    return m;  
}   
void factorial()
{
    int array[200]={0},i,number,k=0;
    scanf("%d",&number);
    int var=number;
    while(var>0)
    {
       array[k++]=var%10;
       var=var/10;
    }

    int num=k;
    while(number>1)
    {
      number=number-1;
      num=product_array(array,num,number);      
    }
      
    for(i=0;i<num;i++)
    printf("%d",array[num-i-1]);
    printf("\n");
    //printf("\n%d",num);
}
int main()
{
    int tcases=0,l=0;
    scanf("%d",&tcases);
    for(l=1;l<=tcases;l++)
    {
      factorial();
    }
    getch();
    return 0;
}
       
       
