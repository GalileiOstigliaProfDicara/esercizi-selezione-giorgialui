/*Il computer genera un (da 1 a 9) e l'utente deve indovinarlo con tentativi successivi. Regole del gioco:
1. Il codice è composto da 3 cifre casuali (es. 4 7 2)
2. L’utente inserisce ogni volta un tentativo (3 numeri)
3. Il programma risponde con: “Cifra corretta al posto giusto”; “Cifra corretta ma posizione sbagliata”;
“Cifra non presente”
4. Il gioco termina quando il codice è indovinato (o eventualmente dopo un numero massimo di tentativi)*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main () {
    int num1, num2, num3, rand1, rand2, rand3, min = 1, max = 9, tentativi = 0;
    srand(time(NULL));
    rand1 = rand() % (max - min + 1) + min; 
    rand2 = rand() % (max - min + 1) + min; 
    rand3 = rand() % (max - min + 1) + min; 
    
    do {
        printf("inserisci 3 numeri: \n");
        scanf("%d" "%d" "%d", &num1, &num2, &num3);
        if (num1 == rand1){
            printf ("La prima cifra è giusta e nel posto giusto\n"); 
        } else if (num1 == rand2 || num1 == rand3){
            printf ("La prima cifra è giusta ma nella posizione sbaglaita\n"); 
        } else {
            printf ("La prima cifra che hai inserito non esiste\n"); 
        } if (num2 == rand2){
            printf ("La seconda cifra è giusta e nel posto giusto\n"); 
        } else if (num2 == rand1 || num2 == rand3){
            printf ("La seconda cifra è giusta ma nella posizione sbaglaita\n"); 
        } else {
            printf ("La seconda cifra che hai inserito non esiste\n"); 
        } if (num3 == rand3){
            printf ("La terza cifra è giusta e nel posto giusto\n"); 
        } else if (num3 == rand2 || num3 == rand1){
            printf ("La terza cifra è giusta ma nella posizione sbaglaita\n"); 
        } else {
            printf ("La terza cifra che hai inserito non esiste\n"); 
        }
    } while (num1 != rand1 || num2 != rand2 || num3 != rand3);{
        printf ("Hai vinto!\n"); 
    } 

}
