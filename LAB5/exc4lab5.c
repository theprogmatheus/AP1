#include <stdio.h>

int main()
{
    int a;
    double b;
    float c;
    char d;

    printf("Tamanhos em bytes dos tipos em C:\n");
    printf("int: %d bytes.\n", sizeof(a));
    printf("double: %d bytes.\n", sizeof(b));
    printf("float: %d bytes.\n", sizeof(c));
    printf("char: %d bytes.\n", sizeof(d));
}