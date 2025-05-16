#include <stdio.h>

void main()
{

    int pessoas = 0, media = 0, maior = 0, menor = 0, totalIdade = 0, idade = 0;

    do
    {
        printf("Insira a idade da pessoa %d:", pessoas);
        scanf("%d", &idade);

        if (idade > 0)
        {
            pessoas++;
            if (maior == 0 || idade > maior)
                maior = idade;

            if (menor == 0 || idade < menor)
                menor = idade;

            totalIdade += idade;

            printf("Pessoa %d registrada com sucesso.\n", pessoas);
        }
        else
        {
            printf("Encerrando cadastro..\n");
        }

    } while (idade > 0);

    printf("O número de pessoas: %d\n", pessoas);
    printf("A idade média do grupo: %.2f\n", (double)(totalIdade / pessoas));
    printf("A maior idade: %d\n", maior);
    printf("A menor idade: %d\n", menor);
}