/*Scrivere i  numeri naturali compresi tra 1 e un numero letto in input estremi esclusi.*/

#include <stdio.h>

int main() {
    int num;

    do {
    printf("Inserisci un numero: ");
    scanf("%d", &num);

    if(num >= 1){
        printf("inserisci un numero più grande: \n");
    }
}
    while(num <= 1);
    for (int i = 2; i < num; i++) {
        printf("%d\n", i);
    }

    return 0;
}