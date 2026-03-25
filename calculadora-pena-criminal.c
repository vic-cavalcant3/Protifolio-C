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