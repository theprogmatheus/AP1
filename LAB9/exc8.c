#include <stdio.h>

void main()
{
    double v[5], min = -1, max = -1, media = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("Insira o valor da posição %d: ", i);
        scanf("%lf", &v[i]);

        if (min == -1 || v[i] < min)
          min = v[i];

        if (max == -1 || v[i] > max)
          max = v[i];

        media += v[i];
    }

    media = media / 5;

    printf("V[");
    for (int i = 0; i < 5; i++)
    {
        if (i != 0)
          printf(", ");

        printf("%.2f", v[i]);
    }
    printf("]\n");

    printf("Min=%.2f\nMax=%.2f\nMedia=%.2f\n", min, max, media);
}
