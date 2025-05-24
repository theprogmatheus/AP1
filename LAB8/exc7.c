#include <stdio.h>
#include <math.h>

void main()
{
    double a1, q, an = 0;
    int n;

    printf("Informe o valor inicial de a1: ");
    scanf("%lf", &a1);

    printf("Informe o valor da razão: ");
    scanf("%lf", &q);

    printf("Informe o valor de N: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("an = %.2f * %.2f^%d = ", a1, q, (n - 1));
        an += a1 * pow(q, n - 1);
        printf("%.2f\n", an);
    }
}