#include <stdio.h>

void main()
{
    int a[6], b[6];

    for (int i = 0; i < 6; i++)
    {
        printf("Insira o valor da posição %d: ", i);
        scanf("%d", &a[i]);
        
        b[i] = (i % 2 == 0) ? ((int)a[i]/2) : (a[i]*3);
    }


    printf("A=[");
    for (int i = 0; i < 6; i++)
    {
        if (i != 0)
          printf(", ");

        printf("%d", a[i]);
    }
    printf("]\nB=[");
    for (int i = 0; i < 6; i++)
    {
        if (i != 0)
          printf(", ");
        printf("%d", b[i]);
    }
    printf("]\n");
}