#include <stdio.h>

void main()
{
    int numbers[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Informe o valor de %d: ", i);
        scanf("%d", &numbers[i]);
    }

    printf("(");
    for (int i = 0; i < 10; i++)
    {
        if (i != 0)
            printf(", ");
        printf("%d", numbers[i]);
    }
    printf(") <-> (");
    for (int i = 9; i >= 0; i--)
    {
        if (i != 9)
            printf(", ");
        printf("%d", numbers[i]);
    }
    printf(")\n");
}