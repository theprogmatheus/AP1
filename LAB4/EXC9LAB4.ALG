Algoritmo "EXC9LAB4"
// Disciplina   : ALGORITMOS E PROGRAMAÇÃO I
// Professor   : ANA PAULA FREITAS VILELA BOAVENTURA
// Descrição   : Resolução de exercício da lista LAB4
// Autor(a)    : MATHEUS AGUIAR DOS SANTOS FERREIRA
// Data atual  : 11/4/2025

Var
// Seção de Declarações das variáveis

peso,distancia,tarifa: real
entrega: inteiro


Inicio
// Seção de Comandos, procedimento, funções, operadores, etc...

escreva("Informe o peso do produto:")
leia(peso)
escreva("Informe a distancia (em km) do fornecedor ao cliente:")
leia(distancia)
escreval("Informe o tipo de entrega:")
escreval("1 – Normal")
escreval("2 – Expresso")
escreval("3 – Mesmo Dia")
leia(entrega)

escolha (entrega)
  caso 1
    tarifa <- (peso * 1.5 * distancia)
  caso 2
    se (peso <= 5) entao
      tarifa <- ((peso * 2.5 * distancia) + 20)
    senao
      tarifa <- ((peso * 2.5 * distancia) + 15)
    fimse
  caso 3
    se (peso <= 5) entao
      tarifa <- ((peso * 3.5 * distancia) + 100)
    senao
      tarifa <- ((peso * 3.5 * distancia) + 75)
    fimse
fimescolha

escreva("Valor da tarifa:",tarifa)




Fimalgoritmo