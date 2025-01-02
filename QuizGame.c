#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    char questions[][100] = {"1. Who created C language and what year did it debut?: ", 
                             "2. COBOL, one of the first complex programming languages\n   for computers, was created by: ", 
                             "3. Who created the fisrt algorithm in history?: ", 
                             "4. One of the first personal computers, debuted in 1975: ", 
                             "5. World's first created programming language was: "};

    char options[][100] = {"A. Dennis Ritchie, 1972", "B. Alan Turing, 1968", "C. Anders Hejlsberg, 1998", "D. Bjarne Stroustrup, 1983",
                           "A. Tim Berners-Lee", "B. Linus Torvalds", "C. Dorothy Vaughan", "D. Grace Hopper",
                           "A. Lenore Blum", "B. Sue Black", "C. Von Neumann", "D. Ada Lovelace",
                           "A. IBM PC", "B. Altair 8800", "C. Macintosh", "D. ENIAC",
                           "A. LISP", "B. Fortran", "C. Assembly", "D. COBOL"};
                        
    int score = 0;
    char answers[5] = {'A', 'D', 'D', 'B', 'C'}, guess;
    int numberOfQuestions = sizeof(questions)/sizeof(questions[0]);

    //system("cls");

    for(int i = 0; i < numberOfQuestions; i++){
        system("cls");
        printf("************************************************************\n");
        printf("%s\n", questions[i]);
        printf("************************************************************\n");

        for(int j = (i*4); j < (i*4)+4; j++){
            printf("%s\n", options[j]);
        }

        printf("\nGuess: ");
        scanf("%c", &guess);
        fflush(stdin);
        printf("\n");

        guess = toupper(guess);

        if(guess == answers[i]){
            system("cls");
            printf("| CORRECT |\n\n");
            system("pause");
            score++;
        }
        else{
            system("cls");
            printf("| WRONG |\n\n");
            system("pause");
        }
    }

    system("cls");
    printf("\n*********************\n");
    printf(" Final score: %d/%d\n", score, numberOfQuestions);
    printf("*********************\n\n");

    return 0;
}