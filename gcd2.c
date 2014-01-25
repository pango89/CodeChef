#include<stdio.h>
char b[250];
int remain(int a)
{
	int i=0,p=0;
	for(i=0;b[i]!='\0';i++)
	{
		p=((b[i]-'0')+10*p)%a;
	}
	return p;
}
int gcd(int n1,int n2)
{
	if(n2==0)
		return n1;
	else
		return gcd(n2,n1%n2);
}
void answer()
{
	
	int a=0,rem=0;
	int hcf=0;
	scanf("%d %s",&a,b);
	if(a==0)
	{
		printf("%s\n",b);
	}
	else
	{
		rem=remain(a);
		//printf("Rem=%d\n",rem);
		hcf=gcd(a,rem);
		printf("%d\n",hcf);
	}
}
	
int main()
{
	int tcases=0;
	scanf("%d",&tcases);
	while(tcases--)
	{
		answer();
	}
	return 0;
}
