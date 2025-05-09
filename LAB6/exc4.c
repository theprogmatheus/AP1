#include <stdio.h>

void main(){

    int counter = 30, soma;

    while (counter <= 50){
        printf("Contador: %d\n", counter);
        counter++;
        soma += counter;
    }

    printf("Soma total: %d\n", soma);
}