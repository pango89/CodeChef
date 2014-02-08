#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int t=0,ans=0;
    char str1[10001],str2[10001];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s %s",&str1,&str2);
        int count[75]={0};
        ans=0;
        for(int i=0;i<strlen(str1);i++)
        {
            count[str1[i]-48]++;
        }
        for(int i=0;i<strlen(str2);i++)
        {
            if(count[str2[i]-48]>0)
            {
                ans++;
                (count[str2[i]-48])--;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
