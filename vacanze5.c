/*Leggere due array di interi di 5 posizioni ognuno dei due già ordinato in ordine crescente,
fonderli in un nuovo array che dovrà essere anch’esso ordinato con ordine crescente.
Ad esempio array1 0,2,3,7,8 array2 1,4,5,9,12 arrayfuso 0,1,2,3,4,5,7,8,9,12.*/


#include <stdio.h>
#define DIM 5
#define DIM2 10

int main() {
    int array1[DIM], array2[DIM], array3[DIM2];

    int i = 0;

    for (int i = 0; i < DIM; i++) {
        printf("Inserisci 5 numeri per il primo array :\n");
        scanf("%d", &array1[i]);
    }

    for (int i = 0; i < 5; i++) {
        printf("Inserisci 5 numeri per il secondo array (ordinati):\n");
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