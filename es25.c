/*Letto un numero in input dire se è primo*/

#include <stdio.h> 
int main () {
    int numero, conta = 0, divisore; 
    printf("inserisci un numero: \n");
    scanf("%d", &numero);
    //printf("i divisori sono: \n");
    for (divisore = 3; divisore <= numero/2; divisore = divisore+2) {
        if (numero %divisore == 0) {
            conta++;
        }
    } if(conta == 0 && numero %2 != 0){
        printf("il numero è primo\n");
    } else {
        printf("il numero NON è primo\n");
    }
    return 0;
}