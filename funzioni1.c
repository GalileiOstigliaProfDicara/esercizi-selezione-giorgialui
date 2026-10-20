/*Creare una funzione che calcola e restituisce il valore assoluto di un numero intero.
Creare poi un programma che fa inserire due numeri all’utente e dice, usando la funzione,
quale dei due numeri interi ha il valore assoluto maggiore.*/

#include <stdio.h>
int valore_assoluto (int num_intero);

int main() {
    int num1, num2; 
    printf("inserisci due numeri: ");
    scanf("%d", &num1);
    scanf("%d", &num2);
    if (valore_assoluto(num_1) > valore_assoluto(num2)){
        printf("il primo numero ha un valore assoluto maggiore del secondo\n");
    } else if (valore_assoluto(num_1) < valore_assoluto(num2)) {
        printf("il primo numero ha un valore assoluto minore del secondo\n");
    } else (valore_assoluto(num_1) == valore_assoluto(num2)){
        printf("i due numeri sono uguali in valore assoluto\n");
    }
}

int valore_assoluto (int num_intero){
    if (num_intero < 0){
        return num_intero*(- 1);
    } 
    
    return num_intero;
}
