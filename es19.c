/*Il programma genera un numero naturale casuale compreso tra 1 e 100 
e l’utente deve indovinare il numero generato, ad ogni tentativo il programma 
dice se il numero inserito era troppo alto o troppo basso; il programma termina 
quando viene indovinato. Se l'utente indovina in meno di 3 tentativi mostrare "Aura", 
se ci mette tra 4 e 10 tentativi mostrare "Bravino", altrimento mostrare "Brutto".*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    int num_casuale, num_utente, min=1, max=100;
    int tentativi = 0;
    srand(time(NULL));
    num_casuale = rand() % (max - min + 1) + min; 

    do {
        printf("indovina il numero casuale tra 1 e 100: "); 
        scanf("%d", &num_utente); 
        tentativi++;
        if(num_utente > num_casuale) {
            printf("il numero che hai scelto è troppo alto\n"); 
        } if(num_utente < num_casuale) {
            printf("il numero che hai scelto è troppo basso\n");
        } 
        if(num_casuale == num_utente){
            printf("Hai indovinato!\n");
        }
    } while(num_casuale != num_utente);

 if(tentativi <= 3 && num_casuale == num_utente) {
        printf("Aura\n"); 
    } if( tentativi <= 10 == num_casuale == num_utente) {
        printf("bravino\n");
    } else {
        printf("brutto\n");
    }
        return 0;
}

    