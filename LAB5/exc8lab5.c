#include <stdio.h>

int main()
{
    int op;
    double balance = 1000;
    double value;

    printf("MENU DE OPERAÇÕES\n");
    printf("------------------\n");
    printf("1 - Consultar saldo\n");
    printf("2 - Realizar saque\n");
    printf("3 - Realizar depósito\n");
    printf("4 - Sair\n");
    printf("------------------\n");
    printf("Operação: ");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
        printf("Saldo atual: %.2f\n", balance);
        break;

    case 2:
        printf("Informe o valor do saque: ");
        scanf("%lf", &value);
        if (balance >= value)
        {
            balance -= value;
            printf("Saque realizado com sucesso: %.2f\n", value);
            printf("Saldo atual: %.2f\n", balance);
        }
        else
        {
            printf("Saldo insuficiente\n");
        }
        break;
    case 3:
        printf("Informe o valor do depósito: ");
        scanf("%lf", &value);
        balance += value;
        printf("Depósito realizado com sucesso: %.2f\n", value);
        printf("Saldo atual: %.2f\n", balance);
        break;

    case 4:
        printf("Saindo do sistema...\n");
        break;

    default:
        printf("Opção inválida.\n");
        break;
    }
}