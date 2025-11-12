#include <stdio.h>

float calcularMedia(float nota1, float nota2, float nota3, char letra) {
    float media;
    
    if (letra == 'A' || letra == 'a') {
        media = (nota1 + nota2 + nota3) / 3.0;
    } else if (letra == 'P' || letra == 'p') {
        media = (nota1 * 5.0 + nota2 * 3.0 + nota3 * 2.0) / 10.0;
    } else {
        media = 0;
    }
    
    return media;
}

int main() {
    float nota1, nota2, nota3, media;
    char tipo;
    
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    
    printf("Digite o tipo de media (A eh aritmetica, P eh ponderada): ");
    scanf(" %c", &tipo);
    
    media = calcularMedia(nota1, nota2, nota3, tipo);
    
    if (tipo == 'A' || tipo == 'a') {
        printf("\nMedia aritmetica: %.2f\n", media);
    } else if (tipo == 'P' || tipo == 'p') {
        printf("\nMedia ponderada: %.2f\n", media);
    } else {
        printf("\nTipo de media invalido!\n");
    }
    
    return 0;
}
