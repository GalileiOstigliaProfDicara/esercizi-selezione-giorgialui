/*Leggere in input 10 numeri e calcolare la somma*/

#include <stdio.h>

int main() {
    int numero, somma = 0;

    for(int i = 0; i < 10; i++){
        printf("inserisci un numero: ");
        scanf("%d", &numero);
    somma = somma + numero;
    }

    printf("la somma dei numeri inseriti è %d \n", somma);

return 0;
}

