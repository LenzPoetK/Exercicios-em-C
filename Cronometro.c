/*
TENTATIVA DE FAZER UM CONTADOR
*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    
    setlocale(LC_ALL, "portuguese");
    
    int sec = 0; //segundos
    int min = 0; //minutos
    int hr = 0; // horas
    
    SetConsoleTitle("Cronometro");
    
    while(1){
             
             system("cls");
             printf("Cronômetro\n\n");
             printf("\t\t\t%dh:%dm:%ds\n\n", hr, min, sec);
             
             
             if(sec == 60){
                    
                    sec = 0;
                    min++;
                    
                    } else if(min == 60){
                           
                           min = 0;
                           hr++;
                           
                           } else if(hr == 24){
                                  
                                  hr = 0;
                                  
                                  }
                                  
             Sleep(1000); //tem a função de pausar a execução por um determinado tempo.
             sec++; 
             
             }
    
    system("pause");
    return 0;
    }
