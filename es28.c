/*scrivi un programma in C che mostri tutti i numeri pari successivi a un numero inserito dall'utente fino a 100.*/

#include <stdio.h>

int main() {
    int num_pari, min = 0, max = 100;
    printf("inserisci un numero pari: \n");
    scanf ("%d", &num_pari); 
    
    if (num_pari %2 != 0){
        num_pari ++;
    }
    for (int i = num_pari; i <= 100; i += 2) {
        printf("%d ", i);
    }

    return 0;
}
