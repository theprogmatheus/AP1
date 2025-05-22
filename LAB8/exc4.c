#include <stdio.h>

void main()
{
    int sum;

    for (int i = 1; i <= 500; i++)
    {
        if (i % 10 == 0)
            sum += i;
    }

    printf("Soma: %d\n", sum);
}