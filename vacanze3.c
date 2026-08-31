/*Leggere un array di interi con 8 numeri e dire quali e quanti di questi sono primi.*/

#include <stdio.h>

#include <stdio.h>

int main() {
    int array[8], primi = 0, divisore, conta = 0, numero;

    printf("Inserisci 8 numeri:\n");
    
    for (int i = 0; i < 8; i++) {
        scanf("%d", &array[i]);
    }

    printf("I numeri primi sono: ");

    for (int i = 0; i < 8; i++) {
        conta = 0;
        if (array[i] >= 2) {
            for (divisore = 1; divisore <= array[i]; divisore++) {
                if (array[i] % divisore == 0) {
                    conta++;
                }
            }

            if (conta == 2) {
                printf("%d ", array[i]);
                primi++;
            }
        }
    }
    
    printf("\nIl totale dei numeri primi è %d\n", primi);

    return 0;
}