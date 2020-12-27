#include<stdio.h>
//function to find result
/**
 *
 * @Author: Joao Pedro Marques Ayala
 * Date: 10th Oct 2020
*/
void Result(int number,int *score)
{
   int your=0,opponent=0,t=0;
   int i=0;
   while(i<number)
   {
       if(*((score+0*number)+i)<*((score+1*number)+i)){
           opponent++;
       }
       else if(*((score+0*number)+i)==*((score+1*number)+i)){
           t++;
        }
       else your++;
       i++;
   }

   if(your==opponent){
       printf("\nRESULT: THE GAME WAS TIED :(\n");
   }
   else if(your<opponent){
       printf("\nRESULT: YOU LOST THE GAME!!!\n");
   }
   else {
       printf("\nRESULT: YOU WON THE GAME!!!\n");
   }
}
//method to show current record
/**
 *
 * @Author: Joao Pedro Marques Ayala
 * Date: 10th Oct 2020
*/
void CurrentRecord(int *score,int number)
{
   int your=0,opponent=0,t=0;
   int i=0;
   while(i<number)
   {
       if(*((score+0*number)+i)<*((score+1*number)+i)){
           opponent++;
       }
       else if(*((score+0*number)+i)==*((score+1*number)+i)){
           t++;
       }
       else your++;
       i++;
   }
   printf("\nCURRENT RECORD:\nWON:%d\nLOST:%d\nTIED:%d\n",your,opponent,t);
}

//method to display all games won
/**
 *
 * @Author: Joao Pedro Marques Ayala
 * Date: 11th Oct 2020
*/
void DisplayAllWon(int *score,int number)
{
   int your=0,opponent=0,t=0;
   int i=0;
   printf("\nDISPLAYING ALL WON GAMES:\n");
   while(i<number)
   {
       if(*((score+1*number)+i)<*((score+0*number)+i))
       {
           printf("YOUR SCORE: %d\nOPPONENT SCORE: %d\n",*((score+0*number)+i),*((score+1*number)+i));
       }
       i++;
   }
}


//method to Display ALL results ordered by opponent score from low to high
/**
 *
 * @Author: Joao Pedro Marques Ayala
 * Date: 11th Oct 2020
*/

void DisplayO(int *score,int number)
{
   int f[number];
   for(int i=0;i<number;i++)f[i]=0;
   printf("\nDisplaying ALL results ordered by opponent score from low to high\n");

   for(int i=0;i<number;i++)
   {
       int min =0;
       for(int j=0;j<number;j++)
       {
           if(f[j]==0)
           {
               if(*((score+1*number)+j)<*((score+1*number)+min))min=j;
           }
       }
       printf("\nOPPONENT SCORE: %d\n",*((score+0*number)+min),*((score+1*number)+min));
       f[min]=1;
   }
}
/**
 *
 * @Author: Joao Pedro Marques Ayala
 * Date: 11th Oct 2020
*/
int main()
{
   int number_of_Games;
   int c;
   printf("ENTER NUMBER OF GAME SCORES TO INPUT: ");
   scanf("%d",&number_of_Games);

   //declaring array
   int scores[2][number_of_Games];
   //reading scores
   for(int i=0;i<number_of_Games;i++)
   {

       printf("Game:%d\nENTER YOUR SCORES: ",(i+1));
       scanf("%d",&scores[0][i]);
       printf("ENTER OPPONENT SCORES: ");
       scanf("%d",&scores[1][i]);
   }

   repeat:
       // Displaying MENU:
       printf("\n*******************************************************************\n");
       printf("**                             MAIN MENU                             **");
       printf("\n*******************************************************************\n");
       printf("\n1) Enter game result\n");
       printf("\n2) Current Record (# of wins and # of losses and # of ties)\n");
       printf("\n3) Display ALL results from all games WON\n");
       printf("\n4) Display ALL results ordered by opponent score from low to high.\n");
       printf("\n5) Quit\n");
       printf("\nEnter option: ");
       scanf("%d",&c);
       if(c==1)
       {
           Result(number_of_Games,(int *)scores);
       }
       else if(c==2)
       {
           CurrentRecord((int *)scores,number_of_Games);

       }
       else if(c==3)
       {
           DisplayAllWon((int *)scores,number_of_Games);
       }
       else if(c==4)
       {
           DisplayO((int *)scores,number_of_Games);
       }
       else if(c==5)
       {
           goto stop;
       }
       goto repeat;
   stop:
   return 0;
}