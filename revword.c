#include<stdio.h>
#include<string.h>
char* strrev1(char *str,int start,int end)
{
	for(;start<=end;)
	{
		str[start]^=str[end];
		str[end]^=str[start];
		str[start]^=str[end];
		++start;
		--end;
	}
	return str;
}
void strrev2(char *str,int start,int end)
{
	char temp;
	while(start<end)
	{
		temp=str[start];		
		str[start]=str[end];
		str[end]=temp;
		start++;
		end--;
	} 
}
int main()
{
	char str[]="THIS IS MY NEW CAR";
	puts(str);
	printf("\n");
	int len=strlen(str);
	//strrev2(str,0,len-1);
	strrev1(str,0,len-1);
	puts(str);
	int stw=0;
	int  endw=0;
	
	for(;endw<strlen(str);endw++)
	{
		if(str[endw]!=' ')
		{
			stw=endw;
			while((endw<strlen(str)) && str[endw]!=' ')
			{
				endw++;			
			}
			endw--;
			printf("start:  %d end: %d", stw,endw);
			strrev1(str,stw,endw);
		}
	}
	puts(str);
	return 0;
}