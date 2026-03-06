//Es2: Scrivi un programma in C che data un'età in input dica 
// a che scuola si deve iscrivere lo studente: tra 0 e 3 anni si iscrive al nido, 
// tra 4 e 6 alla materna, tra 7 e 10 alle elementari, tra 11 e 13 alle medie 
// e tra 14 e 18 alle superiori. Se maggiore di 18 verrà mostrato un messaggio 
// che dice che se vuole può iscriversi all'università

#include <stdio.h> 
int main(){
    int eta_studente;
    printf("inserisci la tua età: ");
    scanf ("%d", &eta_studente); 
    if (eta_studente >= 0 && eta_studente <= 3){
        printf ("lo studente dovrà andare al nido");
    } else {
        if (eta_studente >= 4 && eta_studente <= 6){
        printf ("lo studente si dovrà iscrivere alla materna");
    } else {
    if (eta_studente >= 7 && eta_studente <= 10){
        printf ("lo stidente si dovrà iscrivere alle elementari");
    } else {
    if (eta_studente >= 11 && eta_studente <= 13){
        printf ("lo studente si dovrà iscrivere alle medie");
    } else {
    if (eta_studente >= 14 && eta_studente <= 18){
         printf ("lo studente si dovrà iscrivere alle superiori");
    } else {
        printf ("lo studente se vuole si può iscrivere all'università ");
    }
} 
}
}
}
    return 0; 


}