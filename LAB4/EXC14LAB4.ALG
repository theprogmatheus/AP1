Algoritmo "EXC14LAB4"
// Disciplina   : ALGORITMOS E PROGRAMAÇÃO I
// Professor   : ANA PAULA FREITAS VILELA BOAVENTURA
// Descrição   : Resolução de exercício da lista LAB4
// Autor(a)    : MATHEUS AGUIAR DOS SANTOS FERREIRA
// Data atual  : 12/4/2025

Var
// Seção de Declarações das variáveis 

a,b,x,y: real
op: inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc...

escreva("Informe o primeiro valor:")
leia(a)
escreva("Informe o segundo valor:")
leia(b)
escreval()
escreval("1 - Média entre os valores digitados")
escreval("2 - Diferença do maior pelo menor ")
escreval("3 - Produto entre os números digitados")
escreval("4 - Divisão do primeiro pelo segundo")
escreval("Informe a operação desejada:")
leia(op)

escolha(op)
  caso 1
    escreva("Média entre os valores digitados:",((a+b)/2))
  caso 2
    x <- a
    se (b > x) entao
      y <- x
      x <- b
    senao
      y <- b
    fimse
    escreva("Diferença do maior pelo menor:",(x-y))
  caso 3
    escreva("Produto entre os números digitados:", (a*b))
  caso 4
    se (b <> 0) entao
      escreva("Divisão do primeiro pelo segundo:", (a/b))
    senao
      escreva("Não é possível fazer divisão por zero!")
    fimse
  outrocaso
    escreva("Operação inválida.")
fimescolha


Fimalgoritmo