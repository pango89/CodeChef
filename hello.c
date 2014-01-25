#include<stdio.h>
float epsilon=0.000000001;
int main()
{
	int t=0,i=0;
	int ans=0;
	float org=0.00f,disc=0.00f;
	int prev=0,plans=0,validity=0,price=0;
	scanf("%d",&t);
	while(t--)
	{
		ans=0;
		scanf("%f %d %d",&org,&prev,&plans);
		//printf("%.2f %d %d\n",org,prev,plans);
		float temp=org*prev;
		//printf("temp=%f\n",temp);
		for(i=0;i<plans;i++)
		{
			scanf("%d %f %d",&validity,&disc,&price);
			//printf("%d %.2f %d\n",validity,disc,price);
			float temp1=(price+(disc*prev*validity))/validity;
			//printf("temp1=%f\n",temp1);
			if((temp-temp1)>epsilon)
			{
				temp=temp1;
				ans=i+1;
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}