#include <stdio.h>

void main()
{
    int a[10], count = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("Insira o valor da posição %d: ", i);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < (sizeof(a) / sizeof(a[0])); i++)
    {
        int element = a[i];
        if (element % 2 == 0)
            count++;
    }


    printf("Existem %d valor(es) par(es) no primeiro vetor.\n");
}