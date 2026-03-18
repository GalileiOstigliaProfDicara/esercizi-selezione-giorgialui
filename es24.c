/*Scrivere un programma che letto un numero scrive tutti i suoi divisori*/

#include <stdio.h> 

int main () {
    int numero; 
    printf("inserisci un numero: \n");
    scanf("%d", &numero);
    prinf ("i divisori di %d sono: ", numero);
    for (int i = 1; i <= numero; i++) {
        if (numero %i == 0) {
            printf("%d - ", i);
        }
    }
}