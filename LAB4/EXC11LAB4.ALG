Algoritmo "EXC11LAB4"
// Disciplina   : ALGORITMOS E PROGRAMAÇÃO I
// Professor   : ANA PAULA FREITAS VILELA BOAVENTURA
// Descrição   : Resolução de exercício da lista LAB4
// Autor(a)    : MATHEUS AGUIAR DOS SANTOS FERREIRA
// Data atual  : 11/4/2025

Var
// Seção de Declarações das variáveis

saldomedio, credito: real


Inicio
// Seção de Comandos, procedimento, funções, operadores, etc...

escreva("Informe o saldo médio:")
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
  escreva("Com um saldo médio de", saldomedio, " foi liberado um crédito de:", credito)
senao
  escreva("Com um saldo médio de", saldomedio, " não é possível liberar um crédito.")
fimse

Fimalgoritmo