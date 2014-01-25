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
    for(i=rows-2;i>=0;i--)
    {
	  for(j=0;j<=i;j++)
         arr[i][j]+=(arr[i+1][j]>arr[i+1][j+1])?arr[i+1][j]:arr[i+1][j+1];       
	}
 
      printf("%d\n",arr[0][0]);
      }
    
    return 0;
	
}  