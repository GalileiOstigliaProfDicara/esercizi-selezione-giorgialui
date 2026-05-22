/*Scrivi un programma in C che riempia un vettore di 6 elementi con numeri casuali tra 1 e 100. 
Il programma deve stampare l'array originale, trovare il secondo elemento più grande,  
indicare in quale posizione (indice) si trova.*/

#include <stdio.h> 
#include <stdlib.h>
#include <time.h> 
#define DIM 6

int main () {
    int array[DIM], max = 100, min = 1, elemento, posizione, massimo, minimo;
    srand(time(NULL));

    for (int i = 0; i < DIM; i++){
        array[i] = rand () % (max - min + 1) + min;
        printf ("%d\t", array[i]);
    } 
    massimo = array[0];
    minimo = array [0];

    for (int i = 0; i < DIM; i++){
        if (array[i] > massimo){
            massimo = array[i];            
        } else if (array[i] < minimo){
            minimo = array[i];
        }
        posizione = i + 1; 
    }
    printf ("il secondo elemento più grande è %d, e si trova in %d", elemento, posizione);

    return 0;

} 
