#include <stdio.h>

void main()
{
  int op;
  do
  {

    printf("Informe qual exercício você deseja (de 1 a 11): ");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
      printf("Você escolheu o exercício 1!\n");
      break;
    case 2:
      printf("Você escolheu o exercício 2!\n");
      break;
    case 3:
      printf("Você escolheu o exercício 3!\n");
      break;
    case 4:
      printf("Você escolheu o exercício 4!\n");
      break;
    case 5:
      printf("Você escolheu o exercício 5!\n");
      break;
    case 6:
      printf("Você escolheu o exercício 6!\n");
      break;
    case 7:
      printf("Você escolheu o exercício 7!\n");
      break;
    case 8:
      printf("Você escolheu o exercício 8!\n");
      break;
    case 9:
      printf("Você escolheu o exercício 9!\n");
      break;
    case 10:
      printf("Você escolheu o exercício 10!\n");
      break;
    case 11:
      printf("Você escolheu o exercício 11!\n");
      break;

    default:
      printf("Opção inválida.\n");
      break;
    }

  } while (op > 0);
}