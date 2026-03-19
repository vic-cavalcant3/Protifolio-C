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
 *  Escreva um programa em C que calcule o tempo total de pena que um reu dever  ́ a cumprir,  ́
    considerando os seguintes fatores:
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

void calcular(float pena, int primario, int confissao, int reincidente, int violencia) {
    float total = pena;

    if (primario == 1)
        total = total - (pena * (1.0 / 3.0));
    if (confissao == 1)
        total = total - (pena * (1.0 / 6.0));
    if (reincidente == 1)
        total = total + (pena * (1.0 / 2.0));
    if (violencia == 1)
        total = total + (pena * (1.0 / 3.0));

    int anos = (int)total;
    int meses = (int)((total - anos) * 12);

    printf("\nPena ajustada: %d anos e %d meses\n", anos, meses);
}

int main() {
    float pena;
    int leitura;
    int primario, confissao, reincidente, violencia;

    do {
        printf("Digite a pena-base em anos: ");
        leitura = scanf("%f", &pena);
        if (leitura != 1 || pena <= 0) {
            printf("Entrada invalida! Tente novamente.\n");
            scanf("%*s");
        }
    } while (leitura != 1 || pena <= 0);

    printf("Reu primario? (1-Sim / 0-Nao): ");
    scanf("%d", &primario);
    printf("Confissao espontanea? (1-Sim / 0-Nao): ");
    scanf("%d", &confissao);
    printf("Reincidente? (1-Sim / 0-Nao): ");
    scanf("%d", &reincidente);
    printf("Crime com violencia? (1-Sim / 0-Nao): ");
    scanf("%d", &violencia);

    calcular(pena, primario, confissao, reincidente, violencia);

    return 0;
}