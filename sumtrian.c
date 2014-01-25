#include<stdio.h>
//#define rows 4
int main()
{
    int tcases=0,rows=0,k=0;
    int i=0,j=0,arr[100][100]={0},max=0;
    scanf("%d",&tcases);
    for(k=1;k<=tcases;k++)
    {
    scanf("%d",&rows);
    //Reading Pyramid values
    for(i=0;i<rows;i++)
    {
      for(j=0;j<=i;j++)
      {
        scanf("%d",&arr[i][j]);
      }
    }
    //Using Dynamic Programming to sum at each level
    for(i=1;i<rows;i++)
    {
      for(j=0;j<=i;j++)
      {
        if(j==0)
        {
          arr[i][j]=arr[i-1][j]+arr[i][j];
        }
        else
        {
          arr[i][j]=((arr[i-1][j]+arr[i][j])>(arr[i-1][j-1]+arr[i][j]))?(arr[i-1][j]+arr[i][j]):(arr[i-1][j-1]+arr[i][j]);
        }
        max=(max>arr[i][j])?max:arr[i][j];
      }
    }
    
    //Displaying Pyramid
//    for(i=0;i<rows;i++)
//    {
//      for(j=0;j<=i;j++)
//      {
//        printf("%d",arr[i][j]);
//      }
//      printf("\n");
//    }
      printf("%d\n",max);
      }
    
    getch();
    return 0;
}
