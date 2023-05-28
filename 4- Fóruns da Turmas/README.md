# Proposta e Desenvolvimento de Algoritmos

## Descrição

Este projeto consiste em propor e desenvolver algoritmos que resolvam problemas específicos. Cada aluno deve escolher um problema diferente e criar um algoritmo em linguagem C para resolvê-lo. O código deve ser capaz de receber a entrada necessária, processar os dados e fornecer a saída correta de acordo com o problema proposto.

## Exemplo

A seguir, é apresentado um exemplo de algoritmo que permite que um usuário digite as três notas de um aluno, calcula a média das notas e exibe a situação do aluno (aprovado, de final ou reprovado). A média das notas é calculada pela média aritmética das mesmas.

```c
#include <stdio.h>
#include <stdlib.h>

int main(){
    float n1, n2, n3, media;
    printf ("Digite as notas: ");
    scanf ("%f %f %f", &n1, &n2, &n3);
    media = (n1 + n2 + n3) / 3;
    printf ("Media = %f   \n", media);
    if (media >= 7.0)
       printf ("Aprovado \n");
    else if (media < 4.0)
           printf ("Reprovado \n");
         else
           printf ("De final \n");
    system ("PAUSE");   
    return 0;
}
