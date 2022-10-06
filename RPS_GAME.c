// This GAME Developed By Souvik Ghosh.
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int home_screen();
int game_play();

int main()
{
	while(1)
	{
		home_screen();
		game_play();
	}
	
	return 0;
}

int home_screen()
{
	system("cls");
	printf("\n ****************\n");
	printf(" WELCOME RPS GAME");
	printf("\n ****************\n\n");
	printf(" 1...ROCK\n\n 2...PAPER\n\n 3...SCISSORS\n");
}

int game_play()
{
	int c_ch, u_ch;
	
	fflush(stdin);	
	printf("\n\n ENTER YOUR CHOICE: ");
	scanf("%d", &u_ch);
	
	if(u_ch == 1)
	{
		printf("\n\n Your Choice ROCK\n");
	}
	else if(u_ch == 2)
	{
		printf("\n\n Your Choice PAPER\n");
	}
	else if(u_ch == 3)
	{
		printf("\n\n Your Choice SCISSORS\n");
	}
	
	fflush(stdin);	
	srand(time(0));
	c_ch = rand() % 3;
	
	if(c_ch == 0)
	{
		printf(" Computer Choice ROCK\n");
	}
	else if(c_ch == 1)
	{
		printf(" Computer Choice PAPER\n");
	}
	else if (c_ch == 2)
	{
		printf(" Computer Choice SCISSORS\n");
	}
	
	fflush(stdin);
	
	if(c_ch == u_ch-1)
	{
		printf("\n\n\n GMAE DRAW.");
	}
	else if(c_ch == 1 && u_ch == 1)
	{
		printf("\n\n\n COMPUTER WIN.");
	}
	else if(c_ch == 2 && u_ch == 2)
	{
		printf("\n\n\n COMPUTER WIN.");
	}
	else if(c_ch == 0 && u_ch == 3)
	{
		printf("\n\n\n COMPUTER WIN.");
	}
	else
	{
		printf("\n\n\n YOU WIN");
	}
	printf("\n\n\n");
	system("pause");
}
