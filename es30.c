/*scrivi un programma in C che mostri il moto uniformemente accelerato 
di un'automobile secondo per secondo finchè non arriva alla velocità di 
100 km/h con un accelerazione scelta dall'utente. Mostra anche la distanza percorsa alla fine.*/
#include <stdio.h>

int main() {
    float accelerazione, velocita = 0, distanza = 0;    
    int secondi = 0;

    printf("Inserisci l'accelerazione: \n");
    scanf("%f", &accelerazione);

    while (velocita < 100) {
        secondi++;

        velocita = velocita + accelerazione;
        distanza = distanza + (velocita / 3.6);

        printf("Secondo %d, Velocita: %.2f km/h\n", secondi, velocita);
    }

    printf("\nHai raggiunto 100 km/h!\n");
    printf("Tempo impiegato: %d secondi\n", secondi);
    printf("Distanza percorsa: %.2f metri\n", distanza);

    return 0;
}