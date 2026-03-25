#include <stdio.h>

int main() {
    float num;
    int leitura;
    
    do{
        printf("Digite o  numero: ");
        leitura = scanf("%f" , &num);
        if(leitura != 1 ){
             printf("Entrada invalida!! Tente novamente.\n");
             scanf("%*s");
        }
    }while (leitura != 1);
    
    if(num > 0){
        printf("O numero é positivo!!\n");
    }else if (num < 0 ){
        printf("O numero é negativo!!\n");
    }else{
        printf("O numero é zero!!");
    }
    
    if(num == (int)num ){
        printf("O numero é inteiro!!! \n");
        if ((int) num % 2 == 0)
        printf("O numero é par \n");
        else
            printf("O numero é impar\n");
    }else{
        printf("O numero é decimal!!");
    }
    
}