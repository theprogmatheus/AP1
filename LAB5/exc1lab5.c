#include <stdio.h>

int main()
{

    int op;

    printf("Escolha um exercício da lista de 1 a 11: ");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
        printf("1 - Crie um programa em C, que usando switch case, crie um menu para escolher um dos exercícios da lista. ");
        break;

    case 2:
        printf("2 - Escreva um programa em C para simular uma pequena conversa do computador com o usuário.");
        break;

    case 3:
        printf("3 - Fazer um programa em C que solicita um número decimal e imprime o correspondente em hexa e octal.");
        break;

    case 4:
        printf("4 - Escreva um programa em C que indique qual o número de bytes que ocupam todos os tipos básicos em C.");
        break;

    case 5:
        printf("5 -  Qual a diferença entre os comandos: ++a e a++? Escreva um trecho de código para exemplificar a diferença.");
        break;

    case 6:
        printf("6 - Faça um programa em C que leia um determinado valor do tipo inteiro, usando o operador “?”, verifique se o valor digitado é par ou ímpar. ");
        break;

    case 7:
        printf("7 - Construa um programa em C que, tendo como dados de entrada dois pontos quaisquer do plano P(x1,y1) e Q(x2, y2), imprima a distância entre eles, sabendo que é calculado pela Eq.(1).");
        break;

    case 8:
        printf("8 - Desenvolva um programa em C que simule um menu de operações bancárias.");
        break;

    case 9:
        printf("9 -  Faça um programa em C que leia um número de 3 algarismos e construa outro número de quatro algarismos, de acordo com a seguinte regra: ");
        break;

    case 10:
        printf("10 - Construa um programa em C do seguinte algoritmo, que está escrito em linguagem natural");
        break;

    case 11:
        printf("11 - Faça um programa em C que calcule as raízes de uma Equação do 2º grau: Ax² + Bx + C = 0, seguindo exatamente, os passos indicados no algoritmo expresso em linguagem natural.");
        break;

    default:
        printf("Não existe esse exercício na lista.");
        break;
    }

    printf("\n");

    return 0;
}