/*Scrivere i  numeri naturali compresi tra 1 e un numero letto in input estremi esclusi.*/
#include <stdio.h>

int main() {
    int num, i;

    printf("Inserisci un numero: ");
    scanf("%d", &num);

    i = 2;

    while(i < num) {
        printf("%d ", i);
        i++;
    }

    return 0;
}