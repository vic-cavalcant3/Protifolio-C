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
 *  Crie um programa em C que pec ̧a ao usuario um n  ́ umero inteiro  ́ n e calcule a soma de todos os
    numeros pares de 1 at  ́ e ́ n. Utilize o lac ̧o for para percorrer os numeros de 1 at  ́ e ́ n e verificar se
    sao pares.  ̃ ́
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
    int n, i , soma = 0;
    
    printf("Digite um numero Inteiro: ");
    scanf("%d" , &n);
    
    for(i = 1 ; i <= n ; i++){
        if(i % 2 == 0) //se o resto for 0 é par entao entra na soma
        soma = soma + i;
    }
   
    printf("Soma dos pares de 1 ate %d: %d\n", n, soma);
    return 0;
}
