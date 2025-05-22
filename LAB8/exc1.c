#include <stdio.h>

void main()
{
    int op = 0;

    do
    {

        printf("Escolha um exercício de 1 a 10: ");
        scanf("%d", &op);

        if (op < 0)
            continue;

        switch (op)
        {

        case 1:
            printf("1 - Usando o laço do tipo (“while” ou “do while”) e estrutura escolha caso, crie um menu iterativo pa...\n");
            break;

        case 2:
            printf("2 - Desenvolver um programa, usando laço do tipo “for”, que apresente os valores de 100 a 1 na tela. \n");
            break;

        case 3:
            printf("3 - Escrever um programa que, usando laço do tipo “for”, gera e escreve os números ímpares entre 101 e \n");
            break;

        case 4:
            printf("4 - Desenvolver um programa, usando laço do tipo “for”, que efetue a soma de todos os números pares que...\n");
            break;

        case 5:
            printf("5 - Faça um programa que, usando laço do tipo “for”, leia um valor N positivo e imprima um meio triângulo de...\n");
            break;

        case 6:
            printf("6 - Desenvolver um programa, usando laço do tipo “for”, que leia a altura de 5 pessoas. Ao final, o programa...\n");
            break;

        case 7:
            printf("7 - Escreva um programa que leia um valor inicial a1 e uma razão q. Usando um laço de repetição do tipo...\n");
            break;

        case 8:
            printf("8 - Escreva um programa, que usando laço do tipo “for”, que faça o somatório expresso na Equação (2)...\n");
            break;

        case 9:
            printf("9 - Desenvolver um programa, usando laço do tipo “for”, que apresente os N primeiros termos da Série de...\n");
            break;

        case 10:
            printf("10 - (Beecrownd - Problema 1073) Leia um valor inteiro N. Apresente o quadrado de cada um dos...\n");
            break;

        default:
            printf("Opção inválida.\n");
            break;
        }

    } while (op >= 0);
}