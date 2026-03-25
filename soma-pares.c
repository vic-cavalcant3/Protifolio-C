#include <stdio.h>


int main() {
    int n, i , soma = 0;
    
    printf("Digite um numero Inteiro: ");
    scanf("%d" , &n);
    
    for(i = 1 ; i <= n ; i++){
        if(i % 2 == 0) //se o resto for 0 é par entao entra na soma
        soma = soma + i;
    }
   
    printf("Soma dos pares de 1 ate %d: %d\n", n, soma);
    return 0;
}
