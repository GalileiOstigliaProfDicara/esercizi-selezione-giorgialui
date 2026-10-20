/*Leggere un array di 10 interi con dati riempiti dall'utente. 
Stampare quanti elementi sono pari e quanti dispari, poi la somma degli elementi 
che si trovano in posizioni di indice pari (0, 2, 4, ...).*/

#include <stdio.h> 
#define DIM 10

int main() {
    int array[DIM], conta_pari = 0, conta_dispari = 0, somma_pari = 0;;

    for (int i = 0; i < DIM; i++){
        printf("inserisci un numero: ");
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < DIM; i++){
        if (array[i]%2 == 0){
            conta_pari++;
        } else {
            conta_dispari++;
        } 
    } 
    printf("i numeri dipari sono %d, i numeri pari sono %d\n", conta_pari, conta_dispari);

    for (int i = 0; i < DIM; i = i + 2){
        somma_pari = somma_pari + array[i];
    }
    printf ("la somma dei numeri nelle posizioni pari è %d\n", somma_pari);
    return 0;
}