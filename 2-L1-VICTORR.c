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
 *  Faça um programa em C para ler do usuario as dimensoes de um retangulo (base e altura), calcular
    e exibir a area do retangulo.
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

int main() {
    float base, altura, area;

    printf("Digite a BASE do Retângulo: ");
    scanf("%f", &base);
    printf("Digite a ALTURA do Retângulo: ");
    scanf("%f", &altura);

    area = base * altura;
    printf("A Área é: %.2f" , area );
    
   
    
    return 0;
}