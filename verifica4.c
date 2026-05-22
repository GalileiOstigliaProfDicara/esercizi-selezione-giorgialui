/*Scrivi un programma in C che riempia un vettore con 80 numeri casuali compresi tra 1 e 20.
Il programma deve stampare tutti gli elementi del vettore; trovare il numero che compare più volte nel vettore;
mostrare quante volte compare;*/

#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
#define DIM 80

int main () {
    int array[DIM], conta = 0, max = 20, min = 1, massimo = -1;
    srand(time(NULL));

    for (int i = 0; i < DIM; i++){
        array[i] = rand () % (max - min + 1) - min;
        printf("%d\t", array[i]);
    }
    for (int i = 0; i < DIM; i ++){
        conta = 0;
        for (int j = 0; j < DIM; j ++){
        if (array[i] == array[j]){
            conta++;
        } else if (conta > massimo){
            massimo = conta;
        } 
        printf ("il numero comparso più volte è %d, ed è comparso %d volte\n", array[i], conta);
    } 
    return 0;
}
}
