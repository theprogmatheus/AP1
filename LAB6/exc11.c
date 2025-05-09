#include <stdio.h>

#define VALOR_ESTUDANTE = 80.0;
#define VALOR_TRABALHADOR = 90.0;
#define VALOR_SOCIO = 80.0;
#define VALOR_NORMAL = 120.0;

void main()
{

    int input, counter, estudante = 0, trabalhador = 0, socio = 0, normal = 0;
    double total, totalDesconto;

    while (1)
    {
        int diarias, categoria;
        double valor = 0, desconto = 0;

        printf("Cadastro do hospede #%d\n", (counter + 1));

        printf("Informe a quantidade de diárias: ");
        scanf("%d", &diarias);

        if (diarias == -1)
            break;

        if (diarias > 0)
        {
            printf("Informe a categoria (estudante=1, trabalhador=2, socio=3, normal=4): ");
            scanf("%d", &categoria);

            switch (categoria)
            {
            case 1:
                estudante++;
                valor = (80 * diarias);
                break;

            case 2:
                trabalhador++;
                valor = (90 * diarias);
                break;

            case 3:
                socio++;
                valor = (80 * diarias);
                break;

            case 4:
                normal++;
                valor = (120 * diarias);
                break;

            default:
                break;
            }
            if (diarias > 3)
                desconto = (total * 0.2);
            else
                desconto = 0;

            total += (valor - desconto);
            totalDesconto += desconto;
            counter++;

            printf("Hospede cadastrado com sucesso.\n\n");
        }
        else
        {
            printf("Hospede não cadastrado! não houve diarias suficiente.\n");
        }
    }

    printf("Percentual de hospedes que são estudantes: %.2f por cento\n", ((double)estudante / (double)counter) * 100);
    printf("Percentual de hospedes que são trabalhadores da industria: %.2f por cento\n", (((double)trabalhador / (double)counter) * 100));
    printf("Valor total arrecadado: %.2f\n", total);
    printf("Valor não arrecadado por conta do desconto de 20 por cento: %.2f\n", totalDesconto);
}

/*
Ao final, gerar um relatório que indique os percentuais de estudantes e trabalhadores da indústria que
se hospedaram. Calcule o valor total que o gerente arrecadou e quanto ele deixou de faturar por
oferecer 20% de desconto.
*/