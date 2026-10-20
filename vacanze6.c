/*Leggere un array di 10 interi e verificare se al suo interno 
ci sono tutti i numeri interi tra 0 e 9.*/

#include <stdio.h>

int main() {
    int array[10], conta = 0, numero = 0;

    printf("Inserisci 10 numeri:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &array[i]);
    }

    for (numero = 0; numero < 10; numero++) {
        for (int i = 0; i < 10; i++) {
            if (array[i] == numero) {
                conta++; 
            }
        }
    }

    if (conta == 10) {
        printf("L'array contiene tutti i numeri tra 0 e 9\n");
    } else {
        printf("L'array NON contiene tutti i numeri tra 0 e 9\n");
    }

    return 0;
}