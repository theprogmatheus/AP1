Algoritmo "EXC10LAB4"
// Disciplina   : ALGORITMOS E PROGRAMA��O I
// Professor   : ANA PAULA FREITAS VILELA BOAVENTURA
// Descri��o   : Resolu��o de exerc�cio da lista LAB4
// Autor(a)    : MATHEUS AGUIAR DOS SANTOS FERREIRA
// Data atual  : 11/4/2025

Var
// Se��o de Declara��es das vari�veis

peso,altura: real
type: caractere


Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc...

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

escreva("Classifica��o: ", type)


Fimalgoritmo