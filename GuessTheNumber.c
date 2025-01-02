#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    //Utiliza a hora atual como "semente" para o randomizador.
    srand(time(0));

    const int MIN = 1;
    const int MAX = 100;
    int guess;
    int guesses = 0;
    int answer = (rand() % MAX) + MIN;

    while(answer != guess){

        system("cls");
        printf("Enter a number: ");
        scanf("%d", &guess);

        if(guess > answer){
            system("cls");
            printf("Too high!\n\n");
            system("pause");
        }
        else if(guess < answer){
            system("cls");
            printf("Too low!\n\n");
            system("pause");
        }
        else{
            system("cls");
            printf("*******************************\n");
            printf("       CORRECT ANSWER\n");
            printf("      CONGRATULATIONS!!!\n");
            printf("-------------------------------\n");
        }

        guesses++;
    }

    printf("          Answer: %d\n", answer);
    printf("          Guesses: %d\n", guesses);
    printf("*******************************\n\n");

    return 0;
}