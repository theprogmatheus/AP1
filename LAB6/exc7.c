#include <stdio.h>

void main()
{

    int fat, out;
    printf("Insira um fatorial: ");
    scanf("%d", &fat);

    if (fat == 1 || fat == 0)
        out = 1;
    else
    {
        while (fat > 0)
        {
            if (out == 0)
                out = 1;

            out *= fat;
            fat--;
        }
    }

    printf("Valor da fatorial: %d\n", out);
}