/* Memorizzare in un array di dieci posizioni, i primi 10 numeri naturali*/

#include <stdio.h> 

int main (){
    int array[10];

    for (int i = 0; i < 10; i++) {
        array[i] = i + 1;
    }
    for (int i = 0; i < 10; i++){
        printf("%d\t", array[i]);
    }
    return 0;
}