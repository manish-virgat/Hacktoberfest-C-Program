#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void guesser(int difficulty);

int main(){
    int choice;
    system("cls");
    printf("----            Welcome to the number guesser game          ----\n");
    printf("----              Please choose your difficulty:            ----\n\n");
    printf("                  1) EASY - between 1 and 10\n");
    printf("                  2) MEDIUM - between 1 and 50\n");
    printf("                  3) HARD - between 1 and 100\n");
    scanf("%d", &choice);
   
    if(choice < 1 || choice > 3){
        printf("Invalid option please try again! ");
        system("pause");
        main();
    }else{
        guesser(choice);
    }
        
    return 0;
}

void guesser(int difficulty){
    srand(time(0));
    int randomNum, num;
    int attempts = 3;

    if(difficulty == 1){
        randomNum = rand() % 10;
    }else if(difficulty == 2){
        randomNum = rand() % 50;
    }else if(difficulty == 3){
        randomNum = rand() % 100;
    }
    while (attempts != 0){
        system("cls");
        printf("\n-----       You have %d attempts        -----\n\n", attempts);
        printf("Please choose a number within your chosen range: ");
        scanf("%d", &num);

        if(num < randomNum){
            printf("\n%d is Too low, try again\n\n", num);
        }else if(num > randomNum){
            printf("\n%d is Too High, try again\n\n", num);
        }else{
            printf("\nCorrect! ");
            break;
        }
        system("pause");
        attempts--;
    }
    printf("The number was %d\n\n", randomNum);
    system("pause");
    return;
}
