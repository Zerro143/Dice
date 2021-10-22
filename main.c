
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

/************************************************************
Function Name: menu
Purpose: Show menu and take user's choice.
Function in parameters: void
Function out parameters: int
Version: 1
Author: 
*************************************************************/

int menu()
{
    char choice[20];
    printf("\t Roll The Dice[Enter] Quit[Q] \n");
    printf("Please choose one of the following actions:\n");
    printf("1- Register a student in a course\n");
    printf("2- Drop a student's course\n");
    printf("3- Print registration table\n");
    printf("4- Quit\n");
    printf("Please enter action number: ");
    
    scanf("\n%c", &choice);
    return choice;
}

int main()

{
int dice_1 = 2 ;//rand() % 6 + 1;
int dice_2 = 2 ;//rand() % 6 + 1;
char q1;
char c = 'Q';
printf("Roll The Dice[Enter] Quit[Q]\n");
q1 = getchar();
if (q1 = c)
{
    printf("Thanks For playing our game\n");
}
else{
printf("---------------------------------------------------------------/n");
printf("Roll Num \t Dice#1 \t Dice#2 \t Total Roll \t Point Match \n");
printf("---------------------------------------------------------------/n");
printf("1 /t %d /t %d /t 1 /t 1",dice_1,dice_2);

}

return 0;
}