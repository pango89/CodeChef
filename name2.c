#include<stdio.h>
#include<string.h>
//char A[25005],B[25005];
char str1[250005],str2[250005];
void solution(char *arr1,char*arr2,int len1,int len2)
{
	int i=0,j=0,count=0;
	for(i=0;i<len1;i++)
	{
		for(;j<=(len2-len1+count);)
		{
			if(arr2[j]!=arr1[i])
			{
				j++;
			}
			else
			{
				count++;
				j++;
				break;
			}
		}
		if(count==i+1)
			continue;
		else
		{
			printf("NO\n");
			break;
		}
	}
	if(count==len1)
		printf("YES\n");
}
int main()
{
	int t=0;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s %s",&str1,&str2);
		if(strlen(str1)<strlen(str2))
			solution(str1,str2,strlen(str1),strlen(str2));
		else
			solution(str2,str1,strlen(str2),strlen(str1));
	}
	return 0;
}
		