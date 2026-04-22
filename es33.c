/*chiedere all'utente e memorizzare in un array di 8 celle, 8 numeri reali, 
dopo averli memorizzati calcolarne la somma e la media*/

#include <stdio.h> 

int main (){
    float array[8], somma = 0, media = 0;

    for (int i = 0; i < 8; i++) {
        printf("inserisci il valore di array ["d"] :" i;
        scanf("%f", &array[i]);
        somma = somma + arrai[i];
    }
    for (int i = 0; i < 8; i++){
        printf("%d\t", array[i]);
    }

    return 0;
}