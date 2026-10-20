/*Creare un array di interi con 18 elementi e riempirlo con numeri casuali compresi tra 1 e 90 senza ripetizioni. 
Stampare man mano il contenuto dell’array.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int array[18], conta = 0;

    srand(time(NULL));

    for (int i = 0; i < 18; i++) {
        array[i] = (rand() % 90) + 1; 
        
        for (int j = 0; j < i; j++) {
            if (array[i] == array[j]) {
                i--;
            }
        }
    }
    for (int i = 0; i < 18; i++) {
        printf("%d ", array[i]);
    }
    printf("I 18 numeri sono:\n");
    

    return 0;
}