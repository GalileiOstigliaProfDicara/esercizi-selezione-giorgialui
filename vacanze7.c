/*Leggere un array di interi di 8 posizioni e verificare se contiene tutti valori diversi.*/

#include <stdio.h>

int main() {
    int array[8], conta = 0;

    printf("Inserisci 8 numeri:\n");
    for (int i = 0; i < 8; i++) {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < 8; i++) {
        for (int j = i + 1; j < 8; j++) {
            if (array[i] == array[j]) {
                conta = 1;
            }
        }
    }

    if (conta == 0) {
        printf("L'array contiene tutti valori diversi.\n");
    } else {
        printf("L'array NON contiene tutti valori diversi.\n");
    }

    return 0;
}