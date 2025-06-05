#include <stdio.h>

void main()
{
    int v[5], min[2] = {-1, 0}, max[2] = {-1, 0};
    for (int i = 0; i < 5; i++)
    {
        printf("Insira o valor da posição %d: ", i);
        scanf("%d", &v[i]);

        if (min[0] == -1 || v[i] < min[1])
        {
            min[0] = i;
            min[1] = v[i];
        }

        if (max[0] == -1 || v[i] > max[1])
        {
            max[0] = i;
            max[1] = v[i];
        }
    }

    printf("Min=[%d, %d]\nMax=[%d, %d]\n", min[0], min[1], max[0], max[1]);
}