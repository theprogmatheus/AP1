Algoritmo "EXC8LAB4"
// Disciplina   : ALGORITMOS E PROGRAMA��O I
// Professor   : ANA PAULA FREITAS VILELA BOAVENTURA
// Descri��o   : Resolu��o de exerc�cio da lista LAB4
// Autor(a)    : MATHEUS AGUIAR DOS SANTOS FERREIRA
// Data atual  : 11/4/2025

Var
// Se��o de Declara��es das vari�veis
a,b,c,x,y,z,op: inteiro



Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc...

escreval("1 - Ordene de forma crescente")
escreval("2 - Ordene de forma decrescente")
escreval("3 - O maior fica entre os dois n�meros")
escreval()
escreva("Escolha uma das op��es acima:")
leia(op)

escreva("Insira tr�s n�meros inteiros:")
leia(a,b,c)

x <- a
se (b > x) entao
  y <- x
  x <- b
senao
  y <- b
fimse

se (c > x) entao
  z <- y
  y <- x
  x <- c
senao
  se (c > y) entao
    z <- y
    y <- c
  senao
    y <- c
  fimse
fimse

escolha(op)
  caso 1
    escreva("Crescente:",z,y,x)
  caso 2
    escreva("Decrescente:",x,y,z)
  caso 3
    escreva("Maior no meio:", z,x,y)
  outrocaso
    escreva("Op��o inv�lida.")
fimescolha
  
  
Fimalgoritmo