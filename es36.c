/*Dato un array di 50 elementi riempito 
con numeri casuali tra 1 e 10, contare e mostrare q
uanti sono i valori maggiori di 8.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int array[50], conto = 0;
    srand(time(NULL));

    for (int i = 0; i < 50; i++) {
       array[i] = (rand() % 10) + 1;
       printf("%d ", array[i]);

        if (array[i] > 8) {
            conto++;
        }
    }
    printf("Risultato: Ci sono %d valori maggiori di 8.\n", conto);

    return 0;
}