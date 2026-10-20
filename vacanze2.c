/*Leggere un array di 10 interi e stampare solo i numeri che appaiono nell’array una volta soltanto.
Ad esempio se l’array contiene  1, 2, 3, 1, 2, 4  il programma stamperà  3, 4 .*/

#include <stdio.h>

int main() {
    int array[10];

    for(int i = 0; i < 10; i++) {
        printf("Inserisci 10 numeri:\n");
        scanf("%d", &array[i]);
    }
    int conta;
    for(int i = 0; i < 10; i++) {
        conta = 0; 

        for(int j = 0; j < 10; j++) {
            if(array[i] == array[j])
                conta++;
        }

        if(conta == 1)
            printf("i numeri presenti solo una volta sono %d\n", array[i]);
    }

    return 0;
}