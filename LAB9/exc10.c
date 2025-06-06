#include <stdio.h>

void main()
{
    int a[10], b[10] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1}, ri=0;

    for (int i = 0; i < 10; i++)
    {
        printf("Informe o valor da posição %d: ", i);
        scanf("%d", &a[i]);

        for (int k = 0; k <= i; k++)
        {
            if (i != k && a[i] == a[k])
            {
                int add = 1;

                for (int l = 0; l < 10; l++)
                {
                    add = !(b[l] == a[i]);

                    if (!add) break;                      
                }
                if (add)
                  b[ri++] = a[i];
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        if (i!=0 && b[i] != -1)
          printf(", ");

        if (b[i] != -1)
          printf("%d", b[i]);

    }

    printf("\n");
    
}