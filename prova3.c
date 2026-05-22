#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DIM 100

int main (){
    int array[DIM], elemento, posizione; 
    srand (time(NULL)); 

    for (int i = 0; i < DIM; i++){
        array[i] = rand () % (50 - 1 + 1) + 1; 
    }

    for (int i = 0; i < DIM; i++){
        for (int j = 0; j < DIM; j++){
            if (array[j] == array[i]){
                elemento = array[j]; 
                posizione = i + 1; 
                printf ("L'elemento %d è comparso più volte in posizione %d\n", elemento, posizione);
            }
        }
    }
    return 0; 
}