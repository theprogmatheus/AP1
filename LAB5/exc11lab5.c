#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, d, root1, root2;
    printf("Informe os valores de A B C: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a == 0)
    {
        printf("valor é inválido, pois não forma uma equação do segundo grau\n");
    }
    else
    {
        d = (pow(b, 2) - (4 * a * c));
        if (d > 0)
        {
            root1 = (-b + sqrt(d)) / (2 * a);
            root2 = (-b - sqrt(d)) / (2 * a);

            printf("X1: %lf\nX2: %lf\n", root1, root2);
        }
        else
        {
            if (d == 0)
            {
                root1 = (-b + sqrt(d)) / (2 * a);
                printf("X: %lf\n", root1);
            }
            else
            {
                printf("equação não possui raízes reais\n");
            }
        }
    }

    printf("algoritmo será encerrado.");

    return 0;
}