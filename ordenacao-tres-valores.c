#include <stdio.h>

int main() {
   float a , b , c;
   float menor,meio,maior;
   
   printf("Digite o Primeiro Valor: ");
   scanf("%f" , &a);
   printf("Digite o Segundo Valor: ");
   scanf("%f" , &b);
   printf("Digite o Terceiro Valor: ");
   scanf("%f" , &c);
   
   if(a < b && a < c )
   menor = a;
   else if(b < a && b < c)
   menor = b;
   else
   menor = c;
   
   if(a > b && a > c )
   maior = a;
   else if(b > a && b > c)
   maior = b;
   else
   maior = c;
   
   if(a != menor && a != maior)
   meio = a;
   else if (b != menor && b!= maior)
   meio = b;
   else
   meio = c;
   
   printf("\nOrdem crescente: %.2f, %.2f, %.2f \n" , menor, meio, maior);
   
    return 0;
}