#include <stdio.h>

void main()
{
    int in, out, maior = -1, menor = -1;

    while (in >= 0)
    {
        printf("Informe um valor aleatório: ");
        scanf("%d", &in);
        if (in >= 0)
        {

            if (maior == -1)
                maior = in;
            if (menor == -1)
                menor = in;

            out += in;
            if (in > maior)
            {
                maior = in;
            }
            if (in < menor)
            {
                menor = in;
            }
        }
    }

    printf("Maior: %d\nMenor: %d\nSoma: %d\n", maior, menor, out);
}