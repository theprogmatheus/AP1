#include <stdio.h>

void main()
{
    int a, b, i = 0, out = 1;
    printf("Insira dois valores: ");
    scanf("%d %d", &a, &b);

    while (i < b)
    {
        out *= a;
        i++;
    }
    printf("Resultado: %d\n", out);
}