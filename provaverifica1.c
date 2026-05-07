/*Scrivi un programma in C che chieda all’utente di 
inserire 10 numeri interi salvandoli in un array. 
Il programma deve stampare il numero massimo, il numero minimo, quanti numeri sono pari.*/

#include <stdio.h> 
#define DIM 10

int main () {
    int array[DIM], massimo = 0, minimo = 0, pari = 0;
    for (int i = 0; i < DIM; i++){
        printf ("riempi l'array con 1 numero: ");
        scanf("%d", &array[i]);
    }
    massimo = array[0];
    minimo = array[0];

    for (int i = 1; i < DIM; i++){
        if(array[i] > massimo){
            massimo = array[i];
        }
        if(array[i] < minimo){
            minimo = array[i];
        }
    }
    for(int i = 0; i < DIM; i++){
        if(array[i] %2 == 0){
            pari++;
        }

    }
    printf ("il numero minore è %d, il numero maggiore è %d\n", minimo, massimo);
    printf ("hai inserito %d numeri pari\n", pari);

    return 0;
}