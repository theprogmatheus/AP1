#include <stdio.h>

int main()
{
    int a, b, out;

    printf("Informe dois números inteiros: ");
    scanf("%d %d", &a, &b); // recebe dois numeros inteiros

    if (a > b)
    {
        if (a % 2 == 0)
            printf("O primeiro número é PAR!\n");

        if (a % b == 0)
            printf("O primeiro número é multiplo do segundo!\n");

        printf("%d", (a > b) ? (a - b) : (b - a));
    }
    else
    {
        out = (a + b);
        printf("%d", out);
    }

    return 0;
}