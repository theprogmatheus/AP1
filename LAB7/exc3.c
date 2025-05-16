#include <stdio.h>

void main()
{
    int n;
    printf("d  o  x  c\n");
    do
    {

        printf("%d  %o  %x  %c\n", n, n, n, (char)n);
        n++;
    } while (n <= 127);
}