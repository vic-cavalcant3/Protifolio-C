#include <stdio.h>

 int main() {
     float lado1, lado2, base;
 
     printf("Digite a base: ");
     scanf("%f", &base);
     printf("Digite o lado1: ");
     scanf("%f", &lado1);
     printf("Digite o lado2: ");
     scanf("%f", &lado2);
 
     if (base <= 0 || lado1 <= 0 || lado2 <= 0) {
         printf("Os lados tem que maiores que zero!!!\n");
     } else if (base == lado1 && lado1 == lado2) {
         printf("\nO triangulo e equilatero");
     } else if (base == lado1 || base == lado2 || lado1 == lado2) {
         printf("\nO triangulo e isosceles");
     } else {
         printf("O triangulo e escaleno\n");
     }
 
     return 0;
 }