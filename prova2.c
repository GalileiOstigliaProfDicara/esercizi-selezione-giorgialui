#include <stdio.h>
#define DIM 7

int main (){
    int array[DIM], maggiore, minore, mezzo = 0;
    
    for (int i = 0; i < DIM; i++){
        printf ("Inserisci quanti clienti hai avuto il %d giorno: ", i + 1); 
        scanf ("%d", &array[i]);
    }
    maggiore = array[0]; 
    minore = array[0]; 
    for (int i = 0; i < DIM; i++){
        if (array[i] > maggiore){
            maggiore = array[i]; 
        } else if (array[i] < minore){
            minore = array[i]; 
        } else if (array[i] > 30 && array[i] < 50){
            mezzo++; 
        }
    }
    printf ("Il giorno con più clienti è stato il %d, quello con meno clienti è stato il %d, e per %d giorni hai avuto tgra i 30 e i 50 clienti\n", maggiore, minore, mezzo); 
    return 0; 
}