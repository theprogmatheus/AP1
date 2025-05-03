#include <stdio.h>

int main()
{
    // Aqui vou explicar a diferença entre ++num ou num++
    /*
     * Antes de mais nada precisamos entende o operador ++, ele é usado para incrementar +1.
     * Entenda que sempre que você chamar ++ para uma variável você vai estar atribuindo +1 nela, ex:
     * int num = 0;
     * num++;
     *
     * Agora o num vale 1, já que iniciou com o valor 0 e foi incrementado logo depois.
     *
     * Certo, agora qual a diferença entre incrementar antes da variavel ou incrementar depois da variavel?
     * Entende-se o seguinte:
     *
     * num++ = use primeiro, depois incremente.
     * ++num = incremente primeiro, depois use.
     *
     *
     * Vamos fazer alguns exemplos em código:
     */

    // Primeiro vamos instanciar duas variáveis inteiras, 'a' e 'b'
    int a = 0;
    int b = 1;

    // vamos atribuir o valor de 'b' na variavel 'a', de forma que 'a' tenha um novo valor.
    // Mas vamos incrementar o valor de 'b' logo depois.

    a = b++;

    /*
     * Qual o valor de 'a' e o valor de 'b' agora?
     * Exatamente! a recebe o valor de 'b' antes que ele seja incrementado, então  a=1
     * Logo depois incrementamos em 'b', então b=2
     *
     * Logo: a=1 e b=2
     */
    printf("a=%d, b=%d\n", a, b);

    // Agora vamos incrementar antes..

    b = ++a;

    /*
    * Qual o valor das variáveis agora?
    * Seguindo o mesmo racioncio de antes, temos que 'b' recebe ++a (incrementa antes, atribui depois)
    * se a=1 e incrementamos antes, então 'b'=2
    * e se incrementamos o valor de 'a' então o valor dele também mudou para 2.
    * 
    * Logo: a=2 e b=2
    */
    printf("a=%d, b=%d\n", a, b);
}