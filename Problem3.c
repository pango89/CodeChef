#include<stdio.h>
int main()
{
    int n=0,i,j,count=0;
    int output[40];
    char ch;
    char arr[40][100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
              scanf("%s",arr[i]);
              count=0;
              for(j=0;j<100;j++)
              {
                                ch=arr[i][j];
                                if(ch=='\0')
                                            break;
                                if(ch=='A'||ch=='D'||ch=='O'||ch=='P'||ch=='Q'||ch=='R')
                                {
                                     count=count+1;
                                }
                                if(ch=='B')
                                {
                                     count=count+2;
                                }
              }
              output[i]=count; 
    }
    for(i=0;i<n;i++)
    {
                    printf("%d\n",output[i]);
    }    
    getch();
    return 0;
}
    
