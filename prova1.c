#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>
#define DIM 10 

int main (){
    int array[DIM], media = 0, somma = 0, insufficienti = 0, eccellenti = 0, somma_insuf = 0; 
    srand (time(NULL)); 

    for (int i = 0; i < DIM; i++){
        array[i] = rand () % (10 - 1 + 1) + 1; 
        somma = somma + array[i]; 
    }

    media = somma/10; 
    printf ("La media è %d\n", media); 

    for (int i = 0; i < DIM; i++){
        if (array[i] >= 9){
            eccellenti++;
        } else if (array[i] < 6){
            insufficienti++; 
            somma_insuf = somma_insuf + array[i]; 
        }
    }

    printf ("Hai preso %d voti insufficienti e la loro somma è %d, mentre hai preso %d voti eccellenti\n", insufficienti, somma_insuf, eccellenti);
    return 0;
}