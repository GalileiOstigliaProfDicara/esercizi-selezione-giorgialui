/*Leggere in input 10 numeri e calcolare la somma e la media*/

#include <stdio.h>

int main() {
    int numero, somma = 0;
    float media;


    for(int i = 0; i < 10; i++){
        printf("inserisci un numero: ");
        scanf("%d", &numero);
    somma = somma + numero;
    }
    media = (float)somma / 10;
    printf("la somma dei numeri inseriti è %d \n", somma);
    printf("la media dei numeri inseriti è %.2f \n", media);

return 0;
}

