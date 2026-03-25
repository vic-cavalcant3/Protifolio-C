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
