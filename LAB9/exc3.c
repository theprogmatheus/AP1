#include <stdio.h>

void main()
{
    int a[10], b[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Insira o valor da posição %d: ", i);
        scanf("%d", &a[i]);
    }

    for (int i = 9; i >= 0; i--)
    {
        b[i] = a[9 - i];
    }

    printf("A=[");
    for (int i = 0; i < 10; i++)
    {
        if (i != 0)
            printf(", ");

        printf("%d", a[i]);
    }
    printf("]\nB=[");
    for (int i = 0; i < 10; i++)
    {
        if (i != 0)
            printf(", ");
        printf("%d", b[i]);
    }
    printf("]\n");
}