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