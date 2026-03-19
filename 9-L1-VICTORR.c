/* 
 * ---------------------------------------------------------------------------
 * Centro Universitário SENAI São Paulo - Campus Mariano Ferraz - Vila Leopoldina
 * Curso Superior de Tecnologia em Análise e Desenvolvimento de Sistemas
 * 
 * Disciplina: Linguagem de Programação
 * Professor: Caio Vinícius Ribeiro da Silva
 * Aluno(a): Victor Rodrigues Cavalcante Rocha
 * Data: 17/03/2026
 * 
 * Enunciado do exercício:
 *  Elabore um programa em C que verifique se uma pessoa ja pode se aposentar pela regra geral da  ́
    aposentadoria programada no Brasil. Considere, para este exerc ́ıcio, os seguintes criterios:  ́
 * 
 * Observações:
 * - Este código foi elaborado para cumprir os requisitos do exercício em 
 *   questão, aplicando os conceitos aprendidos na disciplina de Linguagem 
 *   de Programação.
 * - O código foi desenvolvido de acordo com as especificações fornecidas 
 *   pelo professor, com base nas práticas recomendadas de desenvolvimento.
 * - Caso haja algum ponto específico a ser discutido sobre o código, ele 
 *   pode ser detalhado nas observações do código abaixo.
 * 
 * ---------------------------------------------------------------------------
 */

#include <stdio.h>
#include <string.h>

void verificar( char nome[] , char sexo[] , int idade, int contribuicao){
    printf("\n=========  %s ========= \n", nome);
    
    if (strcmp(sexo, "M") != 0 && strcmp(sexo, "H") != 0) {
    printf("Sexo invalido!\n");
    return;
}


    if(strcmp(sexo, "M") == 0){
        if (idade >= 62 && contribuicao >= 15)
         printf("Pode se aposentar!\n");
    else if(idade < 62 && contribuicao < 15)
        printf("Nao pode se aposentar. Falta idade e contribuicao.\n");
    else if (idade < 62)
        printf("Nao pode se aposentar. Falta idade minima de 62 anos.\n");
    else
        printf("Nao pode se aposentar. Falta contribuicao minima de 15 anos.\n");
    }else{
        if (idade >= 65 && contribuicao >= 20)
        printf("Pode se aposentar!\n");
        else if (idade < 65 && contribuicao < 20)
        printf("Nao pode se aposentar. Falta idade e contribuicao.\n");
        else if(idade < 65)
         printf("Nao pode se aposentar. Falta idade minima de 65 anos.\n");
        else
        printf("Nao pode se aposentar. Falta contribuicao minima de 20 anos.\n");
    }
}

int main() {
    char nome[50], sexo[2];
    int idade, contribuicao;

    printf("Digite o nome: ");
    scanf(" %s", nome);
    printf("Digite o sexo (M/H): ");
    scanf(" %s", sexo);
    printf("Digite a idade: ");
    scanf("%d", &idade);
    printf("Digite o tempo de contribuicao: ");
    scanf("%d", &contribuicao);

    verificar(nome, sexo, idade, contribuicao);

    return 0;
}
