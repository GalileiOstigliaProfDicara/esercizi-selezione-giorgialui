/*scrivi un programma in C che gestisca la raccolta fondi di un'associazione benefica: 
si continua a chiedere soldi all'utente finchè non si raggiunge almeno 1000 euro.*/

#include <stdio.h> 
int main() {
    float soldi_donati, totale = 0;
     printf("inserisci una donazione: ");
     scanf("%f", &soldi_donati);

    while (totale < 1000) {
        printf("aumenta la tua donazione: ");
        scanf("%f", &soldi_donati);

        totale = totale + soldi_donati;
    }

    printf("abbiamo raggiunto l'obbiettivo\n");

    return 0;
}

