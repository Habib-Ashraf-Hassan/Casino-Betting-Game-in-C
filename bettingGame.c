#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int cash = 100; // Global variable cash ; the cash the player will start with

void playGame(int bet){
    char cards[3] = {'J', 'Q', 'K'};
    printf("Shuffling.......\n");
    srand(time(NULL));
    int i;
    //Shuffling:
    for(i=0; i<5; i++){
        //Generating a random number from 0 to 2
        int x = rand()%3;
        int y = rand()%3;

        //swapping:
        int temp = cards[x];
        cards[x] = cards[y];
        cards[y] = temp;

    }
    int playerGuess;
    do{
        printf("Guess the position of the queen 1,2 or 3 ONLY\n");
        scanf("%d",&playerGuess);
    }
    while(playerGuess<=0 || playerGuess>3);
    if(cards[playerGuess - 1] == 'Q'){
        cash += 2*bet;
        printf("You WON the bet! result :---%c %c %c--- Total cash is now = %d\n", cards[0], cards[1], cards[2], cash);

    }
    else{
        cash -= bet;
        printf("You LOST the bet! result :---%c %c %c--- Total cash is now = %d\n", cards[0], cards[1], cards[2], cash);

    }
}
int main(){
    int bet;
    int counter = 1;
    int choice = 1;
    printf("*****WELCOME TO VIRTUAL CASINO GAME*******\n");
    printf("Your cash is: ksh%d\n", cash);

    // Player cannot exit from the game unless cash is ksh0 OR played +4 attempts and entered choice 0 to QUIT
    while(cash > 0 && choice == 1){
        if(counter > 4){
            printf("Do you still want to continue ?\nEnter 1 :to CONTINUE\n 0 or any other number(except 1): To STOP\n");
            scanf("%d", &choice);
            if(choice != 1){
                break;
            }
        }
        printf("Enter your bet in ksh:");
        scanf("%d", &bet);
        if(bet == 0){
            printf("SORRY !! Please enter your bet again! Bet must be greater than ksh 0!\n");
            printf("\n***************************\n");
            
        }
        else if(bet > cash){
            printf("You have INSUFFICIENT cash to bet the specified amount you entered(Bet MUST be Less or equal to cash) ....Your cash is: ksh %d\n", cash);
            printf("\n***************************\n");
        }
        else{
            playGame(bet);
            counter += 1;
            printf("\n***************************\n");
        }
    }

    printf("----------END OF THE GAME-----------\n");
    printf("----------TOTAL CASH WON = ksh%d-----------\n", cash);

}