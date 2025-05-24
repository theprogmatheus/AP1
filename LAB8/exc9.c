#include <stdio.h>

void main()
{
    int n;

    do
    {
        printf("Informe o valor de N: ");
        scanf("%d", &n);

        if (n <= 0)
            printf("Informe um valor positivo para N.\n");
    } while (n <= 0);

    int prev = 0, current = 1, next = 1;
    for (int i = 1; i <= n; i++)
    {
        if (i != 1)
            printf(" - ");

        printf("%d", current);

        next = (prev + current);
        prev = current;
        current = next;
    }
    printf("\n");
}