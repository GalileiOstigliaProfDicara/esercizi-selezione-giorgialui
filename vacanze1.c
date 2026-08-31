/*Leggere un array di 10 posizioni e stampare il numero che compare più volte
all'interno dell'array, qualora ci siano più numeri che compaiono lo stesso numero di volte 
stampare quello che compare per primo*/

#include <stdio.h>

int main() {
    int array[10], volte = 0, num, max = 0;

    printf("Inserisci 10 numeri:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < 10; i++) {
        volte = 0;   
        for (int j = 0; j < 10; j++) {
            if (array[i] == array[j]) {
                volte++;
            }
        }

        if (volte > max) {
            max = volte;
            num = array[i];
        }
    }

    printf("Il numero che compare più volte è %d e compare %d volte.\n", num, max);

    return 0;
}