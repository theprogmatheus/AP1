#include <stdio.h>
#include <math.h>

void main()
{
    int n;

    do
    {
        printf("Insira o valor de N entre 5 e 2000: ");
        scanf("%d", &n);

        if ((n < 5 || n > 2000))
            printf("Insira apenas valores no intervalo de 5 a 2000.\n");

    } while (n < 5 || n > 2000);

    for (int i = 2; i <= n; i += 2)
    {
        printf("%d^2 = %d\n", i, (int)pow(i, 2));
    }
}