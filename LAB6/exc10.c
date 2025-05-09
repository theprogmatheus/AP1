#include <stdio.h>

void main()
{

    int in, curso = -1, cursoCC = 0, cursoMT = 0, pCC = 0, rCC = 0, eCC = 0, pMT = 0, rMT = 0, eMT = 0;

    while (curso != 0)
    {
        printf("Informe o seu curso (Computação=1, Matemática=2): ");
        scanf("%d", &in);

        curso = in;

        if (curso != 0)
        {

            printf("Informe sua avaliação (pessimo=0, regular=5, excelente=10): ");
            scanf("%d", &in);

            if (curso == 1)
            {
                cursoCC++;
                if (in == 0)
                    pCC++;
                else if (in == 5)
                    rCC++;
                else if (in == 10)
                    eCC++;
            }
            else if (curso == 2)
            {
                cursoMT++;
                if (in == 0)
                    pMT++;
                else if (in == 5)
                    rMT++;
                else if (in == 10)
                    eMT++;
            }
        }
    }

    printf("cursoCC=%d, cursoMT=%d, pCC=%d, rCC=%d, eCC=%d, pMT=%d, rMT=%d, eMT=%d\n", cursoCC, cursoMT, pCC, rCC, eCC, pMT, rMT, eMT);

    printf("O percentual de pessoas da computação que acharam a refeição excelente: %.2f por cento\n", ((double)eCC / (double)cursoCC) * 100);
    printf("O percentual de pessoas da matemática que acharam a refeição regular: %.2f por cento\n", ((double)rMT / (double)cursoMT) * 100);
    printf("O percentual de todos os alunos que acharam a comida péssima: %.2f por cento\n", ((double)(pCC + pMT) / (double)(cursoCC + cursoMT)) * 100);
}