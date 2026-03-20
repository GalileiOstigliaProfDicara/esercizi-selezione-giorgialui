/*Si vuole costruire una slot machine in cui un utente può inserire:
1. una cifra iniziale da scommettere sull'uscita di testa o croce
2. quanto puntare ad ogni scommessa
3. per ogni scommessa l'utente deve puntare su testa (valore 1) oppure su croce (valore 2), 
se indovina vince il doppio di quanto ha puntato, se non indovina, vengono scalti i suoi soldi.
L'utente continua a scommettere finchè non perde tutti i soldi.*/

#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

int main() {
    int cifra_iniziale, testa = 0, croce = 0, min = 1, max = 2, puntata, vincita, perdita;
    srand(time(NULL));

    printf("inserisci quanti soldi vuoi giocare: "); 
    scanf("%d", cifra_iniziale);

    printf("inserisci quanti soldi vuoi puntare ad ogni scommessa: "); 
    scanf("%d, puntata");
    
    while(cifra_iniziale != 0)

}