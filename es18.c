/*Scrivere un programma che legge 2 orari 
in ore minuti e secondi e dice quale viene prima dei due. 
(Si risolva l’esercizio senza trasformare tutto in secondi).*/

#include <stdio.h>

int main(){
     int ore1, minuti1, secondi1, ore2, minuti2, secondi2;
    printf("inserisci l'ora del primo orario: ");
    scanf ("%d", &ore1);
    printf("inserisci i minuti del primo orario: ");
    scanf ("%d", &minuti1);
    printf("inserisci i secondi del primo orario: ");
    scanf ("%d", &secondi1);
    printf("inserisci l'ora del secondo orario: ");
    scanf ("%d", &ore2);
    printf("inserisci i minuti del secondo orario: ");
    scanf ("%d", &minuti2);
    printf("inserisci i secondi del secondo orario: ");
    scanf ("%d", &secondi2);

    if(ore1 < 24 && ore1 >= 0 && minuti1 < 60 && minuti1 >= 0 && secondi1 < 60 && secondi1 >= 0 && ore2 < 24 && ore2 >= 0 && minuti2 < 60 && minuti2 >= 0 && secondi2 < 60 && secondi2 >= 0){
        if(ore1 == ore2 && minuti1 == minuti2 && secondi1 == secondi2){
            printf("i due orari sono uguali!");
        } else {
            if(ore1 > ore2){
                printf("il primo orario viene dopo il secondo");
            } else {
                if (ore1 == ore2 && minuti1 > minuti2){
                    printf ("il primo orario viene dopo il secondo");
                } else {
                    if (ore1 == ore2 && minuti1 == minuti2 && secondi1 > secondi2){
                        printf ("il primo orario viene dopo il secondo");
                    } else {
                        printf ("il secondo orario dopo il primo ");
                    
                } else {
                    printf("orario non valido!");
            }
        }  
    }
    return 0;
}
}
   
