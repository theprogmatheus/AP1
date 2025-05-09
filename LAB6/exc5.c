#include <stdio.h>

void main()
{

    int input = 0, menor = -1;

    while (input != -1)
    {
        printf("Insira um valor: ");
        scanf("%d", &input);

        if (menor == -1)
            menor = input;

        if (input >= 0)
        {
            if (input < menor)
                menor = input;
        }
    }

    printf("Menor valor digitado: %d\n", menor);
}