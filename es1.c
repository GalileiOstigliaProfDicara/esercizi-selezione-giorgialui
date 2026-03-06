/*Il programma legge due numeri e controlla se il primo è maggiore del secondo.*/

#include <stdio.h>

int main(){
    float num1, num2;
    printf("inserisci il primo numero: ");
    scanf ("%f", &num1);
    printf("inserisci il secondo numero: ");
    scanf("%f", &num2);
    if (num1 > num2) {
        printf("il primo numero è maggiore del secondo\n");
    } else {
        printf("il primo numero è minore del secondo\n");
    }
    return 0;
}