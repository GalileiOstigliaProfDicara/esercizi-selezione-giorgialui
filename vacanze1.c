/*Leggere un array di 10 posizioni e stampare il numero che compare più volte
all'interno dell'array, qualora ci siano più numeri che compaiono lo stesso numero di volte 
stampare quello che compare per primo*/

#include <stdio.h>

int main() {
    int array[10];

    for (int i = 0; i < 10; i++) {
        printf("inserisci il valore in posizione %d: ", i)
        scanf("%d", &array[i]);
    }
    int conta, num_max, conta_max = 0;
    for (int i = 0; i < 10; i++) {
        conta = 0;
        for (int j = 0; j < 10; j++) {
            if (array[i] == array[j]) {
                conta++;
            }
        }

        if (conta > conta_max) {
            num_max = array[i];
            conta_max = conta;
    }

    printf("Il numero che compare più volte è %d e compare %d volte.\n", num, max);

    return 0;
}
