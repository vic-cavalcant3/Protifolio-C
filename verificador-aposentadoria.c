#include <stdio.h>
#include <string.h>

void verificar( char nome[] , char sexo[] , int idade, int contribuicao){
    printf("\n=========  %s ========= \n", nome);
    
    if (strcmp(sexo, "M") != 0 && strcmp(sexo, "H") != 0) {
    printf("Sexo invalido!\n");
    return;
}


    if(strcmp(sexo, "M") == 0){
        if (idade >= 62 && contribuicao >= 15)
         printf("Pode se aposentar!\n");
    else if(idade < 62 && contribuicao < 15)
        printf("Nao pode se aposentar. Falta idade e contribuicao.\n");
    else if (idade < 62)
        printf("Nao pode se aposentar. Falta idade minima de 62 anos.\n");
    else
        printf("Nao pode se aposentar. Falta contribuicao minima de 15 anos.\n");
    }else{
        if (idade >= 65 && contribuicao >= 20)
        printf("Pode se aposentar!\n");
        else if (idade < 65 && contribuicao < 20)
        printf("Nao pode se aposentar. Falta idade e contribuicao.\n");
        else if(idade < 65)
         printf("Nao pode se aposentar. Falta idade minima de 65 anos.\n");
        else
        printf("Nao pode se aposentar. Falta contribuicao minima de 20 anos.\n");
    }
}

int main() {
    char nome[50], sexo[2];
    int idade, contribuicao;

    printf("Digite o nome: ");
    scanf(" %s", nome);
    printf("Digite o sexo (M/H): ");
    scanf(" %s", sexo);
    printf("Digite a idade: ");
    scanf("%d", &idade);
    printf("Digite o tempo de contribuicao: ");
    scanf("%d", &contribuicao);

    verificar(nome, sexo, idade, contribuicao);

    return 0;
}
