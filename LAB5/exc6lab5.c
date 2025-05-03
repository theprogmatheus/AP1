#include <stdio.h>

int main()
{
    int num;
    printf("Informe um valor: ");
    scanf("%d", &num);

    printf("O valor informado é %s!", (((num % 2) == 0) ? "PAR!" : "ÍMPAR!"));


    // Aqui estamos usando o operador ternário para retornar um valor dinâmico de acordo com a condição proposta.

    // (condição) ? (valor retornado caso verdadeiro) : (valor retornado caso falso)
    
    // (numero é par) ? (retorna "PAR!") : (retorna "IMPAR!")
}