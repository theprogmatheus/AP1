#include <stdio.h>
#include <math.h>

void main()
{
    int n;

    do
    {
        printf("Informe o valor de N: ");
        scanf("%d", &n);
        if (n < 5)
            printf("O valor de N precisa ser maior que 5.\n");

    } while (n < 5);

    double sum = 0;
    for (int i = 5; i <= n; i++)
    {
        sum += (2 * pow(i, 2) + 5 * i + 3);
    }

    printf("Valor do somatório: %.2f\n", sum);
}