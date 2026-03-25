#include <stdio.h>

int main() {
    int anos, meses , dias;
    
    printf("Digite sua idade (anos meses dias): ");
    scanf("%d, %d ,%d " , &anos, &meses , &dias);
    
    int total_dias = anos * 365 + meses * 30 + dias;
    printf("Idade em dias: %d\n" , total_dias);
    
    return 0;
}