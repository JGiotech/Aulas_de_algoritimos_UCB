#include <stdio.h>

int main() {
    int nota1;
    int nota2;
    int nota3;
    int media;

    printf("Digite a primeira nota: \n");
    scanf("%d", &nota1);

    printf("Digite a segunda nota: \n");
    scanf("%d", &nota2);
    
    printf("Digite a terceira nota: \n");
    scanf("%d", &nota3);

    media = (nota1 + nota2 + nota3) / 3;
    
//caso o aluno tirasse nota igual a 8 ou 9 ele receberia um bonus.
    if (media == 8 || media == 9) {
        media = media + 1;
        printf("Voce ganhou 1 ponto de bonus\n");
    }

    printf("Sua media: %d\n", media);

    if (media < 7) {
        printf("Voce foi reprovado\n");
    } else {
        printf("Voce foi aprovado\n");
    }

    return 0;
}
