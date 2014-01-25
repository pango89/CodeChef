#include<stdio.h>
void infixtopostfix()
{
    char arr[401];
    char stack[401];
    scanf("%s",&arr);    
    int len=strlen(arr);
    int i=0,j=-1;
    for(i=0;i<len;i++)
    {
       
       char ch=arr[i];
       if(ch=='('||ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='^')
       {
          j++;
          stack[j]=ch;
          
       }
       if(ch>='a' && ch<='z')
       {
          printf("%c",ch);
       }
       if(ch==')')
       {
          //j--;
          while(stack[j]!='(')
          {
             printf("%c",stack[j]);
             j--;
             
          }
          j--;
       }
    }
}
int main()
{
    int tcases=0,k=0;
    scanf("%d",&tcases);
    for(k=1;k<=tcases;k++)
    {
       infixtopostfix();
       printf("\n");
    }
    getch();
    return 0;
}
