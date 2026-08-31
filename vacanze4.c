/*Leggere  un array di 10 interi e stampare solo i numeri presenti nell’array senza ripetizioni 
(se un numero è presente più volte andrà stampato solo la prima volta che compare).
Ad esempio se l’array contiene  1, 2, 3, 1, 2, 4  il programma stamperà  1,2,3, 4*/

#include <stdio.h>

int main() {
    int array[10], conta = 0, i;

    printf("Inserisci 10 numeri:\n");

    for( i = 0; i < 10; i++){
        scanf("%d",&array[i]);
    }

    printf("Numeri senza ripetizioni:  \n");

    for(i = 0; i < 10; i++) {
        conta = 0;
    }
    for(int j = 0; j < i; j++) {
            if(array[i] == array[j])
             conta = 1;
        }

        if(conta == 0){
            printf("%d ",array[i]);
    }

    return 0;
}