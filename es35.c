/*Scrivi un programma in C che riempia un array di 20 elementi con numeri casuali tra 1 e 100.
Quindi chiedi all'utente un valore e mostra un messaggio se quel valore è all'interno dell'array*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main() {
    int array[20], numero, conta = 0; 
    srand(time(NULL));

    for(int i = 0; i < 20; i ++){
        array[i] = rand() % (100 - 1 + 1) + 1;
    }
    printf ("inserisci un numero tra 1 e 100: \n");
    scanf("%d", &numero);

    for(int i = 0; i < 20; i++){
        if(numero == array[i]){
            conta ++;        
    }
}
    if(conta > 0) {
        printf("hai indovinato il numero\n");
        } else {
            printf("il numero non è giusto\n");
        }

        return 0;
    }