Algoritmo "EXC7LAB4"
// Disciplina   : ALGORITMOS E PROGRAMA��O I
// Professor   : ANA PAULA FREITAS VILELA BOAVENTURA
// Descri��o   : Resolu��o de exerc�cio da lista LAB4
// Autor(a)    : MATHEUS AGUIAR DOS SANTOS FERREIRA
// Data atual  : 11/4/2025

Var
// Se��o de Declara��es das vari�veis
x, y: inteiro


Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc...

escreva("Insira a coordenada X:")
leia(x)
escreva("Insira a coordenada Y:")
leia(y)

se (x = 0) entao
  se (y = 0) entao
    escreva("Esse ponto pertence a origem.")
  senao
    escreva("Esse ponto pertence ao eixo das abcissas.")
  fimse
senao
  se (y = 0) entao
    escreva("Esse ponto pertence ao eixo das ordenadas.")
  senao
    se (x < 0) entao
      se (y > 0) entao
        escreva("Esse ponto pertence ao segundo quadrante.")
      senao
        escreva("Esse ponto pertence ao terceiro quadrante.")
      fimse
    senao
      se (y > 0) entao
        escreva("Esse ponto pertence ao primeiro quadrante.")
      senao
        escreva("Esse ponto pertence ao quarto quadrante.")
      fimse
    fimse
  fimse
fimse



Fimalgoritmo