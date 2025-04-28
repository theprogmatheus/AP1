Algoritmo "EXC13LAB4"
// Disciplina   : ALGORITMOS E PROGRAMAÇÃO I
// Professor   : ANA PAULA FREITAS VILELA BOAVENTURA
// Descrição   : Resolução de exercício da lista LAB4
// Autor(a)    : MATHEUS AGUIAR DOS SANTOS FERREIRA
// Data atual  : 12/4/2025

Var
// Seção de Declarações das variáveis
produto,quantidade: inteiro


Inicio
// Seção de Comandos, procedimento, funções, operadores, etc...
escreva("Informe o código do produto:")
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
    escreva("Código de produto não encontrado.")
fimescolha


Fimalgoritmo