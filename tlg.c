#include<stdio.h>
int main()
{
	int player1=0,player2=0;
	int max_lead=0;
	int rounds=0;
	int i=0;
	int winner=0;
	scanf("%d",&rounds);
	for(i=1;i<=rounds;i++)
	{
		int p1=0,p2=0;
		int curr_lead=0;
		scanf("%d %d",&p1,&p2);
		player1+=p1;
		player2+=p2;
		if(player1>player2)
		{
			curr_lead=player1-player2;
			if(curr_lead>=max_lead)
			{
				max_lead=curr_lead;
				winner=1;
			}
		}
		else
		{
			curr_lead=player2-player1;
			if(curr_lead>=max_lead)
			{
				max_lead=curr_lead;
				winner=2;
			}
		}
	}
	printf("%d %d",winner,max_lead);
	getch();
	return 0;
}
