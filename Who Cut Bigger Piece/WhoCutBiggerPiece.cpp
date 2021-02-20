#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>
int main(void)
{
	int random,firstplayer,secondplayer;
	char ans='1',any='1';
	while(ans=='1')
	{
	printf("Who cuts bigger piece of tube, wins that tour. Who become 5, wins the game.\n");
	printf("Good luck :)\n");
	for(int newline=0;newline<4;newline++)
	{
		printf("\n");
	}
	srand(time(NULL)); 
	random=rand()%1000 + 99;
	int first_win=0,second_win=0,newline=0,tour=0;
	int first=random;
	int second=random;
	while(((first_win<5)&&(second_win<5))&&(any=='1'))
	{
	
	if(first<=0)
	{
		printf("Second player won.\n");
		return 0;
	}
	if(second<=0)
	{
		printf("First player won.\n");
		return 0;
	}
	printf("The tube's lenght is: %d\n",first);
	printf("First player cuts: ");
	scanf("%d",&firstplayer);
	for(newline=0;newline<50;newline++)
	{
		printf("\n");
	}
	first=first-firstplayer;
	
	printf("The tube's lenght is: %d\n",second);
	printf("Second player: ");
	scanf("%d",&secondplayer);
	for(newline=0;newline<50;newline++)
	{
		printf("\n");
	}
	second=second-secondplayer;
	if(secondplayer>=firstplayer)
	second_win++;
	
	if(secondplayer<=firstplayer)
	first_win++;
	
	tour++;
	printf("Tour %d results\n",tour);
	printf("First player cut %d , Second player cut %d \n",firstplayer,secondplayer);
	printf("First player %d , Second player %d \n",first_win,second_win);
	for(newline=0;newline<4;newline++)
	{
		printf("\n");
	}
	printf("Press 1 to continue.");
	scanf(" %c",&any);
	for(newline=0;newline<30;newline++)
	{
		printf("\n");
	}
	
	//for(newline=0;newline<30;newline++)
	//{
	//	printf("\n");
	//}	
	}	
	if(first_win>second_win)
	printf("First player won.\n");
	else if(second_win>first_win)
	printf("Second player won.\n");
	else
	printf("Ended in a draw.\n");
	printf("If you want to play again enter 1.\n");
	scanf("%c",&ans);
	}
return 0;	
}
