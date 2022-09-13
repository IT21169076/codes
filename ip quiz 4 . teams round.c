#include <stdio.h>

int main (void)
{
	int team1[3] = { 8, 3, 7}, team2[3] = {0}  , i , j = 0 , k = 0 ;
	
	printf("team1\n");
	
	for(i = 0; i < 3; i++)
	{
		printf("%d  ", team1[i]);
	}
	
	printf("\nteam2\n");
	
	for(i = 0; i < 3; i++)
	{
		scanf("%d", &team2[i]);
	}
	
	printf("\nWinners\n");
	
	for(i = 0; i < 3; i++)
	{
		if(team2[i] > team1[i]) 
		{
			printf("Round %d : team2\n", i + 1);
			j++;
		}
		else
		{
			printf("Round %d : team1\n", i + 1);
			k++;
		}
	}
	
	if(k>j)
	{
		printf("Overall winner : team1");
	}
	else
	{
		printf("Overall winner : team2");
	}
}


