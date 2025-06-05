#include <stdio.h>

void main()
{
    double a[5], total = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Informe a nota do aluno %d: ", (i + 1));
        scanf("%lf", &a[i]);

        total += a[i];
    }

    printf("A média é: %.2f\n", (total/ (sizeof(a) / sizeof(a[0]))));
}