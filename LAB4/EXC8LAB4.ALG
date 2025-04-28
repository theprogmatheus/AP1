Algoritmo "EXC8LAB4"
// Disciplina   : ALGORITMOS E PROGRAMAÇÃO I
// Professor   : ANA PAULA FREITAS VILELA BOAVENTURA
// Descrição   : Resolução de exercício da lista LAB4
// Autor(a)    : MATHEUS AGUIAR DOS SANTOS FERREIRA
// Data atual  : 11/4/2025

Var
// Seção de Declarações das variáveis
a,b,c,x,y,z,op: inteiro



Inicio
// Seção de Comandos, procedimento, funções, operadores, etc...

escreval("1 - Ordene de forma crescente")
escreval("2 - Ordene de forma decrescente")
escreval("3 - O maior fica entre os dois números")
escreval()
escreva("Escolha uma das opções acima:")
leia(op)

escreva("Insira três números inteiros:")
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
    escreva("Opção inválida.")
fimescolha
  
  
Fimalgoritmo