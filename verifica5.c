/*Scrivi un programma in C che chieda all'utente di inserire 8 numeri interi salvandoli in un array. 
Il programma deve stampare la media dei valori inseriti, 
quanti numeri sono maggiori della media e quanti numeri sono negativi.*/

#include <stdio.h> 

int main () {
    int array[8], media = 0, maggiori = 0, negativi = 0, somma = 0;
    
    for (int i = 0; i < 8; i++){
        printf("inserisci un numero: ");
        scanf ("%d", &array[i]);
        somma = somma + array[i];
    }
    media = somma/8;
    printf("la media è %d\n", media);
    for (int i = 0; i < 8; i++){
        if (array[i] > media){
           maggiori ++;
        } else if (array[i] < 0){
            negativi ++;
        }
    }
    printf("%d sono i numeri maggiori della media, mentre %d sono i numeri negativi\n", maggiori, negativi);

    return 0;
}