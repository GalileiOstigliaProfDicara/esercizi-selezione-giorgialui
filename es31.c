/*scrivi un programma in C che gestisca la raccolta fondi di un'associazione benefica: 
si continua a chiedere soldi all'utente finchè non si raggiunge almeno un valore in euro 
compreso tra 500 e 1000*/

#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

int main() {
    float totale = 0, donazione;
    int min = 500, max = 1000, obbiettivo;

    srand(time(NULL));
    obbiettivo = rand() % (max - min + 1) + min; 
    printf("il tuo obbiettivo è %d\n", obbiettivo);
    do{
        printf("inserisci una donazione: \n");
        scanf("%f", &donazione);
        if (donazione > 0) {
            printf ("grazie per la donazione\n");
            totale = totale + donazione;
        } else if (donazione == 0) {
            printf ("sarà per la prossima volta\n"); 
        } else {
            printf("hai rubato dei soldi\n");
        } 

        printf ("mancano %f euro per raggiungere l'obbiettivo\n", obbiettivo - totale);
    } while (totale < obbiettivo); 

    return 0;
}
