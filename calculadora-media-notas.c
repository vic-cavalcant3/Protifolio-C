#include <stdio.h>

int main() {
    float p1,li,p2, media;
    
    printf("Digite a nota P1: ");
    scanf("%f", &p1);
    printf("Digite a nota LI: ");
    scanf("%f", &li);
    printf("Digite a nota P2: ");
    scanf("%f", &p2);

    media = (p1 * 0.3) + (li * 0.3) + (p2 * 0.4); // ou ( p1 * 30 /100)
    printf("Sua media foi: %.2f\n" , media);
    
    if(media > 50){
        printf("Aluno APROVADO!!");
    }else{
        printf("Aluno REPROVADO!!");
    }
    
    return 0;
}