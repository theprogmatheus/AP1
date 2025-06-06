#include <stdio.h>
#include <stdlib.h>
#include <time.h>



void gen_numbers(int *arr)
{
    srand(time(NULL));
    for (int i = 0; i < 5; i++)
    {
        arr[i] = (int) rand() % 10;
    }
}

void show_numbers(int *arr)
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void hide_numbers()
{
    system("clear"); // or system("cls") in Windows.
}

void tell_history()
{
    printf("Vamos jogar um jogo da memória?\n");
    sleep(2);
    printf("Vou mostrar uma sequência de 5 números inteiros..\n");
    sleep(2);
    printf("Depois vou pedir para você inserir a sequência que viu..\n");
    sleep(2);
    printf("Aceita esse desafio?\n");
    sleep(2);
    printf("Então prepare-se..\n");
    sleep(2);
    printf("3.\n");
    sleep(1);
    printf("2..\n");
    sleep(1);
    printf("1...\n");
    sleep(1);
    
    hide_numbers();
    printf("Decore a sequência: \n\n");
}

void ask_for_numbers(int *arr)
{
    int b[5];

    for (int i = 0; i < 5; i++){
        printf("Insira o numero do indice %d: ", i);
        scanf("%d", &b[i]);
    }

    int wrong = 0;
    for (int i = 0; i < 5; i++){
        if (wrong = (arr[i] != b[i]))
          break;
    }
    if (wrong){
        printf("Que pena, você errou :/\n");
        printf("A sequencia correta era: ");
        show_numbers(arr);
    }else{
        printf("Parabéns! você acertou :)\n");
    }
}

void main()
{

    system("clear"); // limpar o terminal para jogar.


    // delcara o vetor com a sequencia.
    int v[5] = {0,0,0,0,0};

    // gera os numeros pseudo-aleatorios
    gen_numbers(&v);

    // conta a história do jogo
    tell_history();

    // exibe a sequencia
    show_numbers(&v);   

    // aguarda o jogador decorar
    sleep(2);

    // esconde a sequencia
    hide_numbers();


    // pede a sequencia
    ask_for_numbers(&v);

}