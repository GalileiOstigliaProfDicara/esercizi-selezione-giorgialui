/*scrivi un programma in C che mostri tutti i numeri pari successivi a un numero inserito dall'utente fino a 100.*/

#include <stdio.h>

int main() {
    int num_pari;
    printf("inserisci un numero pari: \n");
    scanf ("%d", &num_pari); 
    
    if (num_pari %2 != 0){
        num_pari ++;
    }
    for (int i = num_pari; i <= 100; i = i + 2) {
        printf("%d\n", i);
    }

    return 0;
}
