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