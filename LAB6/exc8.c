#include <stdio.h>

void main()
{
    int n, i = 1, out = 0;

    printf("Informe o valor de 'n': ");
    scanf("%d", &n);
    if (n >= 0)
    {

        while (i <= n)
        {
            out += ((2 * i * i) + (5 * i) + 1);
            i++;
        }

        printf("Valor da somatória: %d\n", out);
    }
    else
    {
        printf("O valor de 'n' não pode ser negativo.");
    }
}