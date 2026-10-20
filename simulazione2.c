/*Leggere un array di 10 interi con dati riempiti dall'utente e un intero K 
generato casualmente tra 0 e 10. Stampare tutte le coppie di elementi, 
in posizioni diverse, la cui somma è uguale a K. Ogni coppia va stampata una sola volta. 
Alla fine stampare quante coppie sono state trovate.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DIM 10

int main() {
    int array[DIM], K = 0, min = 0, max = 10, conta_coppie = 0;
    srand (time(NULL));

    for (int i = 0; i < DIM; i++){
        printf ("inserisci un numero: ");
        scanf("%d", &array[i]);
    }
    K = rand() % (max - min + 1) - min;
    
    for (int i = 0; i < DIM; i++){
        for (int j = i; j < DIM; j++){
            if (array[i] + array[j] == K){
                printf("%d, %d", array[i], array[j]);
                conta_coppie++;
            }
        }
    }
    printf("le coppie trovate sono %d", conta_coppie);
    
    return 0;

}