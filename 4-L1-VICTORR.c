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
 *  Faça um programa em C que leia do usuario um valor e analise suas propriedades, seguindo as  ́
        regras abaixo:
            (a) O programa deve verificar se a entrada e um n  ́ umero v  ́ alido. Caso contr  ́ ario, exiba uma  ́
            mensagem de erro e pec ̧a a entrada novamente.
            (b) Apos validar a entrada, o programa deve determinar se o n  ́ umero  ́ e: ́
                – Positivo, negativo ou zero.
                – Inteiro ou decimal.
                – Par ou  ́ımpar (caso seja inteiro).
            (c) Exiba todas as caracter ́ısticas do numero em uma  ́ unica mensagem formatada.  ́
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

// Online C compiler to run C program online
#include <stdio.h>

int main() {
    float num;
    int leitura;
    
    do{
        printf("Digite o  numero: ");
        leitura = scanf("%f" , &num);
        if(leitura != 1 ){
             printf("Entrada invalida!! Tente novamente.\n");
             scanf("%*s");
        }
    }while (leitura != 1);
    
    if(num > 0){
        printf("O numero é positivo!!\n");
    }else if (num < 0 ){
        printf("O numero é negativo!!\n");
    }else{
        printf("O numero é zero!!");
    }
    
    if(num == (int)num ){
        printf("O numero é inteiro!!! \n");
        if ((int) num % 2 == 0)
        printf("O numero é par \n");
        else
            printf("O numero é impar\n");
    }else{
        printf("O numero é decimal!!");
    }
    
}