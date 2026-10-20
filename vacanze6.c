/*Leggere un array di 10 interi e verificare se al suo interno 
ci sono tutti i numeri interi tra 0 e 9.*/

#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 
#define DIM 10

int main() {
    int array[DIM], max = 9, min = 0, conta = 0;
    srand(time(NULL));

    for (int i = 0; i < DIM; i++) {
        array[i] = rand()%(max - min + 1) - min;
        scanf("%d", &array[i]);
    }

    for (int numero = 0; numero < 10; numero++){
        conta = 0; 
        for (int i = 0; i < 10; i++) {
            if (num == array[i]) {
                conta++; 
            }
        }
        if (conta == 0){
            printf ("Il numero %d non è presente nell'array\n", numero); 
        }
    }

    return 0;
}