/*Leggere due array di interi di 5 posizioni ognuno dei due già ordinato in ordine crescente,
fonderli in un nuovo array che dovrà essere anch’esso ordinato con ordine crescente.
Ad esempio array1 0,2,3,7,8 array2 1,4,5,9,12 arrayfuso 0,1,2,3,4,5,7,8,9,12.*/


#include <stdio.h>

int main() {
    int array1[5], array2[5], array[10], conta, numero;

    printf("Inserisci 5 numeri per il primo array (ordinati):\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &array1[i]);
    }

    printf("Inserisci 5 numeri per il secondo array (ordinati):\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &array2[i]);
    }

    for (int i = 0; i < 5; i++) {
        array[i] = array1[i];
    }

    for (int i = 0; i < 5; i++) {
        array[i + 5] = array2[i];
    }

    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (array[i] > array[j]) {
                numero = array[i];
                array[i] = array[j];
                array[j] = numero;
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }
    printf("\nArray fuso e ordinato:\n");
    
    return 0;
}