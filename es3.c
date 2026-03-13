/*L’utente inserisce a quanti anni si può prendere 
la patente nello stato in cui si vive 
(in Italia a 18 anni ma in altri stati a 16, 17 o a 21),
l’utente inserisce quanti anni ha; il programma risponde se 
l’utente può prendere la patente.*/

#include <stdio.h>

int main(){
    int eta_utente, eta_stato;
    printf("Inserisci l'età in cui si prende la patente nel tuo paese?");
    scanf("%d", &eta_stato);
    printf("Inserisci la tua età: ");
    scanf("%d", &eta_utente);

    if(eta_utente >= eta_stato) {
        printf("Hai l'età per guidare una macchinina");
    } else {
        printf("Non puoi avere la macchinina");
    }
    return 0;
}
