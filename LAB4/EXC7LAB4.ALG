Algoritmo "EXC7LAB4"
// Disciplina   : ALGORITMOS E PROGRAMAÇÃO I
// Professor   : ANA PAULA FREITAS VILELA BOAVENTURA
// Descrição   : Resolução de exercício da lista LAB4
// Autor(a)    : MATHEUS AGUIAR DOS SANTOS FERREIRA
// Data atual  : 11/4/2025

Var
// Seção de Declarações das variáveis
x, y: inteiro


Inicio
// Seção de Comandos, procedimento, funções, operadores, etc...

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