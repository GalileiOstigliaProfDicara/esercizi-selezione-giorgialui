/*Riempi un array di 50 elementi con numeri casuali tra 0 e 50. 
Quindi mostra un messaggio che dica se nell'array i valori sono tutti diversi*/

#include <stdio.h> 
#include <stdlib.h>
#include <time.h> 
#define DIM 50

int main() {
    int numeri[DIM], conta = 0; 
    srand(time(NULL));

    for (int i = 0; i < DIM; i++){
        numeri[i] = rand() % (50 - 0 + 1) + 0;
    }
    for (int i = 0; i < DIM - 1; i++){
        for (int j = i + 1; j < DIM; j++){
           if(numeri[i] == numeri[j]){
            conta++;
         }
      }
    }
    if (conta == 0){
        printf ("non ci sono valori che si ripetono\n");
    } else {
        printf ("ci sono valori ripetuti\n");
    }
    
    return 0;
}
