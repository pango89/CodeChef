#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,j;
    int flag1=0,flag2=0,flag3=0;
    char first[1001],second[1001];
    int a1[100][26]={0},a2[100][26]={0};
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
                    scanf("%s %s",first,second);
                    for(j=0;j<strlen(first);j++)
                    {
                        a1[i][first[j]-'a']++;
                    }
                    for(j=0;j<strlen(second);j++)
                    {
                        a2[i][second[j]-'a']++;
                    }
    }
for(i=0;i<t;i++)
{
    flag1=0,flag2=0,flag3=0;
    for(j=0;j<26;j++)
    {
        if(a1[i][j]==a2[i][j])
          flag1++;
        else
        {
            if(a1[i][j]==0 || a2[i][j]==0)
              flag2++;
            else
              flag3++;
        }
    }
    if(flag1==26)
      printf("YES\n");  
    else if(flag2>0)
       printf("YES\n");
    else
       printf("NO\n");  
}                
    getch();
    return 0;
}
       
