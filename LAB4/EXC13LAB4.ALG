Algoritmo "EXC13LAB4"
// Disciplina   : ALGORITMOS E PROGRAMA��O I
// Professor   : ANA PAULA FREITAS VILELA BOAVENTURA
// Descri��o   : Resolu��o de exerc�cio da lista LAB4
// Autor(a)    : MATHEUS AGUIAR DOS SANTOS FERREIRA
// Data atual  : 12/4/2025

Var
// Se��o de Declara��es das vari�veis
produto,quantidade: inteiro


Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc...
escreva("Informe o c�digo do produto:")
leia(produto)
escreva("Informe a quantidade:")
leia(quantidade)

escolha(produto)
  caso 1001
    escreva("Total: ",(quantidade*5.32))
  caso 1234
    escreva("Total: ",(quantidade*6.45))
  caso 6453
    escreva("Total: ",(quantidade*2.37))
  caso 6400
    escreva("Total: ",(quantidade*5.32))
  caso 2352
    escreva("Total: ",(quantidade*6.45))
  outrocaso
    escreva("C�digo de produto n�o encontrado.")
fimescolha


Fimalgoritmo