Algoritmo "EXC10LAB4"
// Disciplina   : ALGORITMOS E PROGRAMAÇÃO I
// Professor   : ANA PAULA FREITAS VILELA BOAVENTURA
// Descrição   : Resolução de exercício da lista LAB4
// Autor(a)    : MATHEUS AGUIAR DOS SANTOS FERREIRA
// Data atual  : 11/4/2025

Var
// Seção de Declarações das variáveis

peso,altura: real
type: caractere


Inicio
// Seção de Comandos, procedimento, funções, operadores, etc...

escreva("Informe a altura da pessoa:")
leia(altura)
escreva("Informe o peso da pessoa:")
leia(peso)

se (altura < 1.20) entao
  se (peso <= 60) entao
    type <- "A"
  senao
    se (peso > 90) entao
      type <- "G"
    senao
      type <- "D"
    fimse
  fimse
senao
  se (altura > 1.70) entao
    se (peso <= 60) entao
      type <- "C"
    senao
      se (peso > 90) entao
        type <- "I"
      senao
        type <- "F"
      fimse
    fimse
  senao
    se (peso <= 60) entao
      type <- "B"
    senao
      se (peso > 90) entao
        type <- "H"
      senao
        type <- "E"
      fimse
    fimse
  fimse
fimse

escreva("Classificação: ", type)


Fimalgoritmo