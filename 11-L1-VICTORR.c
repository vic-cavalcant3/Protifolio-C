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
 *  Escreva um programa em C que calcule o valor do imposto devido com base na renda anual de
    um contribuinte, seguindo as regras abaixo:
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

void calcular(float renda){
    float imposto = 0;
    float efetiva;
    
    if (renda <= 22847.76)
       imposto = 0;
    else if (renda <= 33919.80)
        imposto = (renda - 22847.76) * 0.075;
    else if (renda <= 45012.60) 
        imposto = (11072.04 * 0.075) + ((renda - 33919.80) * 0.15);
    else if (renda <= 55976.16)
        imposto = (11072.04 * 0.075) + (11092.80 * 0.15) + ((renda - 45012.60) * 0.225);
    else
        imposto = (11072.04 * 0.075) + (11092.80 * 0.15) + (10963.56 * 0.225) + ((renda - 55976.16) * 0.275);
        
          efetiva = (imposto / renda) * 100;

    printf("\nImposto devido: R$ %.2f\n", imposto);
    printf("Aliquota efetiva: %.2f%%\n", efetiva);

}

int main() {
    float renda;
    int leitura;

    do {
        printf("Digite sua renda anual: R$ ");
        leitura = scanf("%f", &renda);
        if (leitura != 1 || renda <= 0) {
            printf("Entrada invalida! Tente novamente.\n");
            scanf("%*s");
        }
    } while (leitura != 1 || renda <= 0);

    calcular(renda);

    return 0;
}
