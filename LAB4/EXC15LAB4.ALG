Algoritmo "EXC15LAB4"
// Disciplina   : ALGORITMOS E PROGRAMA��O I
// Professor   : ANA PAULA FREITAS VILELA BOAVENTURA
// Descri��o   : Resolu��o de exerc�cio da lista LAB4
// Autor(a)    : MATHEUS AGUIAR DOS SANTOS FERREIRA
// Data atual  : 12/4/2025
Var
// Se��o de Declara��es das vari�veis

a,b,c,d,ponderada,ref: real
pA,pB,pC,pD,feedback: inteiro



Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc...

escreva("Informe os pontos da assiduidade [0-10]:")
leia(a)
escreva("Informe o peso dos pontos de assiduidade:")
leia(pA)

escreva("Informe os pontos de participa��o [0-10]:")
leia(b)
escreva("Informe o peso dos pontos de participa��o:")
leia(pB)

escreva("Informe os pontos de notas [0-10]:")
leia(c)
escreva("Informe o peso dos pontos de notas:")
leia(pC)

escreva("Informe os pontos de projetos [0-10]:")
leia(d)
escreva("Informe o peso dos pontos de projetos:")
leia(pD)


se ((a >= 0) e (a <= 10)) entao
  se ((b >= 0) e (b <= 10)) entao
    se ((c >= 0) e (c <= 10)) entao
      se ((d >= 0) e (d <= 10)) entao
        se ((pA+pB+pC+pD) = 10) entao
          ponderada <- (((a*pA) + (b*pB) + (c*pC) + (d*pD)) / 10)
          escreval("M�dia final:",ponderada)
          se (ponderada < 5) entao
            escreval("Necessita melhora")
          senao
            se (ponderada < 7) entao
              escreval("Desempenho regular")
            senao
              se (ponderada < 9) entao
                escreval("Bom desempenho")
              senao
                escreval("Excelente desempenho")
              fimse
            fimse
          fimse
          
          ref <- a
          feedback <- 1
          se (b < ref) entao
            ref <- b
            feedback <- 2
          fimse
          
          se (c < ref) entao
            ref <- c
            feedback <- 3
          fimse
          
          se (d < ref) entao
            ref <- d
            feedback <- 4
          fimse
          
          escreva("Feedback: ")
          escolha(feedback)
            caso 1
              escreva("Precisa frequentar mais as aulas.")
            caso 2
              escreva("Participa��o pode melhorar.")
            caso 3
              escreva("Desempenho nas provas � um ponto de aten��o.")
            caso 4
              escreva("Foco em projetos � essencial.")
            outrocaso
              escreva("Voc� est� indo muito bem, parab�ns!")
          fimescolha
          
        senao
          escreva("Os pesos devem somar 10.")
        fimse
      senao
        escreva("Os pontos de projetos devem estar em um intervalo de 0 a 10.")
      fimse
    senao
      escreva("Os pontos de notas devem estar em um intervalo de 0 a 10.")
    fimse
  senao
    escreva("Os pontos de participa��o devem estar em um intervalo de 0 a 10.")
  fimse
senao
  escreva("Os pontos de assiduidade devem estar em um intervalo de 0 a 10.")
fimse



Fimalgoritmo