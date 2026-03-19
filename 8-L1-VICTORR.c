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
 *  Faça um programa em C para ler do usuario o numero total de eleitores de um municıpio, o
    numero de votos brancos, nulos e validos. Calcule e exiba o percentual que cada um representa
    em relação ao total de eleitores. 
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
    float total, brancos, nulos, validos;
    float percBrancos, percNulos, percValidos;
    
     printf("Digite o total de eleitores: ");
    scanf("%f", &total);
    printf("Digite o numero de votos brancos: ");
    scanf("%f", &brancos);
    printf("Digite o numero de votos nulos: ");
    scanf("%f", &nulos);
    printf("Digite o numero de votos validos: ");
    scanf("%f", &validos);
    
    percBrancos = (brancos / total) * 100;
    percNulos = (nulos / total) * 100;
    percValidos = (validos / total) * 100;
    
    printf("\nVotos brancos: %.2f%%\n", percBrancos);
    printf("Votos nulos:   %.2f%%\n", percNulos);
    printf("Votos validos: %.2f%%\n", percValidos);
    
    return 0;
}