#include <stdio.h>

void desenhaLinha(int quantidade) {
    for (int i = 0; i < quantidade; i++) {
        printf("=");
    }
    printf("\n");
}

int main() {
    int tamanho;
    
    printf("Digite quantos sinais de igual quer mostrar: ");
    scanf("%d", &tamanho);
    
    printf("\n");
    desenhaLinha(tamanho);
    
    return 0;
}