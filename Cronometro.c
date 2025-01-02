/*
IDEIA DE COMO FAZER UM CRONÔMETRO EM C QUE CONTA ATÉ 24 HORAS
*/

#include <locale.h>
#include <stdio.h>
#include <windows.h>

int main(){
    
    setlocale(LC_ALL, "portuguese");
    
    int sec = 0; //segundos
    int min = 0; //minutos
    int h = 0; // horas
    
    SetConsoleTitle("Cronometro");
    
    while(1){
             
             system("cls");
             printf("Cronômetro\n\n");
             printf("\t\t\t%dh:%dm:%ds\n\n", h, min, sec);
             
             
             if(sec == 60){
                    
                    sec = 0;
                    min++;
                    } else if(min == 60){
                           
                           min = 0;
                           h++;
                           } else if(hr == 24){
                                  
                                  h = 0;
                                  min = 0;
                                  sec = 0;
                                  break;
                                  }
                                  
             Sleep(1000); //tem a função de pausar a execução por um determinado tempo.
             sec++; 
             }
    
    return 0;
    }
