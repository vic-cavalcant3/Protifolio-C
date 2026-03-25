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