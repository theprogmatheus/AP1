#include <stdio.h>

void main()
{

    double maior = 0, menor = 0, total = 0;

    for (int i = 0; i < 5; i++)
    {
        double altura = 0;
        printf("Insira a altura da pessoa %d: ", (i + 1));
        scanf("%lf", &altura);

        if ((altura > maior) || (i == 0))
            maior = altura;

        if ((altura < menor) || (i == 0))
            menor = altura;

        total += altura;
    }

    printf("Maior altura: %.2f\n", maior);
    printf("Menor altura: %.2f\n", menor);
    printf("Altura média: %.2f\n", (total / 5));
}