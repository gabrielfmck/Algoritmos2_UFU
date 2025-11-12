#include <stdio.h>

int dobro(int numero) {
    return numero * 2;
}

int main() {
    int num, result;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    
    result = dobro(num);
    
    printf("O dobro de %d eh %d", num, result);
    
    return 0;
}
