#include <stdio.h>
#include <math.h>

int main()
{
    double Ax, Ay;
    double Bx, By;
    double distance;

    printf("Ponto A, x=");
    scanf("%lf", &Ax);
    printf("Ponto A, y=");
    scanf("%lf", &Ay);

    printf("Ponto B, x=");
    scanf("%lf", &Bx);
    printf("Ponto B, y=");
    scanf("%lf", &By);

    distance = sqrt(pow((Bx - Ax), 2) + pow((By - Ay), 2));

    printf("A ditancia entre os pontos A(%.1f, %.1f) e B(%.1f, %.1f) é igual a: %.3f", Ax, Ay, Bx, By, distance);
}