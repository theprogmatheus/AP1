#include <stdio.h>

void main()
{
    double a[7], sum=0;
    int n = 0;

    for (int i = 0; i < 7; i++)
    {
        printf("Insira o valor da posição %d: ", i);
        scanf("%lf", &a[i]);

        if (a[i] >= 0){
            sum+=a[i];
        }else{
            n++;
        }
    }

    printf("Quantidade de valores negativos: %d\n", n);
    printf("Soma dos valores positivos: %.2f\n", sum);
}