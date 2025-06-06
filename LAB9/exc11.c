#include <stdio.h>

void main()
{
    int a[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Insira o valor de %d: ", i);
        scanf("%d", &a[i]);

        int ignore = 0;
        for (int k = 0; k <= i; k++)        
          if (ignore = (i != k && a[i] == a[k])) break;

        if (ignore)
          a[i] = -1;       

    }

    for (int i = 0; i < 5; i++)
    {
        if (i!=0 && a[i] != -1)
          printf(", ");

        if (a[i] != -1)
        printf("%d", a[i]);
    }
    printf("\n");
}