#include <stdio.h>

void main()
{
    int n;

    do
    {
        printf("Informe o valor máximo da contagem: ");
        scanf("%d", &n);

        int i = 0;
        do
        {
            i++;
            printf("Contagem: %d\n", i);
        } while (i < n);

    } while (n > 0);
}