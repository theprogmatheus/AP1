Algoritmo "EXC14LAB4"
// Disciplina   : ALGORITMOS E PROGRAMA��O I
// Professor   : ANA PAULA FREITAS VILELA BOAVENTURA
// Descri��o   : Resolu��o de exerc�cio da lista LAB4
// Autor(a)    : MATHEUS AGUIAR DOS SANTOS FERREIRA
// Data atual  : 12/4/2025

Var
// Se��o de Declara��es das vari�veis 

a,b,x,y: real
op: inteiro

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc...

escreva("Informe o primeiro valor:")
leia(a)
escreva("Informe o segundo valor:")
leia(b)
escreval()
escreval("1 - M�dia entre os valores digitados")
escreval("2 - Diferen�a do maior pelo menor ")
escreval("3 - Produto entre os n�meros digitados")
escreval("4 - Divis�o do primeiro pelo segundo")
escreval("Informe a opera��o desejada:")
leia(op)

escolha(op)
  caso 1
    escreva("M�dia entre os valores digitados:",((a+b)/2))
  caso 2
    x <- a
    se (b > x) entao
      y <- x
      x <- b
    senao
      y <- b
    fimse
    escreva("Diferen�a do maior pelo menor:",(x-y))
  caso 3
    escreva("Produto entre os n�meros digitados:", (a*b))
  caso 4
    se (b <> 0) entao
      escreva("Divis�o do primeiro pelo segundo:", (a/b))
    senao
      escreva("N�o � poss�vel fazer divis�o por zero!")
    fimse
  outrocaso
    escreva("Opera��o inv�lida.")
fimescolha


Fimalgoritmo