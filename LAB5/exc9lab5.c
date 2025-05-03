#include <stdio.h>
int main()
{

    int in, out;

    printf("Informe um número com 3 algarismos: ");
    scanf("%d", &in);

    if ((in >= 100) && (in < 1000))
    {
        out = in * 10;

        // 438
        int first = in / 100;                               // 4
        int second = (in - (first * 100)) / 10;             // 3
        int third = (in - ((first * 100) + (second * 10))); // 8

        int digit = (first + (second * 3) + (third * 5)) % 7;
        out += digit;

        printf("Código: %d\n", out);
    }
    else
    {
        printf("Valor inválido.");
    }
}

/*

9 – (3,0 pontos) Faça um programa em C que leia um número de 3 algarismos e construa outro
número de quatro algarismos, de acordo com a seguinte regra:
• Os três primeiros algarismos, contados da esquerda para direita são iguais aos do número dado;
• O quarto algarismo é um digito de controle calculado da seguinte forma: primeiro algarismo +
(segundo algarismo* 3) + (terceiro algarismo * 5); o quarto é igual ao resto da divisão dessa
soma por 7.

*/