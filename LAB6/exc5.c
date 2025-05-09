#include <stdio.h>

void main()
{

    int input, menor;

    while (input != -1)
    {
        input = scanf("%d", &input);

        if (input >= 0)
        {
            if (input < menor)
                menor = input;
        }
    }

    printf("Menor valor digitado: %d\n", menor);
}