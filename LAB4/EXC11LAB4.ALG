Algoritmo "EXC11LAB4"
// Disciplina   : ALGORITMOS E PROGRAMA��O I
// Professor   : ANA PAULA FREITAS VILELA BOAVENTURA
// Descri��o   : Resolu��o de exerc�cio da lista LAB4
// Autor(a)    : MATHEUS AGUIAR DOS SANTOS FERREIRA
// Data atual  : 11/4/2025

Var
// Se��o de Declara��es das vari�veis

saldomedio, credito: real


Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc...

escreva("Informe o saldo m�dio:")
leia(saldomedio)

se (saldomedio < 2000) entao
  credito <- 0
senao
  se (saldomedio <= 4000) entao
    credito <- (saldomedio * 0.20)
  senao
    se (saldomedio <= 6000) entao
      credito <- (saldomedio * 0.30)
    senao
      credito <- (saldomedio * 0.40)
    fimse
  fimse
fimse

se (credito > 0) entao
  escreva("Com um saldo m�dio de", saldomedio, " foi liberado um cr�dito de:", credito)
senao
  escreva("Com um saldo m�dio de", saldomedio, " n�o � poss�vel liberar um cr�dito.")
fimse

Fimalgoritmo