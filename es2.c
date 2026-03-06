/*L’utente inserisce la propria età e il programma dice se è maggiorenne (ovvero con età maggiore uguale a 18 anni)*/

#include <stdio.h>

int main(){
    int eta;
    printf("inserisci la tua età: ");
    scanf("%d", &eta);
    if(eta >= 18) {
        printf("sei maggiorenne!\n");
    } else {
        printf("non sei maggiorenne..\n");
    }

    return 0;
}