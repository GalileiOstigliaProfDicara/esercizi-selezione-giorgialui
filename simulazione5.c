/*Leggere un array di 10 interi con dati riempiti dall'utente. 
Stampare tutti gli elementi che sono maggiori dell'elemento precedente e dell'elemento successivo. 
Il primo e l'ultimo elemento non devono essere considerati.*/

#include <stdio.h> 
#define DIM 10

int main(
    int array[DIM];
    for(int i = 0; i < DIM; i++){
        printf ("inserisci un valore: ");
        scanf("%d", &array[i]);
    }

    for (int i = 1; i < DIM - 1; i++){
        if (array[i] > array[i - 1] && )
    }
)