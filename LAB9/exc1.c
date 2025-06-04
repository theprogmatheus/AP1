#include <stdio.h>

void main()
{
    int A[6] = {1, 0, 5, -2, -5, 7}, soma = 0;

    soma = (A[1] + A[2] + A[5]);

    printf("Soma: %d\n", soma);

    A[3] = 100;

    for (int i = 0; i < 6; i++)
    {
        if (i != 0)
            printf(", ");

        printf("%d", A[i]);
    }
    printf("\n");
}