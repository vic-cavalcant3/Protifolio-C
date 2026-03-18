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
 *  Faça um programa em C que leia do usuario a idade e a nacionalidade de uma pessoa e determine  ́
    sua elegibilidade para votar, seguindo estas regras:
        (a) Apenas cidadaos brasileiros podem votar. Caso contr  ̃ ario, o programa deve exibir a  ́
            mensagem: ”Voce n ˆ ao pode votar, pois n  ̃ ao ̃ e cidad  ́ ao brasileiro.”  ̃
        (b) Se a pessoa for brasileira, avalie sua idade conforme as regras abaixo:
            • Menores de 16 anos: ”Voce n ˆ ao pode votar.”  ̃
            • De 16 a 17 anos ou acima de 70 anos: ”O voto e facultativo.”  ́
            • De 18 a 70 anos: ”O voto e obrigat  ́ orio.”  ́
        (c) O programa deve validar a entrada do usuario, garantindo que a idade seja um n  ́ umero  ́
            positivo e que a nacionalidade seja informada corretamente. Caso contrario, exiba uma  ́
            mensagem de erro e pec ̧a a entrada novamente.
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

void verificar_idade(){
    int idade;
    int leitura;
   do {                                         
    printf("Digite sua idade: ");
    leitura = scanf("%d", &idade);
    scanf("%*s");
    if(leitura != 1 || idade <= 0)
        printf("Opcao Invalida!! Tente novamente.\n");
    } while (leitura != 1 || idade <= 0);      
        
    if(idade < 16){
        printf("Você não pode votar!!");
    }else if(idade == 16 || idade == 17 || idade > 70){
        printf("O voto é facultativo");
    }else if(idade >= 18 && idade <= 70){
        printf("O voto é obriagatorio!!");
    }
}

void nacionalidade() {
    char nac[20];

    do {
        printf("Digite sua nacionalidade (brasileiro/estrangeiro): ");
        scanf("%s", nac);
        if (strcmp(nac, "brasileiro") != 0 && strcmp(nac, "estrangeiro") != 0)
            printf("Opcao Invalida!! Tente novamente.\n");
    } while (strcmp(nac, "brasileiro") != 0 && strcmp(nac, "estrangeiro") != 0);

    if (strcmp(nac, "brasileiro") == 0) {
        printf("Voce pode votar....\n");
        verificar_idade();
    } else {
        printf("Voce nao pode votar.....\n");
    }
}

int main() {
    nacionalidade();
    return 0;
}