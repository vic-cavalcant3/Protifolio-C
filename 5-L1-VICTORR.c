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
 *  Faça um programa em C que receba do usuario a base e os dois lados de um triangulo qualquer e
    informe se o triangulo é isosceles, escaleno ou equilatero.
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
     float lado1, lado2, base;
 
     printf("Digite a base: ");
     scanf("%f", &base);
     printf("Digite o lado1: ");
     scanf("%f", &lado1);
     printf("Digite o lado2: ");
     scanf("%f", &lado2);
 
     if (base <= 0 || lado1 <= 0 || lado2 <= 0) {
         printf("Os lados tem que maiores que zero!!!\n");
     } else if (base == lado1 && lado1 == lado2) {
         printf("\nO triangulo e equilatero");
     } else if (base == lado1 || base == lado2 || lado1 == lado2) {
         printf("\nO triangulo e isosceles");
     } else {
         printf("O triangulo e escaleno\n");
     }
 
     return 0;
 }