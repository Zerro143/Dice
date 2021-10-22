/******************************************
 * Title: dummy
 * Course: dummy
 * @Author: dummy
 * Lab Section: dummy
 * Professor: dummy
 * Due date: dummy
 * Submission Date: dummy
******************************************/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define WON 1 
#define LOST 0

int rollDice(void)
{
   
    return (rand() % 6 )+1;
}
int checkWinner(int score)
{
    if(score==7 || score==11)
       return WON;
    
    if(score==2 || score==3 || score==12 )
        return LOST;    
    return -1;
}   
int playGame(void)
{
    
    int dice1,dice2,pm,currentSum,rollNum;
    pm = 0;
    printf("-------------------------------------------------------------------------------------\n");
    printf("Roll Num \t Dice#1 \t Dice#2 \t Total Roll \t Point Match \n");
    printf("-------------------------------------------------------------------------------------\n");

    for (rollNum=1;1;rollNum++)
    {
        dice1 = rollDice();
        dice2 = rollDice();
        currentSum = (dice1 + dice2);
        if (rollNum==1)pm = currentSum;
        printf("\t %d \t \t%d \t \t%d \t \t%d \t \t%d\n",
            rollNum, dice1, dice2, currentSum, pm);

        if(checkWinner(currentSum)==WON)
        {
            printf("\nYou roll %d and win %s!!!\n",
                currentSum, (rollNum==1)?" on First Try":"");
            return WON;
        }
        if(checkWinner(currentSum)==LOST)
        {
            printf("\n You roll %d and you Loose %s!!!\n",
                currentSum, (rollNum==1)?" on First Try":"");
            return LOST;    
        }
        currentSum = rollDice() + rollDice();
        if(checkWinner(currentSum)==WON || currentSum==pm)
        {
            printf("\nSorry, Computer roll's %d and you Loose %s!!!\n",
                currentSum, (rollNum==1)?" on First Try":"");
        }
        if(checkWinner(currentSum)==LOST)
        {
            printf("\nSorry, Computer roll's %d and you Win %s!!!\n",
                currentSum, (rollNum==1)?" on First Try":"");
            return LOST;    
        }
    }
    
   
}

int main()
{
    srand(time(0));
    printf("%d ",playGame());
    return EXIT_SUCCESS;
}
