/*scrivi un programma in C che permetta all'utente di riempire un array
di 7 elementi, poi indica se l'array è palindromo*/

#include <stdio.h>
#define DIM 7
int main(){
    int numeri[DIM], palindromo = 0;

    for (int i = 0; i < DIM; i++){
        printf("riempi l'array in posizione %d: ", i + 1);
        scanf("%d", &numeri[i]);
    }
    for (int i = 0; i < DIM/2; i++){
        if (numeri[i] == numeri[6 - i]) {
            palindromo ++; 
        }
    }
    if (palindromo == 3){
        printf("l'array è palindromo\n");
    }
    return 0;
} 