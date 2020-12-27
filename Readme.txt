Design Tool: Pseudocode

*** main(){
    1. Declare Integer Variable number_of_Games Taking Range From User;
    2. Declare Integer Variable C for Taking User Choice;
    3. Declare Integer 2D Array Score[Number of Team][Team Scores];
       3.1 Initialize a For Loop
       3.2 Take Score[Team1][number_of_Games];
       3.3 Take Score[Team2][number_of_Games];
    4. Display Menu Driven Lines;
    5. Take Choice from User, Store Choice int Variable C;
    6. if Choice == 1
       6.1 Call Function Result();
    7. Else if Choice == 2
       7.1 Call Function CurrentRecord();
    8. Else if Choice == 3
       8.1 Call Function DisplayAllWon();
    9. Else if Choice == 4
       9.1 Call Function DisplayO();
    10. Else if Choice == 5
       10.1 Return 0;
}

*** void CurrentRecord(pointer, Number of Wins){
    1. Declare Integer Your = 0, Opponent = 0, Ties = 0;
    2. Initialize WHILE Loop( i < Number of Wins )
       2.1 IF(*(
               (score+0*number)+i
           )
           <*
           (
               (score+1*number)+i)
           )
           2.1.1 Increment Opponent Wins by 1;

       2.2 ELSE IF (*(
           (score+0*number)+i) If your Points
           ==*                 Equal to Opponent
           ((score+1*number)+i
           ))
            2.1.2 Increment Ties by 1;

       2.3 ELSE Increment Your Wins by 1;

       2.4 Display Current Record: WON: , LOST: ,TIED: ;
}

*** void DisplayAllWon(pointer, Number of Wins){
    1. Declare Integer Your = 0, Opponent = 0, Ties = 0;
    2. Print Display All the Wins;
    3. Initialize WHILE Loop( i < Number of Wins )
       3.1 IF YOUR SCORE < Opponent
           3.1.1 Display the Result
}

*** void DisplayO(pointer, Number of Wins){
    1. Declare Integer Array and Store Score
    2. Use For Loop to Enter Value in Array
    3. We Need to SORT the Array For Ascending Order
    4. Use For Loop
       4.1 Use Sorting Method
    5. Display The Sorted Result
}

*** void Result(pointer, Number of Wins){
    1. Declare Integer Your = 0, Opponent = 0, Ties = 0;
    2. Initialize WHILE Loop( i < Number of Wins )
       2.1 IF(*(
               (score+0*number)+i
           )
           <*
           (
               (score+1*number)+i)
           )
           2.1.1 Increment Opponent Wins by 1;

       2.2 ELSE IF (*(
           (score+0*number)+i) If your Points
           ==*                 Equal to Opponent
           ((score+1*number)+i
           ))
            2.1.2 Increment Ties by 1;

       2.3 ELSE Increment Your Wins by 1;

       2.4 Display Current Record: WON: , LOST: ,TIED: ;

    3. If Your == Opponent
       3.1 Display THE GAME WAS TIED
    4. If Your < Opponent
       3.2 Display THE GAME WAS LOST
    5. Else
       3.2 Display YOU WIN THE GAME
}