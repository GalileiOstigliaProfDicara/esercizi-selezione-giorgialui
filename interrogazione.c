//dire se la temperatura è sopra allo zero o se è sotto allo zero

#include <stdio.h> 

int main () {
    float temperatura;
    printf ("inserisci la temperatura: ");
    scanf ("%f", &temperatura);
    if (temperatura > 0) {
        printf ("la temperatura è sopra allo zero");
    } else {
        printf ("la temperatura è sotto allo zero");
    } 
 return 0;
} 